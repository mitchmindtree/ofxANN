#include "testApp.h"

typedef ANNNeuron Neuron;
typedef ANNTrainer Trainer;
typedef ANNConnection Connection;

//--------------------------------------------------------------

testApp::testApp()
: neuron(vector<Connection>(2, Connection()))
{
    numOfLessons = 100;
}

//--------------------------------------------------------------
void testApp::setup()
{
    
    neuron.inputs[0].setValue(ofRandom(ofGetWidth()));
    neuron.inputs[1].setValue(ofRandom(ofGetHeight()));
    randomizeZ();
}

//--------------------------------------------------------------
float testApp::f(float x)
{
    return x * z;
}

//--------------------------------------------------------------

void testApp::randomizeZ()
{
    z = ofRandom(1.7f) + 0.3f;
}

//--------------------------------------------------------------
void testApp::update()
{
    
}

//--------------------------------------------------------------
void testApp::draw()
{
    
    ofBackground(20);
    
    ofLine(0.0f, f(0.0f), ofGetWindowWidth(), f(ofGetWindowWidth()));
    
    for (int i=0; i < 100; i++) {
        
        neuron.inputs[0].setValue(ofRandom(ofGetWindowWidth()));
        neuron.inputs[1].setValue(ofRandom(ofGetWindowHeight()));
        
        int guess;
        guess = neuron.guessAnswer();
        if (guess == 1) {
            ofCircle(neuron.inputs[0].getValue(), neuron.inputs[1].getValue(), 5.0f);
        }
        
        int answer;
        if (neuron.inputs[1].getValue() > f(neuron.inputs[0].getValue())) {
            answer = 1;
        }
        else {
            answer = -1;
        }
        
        int error = answer - guess;
        
        neuron.learn(error);
        
    }
    
    ofDrawBitmapString("x weight = " + ofToString(neuron.inputs[0].getWeight()) + "\ny weight = " + ofToString(neuron.inputs[1].getWeight()), ofPoint(ofGetWidth()-300, 50));
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 32) {
        randomizeZ();
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
