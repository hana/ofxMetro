//
//  ofxTime.hpp
//
//  Created by Hana on 2016/06/28.
//
//

#pragma once

#include "ofMain.h"
#include "sys/time.h"

class ofxTime {
public:
    void setup();
    float getRunningTimeInMillis();
    float getRunningTimeInSeconds();

private:
    struct timeval start_time;
    struct timeval now;
};
