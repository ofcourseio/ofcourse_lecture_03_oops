#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for (int i = 0; i< 10; i++){
        orbitCircle temp;
        temp.setup();
        myOrbits.push_back(temp);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i< myOrbits.size(); i++){
        myOrbits[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPoint pos(mouseX, mouseY);
    
    for (int i = 0; i< myOrbits.size(); i++){
        myOrbits[i].draw(pos);
    }
    
    ofDrawBitmapStringHighlight("myOrbits vector size = "+ ofToString(myOrbits.size()), 20,20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' ') {
        orbitCircle temp;
        temp.setup();
        myOrbits.push_back(temp);
    }
    
    
    if (key == 'd' && myOrbits.size()> 0){
        myOrbits.erase(myOrbits.begin());
    }
    
    if (key == 'e' && myOrbits.size()> 0){
        myOrbits.erase(myOrbits.end());
    }
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
