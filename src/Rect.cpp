#include "Rect.h"

#include "ofGraphics.h"

Rect::Rect(const glm::vec2& position, const float rotation, const ofColor& color, int width, int height)
	: Shape{position, rotation, color}, width{width}, height{height} {
}

void Rect::draw() {
}

void Rect::setDimensions(int newWidth, int newHeight) {
	width = newWidth;
	height = newHeight;
}
