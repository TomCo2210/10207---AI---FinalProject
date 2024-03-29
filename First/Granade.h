#pragma once
#include "Bullet.h"
#include "Node.h"

const int NUM_BULLETS = 16;

class Granade
{
public:
	Granade();
	Granade(double x, double y);
	~Granade();
	void explode();
	void showMe();
	void moveBullets(MazePart maze[MSZ][MSZ]);
	void SimulateExplosion(double map[MSZ][MSZ], MazePart maze[MSZ][MSZ]);
private:
	double x, y;
	Bullet* bullets[NUM_BULLETS];

};

