#include "Shape.h"
#include "ofGraphics.h"

Shape::Shape(const glm::vec2& position, const float rotation, const ofColor& color)
	: position{position}, rotation{rotation}, color{color} {
}

void Shape::setPosition(const glm::vec2& newPosition) {
	position = newPosition;
}

void Shape::setRotation(float newRotation) {
	rotation = newRotation;
}

void Shape::setColor(const ofColor& newColor) {
	color = newColor;
}
