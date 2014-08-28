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
    rotOne = ofRandom(200);
    rotTwo = ofRandom(200);
    
    offset.x = ofRandom(ofGetWidth());
    offset.y = ofRandom(ofGetHeight());
    
    scale = ofRandom(0.1, 2);
    tone = ofRandom(0,200);
}
void orbitCircle::update(){
    
    rotOne += 1;
    rotTwo += 4;
}



void orbitCircle::draw(ofPoint pos){
    ofSetColor(tone);
        
    ofPushMatrix();
    
            ofScale(scale, scale);
    
            ofTranslate(pos+offset);
    
            ofCircle(0, 0, 50);
            
            ofRotate(rotOne);
            ofTranslate(230, 0);
            ofCircle(0, 0, 20);
            
            ofRotate(rotTwo);
            ofTranslate(100, 0);
            ofCircle(0, 0, 10);
        ofPopMatrix();
}