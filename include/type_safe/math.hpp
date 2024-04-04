#ifndef TYPE_SAFE_MATH_HPP_INCLUDED
#define TYPE_SAFE_MATH_HPP_INCLUDED

#include <type_safe/narrow_cast.hpp>
#include <cmath>
#include <algorithm>

namespace std {
	template<typename IntegerType, typename Policy>
	TYPE_SAFE_FORCE_INLINE constexpr auto abs(const type_safe::integer<IntegerType, Policy>& value) noexcept ->
	type_safe::integer<IntegerType, Policy> {
		return static_cast<IntegerType>(std::abs(static_cast<IntegerType>(value)));
	}

	#define FLOAT_OPERATION(func_name)\
			template<typename FloatingType>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(const type_safe::floating_point<FloatingType>& value) noexcept ->\
				type_safe::floating_point<FloatingType> {\
				return static_cast<FloatingType>(std::func_name(static_cast<FloatingType>(value)));\
			}

		FLOAT_OPERATION(abs);
		FLOAT_OPERATION(floor);
		FLOAT_OPERATION(ceil);
		FLOAT_OPERATION(exp);
		FLOAT_OPERATION(log);
		FLOAT_OPERATION(log10);
		FLOAT_OPERATION(sqrt);
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
		FLOAT_OPERATION(round);

	#undef FLOAT_OPERATION


	#define FLOAT_PAIR_OPERATION(func_name)\
			template<typename FloatingType>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(\
				const type_safe::floating_point<FloatingType>& y,\
				const type_safe::floating_point<FloatingType>& x\
			) noexcept -> type_safe::floating_point<FloatingType> {\
				return static_cast<FloatingType>(std::func_name(static_cast<FloatingType>(y), static_cast<FloatingType>(x)));\
			}                                    \
			template<typename FloatingType>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(\
				const type_safe::floating_point<FloatingType>& y,\
				const FloatingType& x\
			) noexcept -> type_safe::floating_point<FloatingType> {\
				return static_cast<FloatingType>(std::func_name(static_cast<FloatingType>(y), static_cast<FloatingType>(x)));\
			}                                    \
			template<typename FloatingType>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(\
				const FloatingType y,\
				const type_safe::floating_point<FloatingType>& x\
			) noexcept -> type_safe::floating_point<FloatingType> {\
				return static_cast<FloatingType>(std::func_name(static_cast<FloatingType>(y), static_cast<FloatingType>(x)));\
			}

		FLOAT_PAIR_OPERATION(atan2);
		FLOAT_PAIR_OPERATION(pow);
		FLOAT_PAIR_OPERATION(fmod);
		FLOAT_PAIR_OPERATION(copysign);
	#undef FLOAT_PAIR_OPERATION

	#define NUMBER_PAIR_OPERATION(func_name)\
			template<typename IntegerType, typename Policy>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(\
				const type_safe::integer<IntegerType, Policy>& first,\
				const type_safe::integer<IntegerType, Policy>& second\
			) noexcept -> type_safe::integer<IntegerType, Policy> {\
				return static_cast<IntegerType>(std::func_name(static_cast<IntegerType>(first), static_cast<IntegerType>(second)));\
			}\
			template<typename FloatingType>\
			TYPE_SAFE_FORCE_INLINE constexpr auto func_name(\
				const type_safe::floating_point<FloatingType>& first,\
				const type_safe::floating_point<FloatingType>& second\
			) noexcept -> type_safe::floating_point<FloatingType> {\
				return static_cast<FloatingType>(std::func_name(static_cast<FloatingType>(first), static_cast<FloatingType>(second)));\
			}

		NUMBER_PAIR_OPERATION(max);
		NUMBER_PAIR_OPERATION(min);
	#undef NUMBER_PAIR_OPERATION

}

#endif // TYPE_SAFE_MATH_HPP_INCLUDED
