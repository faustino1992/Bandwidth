//
//  SceneBumpers.h
//  BANDWIDTH
//
//  Created by Josh Nimoy on 10/20/11.
//  Copyright 2011 Josh Nimoy. All rights reserved.
//

#ifndef BANDWIDTH_SceneBumpers_h
#define BANDWIDTH_SceneBumpers_h

#include "Scene.h"
#include "ofMain.h"
#include "ContactListener.h"
#include "Box2D/Box2D.h"


class SceneBumpers:public Scene{
public:
    virtual void setup();
    virtual void update();
    virtual void draw(float alpha);
    virtual void keyPressed(int key);
    virtual void mouseMoved(int x,int y);
    virtual void mouseDragged(int x,int y,int button);
    virtual void mousePressed(int x,int y,int button);
    virtual void mouseReleased(int x,int y,int button);
    virtual void reset();
    static SceneBumpers *instance;
    
    b2World *world;
	b2MouseJoint *draggingMouseJoint;
	b2Body *groundBody;
	
	ofSoundPlayer  snd0;
		
    vector<b2Body*>balls;
    vector<b2Body*>obstacles;
    
	float buttonAlpha;
    void createObstacle(int x,int y);
    ContactListener *contactListener;
    
    float welltempered[128];
    
    void removeBall(b2Body*b);
    b2Body *draggingObstacle;
    bool newBall;
    int dropRate;

};

#endif
