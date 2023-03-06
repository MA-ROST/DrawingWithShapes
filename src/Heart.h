#pragma once
#include "Shape.h"

class Heart : public Shape {
	int size;
public:
	Heart(const glm::vec2& position, float rotation, ofColor color, int size);
	void Heart::draw() override;
	void setSize(int newSize);
};
