//
//  ANNPerceptron.h
//  ANN
//
//  Created by Mitchell Nordine on 28/02/2014.
//
//

#ifndef __ANN__ANNPerceptron__
#define __ANN__ANNPerceptron__

/* Header Includes */

#include "ofMain.h"
#include "ANNConnection.h"
#include "ANNTrainer.h"

/* Class */

class ANNNeuron {
    
    typedef ANNNeuron Neuron;
    typedef ANNConnection Connection;
    typedef ANNTrainer Trainer;
    
public:
    
    /* Constructors & Destructors */
    
    ANNNeuron();
    ANNNeuron(vector<Connection> _inputs);
    
    /* Functions */
    
    virtual string getName(){ return "ANNNeuron"; }
    void init();
    void setup(vector<Connection> _inputs);
    int feedforward(vector<Connection> *_inputs = NULL);
    int guessAnswer();
    int activate(float sum);
    void train(Trainer *trainer);
    void learn(float error);
    
    
    /* Variable Declaration */
    
    vector<Connection> inputs;
    int guess;
    Connection output;
    bool bias;
    
};



#endif /* defined(__ANN__ANNPerceptron__) */
