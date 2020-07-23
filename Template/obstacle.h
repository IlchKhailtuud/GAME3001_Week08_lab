#pragma once
#include "../src/DisplayObject.h"

class Obstacle: public DisplayObject
{
public:
	Obstacle();
	~Obstacle();

	//DisplayObject Life Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;

private:
};
