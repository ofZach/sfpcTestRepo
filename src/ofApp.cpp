#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    ofSetColor(ofRandom(0,255), ofRandom (0,255), ofRandom (0,255));
    for (int i = 0; i < 100; i++){
        
        ofLine(0, 500 + ofRandom(-100,100), ofGetWidth(),
               500 + ofRandom(-100,100));
        
    }
    for (int i = 0; i < 100; i++){
    ofRect(mouseX, i, 100,.5*mouseX);
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
