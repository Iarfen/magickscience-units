#include "molecule.hpp"

using namespace std;

namespace chemistry
{
	mass molecule::get_standard_atomic_mass() const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		mass atoms_mass = 0_g;
		for (const auto& atom: atoms)
		{
			atoms_mass += atom->get_standard_atomic_mass();
		}
		return atoms_mass;
	}

	mass molecule::get_real_mass() const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		mass atoms_mass = 0_g;
		for (const auto& atom: atoms)
		{
			atoms_mass += atom->get_real_mass();
		}
		return atoms_mass;
	}

	mass molecule::get_real_mass_simplified() const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		mass atoms_mass = 0_g;
		for (const auto& atom: atoms)
		{
			atoms_mass += atom->get_real_mass_simplified();
		}
		return atoms_mass;
	}

	mass molecule::get_electrons_mass() const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		mass atoms_mass = 0_g;
		for (const auto& atom: atoms)
		{
			atoms_mass += atom->get_electrons_mass();
		}
		return atoms_mass;
	}

	wstring molecule::get_formula() const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		wostringstream formula_text;
		return formula_text.str();
	}

	bool molecule::has_atom(atom_symbol x) const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		for (const auto& atom: atoms)
		{
			if (atom->is_atom_specimen(x))
			{
				return true;
			}
		}
		return false;
	}

	bool molecule::has_bond(string x) const
	{
		vector<shared_ptr<atomic_bond>> bonds = get_bonds();
		for (const auto& bond : bonds)
		{
			if (bond->is_bond(x))
			{
				return true;
			}
		}
		return false;
	}

	bool molecule::has_functional_group(functional_group x) const
	{

	}

	bool molecule::is_cyclical() const
    {

    }

    bool molecule::is_acyclical() const
    {

    }

    bool molecule::is_polar() const
    {

    }

    bool molecule::is_apolar() const
	{

	}

	bool molecule::is_chiral() const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		for (const auto& atom: atoms)
		{
			if (atom->is_chiral())
			{
				return true;
			}
		}
		return false;
	}

    bool molecule::is_achiral() const
    {
		vector<shared_ptr<atom>> atoms = get_atoms();
		for (const auto& atom: atoms)
		{
			if (atom->is_achiral())
			{
				return true;
			}
		}
		return false;
    }

    bool molecule::is_protic() const
    {
    	return (has_bond("O-H") or has_bond("N-H"));
    }

    bool molecule::is_aprotic() const
    {
		return !is_protic();
    }

    int molecule::number_of_chiral_atoms() const
    {
    	vector<shared_ptr<atom>> atoms = get_atoms();
    	int i = 0;
		for (const auto& atom: atoms)
		{
			if (atom->is_chiral())
			{
				i++;
			}
		}
		return i;
    }

    int molecule::number_of_enantiomers() const
    {
		return 2^number_of_chiral_atoms();
    }

    void molecule::get_image_3d() const
    {

    }

    void molecule::print_image_3d() const
    {

    }

    <tuple<shared_ptr<atom>,point>> molecule::get_image_3d_calculate_atom_position(shared_ptr<atom> new_atom,tuple<shared_ptr<atom>,point> previous_atom,,tuple<shared_ptr<atom>,point> previous_atom2) const
    {
		// Calculate the position based on the geometry of the previous_atom, each geometry gives a different position to calculate of, based on the angle of the two bonds (the new and the previous one)
		vector<shared_ptr<atomic_bond>> bonds = new_atom.get_bonds();
		for (const auto& bond : bonds)
		{
			<tuple<shared_ptr<atom>,point>> get_image_3d_calculate_atom_position();
		}
    }

    void molecule::get_atoms_image_3d(vector<tuple<shared_ptr<atom>,point>> atom_positions) const
	{
		vector<shared_ptr<atom>> atoms = get_atoms();
		for (const auto& atom : atoms)
		{
			// get atom 3d image calling atom.get_image_3d() or similar
			// use the vector<point> to position the image related to the full image
		}
	}

	//void molecule::get_unpaired_electrons_image_3d(vector<tuple<point,math_vector>> electron_positions) const
	{
		// the math_vector is for directions
	}

	void molecule::get_bonds_image_3d(vector<tuple<shared_ptr<atom>,point>> atom_positions) const
	{
		vector<shared_ptr<atomic_bond>> bonds = get_bonds();
		for (const auto& bond: bonds)
		{
			// get atomic bond 3d image by creating a cillinder and connecting it between the two centers of the atoms
		}
	}
}