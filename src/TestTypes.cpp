#include <ngl/Vec4.h>
#include <ngl/Mat4.h>
#include <ngl/Util.h>
#include <ngl/NGLStream.h>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <gtest/gtest.h>
#include "PrintFuncs.h"
#include "CompareFuncs.h"


TEST(NGLvsGLMTypes,TestVec2EqualTemplate)
{
  ngl::Vec2 a;
  glm::vec2 b;
  EXPECT_TRUE(a == b) << "Vec2 == same\n"<<print(a)<<print(b);
}

TEST(NGLvsGLMTypes,TestVec2NotEqualTemplate)
{
  ngl::Vec2 a;
  glm::vec2 b;
  EXPECT_FALSE(a != b) << "Vec2 != same\n"<<print(a)<<print(b);
}

TEST(NGLvsGLMTypes,TestVec3EqualTemplate)
{
  ngl::Vec3 a;
  glm::vec3 b;
  EXPECT_TRUE(a == b) << "Vec3 == same\n"<<print(a)<<print(b);
}

TEST(NGLvsGLMTypes,TestVec3NotEqualTemplate)
{
  ngl::Vec3 a;
  glm::vec3 b;
  EXPECT_FALSE(a != b) << "Vec3 != same\n"<<print(a)<<print(b);
}

TEST(NGLvsGLMTypes,TestVec4EqualTemplate)
{
  ngl::Vec4 a;
  glm::vec4 b;
  EXPECT_TRUE(a == b) << "Vec4 == same\n"<<print(a)<<print(b);
}

TEST(NGLvsGLMTypes,TestVec4NotEqualTemplate)
{
  ngl::Vec2 a;
  glm::vec2 b;
  EXPECT_FALSE(a != b) << "Vec4 != same\n"<<print(a)<<print(b);
}
