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

using namespace std;
class Columna{
    private:
        float width;
        float length;
        float height;
        float deep;
        glm::vec3 initialPosition;
        float points[252];
        //opengl elements
        unsigned int VBOCOLUMN,VAOCOLUMN;
        glm::mat4 model;
    public:
        Columna (glm::vec3 origin,float width, float length, float height, float deep){
            this->width = width;
            this->length = length;
            this->height = height;
            this->deep = deep;
            this -> initialPosition = glm::vec3(origin);
            this->fillpoints();
            this->model = glm::rotate(model, glm::radians(30.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            this->model = glm::translate(this->model, this->initialPosition);
            glGenVertexArrays(1, &this->VAOCOLUMN);
            glGenBuffers(1, &this->VBOCOLUMN);
            glBindVertexArray(VAOCOLUMN);

            glBindBuffer(GL_ARRAY_BUFFER, VBOCOLUMN);
            glBufferData(GL_ARRAY_BUFFER, sizeof(this->points), this->points, GL_STATIC_DRAW);

            glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,7 * sizeof(float), (void*)0);
            glEnableVertexAttribArray(0);

            glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,7 * sizeof(float), (void*)(3* sizeof(float)));
            glEnableVertexAttribArray(1);
        }
        void fillpoints();
        void draw(glm::mat4, glm::mat4, Shader, int, int, int);
        void verPuntos();

};