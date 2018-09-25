#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(200,200,250);
    ofSetCircleResolution(100);
    bigCloud.setup(glm::vec2(200, 200));
    littleCloud.setup(glm::vec2(150, 300));
}

//--------------------------------------------------------------
void ofApp::update(){
    // big cloud uses interpolation
    glm::vec2 diff = (destination - bigCloud.pos) / 100.0;
    bigCloud.update(diff);
    littleCloud.update(glm::vec2(1, 0.5));
}

//--------------------------------------------------------------
void ofApp::draw(){
    bigCloud.draw();
    littleCloud.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int   key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x,   int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    destination = glm::vec2(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
