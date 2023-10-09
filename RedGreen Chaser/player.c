#include "player.h"


void StartPlayer(vars* player, vars* window) {

	player->x = window->x / 2;
	player->y = window->y / 2;
	player->sizeX = 30;
	player->sizeY = 30;

}


Rectangle DrawPlayer(vars* player) {

	Rectangle playerRec = { (int)player->x, (int)player->y, (int)player->sizeX, (int)player->sizeY };
	DrawRectangleRec(playerRec, BLUE);

	


	// Debug For X and Y Coords
	char drawXcoords[BUFSIZE];
	char drawYcoords[BUFSIZE];
	sprintf(drawXcoords, "%f", player->x);
	sprintf(drawYcoords, "%f", player->y);
	DrawText(drawXcoords, 10, 10, 20, BLUE);
	DrawText(drawYcoords, 10, 30, 20, BLUE);


	// Controls
	if (IsKeyDown(KEY_A)) player->x -= 400 * dt;
	if (IsKeyDown(KEY_D)) player->x += 400 * dt;
	if (IsKeyDown(KEY_W)) player->y -= 400 * dt;
	if (IsKeyDown(KEY_S)) player->y += 400 * dt;



	// Borders
	if (player->y <= -9) player->y = -9;
	if (player->y >= 877) player->y = 877;
	if (player->x <= -6) player->x = -6;
	if (player->x >= 1576) player->x = 1576;




	return playerRec;
}


/*

y <= -9
y >= 1576
x >= 877
x <= -6

*/