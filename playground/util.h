#pragma once

#include <GLAD/glad.h>
#include <cstddef>
#include <string>
#include <vector>

GLuint createBuffer(GLuint target, const void *data, const size_t size);

GLuint createShader(GLuint type, const std::string &source);

GLuint createShaderProgram(const std::vector<GLuint> &shaders);
