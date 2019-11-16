//
//  ofxMetro.hpp
//
//  Created by Hana on 2016/06/28.
//
//

#pragma once

#include "ofMain.h"
#include "ofxTime.hpp"

class ofxMetro {
public:
    void setup(int intervalinMsec);
    void changeInterval(int intervalInMsec);
    
    bool update();
    bool draw();


private:
    int interval;
    float nextInterval;

    float currentTime;
    float preTime;
    float dif;
    float difTotal;
    bool drawable;
    
    ofxTime time;
    
    void calcTime();
};
