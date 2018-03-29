
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

float vertices[] = {
    -1.0f, -1.0f, -1.0f,  0.5647058,0.7490196f,0.986666f,
    1.0f, -1.0f, -1.0f,  0.5647058,0.7490196f,0.986666f,
    1.0f,  1.0f, -1.0f,  0.5647058,0.7490196f,0.986666f,
    1.0f,  1.0f, -1.0f,  0.5647058,0.7490196f,0.986666f,
    -1.0f,  1.0f, -1.0f,  0.5647058,0.7490196f,0.986666f,
    -1.0f, -1.0f, -1.0f,  0.5647058,0.7490196f,0.986666f,

    -1.0f, -1.0f,  1.0f,  0.5647058,0.7490196f,0.986666f,
     1.0f, -1.0f,  1.0f,  0.5647058,0.7490196f,0.986666f,
     1.0f,  1.0f,  1.0f,  0.5647058,0.7490196f,0.986666f,
    1.0f,  1.0f,  1.0f,  0.5647058,0.7490196f,0.986666f,
    -1.0f,  1.0f,  1.0f,  0.5647058,0.7490196f,0.986666f,
    -1.0f, -1.0f,  1.0f,  0.5647058,0.7490196f,0.986666f,

    -1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f,  1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f, -1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,

    1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f,  1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f, -1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,

    -1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f, -1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f, -1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f, -1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f, -1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,

    -1.0f,  1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f,  1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f,  1.0f,  1.0f,  0.2509803f,0.52941176f,0.86666666f,
    -1.0f,  1.0f, -1.0f,  0.2509803f,0.52941176f,0.86666666f
};
float lines[] = {
    -1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,

    -1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
     1.0f, -1.0f,  1.0f,     0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f,  1.0f,     0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f,  1.0f,     0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f,  1.0f,     0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f,  1.0f,    0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f, 1.0f,    0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f,  1.0f,    0.83529411f,0.22745098f,0.10196078,

    -1.0f,  1.0f,  1.0f,    0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,

    1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,

    -1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f, -1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,

    -1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f,  1.0f,   0.83529411f,0.22745098f,0.10196078,
    -1.0f,  1.0f, -1.0f,   0.83529411f,0.22745098f,0.10196078


};

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
float cubeDimension = 0.0f;
float divitionsSize = 0.0f;

glm::vec3 cameraPos   = glm::vec3(0.0f, 0.0f,  3.0f);
glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
glm::vec3 cameraUp    = glm::vec3(0.0f, 1.0f,  0.0f);

bool firstMouse = true;
float yaw   = -90.0f;   // yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right so we initially rotate a bit to the left.
float pitch =  0.0f;
float lastX =  800.0f / 2.0;
float lastY =  600.0 / 2.0;
float fov   =  45.0f;

float deltaTime = 0.0f;	// Time between current frame and last frame

void framebuffer_size_callback(GLFWwindow* window, int width, int height) // in order to resize the window
{
    glViewport(0, 0, width, height);
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos){
    if (firstMouse)
    {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }

    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top
    lastX = xpos;
    lastY = ypos;

    float sensitivity = 0.1f; // change this value to your liking
    xoffset *= sensitivity;
    yoffset *= sensitivity;

    yaw += xoffset;
    pitch += yoffset;

    // make sure that when pitch is out of bounds, screen doesn't get flipped
    if (pitch > 89.0f)
        pitch = 89.0f;
    if (pitch < -89.0f)
        pitch = -89.0f;

    glm::vec3 front;
    front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    front.y = sin(glm::radians(pitch));
    front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    cameraFront = glm::normalize(front);
}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset){
    if (fov >= 1.0f && fov <= 45.0f)
        fov -= yoffset;
    if (fov <= 1.0f)
        fov = 1.0f;
    if (fov >= 45.0f)
        fov = 45.0f;
}

void processInput(GLFWwindow *window){//in order to close the window if it's pressed escape key
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    float cameraSpeed =  2.5f * deltaTime; // adjust accordingly
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        cameraPos += cameraSpeed * cameraFront;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        cameraPos -= cameraSpeed * cameraFront;
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
}

//setting height and width of the cube, save the value 
void initialValues(){
    float temp;

    cout << "ingrese el ancho del cubo:\n";
    cin >> temp;
    cubeDimension= temp;

}

