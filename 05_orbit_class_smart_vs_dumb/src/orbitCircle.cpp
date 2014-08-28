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
void orbitCircle::update(ofPoint _pos){
    pos = _pos;
}

void orbitCircle::doRotOne(float _rotOne){

    rotOne += _rotOne;
    
}

void orbitCircle::doRotTwo(float _rotTwo){
    rotTwo += _rotTwo;
}





void orbitCircle::drawEarth(){
    
    ofSetColor(0);
    
    ofTranslate(pos);
    ofCircle(0, 0, 50);}


void orbitCircle::drawMoonOne(){
    
//    ofTranslate(pos);
//    ofCircle(0, 0, 50);
    
    ofRotate(rotOne);
    ofTranslate(230, 0);
    ofCircle(0, 0, 20);
    
}


void orbitCircle::drawMoonTwo(){
    
//    ofTranslate(pos);
    
    ofRotate(rotTwo);
    ofTranslate(100, 0);
    ofCircle(0, 0, 10);

}