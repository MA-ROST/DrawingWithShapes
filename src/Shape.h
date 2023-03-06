#pragma once
#include "ofColor.h"
#include <glm/vec2.hpp>

class Shape {
protected:
	glm::vec2 position;
	float rotation;
	ofColor color;
	Shape(const glm::vec2& position, float rotation, const ofColor& color);

public:
	virtual ~Shape() = default;

	virtual void draw() = 0;

	void setPosition(const glm::vec2& newPosition);
	void setRotation(float newRotation);
	void setColor(const ofColor& newColor);
};
