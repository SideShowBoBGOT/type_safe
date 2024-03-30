#ifndef TYPE_SAFE_MATH_HPP_INCLUDED
#define TYPE_SAFE_MATH_HPP_INCLUDED

#include <type_safe/narrow_cast.hpp>
#include <cmath>

namespace type_safe {
	namespace math {
		template<typename IntegerType, typename Policy>
		TYPE_SAFE_FORCE_INLINE constexpr auto abs(const integer<IntegerType, Policy>& value) noexcept ->
			integer<IntegerType, Policy> {
			return static_cast<IntegerType>(std::abs(static_cast<IntegerType>(value)));
		}

		#define FLOAT_OPERATION(func_name)\
			template<typename FloatingType>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(const floating_point<FloatingType>& value) noexcept ->\
				floating_point<FloatingType> {\
				return static_cast<FloatingType>(std::func_name(static_cast<FloatingType>(value)));\
			}

			FLOAT_OPERATION(abs);
			FLOAT_OPERATION(sin);
			FLOAT_OPERATION(cos);
			FLOAT_OPERATION(tan);
			FLOAT_OPERATION(asin);
			FLOAT_OPERATION(acos);
			FLOAT_OPERATION(atan);
			FLOAT_OPERATION(sinh);
			FLOAT_OPERATION(cosh);
			FLOAT_OPERATION(tanh);
			FLOAT_OPERATION(asinh);
			FLOAT_OPERATION(acosh);
			FLOAT_OPERATION(atanh);

		#undef FLOAT_OPERATION

		template<typename FloatingType>
		TYPE_SAFE_FORCE_INLINE constexpr auto atan2(
			const floating_point<FloatingType>& y,
			const floating_point<FloatingType>& x
		) noexcept -> floating_point<FloatingType> {
			return static_cast<FloatingType>(std::atan2(static_cast<FloatingType>(y), static_cast<FloatingType>(x)));
		}

	}
}

#endif // TYPE_SAFE_MATH_HPP_INCLUDED
