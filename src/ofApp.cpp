#include "ofApp.h"
#include "Rect.h"
#include "Heart.h"

//--------------------------------------------------------------
void ofApp::setup() {
	gui.setup();
	gui.add(rectangleWidth.setup("Rectangle Width", 50, 5, 500));
	gui.add(rectangleHeight.setup("Rectangle Height", 50, 5, 500));
	gui.add(heartSize.setup("Heart Size", 50, 5, 500));
	gui.add(shapeRotation.setup("Shape Rotations (Rads)", 0, 0, TWO_PI));
	gui.add(shapeColor.setup("Shape Color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
}

//--------------------------------------------------------------
void ofApp::update() {
	if (!userIsEditingShape) return;
	
	if (!shapes.empty()) {
		shapes.back()->setColor (shapeColor);
		shapes.back()->setRotation (shapeRotation);
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (const unique_ptr<Shape>& shape : shapes) {
		shape->draw();
	}

	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (!mouseIsOnCanvas) return;

	const int x = ofGetMouseX();
	const int y = ofGetMouseY();

	switch (key) {
		case 'r': // Adding a rect
		shapes.push_back (std::make_unique <Rect> (
			glm::vec2 {x, y}, shapeRotation, shapeColor, rectangleWidth,
			rectangleHeight));
		break;
	case 'h': // Adding a heart
		shapes.push_back (std::make_unique <Heart> (
			glm::vec2 {x, y}, shapeRotation, shapeColor,heartSize));
		break;
	case 'e':
		userIsEditingShape = true;
		break;
	case 'p':
		if (!shapes.empty()) {
			shapes.back()->setPosition (glm::vec2{x,y});
		}
		break;
	case 'd': 
		if (!shapes.empty()) {
			shapes.pop_back();
		}
		break;
	default:
		std::cout << "Unknown key: " << static_cast<char>(key) << "\n";
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	userIsEditingShape = false;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
	mouseIsOnCanvas = true;
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
	mouseIsOnCanvas = false;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
