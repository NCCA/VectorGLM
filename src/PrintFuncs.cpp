#include <ngl/Mat4.h>
#include <ngl/Vec3.h>
#include <ngl/Vec4.h>

#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <string>
#include <sstream>

std::string print(const ngl::Mat4 &_m)
{
  std::stringstream ret;
  ret<<'(';
  for(size_t i=0; i<16; ++i)
    ret<<_m.m_openGL[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}

std::string print(const glm::mat4 &_m)
{
  std::stringstream ret;

//  std::cout.precision(12);
  const float *data=glm::value_ptr( _m );
  ret<<'(';
  for(size_t i=0; i<16; ++i)
    ret<<data[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}


std::string print(const ngl::Vec2 &_m)
{
  std::stringstream ret;
  ret<<'(';
  for(size_t i=0; i<_m.m_openGL.size(); ++i)
    ret<<_m.m_openGL[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}

std::string print(const glm::vec2 &_m)
{
  std::stringstream ret;

//  std::cout.precision(12);
  const float *data=glm::value_ptr( _m );
  ret<<'(';
  for(size_t i=0; i<2; ++i)
    ret<<data[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}



std::string print(const ngl::Vec3 &_m)
{
  std::stringstream ret;
  ret<<'(';
  for(size_t i=0; i<_m.m_openGL.size(); ++i)
    ret<<_m.m_openGL[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}

std::string print(const glm::vec3 &_m)
{
  std::stringstream ret;

//  std::cout.precision(12);
  const float *data=glm::value_ptr( _m );
  ret<<'(';
  for(size_t i=0; i<3; ++i)
    ret<<data[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}



std::string print(const ngl::Vec4 &_m)
{
  std::stringstream ret;
  ret<<'(';
  for(size_t i=0; i<_m.m_openGL.size(); ++i)
    ret<<_m.m_openGL[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}

std::string print(const glm::vec4 &_m)
{
  std::stringstream ret;

//  std::cout.precision(12);
  const float *data=glm::value_ptr( _m );
  ret<<'(';
  for(size_t i=0; i<4; ++i)
    ret<<data[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}

