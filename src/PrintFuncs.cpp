#include <ngl/Mat4.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <string>
#include <sstream>

std::string printMat4(const ngl::Mat4 &_m)
{
  std::stringstream ret;
  ret<<'(';
  for(size_t i=0; i<16; ++i)
    ret<<_m.m_openGL[i]<<',';
  ret<<"\b)\n";
  return ret.str();
}

std::string printMat4(const glm::mat4 &_m)
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
