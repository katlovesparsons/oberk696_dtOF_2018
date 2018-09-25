#pragma once

#include "ofMain.h"

class Circle {
public:
    glm::vec2 pos;
    float r;
    void setup(glm::vec2 position, float radius) {
        pos = position;
        r = radius;
    }
    void update(glm::vec2 diff) {
        pos += diff;
    }
    void draw() {
        cout << "Circle.draw ";
        ofDrawCircle(pos, r);
    }
};

class Cloud {
public:
    glm::vec2 pos;
    Circle parts[3];
    void setup(glm::vec2 position) {
        pos = position;
        parts[0].setup(position, 50);
        parts[1].setup(position + glm::vec2(40, 0), 100);
        parts[2].setup(position + glm::vec2(90, 0), 75);
    }
    void update(glm::vec2 diff) {
        pos += diff;
        parts[0].update(diff);
        parts[1].update(diff);
        parts[2].update(diff);
    }
    void draw() {
        cout << "Cloud.draw";
        parts[0].draw();
        parts[1].draw();
        parts[2].draw();
    }
};

class ofApp : public ofBaseApp{

	public:
    glm::vec2 destination; // big cloud's destination is interactive
    Cloud bigCloud;
    Cloud littleCloud;
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
