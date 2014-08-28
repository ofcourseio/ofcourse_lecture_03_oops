#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myOrbit.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    
    myOrbit.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPoint pos(mouseX, mouseY);
    myOrbit.draw(pos);

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
