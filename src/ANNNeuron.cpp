//
//  ANNPerceptron.cpp
//  ANN
//
//  Created by Mitchell Nordine on 28/02/2014.
//
//

#include "ANNNeuron.h"

typedef ANNNeuron Neuron;
typedef ANNConnection Connection;
typedef ANNTrainer Trainer;

//------------------------------

Neuron::ANNNeuron()
{
    init();
}

Neuron::ANNNeuron(vector<Connection> _inputs)
{
    init();
    setup(_inputs);
}

//------------------------------

void Neuron::init()
{
    inputs.clear();
}

//------------------------------

void Neuron::setup(vector<Connection> _inputs)
{
    inputs = _inputs;
}

//------------------------------

int Neuron::feedforward(vector<Connection> *_inputs)
{
    if (_inputs == NULL) {
        _inputs = &inputs;
    }
    float sum = 0.0f;
    for (int i=0; i < _inputs->size(); i++) {
        sum += _inputs->at(i).getValue() * inputs.at(i).getWeight();
    }
    return activate(sum);
}

//------------------------------

int Neuron::guessAnswer()
{
    return guess = feedforward(NULL);
}

//------------------------------

int Neuron::activate(float sum)
{
    if (sum >= 0) {
        return 1;
    }
    else {
        return -1;
    }
}

//------------------------------

void Neuron::train(Trainer *trainer)
{
    guess = feedforward(&trainer->inputs);
    float error = trainer->answer - guess;
    for (int i = 0; i < inputs.size(); i++) {
        inputs[i].learn(error, trainer->inputs.at(i).getValueRef());
    }
}

//------------------------------

void Neuron::learn(float error)
{
    for (int i=0; i < inputs.size(); i++) {
        inputs[i].learn(error);
    }
}

//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------