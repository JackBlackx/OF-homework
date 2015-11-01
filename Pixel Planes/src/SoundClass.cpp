//
//  SoundClass.cpp
//  classes_the_sound
//
//  Created by 夏瀚 on 15/10/30.
//
//

#include "SoundClass.h"


void SoundClass::setup(){
    
    gun.loadSound("toy gun sound.mp3");
    gun.setVolume(0.2);
    
    
    beijing.loadSound("beijing.mp3");
    beijing.setVolume(0.3);
    beijing.setLoop(true);
    
    
//    if ( ofGetElapsedTimeMillis() - timer > 200 ) {
//         gun.setLoop(true);
//        timer = ofGetElapsedTimeMillis();}

    drums.loadSound("drums.wav");
    drums.setVolume(0.5);
    drums.setLoop(true);
    
    beijing.play ();
    
}

void SoundClass::keyPressed(int key ) {
    switch ( key ) {
        case ' ':
            drums.play ();
            beijing.stop ();
            break;
            
        case OF_KEY_LEFT:
            drums.setSpeed(-0.5);
        break;
            
        case  OF_KEY_RIGHT :
            drums.setSpeed(+0.5);
            break;
            
            
            case 'a':
            drums.stop();
            break ;
            
            
        case 'q':
            beijing.play ();
            break;

            
            

    }
}

    
    void SoundClass::mousePressed(int button) {
        switch ( button ) {
            case OF_MOUSE_BUTTON_LEFT:
                gun.play();
                break;
                
        
            

        }
}