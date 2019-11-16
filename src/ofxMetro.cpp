//
//  ofxTime.cpp
//
//  Created by Hana on 2016/06/28.
//
//

#include "ofxMetro.hpp"

void ofxMetro::setup(int intervalinMsec) {
    interval = intervalinMsec;
    nextInterval = interval;
    time.setup();
    currentTime = 0;
    preTime = 0;
    difTotal = 0;
    drawable = false;
}

void ofxMetro::changeInterval(int intervalInMsec) {
    interval = intervalInMsec;
    nextInterval = interval;
}

void ofxMetro::calcTime() {
    preTime = currentTime;
    currentTime = time.getRunningTimeInMillis();
    dif = currentTime - preTime;
    difTotal += dif;
}


bool ofxMetro::update() {
    this->calcTime();
    
    if(difTotal >= nextInterval) {
        drawable = true;

        //Correct next interval,
        float delay = difTotal - interval;
        nextInterval = interval -delay;

        //Reset variables
        difTotal = 0;

        return true;
    } else {
        return false;
    }
}


bool ofxMetro::draw() {
    if(drawable == true) {
        drawable = false;
        return true;
    } else {
        return false;
    }
}

