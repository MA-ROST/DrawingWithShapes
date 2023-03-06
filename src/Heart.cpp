#include "Heart.h"

#include "ofGraphics.h"

Heart::Heart(const glm::vec2& position, const float rotation, const ofColor color, int size)
	: Shape{position, rotation, color}, size{size} {
}

void Heart::draw() {
	ofPushMatrix();
	ofPushStyle();
	
	ofTranslate(position); // Missing Args (WARNING! Properties of Shape need to be protected.)   
	ofRotateRad(rotation); // Missing Args   
	ofSetColor(color);	// Missing Args

	ofBeginShape();
	float i = 0;
	while (i < TWO_PI) {
		float r = (2 - 2 * sin(i) + sin(i) * sqrt(abs(cos(i))) / (sin(i) + 1.4)) * -(size * 0.25);
		float x = cos(i) * r;
		float y = sin(i) * r;
		ofVertex(x, y);
		i += 0.005 * HALF_PI * 0.5;
	}
	ofEndShape(true);
	ofPopStyle();
	ofPopMatrix();
}

void Heart::setSize(int newSize) {
	size = newSize;
}
