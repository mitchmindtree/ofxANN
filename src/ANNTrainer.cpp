//
//  ANNTrainer.cpp
//  ANN
//
//  Created by Mitchell Nordine on 28/02/2014.
//
//

#include "ANNTrainer.h"

typedef ANNTrainer Trainer;

//------------------------------

Trainer::ANNTrainer()
{
    
}

Trainer::ANNTrainer(vector<Connection> _inputs, int _answer)
{
    setup(_inputs, _answer);
}

//------------------------------

void Trainer::setup(vector<Connection> _inputs, int _answer)
{
    inputs = _inputs;
    answer = _answer;
}

//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------