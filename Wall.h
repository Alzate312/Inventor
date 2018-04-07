//opengl libraries
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

//c++ libraries and the shadder class for opengl
#include <cstdio>
#include <iostream>
#include <cmath>
#import "shaderClass.h"

using namespace std;
class Wall{
    private:
        float width;
        float height;
        float deep;
        glm::vec3 initialPosition;
        float points[252];
        //opengl elements
        unsigned int VBOCOLUMN,VAOCOLUMN;
        glm::mat4 model;
    public:
        Wall (glm::vec3,float, float, float);
        void fillpoints();
        void draw(glm::mat4, glm::mat4, Shader, int, int, int);
        void verPuntos();
        
};