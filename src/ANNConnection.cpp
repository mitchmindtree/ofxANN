//
//  ANNConnection.cpp
//  ANN
//
//  Created by Mitchell Nordine on 28/02/2014.
//
//

#include "ANNConnection.h"

typedef ANNConnection Connection;

//------------------------------

Connection::ANNConnection(float _weight, float _value, float _learnRate)
{
    setWeight(_weight);
    setValue(_value);
    setLearnRate(_learnRate);
}

//------------------------------

void Connection::setValue(float _value)
{
    value = _value;
}

//------------------------------

void Connection::setWeight(float _weight)
{
    weight = _weight;
}

//------------------------------

void Connection::setLearnRate(float _learnRate)
{
    learnRate = _learnRate;
}

//------------------------------

float Connection::getValue()
{
    return value;
}

//------------------------------

float* Connection::getValueRef()
{
    return &value;
}

//------------------------------

float Connection::getWeight()
{
    return weight;
}

//------------------------------

float Connection::getLearnRate()
{
    return learnRate;
}

//------------------------------

void Connection::learn(float error, float *_value)
{
    if (!_value) {
        _value = getValueRef();
    }
    weight += learnRate * error * *_value;
    /* cout << "Value = " << *_value << " | Weight = " << weight << " | LearnRate = " << learnRate << " | Error " << error << endl; */
}

//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------



//------------------------------