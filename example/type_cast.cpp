#include <iostream>

#include <type_safe/narrow_cast.hpp>
#include <type_safe/types.hpp>
#include <type_safe/math.hpp>
#include <cmath>

namespace ts = type_safe;

int main() {
    using namespace ts::types::literals;
	type_safe::types::float_t c = 255.f;
	type_safe::types::float_t d = 255.f;
	type_safe::types::double_t a = 1.0;
	c + a;
	c + 5.f;
	// c + 1.0;
	type_safe::types::uint32_t b = 255u;
	static_assert(type_safe::detail::is_safe_integer_conversion<uint16_t, uint32_t>::value);
	c * a;
	// std::cout << (a < b) << std::endl;
	// std::cout << (b > a) << std::endl;

	{
		type_safe::int32_t a1 = 4;
		type_safe::int8_t a2 = static_cast<int8_t>(2);

		a1 + a2;
		a1 - a2;
		a1 * a2;
		a1 / a2;
		a1 % a2;
		a1 > a2;
		a1 < a2;
		a1 == a2;
		a1 != a2;
		a1 += a2;
		a1 -= a2;
		a1 *= a2;
		a1 /= a2;
		a1 /%= a2;
	}

	{
		type_safe::int32_t a1 = 4;
		type_safe::int32_t a2 = static_cast<int32_t>(2);

		a1 + a2;
		a1 - a2;
		a1 * a2;
		a1 / a2;
		a1 % a2;
		a1 > a2;
		a1 < a2;
		a1 == a2;
		a1 != a2;
		a1 += a2;
		a1 -= a2;
		a1 *= a2;
		a1 /= a2;
		a1 %= a2;
	}

	type_safe::types::double_t t = 3.0;
	std::pow(t, 2.0);
}
