//
//  ANNConnection.h
//  ANN
//
//  Created by Mitchell Nordine on 28/02/2014.
//
//

#ifndef __ANN__ANNConnection__
#define __ANN__ANNConnection__

#include "ofMain.h"

class ANNConnection {
    
public:
    
    ANNConnection(float _weight = 1.0f,
                  float _value = 1.0f,
                  float learnRate = 0.0000001f);
    
    string getName(){ return "ANNConnection"; }
    
    void setup();
    void setValue(float _value);
    void setWeight(float _weight);
    void setLearnRate(float _learnRate);
    float getValue();
    float* getValueRef();
    float getWeight();
    float getLearnRate();
    void learn(float error, float *_value = NULL);
    
private:
    float weight;
    float value;
    float learnRate;
    
};

#endif /* defined(__ANN__ANNConnection__) */
