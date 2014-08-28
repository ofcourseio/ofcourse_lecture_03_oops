#pragma once

#include "ofMain.h"



class orbitCircle{
public:
    
//    float rotOne, rotTwo;
    void setup();
    void update(ofPoint _pos);
    
    
    void doRotOne(float _rotOne);
    void doRotTwo(float _rotTwo);
    
    void drawEarth();
    void drawMoonOne();
    void drawMoonTwo();
    
private:
    float rotOne, rotTwo;
    ofPoint pos;
};
