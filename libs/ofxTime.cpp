//
//  ofxTime.cpp
//
//  Created by Hana on 2016/06/28.
//
//

#include "ofxTime.hpp"

void ofxTime::setup() {
    gettimeofday(&start_time, NULL);
}

float ofxTime::getRunningTimeInSeconds() {
    gettimeofday(&now, NULL);

    double sec = (double)(now.tv_sec - start_time.tv_sec);
    double micro = (double)(now.tv_usec - start_time.tv_usec);
    double passed = sec + micro / 1000.0 / 1000.0;

    return passed;
}

float ofxTime::getRunningTimeInMillis() {
    gettimeofday(&now, NULL);

    double sec = (double)(now.tv_sec - start_time.tv_sec);
    double micro = (double)(now.tv_usec - start_time.tv_usec);
    double passed = sec + micro / 1000.0 / 1000.0;
    passed *= 1000.0;

    return passed;
}
