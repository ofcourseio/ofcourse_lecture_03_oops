#pragma once

#include "ofMain.h"



class orbitCircle{
public:
    
    float rotOne, rotTwo;
    void setup();
    void update();
    void draw(ofPoint pos);
    
    ofPoint offset;
private:
    float scale;
    float tone;
};
