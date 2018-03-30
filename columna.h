//opengl libraries
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

//c++ libraries and the shadder class for opengl
#include <cstdio>
#include <iostream>
#include <math.h>
#import "shaderClass.h"

class Columna{
    private:
        float width;
        float length;
        float height;
        float deep;
        float initialPosition[3];
        float points[216];
        //opengl elements
        int VBO,VAO;
        glm::mat4 model;
    public:
        Columna (float width, float length, float height, float deep){
            this->width = width;
            this->length = length;
            this->height = height;
            this->deep = deep;
            this->model = glm::rotate(model, glm::radians(30.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        }
        void fillpoints();
        void draw();

};