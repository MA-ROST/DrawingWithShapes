#include "Heart.h"

#include "ofGraphics.h"

Heart::Heart(const glm::vec2& position, const float rotation, const ofColor color, int size)
	: Shape{position, rotation, color}, size{size} {
}

void Heart::draw() {

}

void Heart::setSize(int newSize) {
	size = newSize;
}
