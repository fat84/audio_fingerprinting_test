#include "circle.h"

Circle::Circle(){
}

void Circle::setup(){
    
    a = 0;
    r = 50;
    x = 0;
    y = 0;
    //vel.x = 4;
    //vel.y = 4;
    //angle = 0.1*TWO_PI;
}

void Circle::update(float mult){
    
    
    x = cos(a) * r;
    y = sin(a) * r;
    
    /*
    angle = TWO_PI;
    vel.rotate(angle);
    oldpos = pos;
    pos += vel * mult;
    */
    
    a = a + 0.1 * mult ;
    
    ofLog() << a << endl;
    
}

void Circle::draw(){

    ofDrawCircle(x,y,r);
    //ofDrawCircle(pos.x,pos.y,20);
}
