//
//  SoundClass.h
//  classes_the_sound
//
//  Created by 夏瀚 on 15/10/30.
//
//

#ifndef __classes_the_sound__SoundClass__
#define __classes_the_sound__SoundClass__

#include <ofMain.h>

class SoundClass {
    public :
    void setup();
    void keyPressed( int key );
    void mousePressed(int button );
    
    ofSoundPlayer drums ;
    ofSoundPlayer gun ;
    
    ofSoundPlayer beijing ;
    
    float timer ;

    
};

#endif /* defined(__classes_the_sound__SoundClass__) */