int main(){
    //initiliza and configure glfw
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);//it´s necesary on mac os
    
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);//create a new window in this dimension
    if (window == NULL)// if we failed creating the window
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); // resize the window
    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetScrollCallback(window, scroll_callback);


    // tell GLFW to capture our mouse
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    glViewport(0, 0, 800, 600);
    GLenum err=glewInit();
    if (GLEW_OK != err)
    {
        /* Problem: glewInit failed, something is seriously wrong. */
        fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
    }
    
    //build and compile shader program
    Shader ourShader("vertexShader.vs","fragmentShader.fs");
    initialValues();
 
    glEnable (GL_BLEND); 
    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_DEPTH_TEST);
    //line properties
    glEnable( GL_LINE_SMOOTH );
    glEnable( GL_LINE_STIPPLE );
    glLineWidth( 1000 );

    
    unsigned int VBO, VAO,VAOLINES,VBOLINES;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenVertexArrays(1, &VAOLINES);
    glGenBuffers(1, &VBOLINES);


    //bind the lines array object for lines
    glBindVertexArray(VAOLINES);

    glBindBuffer(GL_ARRAY_BUFFER, VBOLINES);
    glBufferData(GL_ARRAY_BUFFER, sizeof(lines), lines, GL_STATIC_DRAW);

    glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,6 * sizeof(float), (void*)(3* sizeof(float)));
    glEnableVertexAttribArray(1);

    // bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
    glBindVertexArray(VAO);
    
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,6 * sizeof(float), (void*)(3* sizeof(float)));
    glEnableVertexAttribArray(1);

    //model matrix
    glm::mat4 model;
    model = glm::rotate(model, glm::radians(30.0f), glm::vec3(0.0f, 1.0f, 0.0f));

    //view matrix
    glm::mat4 view;
    // note that we're translating the scene in the reverse direction of where we want to move
    view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));

    //projection matrix
    glm::mat4 projection;
    projection = glm::perspective(glm::radians(45.0f), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);


    //projection matrix
    glm::mat4 projectionLines;
    projectionLines = glm::perspective(glm::radians(45.0f), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
    
     //model matrix
    glm::mat4 modelLines;
    modelLines = glm::rotate(modelLines, glm::radians(30.0f), glm::vec3(0.0f, 1.0f, 0.0f));

    //view matrix
    glm::mat4 viewLines;
    // note that we're translating the scene in the reverse direction of where we want to move
    viewLines = glm::translate(viewLines, glm::vec3(0.0f, 0.0f, -3.0f));
    
    int modelLocation,viewLocation, projLocation;
    modelLocation = glGetUniformLocation(ourShader.ID,"model");
    viewLocation = glGetUniformLocation(ourShader.ID,"view");
    projLocation = glGetUniformLocation(ourShader.ID,"projection");


    
	float lastFrame = 0.0f; // Time of last frame
	float currentFrame = 0.0f; // current frame
    //in oreder to have the same movementspeed in every computer
    
	glm::vec3 cubePositions[] = {
        glm::vec3( 0.0f,  0.0f,  0.0f),
    };
     
    
    while(!glfwWindowShouldClose(window))
    {
    	currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
		lastFrame = currentFrame;
        // input
        processInput(window);
        
        // render
        glClearColor(0.35686274f, 0.3647059f, 0.3647059f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        
        ourShader.use();

        projection = glm::perspective(glm::radians(45.0f), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
 		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
 		model = glm::translate(model, cubePositions[0]);
    
        glUniformMatrix4fv(modelLocation,1,GL_FALSE,glm::value_ptr(model));
        glUniformMatrix4fv(viewLocation, 1, GL_FALSE, glm::value_ptr(view));
        glUniformMatrix4fv(projLocation,1,GL_FALSE,glm::value_ptr(projection));
        

        glBindVertexArray(VAO); 
        // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
        glDrawArrays(GL_TRIANGLES,0,36);
        glBindVertexArray(0);

        projectionLines = glm::perspective(glm::radians(45.0f), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
 		viewLines = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
 		modelLines = glm::translate(modelLines, cubePositions[0]);
        glUniformMatrix4fv(modelLocation,1,GL_FALSE,glm::value_ptr(modelLines));
        glUniformMatrix4fv(viewLocation, 1, GL_FALSE, glm::value_ptr(viewLines));
        glUniformMatrix4fv(projLocation,1,GL_FALSE,glm::value_ptr(projectionLines));
        glBindVertexArray(VAOLINES);
        glDrawArrays(GL_LINES,0,48);
        glBindVertexArray(0);

        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    
    glfwTerminate(); //This will clean up all the resources and properly exit the application.
    return 0;
}

