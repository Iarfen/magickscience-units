#include "atom.hpp"

#include "physics/units.hpp"
#include "physics/particles.hpp"

namespace chemistry
{
	template<typename T>
	class normal_atom : public atom<T>
	{
		public:
			normal_atom(int new_ionic_charge = 1,int new_neutrons_number = T::neutrons_number) : ionic_charge(new_ionic_charge),neutrons_number(new_neutrons_number),atom<T>()
			{
			}

			virtual int get_ionic_charge() const
			{
				return ionic_charge;
			}

			virtual int get_electrons_number() const
            {
            	return (atom<T>::get_z() - get_ionic_charge());
            }

            virtual const unsigned int& get_neutrons_number() const
            {
            	return neutrons_number;
            }

            virtual string get_electronic_configuration() const
            {
            	int remaining_electrons = get_electrons_number();
            	if (remaining_electrons == 0)
				{
					return "empty configuration";
				}
            }

            virtual mass get_real_mass() const
            {
            	return 0_g;
            	//return mass(atom<T>::get_z() * physics::proton::common_mass,"uma");
            }

            virtual mass get_electrons_mass() const
            {
            	return 0_g;
            	//return mass(get_electrons_number() * physics::electron::common_mass,"uma");
            }

			virtual void print_image_2d() const
			{
			}

			virtual void print_image_3d() const
			{
			}

		private:
			int ionic_charge;
			unsigned int neutrons_number;
	};
}