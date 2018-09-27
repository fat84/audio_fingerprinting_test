#ifndef _CIRCLE
#define _CIRCLE
#include "ofMain.h"

class Circle {
    
public:
    

    void setup();
    void update(float mult = 5.0);
    void draw();
    
    float x;        
    float y;
    float endx;
    float endy;
    float speedY;
    float speedX;
    int dim;        // size
    ofColor color;  // color using ofColor type
    
    ofPolyline line;
    
    float a;
    int r;
    
    ofVec2f pos,vel,acc,oldpos;
    float angle;
    int age;
    
    Circle();
    
private:
};

#endif
