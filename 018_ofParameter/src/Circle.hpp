//
//  Circle.hpp
//  018_ofParameter
//
//  Created by Will Stanton on 2023-10-11.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h" // allows us to access things in openframeworks like ofParameter

class Circle {
public:
    void setup();
    
    ofParameterGroup params;
    ofParameter<ofVec3f> colors;
    ofParameter<int> x;
    ofParameter<int> y;
};

#endif /* Circle_hpp */
