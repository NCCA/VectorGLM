#ifndef COMPAREFUNCS_H_
#define COMPAREFUNCS_H_
#include <glm/glm.hpp>
#include <ngl/Mat4.h>
#include <ngl/Vec4.h>
/// @brief a series of free functions to compare different ngl and glm types

extern bool operator==(const ngl::Mat4 &_m1 , const glm::mat4 &_m2);
extern bool operator==(const glm::mat4 &_m1 , const ngl::Mat4 &_m2);

extern bool operator!=(const ngl::Mat4 &_m1 , const glm::mat4 &_m2);
extern bool operator!=(const glm::mat4 &_m1 , const ngl::Mat4 &_m2);


extern bool operator==(const ngl::Vec3 &_m1 , const glm::vec3 &_m2);
extern bool operator==(const glm::vec3 &_m1 , const ngl::Vec3 &_m2);

extern bool operator!=(const ngl::Vec3 &_m1 , const glm::vec3 &_m2);
extern bool operator!=(const glm::vec3 &_m1 , const ngl::Vec3 &_m2);

#endif
