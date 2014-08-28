#pragma once

#include "ofMain.h"

//old school syntax

struct orbitCircle{
    float rotOne, rotTwo;
    void setup(){

        ofBackground(255);
        rotOne = 0;
        rotTwo = 0;
    }

    void update(){

        rotOne += 1;
        rotTwo += 4;
    }


    void draw(int x, int y){

        ofSetColor(0);

        ofTranslate(x, y);
        ofCircle(0, 0, 50);

        ofRotate(rotOne);
        ofTranslate(230, 0);
        ofCircle(0, 0, 20);

        ofRotate(rotTwo);
        ofTranslate(100, 0);
        ofCircle(0, 0, 10);
    }

};

class ofApp : public ofBaseApp{

	public:
		void update();
		void draw();

		void keyPressed(int key);
		void setup();
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    orbitCircle myOrbit;
		
};
