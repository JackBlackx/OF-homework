#pragma once

#include "ofMain.h"
#include "SoundClass.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    SoundClass sound ;
    
    vector<ofPoint> trail;
    
    ofImage  myImage ;
    
    ofImage  myImage2 ;
    
    ofImage  myImage3 ;
    
    bool bKeyPressed ;
    
    float timer ;
    float timer2 ;
    
    float x,y ;
    
    
    vector<ofPoint> pos;
    vector<ofPoint> vel;
    vector<float> radius;
    vector<ofColor> col ;

		
};
