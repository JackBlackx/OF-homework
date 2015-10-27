#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(70);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
    
    ofBackground(255);
    
    float colourDifference  ;
    float numCircle = 40;
    
    
    for ( int  x = 10 ; x >= 0 ;  x-- ) {
    
      for ( int  i = numCircle ; i >= 0 ;  i-- ) {
       
        float r = i*sin(i)*ofRandom(50);
        float g = i*cos(i)*ofRandom(20);
        float b = i*sin(x)*ofRandom(50);
    
    float canterX = ofGetWidth() ;
    float canterY = 1 ;
    float radius = i*(x+4) ;
        
     ofSetColor( r,g,b) ;
            
    ofCircle(ofGetWidth()/2, ofGetHeight(), radius);
    ofCircle(1, 1, radius);
    ofCircle(canterX, canterY, radius);
          
    }
  }
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
