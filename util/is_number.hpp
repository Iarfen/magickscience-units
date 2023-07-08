#ifndef SCIFIR_UNITS_UTIL_IS_NUMBER_HPP_INCLUDED
#define SCIFIR_UNITS_UTIL_IS_NUMBER_HPP_INCLUDED

#include <type_traits>

using namespace std;

namespace scifir
{
		template<class T>
struct is_number : std::integral_constant < bool, is_same<short,T>::value || is_same<int,T>::value || is_same<long,T>::value || is_same<long long,T>::value || is_same<unsigned short,T>::value || is_same<unsigned int,T>::value || is_same<unsigned long,T>::value || is_same<unsigned long long,T>::value || is_floating_point<T>::value> {};

		template<class T>
struct is_integer_number : std::integral_constant < bool, is_same<short,T>::value || is_same<int,T>::value || is_same<long,T>::value || is_same<long long,T>::value || is_same<unsigned short,T>::value || is_same<unsigned int,T>::value || is_same<unsigned long,T>::value || is_same<unsigned long long,T>::value> {};
}

#endif // SCIFIR_UNITS_UTIL_IS_NUMBER_HPP_INCLUDED
