#include <iostream>

#include <type_safe/narrow_cast.hpp>
#include <type_safe/types.hpp>
#include <type_safe/math.hpp>
#include <cmath>

namespace ts = type_safe;

int main() {
    using namespace ts::types::literals;
	type_safe::types::int16_t c = 255_i16;
	type_safe::types::int32_t a = c;
	type_safe::types::uint32_t b = 255u;
	static_assert(type_safe::detail::is_safe_integer_conversion<uint16_t, uint32_t>::value);
	c * a;
	// std::cout << (a < b) << std::endl;
	// std::cout << (b > a) << std::endl;

	type_safe::float_t f1 = 4.f;
	type_safe::float_t f2 = 2.f;
	std::cout << std::pow(f1, f2) << "\n";
	std::cout << std::pow(f1, 2.f) << "\n";
	std::cout << std::pow(4.f, f2) << "\n";
}
