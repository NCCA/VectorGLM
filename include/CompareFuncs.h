#ifndef COMPAREFUNCS_H_
#define COMPAREFUNCS_H_
/// @brief a series of free functions to compare different ngl and glm types

extern bool operator==(const ngl::Mat4 &_m1 , const glm::mat4 &_m2);
extern bool operator==(const glm::mat4 &_m1 , const ngl::Mat4 &_m2);

extern bool operator!=(const ngl::Mat4 &_m1 , const glm::mat4 &_m2);
extern bool operator!=(const glm::mat4 &_m1 , const ngl::Mat4 &_m2);



#endif
