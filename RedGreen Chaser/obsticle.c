#include "obsticle.h"

void StartOb(vars* obs, vars* window) {

	obs->x = GetRandomValue(-6, 1576);
	obs->y = GetRandomValue(-9, 877);
	obs->sizeX = 30;
	obs->sizeY = 30;


}


Rectangle DrawOb(vars* obs) {
	Rectangle obsRec = { obs->x, obs->y, obs->sizeX, obs->sizeY };
	DrawRectangleRec(obsRec, YELLOW);
	return obsRec;
}

