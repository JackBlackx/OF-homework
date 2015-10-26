#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
      ofSetCircleResolution(50);
    
         myImage . loadImage("5.jpg");
    
    rectX = 700;
    rectY= 500;
    
    rect1 = 695;
    rect2= 495;
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground (0);
    
    ofSetColor(255);
    myImage . draw (0,0,1300,900);
    
    
    
    
    
      ofSetCircleResolution (ofMap(mouseX, 0, ofGetWidth(), 3, 25)),
    
   
    
 //-------------------------------------------------------------- left top round
    ofSetColor( 225,95,90 ,150);  // big red
    ofCircle  (160, 170, 160);
    ofSetColor( 225,95,90 ,200);
    ofCircle(160, 170, 150);
    ofSetColor( 225,95,90 );
    ofCircle(160, 170, 140);

    
    ofSetColor( 200,20,100);    // little red
    ofCircle(250, 300, 60);
    
    
    ofSetColor( 0 );           //  black
    ofCircle(160, 170, 130);
    
    
    ofSetColor( 80,0,mouseY );   // purple
    ofCircle(160, 170, 63);
    ofSetColor( 75,42,113 );
    ofCircle(160, 170, 25);
    
    
    //--------------------------------------------------------------left down round
    
    ofSetColor( 40,180,200 ,100); // blue
    ofCircle(130, 641, 80);
    ofSetColor( 40,180,200 ,150);
    ofCircle(130, 641, 70);
    ofSetColor( mouseY,180,200 );
    ofCircle(130, 641, 60);

    ofSetColor(0 );
    ofCircle(130, 641, 53);
    ofSetColor( 255,200,70 );   // yellow o
    ofCircle(130, 641, 50);
    
    
    //--------------------------------------------------------------mid  round
    
    
    ofSetColor( 255,200,70,200);  // blue yellow
    ofCircle(500,780, 77);
    ofSetColor( 255,200,70);
    ofCircle(500,780, 60);
    ofSetColor( 40,180,230,mouseY );
    ofCircle(500,780, 50);
    
    
    ofSetColor(0);
    ofCircle(645,270, 46);
    ofSetColor( 255 );       // white black white
    ofCircle(645,270, 44);
    ofSetColor( 0 );
    ofCircle(645,270, 35);
    ofSetColor( 230,0,mouseY);
    ofCircle(645,270, 25);
    
    
    ofSetColor( 200,20,5 );         // little red
    ofCircle(643,175, 10);
    
    ofSetColor( 10,mouseY,170);
    ofCircle(714,75,20);
    
    
    ofSetColor( 0,0,0,mouseX);       // mid
    ofCircle(775,219,22);
    ofSetColor( 220,0,150,mouseX);
    ofCircle(775,219,20);
    
    
//    ofNoFill();
//    ofSetColor( 200,20,5 );
//    ofRect(200, 434, 150,100);
//    ofFill();
    
    ofSetColor( 0);               // blue
    ofCircle(860,125,25);
    ofSetColor( 40,180,230);
    ofCircle(860,125,22);
    
    
    //--------------------------------------------------------------left top
    
    
    
//    
//    ofNoFill();
//    ofSetColor( 0);
//    ofCircle(999,187,52);
//    ofFill();
//    
//    
//    
//    
//
//    ofSetColor( 50,255,50);
//    ofCircle(1030,187,40);
//
//    
//    
//    ofSetColor( 255,180,10,210);
//    ofCircle(999,187,50);
//    
//    ofSetColor( mouseY,0,255);
//    ofCircle(1030,187,20);
    
    
    



    
    //--------------------------------------------------------------left down RECT
    
    
    
    
    ofSetColor(255,0,192,mouseY);
    ofRect(1218, 350, 23, 23)  ;
    
    ofSetColor(168,0,255);
    ofRect(1218, 383, 23, 23)  ;
    
    ofSetColor(168,0,255);
    ofRect(1250, 350, 23, 23)  ;
    
    ofSetColor(255,0,192,mouseX);
    ofRect(1250, 383, 23, 23)  ;
    
    
    ofSetColor( 255,0,90);
    ofCircle(1125,752,58);
    
    ofSetColor( 4,220,50);
    ofCircle(1125,752,50);
    
    
    ofSetColor(100,0,252,mouseX);
    ofRect(1180,785, 50,50)  ;
    
    
    
    ofSetColor(mouseY,0,252,mouseX);
    ofTriangle(1100, 770, 1000, 760, 1074, 700);
    
    
    
     //-------------------------------------------------------------- fun
    
    ofSetColor(0);
    ofCircle(mouseX,mouseY, 18);
    ofSetColor(mouseY,255,0);
    
    ofCircle(mouseX,mouseY, 15);
    ofLine(1125,752, mouseX, mouseY);
    
    
    ofSetColor(mouseX,0,255);
    ofRect(rect1, rect2,110,110);
    ofSetColor(mouseY,255,0);
    ofRect(rectX, rectY,100,100);
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    
    
    if (key == 'd'){
        rectX = rectX + 10;
        
    }
    
    if (key == 'a'){
        rectX = rectX - 10;
        
    }
    
    if (key == 's') {
        rectY = rectY +10;
        
    }
    
    if (key == 'w') {
        rectY = rectY -10;
    }

    
    
    if (key == 'd'){
        rect1 = rect1 + 10;
        
    }
    
    if (key == 'a'){
        rect1 = rect1 - 10;
        
    }
    
    if (key == 's') {
        rect2 = rect2 +10;
        
    }
    
    if (key == 'w') {
        rect2 = rect2 -10;
    }
    

    
    

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    
    rectX = x;
    rectY = y;
    rect1 = x-5;
    rect2 = y-5;

    
    

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
    
    rectX = x;
    rectY = y;
    rect1 = x-5;
    rect2 = y-5;
    

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
