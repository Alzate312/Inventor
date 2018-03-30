#include "columna.h"
void Columna::fillpoints(){
    float xpos = this->length/2;
    float ypos = this->height/2;
    float zpos = this->deep/2;
    float tempPoints[] = {
        -xpos ,-ypos, -zpos,  1.0f, 0, 0, 1.0f,
        xpos ,-ypos, -zpos,   1.0f, 0, 0, 1.0f,
        xpos ,ypos, -zpos,    1.0f, 0, 0, 1.0f,
        xpos ,ypos, -zpos,    1.0f, 0, 0, 1.0f,
        -xpos ,ypos, -zpos,   1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0, 1.0f,

        -xpos ,-ypos, zpos,   1.0f, 0, 0, 1.0f,
        xpos ,-ypos, zpos,    1.0f, 0, 0, 1.0f,
        xpos ,ypos, zpos,     1.0f, 0, 0, 1.0f,
        xpos ,ypos, zpos,     1.0f, 0, 0, 1.0f,
        -xpos ,ypos, zpos,    1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, zpos,   1.0f, 0, 0, 1.0f,

        -xpos ,ypos, zpos,    1.0f, 0, 0, 1.0f,
        -xpos ,ypos, -zpos,   1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, zpos,   1.0f, 0, 0, 1.0f,
        -xpos ,ypos, zpos,    1.0f, 0, 0, 1.0f,

        xpos ,ypos, zpos,     1.0f, 0, 0, 1.0f,
        xpos ,ypos, -zpos,    1.0f, 0, 0, 1.0f,
        xpos ,-ypos, -zpos,   1.0f, 0, 0, 1.0f,
        xpos ,-ypos, -zpos,   1.0f, 0, 0, 1.0f,
        xpos ,-ypos, zpos,    1.0f, 0, 0, 1.0f,
        xpos ,ypos, zpos,     1.0f, 0, 0, 1.0f,

        -xpos ,-ypos, -zpos,  1.0f, 0, 0, 1.0f,
        xpos ,-ypos, -zpos,   1.0f, 0, 0, 1.0f,
        xpos ,-ypos, zpos,    1.0f, 0, 0, 1.0f,
        xpos ,-ypos, zpos,    1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, zpos,   1.0f, 0, 0, 1.0f,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0, 1.0f,

        -xpos ,ypos, -zpos,   1.0f, 0, 0, 1.0f,
        xpos ,ypos, -zpos,    1.0f, 0, 0, 1.0f,
        xpos ,ypos, zpos,     1.0f, 0, 0, 1.0f,
        xpos ,ypos, zpos,     1.0f, 0, 0, 1.0f,
        -xpos ,ypos, zpos,    1.0f, 0, 0, 1.0f,
        -xpos ,ypos, -zpos,   1.0f, 0, 0, 1.0f
    };
    for(int i = 0; i < 252; i++){
        this->points[i]=tempPoints[i];
    }
}
void Columna::draw(glm::mat4 view, glm::mat4 projection, Shader ourShader,int viewLocation, int projLocation,int modelLocation){
    ourShader.use();

    glUniformMatrix4fv(modelLocation,1,GL_FALSE,glm::value_ptr(this->model));
    glUniformMatrix4fv(viewLocation, 1, GL_FALSE, glm::value_ptr(view));
    glUniformMatrix4fv(projLocation,1,GL_FALSE,glm::value_ptr(projection));
    
    glBindVertexArray(this->VAOCOLUMN); 
        // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
    glDrawArrays(GL_TRIANGLES,0,36);
    glBindVertexArray(0);
}
void Columna::verPuntos(){
    for(int i = 0; i<216; i++){
        cout << this->points[i] << " ";
    }
}