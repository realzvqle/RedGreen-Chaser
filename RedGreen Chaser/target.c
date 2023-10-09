#include "target.h"





void StartTarget(vars* target, vars* window) {

	target->x = GetRandomValue(-6, 1576);
	target->y = GetRandomValue(-9, 877);
	target->sizeX = 30;
	target->sizeY = 30;


}
Rectangle DrawTarget(vars* target) {

	Rectangle targetRec = { target->x, target->y, target->sizeX, target->sizeY };
	DrawRectangleRec(targetRec, GREEN);



	char drawXcoords[BUFSIZE];
	char drawYcoords[BUFSIZE];
	sprintf(drawXcoords, "%f", target->x);
	sprintf(drawYcoords, "%f", target->y);
	DrawText(drawXcoords, 10, 60, 20, GREEN);
	DrawText(drawYcoords, 10, 80, 20, GREEN);


	return targetRec;


}


/*

y <= -9
y >= 1576
x >= 877
x <= -6

*/