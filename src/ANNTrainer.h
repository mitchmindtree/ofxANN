//
//  ANNTrainer.h
//  ANN
//
//  Created by Mitchell Nordine on 28/02/2014.
//
//

#ifndef __ANN__ANNTrainer__
#define __ANN__ANNTrainer__

#include "ofMain.h"
#include "ANNConnection.h"

class ANNTrainer {
    
    typedef ANNConnection Connection;
    
public:
    
    ANNTrainer();
    ANNTrainer(vector<Connection> _inputs, int _answer);
    
    string getName(){ return "ANNTrainer"; }
    
    void setup(vector<Connection> _inputs, int _answer);
    
    vector<Connection> inputs;
    int answer;
    
private:
    
    
};

#endif /* defined(__ANN__ANNTrainer__) */
