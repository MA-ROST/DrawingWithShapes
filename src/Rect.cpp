#include "Rect.h"

#include "ofGraphics.h"

Rect::Rect(const glm::vec2& position, const float rotation, const ofColor& color, int width, int height)
	: Shape{position, rotation, color}, width{width}, height{height} {
}

void Rect::draw() {
	std::cout << "Drawing: Rect\n";

	ofPushMatrix();
	ofPushStyle();
	
	ofTranslate(position); // Missing Args (WARNING! Properties of Shape need to be protected.)   
	ofRotateRad(rotation); // Missing Args   
	ofSetColor(color);	// Missing Args

	
	ofRect (glm::vec3{0,0,0}, width, height);

	ofPopStyle();
	ofPopMatrix();
}

void Rect::setDimensions(int newWidth, int newHeight) {
	width = newWidth;
	height = newHeight;
}
