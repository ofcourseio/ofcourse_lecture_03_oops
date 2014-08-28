#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myOrbit.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    ofPoint pos(mouseX, mouseY);
    myOrbit.update(pos);

    myOrbit.doRotOne(mouseX/100.0);
    myOrbit.doRotTwo(mouseY/100.0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    myOrbit.drawEarth();
    myOrbit.drawMoonOne();
    myOrbit.drawMoonTwo();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
