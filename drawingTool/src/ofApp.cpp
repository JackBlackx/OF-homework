#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < pos.size(); i++){
        
        if ( i %10 == 0 ){
            
            
            
            pos[i].y = pos[i].y + 10 ;
        }
        
        
        
        //here's where you can animate the position, color, and radius. Have fun!
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (pos.size() > 0){ //makes sure our vector's not empty
        for (int i = 0; i < pos.size(); i++){
            
            int radius = ofMap(i, 0, pos.size(), 0, 20);
            ofSetColor(col[i]);
            ofCircle(pos[i], radius);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key ==' '){
        pos.clear();
        col.clear();
        radius.clear();
        
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
    //if you add a vector, remember to push_back a new value here.
    
    pos.push_back(ofPoint(x, y));
    col.push_back(ofColor(ofRandom(255), 0, 100));
    radius.push_back(10);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //all vectors must be cleared
    
   
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
