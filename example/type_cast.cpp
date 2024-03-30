#include <iostream>

#include <type_safe/narrow_cast.hpp>
#include <type_safe/types.hpp>
#include <type_safe/math.hpp>
#include <cmath>

namespace ts = type_safe;

int main() {
    using namespace ts::types::literals;


	{
		auto va = type_safe::math::max(0_i32, 11_i32);
		std::cout << va << std::endl;
		const auto c = type_safe::types::int8_t{static_cast<char>(9)};
		const auto first = type_safe::types::size_t{static_cast<unsigned char>(9)};
		const auto second = type_safe::types::size_t{static_cast<unsigned char>(9)};
		const auto third = first * second;
		third.get();
	}

    {
        constexpr auto integer_value = 100_u16;
        auto to_interger = ts::type_cast<ts::types::uint8_t>(integer_value);
        auto to_floating_point = ts::type_cast<ts::types::double_t>(integer_value);
    }

    {
        constexpr ts::types::double_t floating_point_value = 356.3;
        auto to_interger = ts::type_cast<ts::types::uint8_t>(floating_point_value);
        std::cout << to_interger << std::endl;
        auto to_floating_point = ts::type_cast<ts::types::float_t>(floating_point_value);
        std::cout << to_floating_point << std::endl;
    }

}
