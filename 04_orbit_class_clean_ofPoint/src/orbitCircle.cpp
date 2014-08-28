//
//  orbitCircle.cpp
//  example_9_translateAndRotateOrbits
//
//  Created by Firm Read on 8/28/14.
//
//

#include "orbitCircle.h"


void orbitCircle::setup(){
    
    ofBackground(255);
    rotOne = 0;
    rotTwo = 0;
}
void orbitCircle::update(){
    
    rotOne += 1;
    rotTwo += 4;
}



void orbitCircle::draw(ofPoint pos){
    
    ofSetColor(0);
    
    ofTranslate(pos);
    ofCircle(0, 0, 50);
    
    ofRotate(rotOne);
    ofTranslate(230, 0);
    ofCircle(0, 0, 20);
    
    ofRotate(rotTwo);
    ofTranslate(100, 0);
    ofCircle(0, 0, 10);
}