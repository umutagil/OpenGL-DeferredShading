#version 330 core
layout (location = 0) out vec4 fragColor;

uniform vec3 lightColor;

void main()
{
	fragColor = vec4(0.2, 0.7, 0.8, 1.0);
}