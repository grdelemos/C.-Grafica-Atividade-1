#ifndef OPENGLWINDOW_HPP_
#define OPENGLWINDOW_HPP_

#include <glm/vec3.hpp>
#include "abcg.hpp"

class OpenGLWindow : public abcg::OpenGLWindow {
 protected:
  void initializeGL() override;
  void paintGL() override;
  void paintUI() override;
  void resizeGL(int width, int height) override;
  void terminateGL() override;

 private:
  GLuint m_vao{};
  GLuint m_vboPositions{};
  GLuint m_vboColors{};
  GLuint m_program{};

  int m_viewportWidth{};
  int m_viewportHeight{};


  //Variáveis
  float scale{0.25};
  int sides{3};
  int novo{0};
  float x{0};
  float y{0};

  std::array<glm::vec3, 2> m_vertexColors{glm::vec3{0.36f, 0.83f, 1.00f},
                                          glm::vec3{0.63f, 0.00f, 0.61f}};
  

  void setupModel(int sides);
};

#endif
