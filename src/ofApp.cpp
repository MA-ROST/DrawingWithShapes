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
}

//--------------------------------------------------------------
void ofApp::draw() {
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (!mouseIsOnCanvas) return;

	const int x = ofGetMouseX();
	const int y = ofGetMouseY();

	switch (key) {
	case 'r':
		break;
	case 'h':
		break;
	case 'e':
		userIsEditingShape = true;
		break;
	case 'p':
		break;
	case 'd':
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
