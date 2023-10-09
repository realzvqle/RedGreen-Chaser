#include "enemy.h"

void StartEnemy(vars* enemy, vars* window) {

		enemy->x = GetRandomValue(-6, 1576);
		enemy->y = GetRandomValue(-9, 877);
		enemy->sizeX = 30;
		enemy->sizeY = 30;
	

}


Rectangle DrawEnemy(vars* enemy) {
    Rectangle enemyRec = { enemy->x, enemy->y, enemy->sizeX, enemy->sizeY };
	DrawRectangleRec(enemyRec, RED);
    return enemyRec;
}

