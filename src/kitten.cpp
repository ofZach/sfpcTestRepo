//
//  kitten.cpp
//  sfpcTest
//
//  Created by zach on 4/28/15.
//
//

#include "kitten.h"


void kitten::setup(){
    
    img.loadImage("kitten.jpg");
    
    pos.set(ofRandom(0,1000), ofRandom(0,1000));
}

void kitten::draw(){
    
    img.draw(pos.x, pos.y);
}