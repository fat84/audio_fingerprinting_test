#include "ball.h"

Ball::Ball(){
}

void Ball::setup(){
    x = 0;
    y = 0;
    
    mult = 1;
    
    speedX = 1.0;
    speedY = 0;
    endx = 300;
    endy = 10;

    dim = 50;
    
    color.set(255,255,255);

    
}
void Ball::update(float mult){
    
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > endx){
        x = endx;
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > endy ){
        y = endy * mult ;
        speedY *= -1 ;
    }
    x+=speedX * mult;
    y+=speedY * mult;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}
