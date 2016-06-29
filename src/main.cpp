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
constexpr int width=1024;
constexpr int height=710;

TEST(View, NGLvsGLM)
{
  ngl::Vec3 nfrom(0,0,4);
  ngl::Vec3 nto(0,0,0);
  ngl::Vec3 nup(0,1,0);
  ngl::Mat4 nview=ngl::lookAt(nfrom,nto,nup);

  glm::vec3 gfrom(0,0,4);
  glm::vec3 gto(0,0,0);
  glm::vec3 gup(0,1,0);
  glm::mat4 gview=glm::lookAt(gfrom,gto,gup);

  EXPECT_TRUE(nview == gview) << "data is \n"<<print(nview)<<print(gview);
}

TEST(Projection, NGLvsGLM)
{
  ngl::Mat4 nprojection=ngl::perspective(45.0f,float(width)/height,0.05f,350.0f);
  // note glm:: expects fov as radians ngl uses degrees
  glm::mat4 gprojection=glm::perspective(ngl::radians(45.0f),float(width)/height,0.05f,350.0f);
  EXPECT_TRUE(nprojection == gprojection) << print(nprojection)<<print(gprojection);
}

TEST(unProject, NGLvsGLM)
{

  constexpr int winx=120;
  constexpr int winy=240;
  ngl::Mat4 nprojection=ngl::perspective(45.0f,float(width)/height,0.05f,350.0f);
  // note glm:: expects fov as radians ngl uses degrees
  glm::mat4 gprojection=glm::perspective(ngl::radians(45.0f),float(width)/height,0.05f,350.0f);

  ngl::Mat4 ntx;
  ntx.translate(-2.0f,0.0f,1.0f);

  ngl::Vec3 nvec=ngl::unProject(ngl::Vec3(winx,winy,0.0f),
                                ntx,nprojection,
                                ngl::Vec4(0,0,width,height));
  glm::mat4 gtx;
  gtx=glm::translate(gtx,glm::vec3(-2.0f,0.0f,1.0f));

  glm::vec3 gvec=glm::unProject(glm::vec3(winx,winy,0.0f),
                                gtx,gprojection,
                                glm::vec4(0,0,width,height)
                                );

  EXPECT_TRUE(nvec == gvec) << "test unProject NGL->GLM\n" <<print(nvec)<<print(gvec)<<
                               "\n Matrix values NGL->GLM\n"<<print(ntx)<<print(gtx);
}


int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
