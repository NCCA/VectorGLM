#ifndef PRINTFUNCS_H_
#define PRINTFUNCS_H_
#include <ngl/Mat4.h>
#include <ngl/Vec4.h>
#include <glm/glm.hpp>

extern std::string print(const ngl::Mat4 &_m);
extern std::string print(const glm::mat4 &_m);

extern std::string print(const ngl::Vec3 &_m);
extern std::string print(const glm::vec3 &_m);



#endif
