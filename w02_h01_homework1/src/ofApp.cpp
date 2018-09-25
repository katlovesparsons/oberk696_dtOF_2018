#include "ofApp.h"
#include "math.h" // sin and cos


//--------------------------------------------------------------
void ofApp::setup(){
    spinning = true;
    for(int i=0;i<10;i++) {
        circles[i].x = 200 + cos(i*(2.0*PI) / 10);
        circles[i].y = 200 + sin(i*(2.0*PI) / 10);
        circles[i].r = 20;
        circles[i].t = 0;
    }
    cout << "setup";
}

//--------------------------------------------------------------
void ofApp::update(){
    cout << "update";
    if (spinning) {
        for(int i = 0; i < 10; i++) {
            circles[i].t += 0.02;
            circles[i].x += cos(circles[i].t);
            circles[i].y += sin(circles[i].t);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cout << "draw";
    for(int i = 0; i < 10; i++) {
        Circle c = circles[i];
        ofDrawCircle(c.x, c.y, c.r);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    spinning = !spinning;
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
