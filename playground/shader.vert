#version 330

in vec3 inCoord;
in vec4 inColor;

out vec4 outColor;

void main() {
    gl_Position = vec4(coord, 1.0);
    outColor = inColor;
}
