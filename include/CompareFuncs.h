#ifndef COMPAREFUNCS_H_
#define COMPAREFUNCS_H_
#include <glm/glm.hpp>
#include <ngl/Mat4.h>
#include <ngl/Vec4.h>
#include <ngl/Util.h>
/// @brief a series of free functions to compare different ngl and glm types

extern bool operator==(const ngl::Mat4 &_m1 , const glm::mat4 &_m2);
extern bool operator==(const glm::mat4 &_m1 , const ngl::Mat4 &_m2);

//extern bool operator!=(const ngl::Mat4 &_m1 , const glm::mat4 &_m2);
//extern bool operator!=(const glm::mat4 &_m1 , const ngl::Mat4 &_m2);


template <typename T, typename U>
bool operator==(const T &_m1 , const U &_m2)
{
  for(int i=0; i<_m1.m_openGL.size(); ++i)
  {
    if(!( FCompare(_m1.m_openGL[i] , glm::value_ptr( _m2 )[i] )))
    {
      return false;
    }
  }
  return true;
}

template <typename T, typename U>
bool operator!=(const T &_m1 , const U &_m2)
{
  return !(_m1==_m2);
}

//extern bool operator==(const ngl::Vec3 &_m1 , const glm::vec3 &_m2);
//extern bool operator==(const glm::vec3 &_m1 , const ngl::Vec3 &_m2);

//extern bool operator!=(const ngl::Vec3 &_m1 , const glm::vec3 &_m2);
//extern bool operator!=(const glm::vec3 &_m1 , const ngl::Vec3 &_m2);

#endif
