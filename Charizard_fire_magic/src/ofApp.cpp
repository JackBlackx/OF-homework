#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    penhuolong . loadImage("penhuolong.png");
    beijing . loadImage("2.jpg");
    huo . loadImage("huo.png");
    hh.loadSound("1.mp3");
    hh.setVolume(0.8);
    hh.play ();


}

//--------------------------------------------------------------
void ofApp::update(){
    for ( int i = 0 ; i  <  trail.size() ; i++ ) {
        if ( i%2  == 0 ){
        }
        
        trail[i].x = trail[i].x + 40 ;
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    beijing.draw(0,0,1450,900);
    
    if (trail.size() > 0){
        ofBeginShape();
        for (int i = 0; i < trail.size(); i++){
            
          int chang = ofMap(trail.size(), 0, i, 0, 60);
           int kuan = ofMap(trail.size(), 0, i, 0, 33);
            huo.draw(trail[i],chang,kuan);

            if (trail.size() > 15){
                trail.erase(trail.begin());
                
             }
           }
                ofEndShape();
         }
            ofSetColor(255);
            penhuolong.draw(mouseX-250,mouseY-150,300,300);
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
    if ( ofGetElapsedTimeMillis() - timer > 15 ) {
        
       trail.push_back(ofPoint(x, y));
        
        timer = ofGetElapsedTimeMillis();
    }

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
  trail.clear();
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
