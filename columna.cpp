#include "colummna.h"
void fillpoints(){
    float xpos = this->length/2;
    float ypos = this->height/2;
    float zpos = this->deep/2;
    this->points[] = {
        -xpos ,-ypos, -zpos,  1.0f, 0, 0,
        xpos ,-ypos, -zpos,   1.0f, 0, 0,
        xpos ,ypos, -zpos,    1.0f, 0, 0,
        xpos ,ypos, -zpos,    1.0f, 0, 0,
        -xpos ,ypos, -zpos,   1.0f, 0, 0,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0,

        -xpos ,-ypos, zpos,   1.0f, 0, 0,
        xpos ,-ypos, zpos,    1.0f, 0, 0,
        xpos ,ypos, zpos,     1.0f, 0, 0,
        xpos ,ypos, zpos,     1.0f, 0, 0,
        -xpos ,ypos, zpos,    1.0f, 0, 0,
        -xpos ,-ypos, zpos,   1.0f, 0, 0,

        -xpos ,ypos, zpos,    1.0f, 0, 0,
        -xpos ,ypos, -zpos,   1.0f, 0, 0,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0,
        -xpos ,-ypos, zpos,   1.0f, 0, 0,
        -xpos ,ypos, zpos,    1.0f, 0, 0,

        xpos ,ypos, zpos,     1.0f, 0, 0,
        xpos ,ypos, -zpos,    1.0f, 0, 0,
        xpos ,-ypos, -zpos,   1.0f, 0, 0,
        xpos ,-ypos, -zpos,   1.0f, 0, 0,
        xpos ,-ypos, zpos,    1.0f, 0, 0,
        xpos ,ypos, zpos,     1.0f, 0, 0,

        -xpos ,-ypos, -zpos,  1.0f, 0, 0,
        xpos ,-ypos, -zpos,   1.0f, 0, 0,
        xpos ,-ypos, zpos,    1.0f, 0, 0,
        xpos ,-ypos, zpos,    1.0f, 0, 0,
        -xpos ,-ypos, zpos,   1.0f, 0, 0,
        -xpos ,-ypos, -zpos,  1.0f, 0, 0,

        -xpos ,ypos, -zpos,   1.0f, 0, 0,
        xpos ,ypos, -zpos,    1.0f, 0, 0,
        xpos ,ypos, zpos,     1.0f, 0, 0,
        xpos ,ypos, zpos,     1.0f, 0, 0,
        -xpos ,ypos, zpos,    1.0f, 0, 0,
        -xpos ,ypos, -zpos,   1.0f, 0, 0,
    }
}