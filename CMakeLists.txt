cmake_minimum_required(VERSION 3.5)
project(type_safe)

set(CMAKE_CXX_STANDARD 20)

add_library(type_safe INTERFACE
        include/type_safe/detail/aligned_union.hpp
        include/type_safe/detail/all_of.hpp
        include/type_safe/detail/assert.hpp
        include/type_safe/detail/debug_assert.hpp
        include/type_safe/detail/assign_or_construct.hpp
        include/type_safe/detail/constant_parser.hpp
        include/type_safe/detail/copy_move_control.hpp
        include/type_safe/detail/force_inline.hpp
        include/type_safe/detail/is_nothrow_swappable.hpp
        include/type_safe/detail/map_invoke.hpp
        include/type_safe/detail/variant_impl.hpp

        include/type_safe/config.hpp
        include/type_safe/arithmetic_policy.hpp
        include/type_safe/boolean.hpp
        include/type_safe/bounded_type.hpp
        include/type_safe/compact_optional.hpp
        include/type_safe/constrained_type.hpp
        include/type_safe/deferred_construction.hpp
        include/type_safe/downcast.hpp
        include/type_safe/flag.hpp
        include/type_safe/flag_set.hpp
        include/type_safe/floating_point.hpp
        include/type_safe/index.hpp
        include/type_safe/integer.hpp
        include/type_safe/narrow_cast.hpp
        include/type_safe/optional.hpp
        include/type_safe/optional_ref.hpp
        include/type_safe/output_parameter.hpp
        include/type_safe/reference.hpp
        include/type_safe/strong_typedef.hpp
        include/type_safe/tagged_union.hpp
        include/type_safe/types.hpp
        include/type_safe/variant.hpp
        include/type_safe/visitor.hpp
)

target_include_directories(type_safe INTERFACE include)

install(TARGETS type_safe
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include/type_safe
)

install(DIRECTORY include/
        DESTINATION include
)


add_subdirectory(example)