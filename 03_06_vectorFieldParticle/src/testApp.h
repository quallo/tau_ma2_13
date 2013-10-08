#pragma once

#include "ofMain.h"
#include "vectorField.h"
#include "Particle.h"

class testApp : public ofSimpleApp{
	
public:
	
	void setup();
	void update();
	void draw();
	
	void keyPressed  (int key);
	void keyReleased (int key);
	
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased();
	
	vectorField VF;
	vector <Particle> particles;
	
	int addMode;
};

