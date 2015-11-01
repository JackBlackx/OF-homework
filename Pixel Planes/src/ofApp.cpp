#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending();
    
     myImage . loadImage("5.png");
    
    myImage2 . loadImage("1.png");
    
    myImage3 . loadImage("11.png");
    
    sound.setup();
    
    
    timer = ofGetElapsedTimeMillis();
    

    bKeyPressed=false;
    x=ofGetWidth()/2;
    y=ofGetHeight()/2;
    
    
    
    for (int i = 0; i < 500; i++){
        ofPoint randomPos;
        randomPos.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        pos.push_back(randomPos);
        
        ofPoint randomVel;
        randomVel.set(ofRandomuf()*0.1, ofRandomuf()*0.2);
        vel.push_back(randomVel);
        
        radius.push_back(ofRandom(0.5,2));
        
        ofColor color;
        color.set(ofRandom(0,255),ofRandom(150,255),ofRandom(220,255),ofRandom(200,255));
        col.push_back (color);
        
        
    }

}

//--------------------------------------------------------------


void ofApp::update(){
    
    if (bKeyPressed==true){
        y += 20;;
    }
    
    
    
    for ( int i = 0 ; i  <  trail.size() ; i++ ) {
        if ( i%2  == 0 ){
      }
    
        trail[i].y = trail[i].y - 10 ;
    }

    for (int i = 0; i < 500; i++){
        pos[i] += vel[i];
        
        if (pos[i].x + radius[i] > ofGetWidth() || pos[i].x - radius[i] < 0) {
            vel[i].x *= -1;
        }
        
        if (pos[i].y + radius[i] > ofGetHeight() || pos[i].y - radius[i] < 0) {
            vel[i].y *= -1;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
   for (int i = 0; i < 500; i++){
        ofSetColor(col[i]);
        ofCircle(pos[i], radius[i]);
        
    }

    if ( ofGetElapsedTimeMillis() - timer2 > 50 ) {

     ofSetColor(255);
     myImage2 . draw (ofGetWidth()/2-500,ofGetHeight()/2-300);
        
        timer2 = ofGetElapsedTimeMillis();
    }
    
//--------------------------------------------------------------
    
    if (trail.size() > 0){ //makes sure our vector's not empty
        ofBeginShape();
        for (int i = 0; i < trail.size(); i++){
            
            
            ofSetColor(255,200,100);
            ofRectRounded(trail[i]-3, 12 ,24,3);
            
            ofSetColor(255,255,53);
            ofRectRounded(trail[i]-2, 10 ,20,3);
            
            
            ofColor col;
            int red = 255;   //ofMap(i*0.1, 0, trail.size(), 0, 255);
            int green = 73;   //ofMap(i, trail.size(), 0, 0, 255);
            int blue = 158;   //ofMap(i*i, 0, trail.size(), 0, 255);
            ofSetColor(red, green, blue);
            ofRectRounded(trail[i], 5 ,16,3);
            
            
            if (trail.size() > 50){
                
                
                trail.erase(trail.begin());
               // trail.clear();
                
            }
            
       }
        
        ofEndShape();
        
    }
//--------------------------------------------------------------
    
    ofSetColor(255);  ///  fei ji
    myImage . draw (mouseX-47,mouseY-50,100,100);
    
   ofSetColor(255);
            myImage3 . draw (0,y-16000,1450,15000);

    if ( y-16000> ofGetHeight()){
        y = -16000+y;
    }
    
    cout<<trail.size()<<endl;
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    bKeyPressed = true;

    
    if (key == ' '){
        
        myImage2.clear();
  }
    sound.keyPressed(key);

}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
if ( ofGetElapsedTimeMillis() - timer > 200 ) {
    
    
     trail.push_back(ofPoint(x, y));
        
        timer = ofGetElapsedTimeMillis();
    }
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    if ( ofGetElapsedTimeMillis() - timer > 200 ) {
        
   sound.mousePressed(button);
    
  trail.push_back(ofPoint(x, y));
        
       timer = ofGetElapsedTimeMillis();
    }
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
