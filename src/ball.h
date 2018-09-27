#ifndef _BALL
#define _BALL
#include "ofMain.h"
class Ball {
    
public:
    

    void setup();
    void update(float mult = 5.0);
    void draw();
    
    float x;        // position
    float y;
    float mult;
    float endx;
    float endy;
    float speedY;
    float speedX;
    int dim;        // size
    ofColor color;  // color using ofColor type
    
    Ball();
    
private:
};

#endif
