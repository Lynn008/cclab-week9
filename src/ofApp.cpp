#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
     mCircleRadius = 10;
    height = -1;
    mAcceleration = 0;
    mPos = ofVec2f(ofGetWindowWidth()* 0.5, height);
    
    
    mPressed = false;
    mAcceleration = 0;
    ofSetBackgroundColor(156, 146, 157);
}

//--------------------------------------------------------------
void ofApp::update(){
    /*if (mPressed) {
        mAcceleration += 1;
        height += mAcceleration;
        if (height> ofGetWindowHeight()){
            height = ofGetWindowHeight();
        }
        mPos = ofVec2f(ofGetWindowWidth()* 0.5, height);
    }*/
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(213, 216, 215);
    ofSetBoxResolution(50);
    ofDrawCircle(mPos, mCircleRadius);
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()* 0.5,ofGetWindowHeight()* 0.5,0);
    ofSetHexColor(0xABBDBB);
    ofFill();
    ofSetPolyMode(OF_POLY_WINDING_ODD);
    ofRotate(ofGetFrameNum() * 3, mPos.x, mPos.y, 3);
    ofBeginShape();
    float angleStep 	= TWO_PI/(0.0f + sin(40/4.0f) * 20);
    float radiusAdder 	= 0.8f;
    float radius 		= 0;
    for (int i = 0; i < 300; i++){
        float anglef = (i) * angleStep;
        float x = radius * cos(anglef);
        float y = radius * sin(anglef);
        //x += ofRandom(-1,3);
        //y += ofRandom(-2,3);
        ofVertex(x,y);
        radius 	+= radiusAdder;
    }
    ofEndShape(OF_CLOSE);
    ofPopMatrix();
    ofDrawBitmapString("x" +ofToString(mPos.x) + "y" + ofToString(mPos.y), mPos +ofVec2f(40, -20));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mPos.x = x;
    mPos.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    mPressed = true;
    
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
