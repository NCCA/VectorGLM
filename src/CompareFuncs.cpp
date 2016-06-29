#include <ngl/Mat4.h>
#include <ngl/Vec4.h>
#include <ngl/Util.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>

bool operator==(const ngl::Mat4 &_m1 , const glm::mat4 &_m2)
{
  for(int i=0; i<16; ++i)
  {
    if(!( FCompare(_m1.m_openGL[i] , glm::value_ptr( _m2 )[i] )))
    {
      return false;
    }
  }
  return true;
}

bool operator==(const glm::mat4 &_m1 , const ngl::Mat4 &_m2)
{
  for(int i=0; i<16; ++i)
  {
    if(!( FCompare(_m2.m_openGL[i] , glm::value_ptr( _m1 )[i] )))
    {
      return false;
    }
  }
  return true;
}






bool operator!=(const ngl::Mat4 &_m1 , const glm::mat4 &_m2)
{
  for(int i=0; i<16; ++i)
  {
    if(( FCompare(_m1.m_openGL[i] , glm::value_ptr( _m2 )[i] )))
    {
      return false;
    }
  }
  return true;
}

bool operator!=(const glm::mat4 &_m1 , const ngl::Mat4 &_m2)
{
  for(int i=0; i<16; ++i)
  {
    if(( FCompare(_m2.m_openGL[i] , glm::value_ptr( _m1 )[i] )))
    {
      return false;
    }
  }
  return true;
}


/*

bool operator==(const ngl::Vec3 &_m1 , const glm::vec3 &_m2)
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

bool operator==(const glm::vec3 &_m1 , const ngl::Vec3 &_m2)
{
  for(int i=0; i<_m2.m_openGL.size(); ++i)
  {
    if(!( FCompare(_m2.m_openGL[i] , glm::value_ptr( _m1 )[i] )))
    {
      return false;
    }
  }
  return true;
}

bool operator!=(const ngl::Vec3 &_m1 , const glm::vec3 &_m2)
{
  for(int i=0; i<_m1.m_openGL.size(); ++i)
  {
    if(( FCompare(_m1.m_openGL[i] , glm::value_ptr( _m2 )[i] )))
    {
      return false;
    }
  }
  return true;
}


bool operator!=(const glm::vec3 &_m1 , const ngl::Vec3 &_m2)
{
  for(int i=0; i<_m2.m_openGL.size(); ++i)
  {
    if(( FCompare(_m2.m_openGL[i] , glm::value_ptr( _m1 )[i] )))
    {
      return false;
    }
  }
  return true;
}

*/

