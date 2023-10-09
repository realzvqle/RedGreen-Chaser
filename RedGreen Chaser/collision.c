#include "collision.h"

int counter = 0;
int lose = 0;


int Collision(vars* target, vars* player, vars* enemy, vars* enemy2, vars* enemy3, vars* enemy4, Rectangle targetRec, Rectangle playerRec, Rectangle enemyRec, Rectangle enemyRec2, Rectangle enemyRec3, Rectangle enemyRec4, vars* obs, vars* obs1, vars* obs2, vars* obs3, vars* obs4, Rectangle obsRec, Rectangle obsRec1, Rectangle obsRec2, Rectangle obsRec3, Rectangle obsRec4) {

	char drawCounter[BUFSIZE];
	sprintf(drawCounter, "%d", counter);
	DrawText(drawCounter, GetScreenWidth() / 2, 10, 30, WHITE);

	lose = 0;


	if (CheckCollisionRecs(targetRec, playerRec)) {

		target->x = GetRandomValue(-6, 1576);
		target->y = GetRandomValue(-9, 877);
		enemy->x = GetRandomValue(-6, 1576);
		enemy->y = GetRandomValue(-9, 877);
		enemy2->x = GetRandomValue(-6, 1576);
		enemy2->y = GetRandomValue(-9, 877);
		enemy3->x = GetRandomValue(-6, 1576);
		enemy3->y = GetRandomValue(-9, 877);
		enemy4->x = GetRandomValue(-6, 1576);
		enemy4->y = GetRandomValue(-9, 877);
		obs1->x = GetRandomValue(-6, 1576);
		obs1->y = GetRandomValue(-9, 877);
		obs2->x = GetRandomValue(-6, 1576);
		obs2->y = GetRandomValue(-9, 877);
		obs3->x = GetRandomValue(-6, 1576);
		obs3->y = GetRandomValue(-9, 877);
		obs4->x = GetRandomValue(-6, 1576);
		obs4->y = GetRandomValue(-9, 877);
		counter+=5;


	}
	if (CheckCollisionRecs(enemyRec, playerRec) || CheckCollisionRecs(enemyRec2, playerRec) || CheckCollisionRecs(enemyRec3, playerRec) || CheckCollisionRecs(enemyRec4, playerRec)) {

		target->x = GetRandomValue(-6, 1576);
		target->y = GetRandomValue(-9, 877);
		enemy->x = GetRandomValue(-6, 1576);
		enemy->y = GetRandomValue(-9, 877);
		enemy2->x = GetRandomValue(-6, 1576);
		enemy2->y = GetRandomValue(-9, 877);
		enemy3->x = GetRandomValue(-6, 1576);
		enemy3->y = GetRandomValue(-9, 877);
		enemy4->x = GetRandomValue(-6, 1576);
		enemy4->y = GetRandomValue(-9, 877);
		obs1->x = GetRandomValue(-6, 1576);
		obs1->y = GetRandomValue(-9, 877);
		obs2->x = GetRandomValue(-6, 1576);
		obs2->y = GetRandomValue(-9, 877);
		obs3->x = GetRandomValue(-6, 1576);
		obs3->y = GetRandomValue(-9, 877);
		obs4->x = GetRandomValue(-6, 1576);
		obs4->y = GetRandomValue(-9, 877);

		lose = 1;



		counter = 0;


	}
	if (CheckCollisionRecs(enemyRec, playerRec) && CheckCollisionRecs(targetRec, playerRec) || CheckCollisionRecs(enemyRec2, playerRec) && CheckCollisionRecs(targetRec, playerRec) || CheckCollisionRecs(enemyRec3, playerRec) && CheckCollisionRecs(targetRec, playerRec) || CheckCollisionRecs(enemyRec4, playerRec) && CheckCollisionRecs(targetRec, playerRec)) {

		target->x = GetRandomValue(-6, 1576);
		target->y = GetRandomValue(-9, 877);
		enemy->x = GetRandomValue(-6, 1576);
		enemy->y = GetRandomValue(-9, 877);
		enemy2->x = GetRandomValue(-6, 1576);
		enemy2->y = GetRandomValue(-9, 877);
		enemy3->x = GetRandomValue(-6, 1576);
		enemy3->y = GetRandomValue(-9, 877);
		enemy4->x = GetRandomValue(-6, 1576);
		enemy4->y = GetRandomValue(-9, 877);
		obs1->x = GetRandomValue(-6, 1576);
		obs1->y = GetRandomValue(-9, 877);
		obs2->x = GetRandomValue(-6, 1576);
		obs2->y = GetRandomValue(-9, 877);
		obs3->x = GetRandomValue(-6, 1576);
		obs3->y = GetRandomValue(-9, 877);
		obs4->x = GetRandomValue(-6, 1576);
		obs4->y = GetRandomValue(-9, 877);

		counter += 40;


	}
	if (CheckCollisionRecs(obsRec, playerRec) || CheckCollisionRecs(obsRec1, playerRec) || CheckCollisionRecs(obsRec2, playerRec) || CheckCollisionRecs(obsRec3, playerRec) || CheckCollisionRecs(obsRec4, playerRec)) {
		counter -= 4;
		target->x = GetRandomValue(-6, 1576);
		target->y = GetRandomValue(-9, 877);
		enemy->x = GetRandomValue(-6, 1576);
		enemy->y = GetRandomValue(-9, 877);
		enemy2->x = GetRandomValue(-6, 1576);
		enemy2->y = GetRandomValue(-9, 877);
		enemy3->x = GetRandomValue(-6, 1576);
		enemy3->y = GetRandomValue(-9, 877);
		enemy4->x = GetRandomValue(-6, 1576);
		enemy4->y = GetRandomValue(-9, 877);
		obs->x = GetRandomValue(-6, 1576);
		obs->y = GetRandomValue(-9, 877);
		obs1->x = GetRandomValue(-6, 1576);
		obs1->y = GetRandomValue(-9, 877);
		obs2->x = GetRandomValue(-6, 1576);
		obs2->y = GetRandomValue(-9, 877);
		obs3->x = GetRandomValue(-6, 1576);
		obs3->y = GetRandomValue(-9, 877);
		obs4->x = GetRandomValue(-6, 1576);
		obs4->y = GetRandomValue(-9, 877);
	}

	return lose;

}

