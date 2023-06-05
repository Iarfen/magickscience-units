#include "units/custom_dimension.hpp"

using namespace std;

namespace msci
{
	custom_dimension::custom_dimension() : symbol()
	{}

	custom_dimension::custom_dimension(const custom_dimension& x) : symbol(x.symbol)
	{}

	custom_dimension::custom_dimension(custom_dimension&& x) : symbol(move(x.symbol))
	{}

	custom_dimension::custom_dimension(const string& x) : symbol(x)
	{}

	string custom_dimension::get_custom_name() const
	{
		return symbol;
	}

	string custom_dimension::get_custom_symbol() const
	{
		return symbol;
	}

	bool custom_dimension::is_custom_basic_dimension() const
	{
		if (base_dimensions.size() == 1)
		{
			return (base_dimensions[symbol][0].dimension_type == dimension::custom_basic);
		}
		else
		{
			return false;
		}
	}

	bool custom_dimension::is_custom_conversion() const
	{
		if (base_dimensions[symbol].size() == 1)
		{
			return (base_dimensions[symbol][0].dimension_type != dimension::custom_basic and base_dimensions[symbol][0].dimension_type != dimension::custom);
		}
		else
		{
			return false;
		}
	}

	bool custom_dimension::is_custom_abbreviation() const
	{
		if (base_dimensions[symbol].size() == 1)
		{
			return (base_dimensions[symbol][0].dimension_type != dimension::custom_basic and base_dimensions[symbol][0].dimension_type != dimension::custom);
		}
		else if (base_dimensions[symbol].size() > 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void custom_dimension::create_custom_dimension(const string& symbol,const string& init_dimensions)
	{
		if (base_dimensions.count(symbol) == 0)
		{
			base_dimensions[symbol] = create_dimensions(init_dimensions);
		}
	}
}
