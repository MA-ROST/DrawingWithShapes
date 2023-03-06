#pragma once
#include "Shape.h"

class Rect : public Shape {
	int width, height;
public:
	Rect(const glm::vec2& position, float rotation, const ofColor& color, int width, int height);
	void draw() override;
	void setDimensions(int newWidth, int newHeight);
};
