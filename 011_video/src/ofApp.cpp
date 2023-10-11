#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    video.load("video.mp4");
    video.setVolume(0.3); // 0.0 - 1.0
    video.play(); // won't render on stream without video.draw()
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update(); // will make sure it plays all frames
    video.setSpeed(0.6); // Need to put it here, because we need to set speed for each frame.
}

//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(0, 0); // Won't play additional frames without video.update()
}

//--------------------------------------------------------------
void ofApp::exit(){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
