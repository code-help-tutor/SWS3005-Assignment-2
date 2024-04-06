WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/// @ref ext_scalar_common
/// @file glm/ext/scalar_common.hpp
///
/// @defgroup ext_scalar_common GLM_EXT_scalar_common
/// @ingroup ext
///
/// Exposes min and max functions for 3 to 4 scalar parameters.
///
/// Include <glm/ext/scalar_common.hpp> to use the features of this extension.
///
/// @see core_func_common
/// @see ext_vector_common

#pragma once

// Dependency:
#include "../common.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_scalar_common extension included")
#endif

namespace glm
{
	/// @addtogroup ext_scalar_common
	/// @{

	/// Returns the minimum component-wise values of 3 inputs
	///
	/// @tparam T A floating-point scalar type.
	template<typename T>
	GLM_FUNC_DECL T min(T a, T b, T c);

	/// Returns the minimum component-wise values of 4 inputs
	///
	/// @tparam T A floating-point scalar type.
	template<typename T>
	GLM_FUNC_DECL T min(T a, T b, T c, T d);

	/// Returns the maximum component-wise values of 3 inputs
	///
	/// @tparam T A floating-point scalar type.
	template<typename T>
	GLM_FUNC_DECL T max(T a, T b, T c);

	/// Returns the maximum component-wise values of 4 inputs
	///
	/// @tparam T A floating-point scalar type.
	template<typename T>
	GLM_FUNC_DECL T max(T a, T b, T c, T d);

	/// Returns the minimum component-wise values of 2 inputs. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam T A floating-point scalar type.
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<typename T>
	GLM_FUNC_DECL T fmin(T a, T b);

	/// Returns the minimum component-wise values of 3 inputs. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam T A floating-point scalar type.
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<typename T>
	GLM_FUNC_DECL T fmin(T a, T b, T c);

	/// Returns the minimum component-wise values of 4 inputs. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam T A floating-point scalar type.
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<typename T>
	GLM_FUNC_DECL T fmin(T a, T b, T c, T d);

	/// Returns the maximum component-wise values of 2 inputs. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam T A floating-point scalar type.
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<typename T>
	GLM_FUNC_DECL T fmax(T a, T b);

	/// Returns the maximum component-wise values of 3 inputs. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam T A floating-point scalar type.
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<typename T>
	GLM_FUNC_DECL T fmax(T a, T b, T C);

	/// Returns the maximum component-wise values of 4 inputs. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam T A floating-point scalar type.
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<typename T>
	GLM_FUNC_DECL T fmax(T a, T b, T C, T D);

	/// @}
}//namespace glm

#include "scalar_common.inl"
