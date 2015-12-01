#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
	m_pFBO.allocate(ofGetWidth(), ofGetHeight());
	m_pFBO.begin();
	ofClear(255, 255, 255);
	m_pFBO.end();

	m_pGui.setup();
	m_pGui.add(m_pBrushSize.setup("BRUSH SIZE", 2.0f, 0.0f, 60.0f));
	m_pGui.add(m_pColor.setup("COLOR", 0, 255, 5, 5));

	m_pSphere.setRadius(m_pBrushSize);
}

//--------------------------------------------------------------
void ofApp::update() {
	//ofSetColor(m_pRed, m_pGreen, m_pBlue);
	//ofDrawCircle(250, 50, 20);
}

//--------------------------------------------------------------
void ofApp::draw() {
	m_pFBO.draw(0, 0);
	m_pGui.draw();
	//ofSetColor(m_pRed, m_pGreen, m_pBlue);
	//ofDrawCircle(250, 50, 20);

	
	//m_pSphere.rotate(spinX, 1.0, 0.0, 0.0);
	//m_pSphere.rotate(spinY, 0, 1.0, 0.0);

	// get all the faces from the icoSphere, handy when you want to copy
	// individual vertices or tweak them a little ;)
	vector<ofMeshFace> triangles = m_pSphere.getMesh().getUniqueFaces();

	// now draw
	m_pSphere.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	/*switch (key)
	{
	case 'a':
		if (redCounter < 256)
			redCounter += 10;
		else
			redCounter = 0;
		break;
	case 's':
		if (blueCounter < 256)
			blueCounter += 10;
		else
			blueCounter = 0;
		break;
	case 'd':
		if (greenCounter < 256)
			greenCounter += 10;
		else
			greenCounter = 0;
		break;
	}*/
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	/*switch (key)
	{
	case 'f':
	m_pDrums.stop();
	break;
	}*/
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
	m_pFBO.begin();
	ofSetColor(m_pColor);
//	m_pSphere.setRadius(m_pBrushSize);
//	m_pSphere.setPosition(x, y, 0);
//	m_pSphere.draw();
	ofDrawCircle(x, y, m_pBrushSize);
	
	m_pFBO.end();
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

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
