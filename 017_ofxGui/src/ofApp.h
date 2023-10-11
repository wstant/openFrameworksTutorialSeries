#pragma once

#include "ofMain.h"
#include "ofxGui.h" // Give access to add on

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
		
    ofxPanel gui;
    
    ofxIntSlider intSlider;
    ofxFloatSlider floatSlider;
    
    ofxToggle toggle;
    ofxButton button;
    ofxLabel label;
    
    // Fields to type things in
    ofxIntField intField;
    ofxFloatField floatField;
    ofxTextField textField;
    
    // Vector sliders
    ofxVec2Slider vec2Slider;
    ofxVec3Slider vec3Slider;
    ofxVec4Slider vec4Slider;
};