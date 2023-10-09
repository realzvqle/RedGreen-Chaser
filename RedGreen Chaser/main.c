//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include "headers.h"











int main(int argc, char *argv[]) {

	//ShellMessageBox(NULL, NULL, "h", "h", "hh". 1, )

	






	//SetTraceLogLevel(LOG_ERROR);
	printf("%s", GetWorkingDirectory());

	//printf("yes");



   //#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

	vars window;
	vars player;
	vars target;

	vars enemy;
	vars enemy2;
	vars enemy3;
	vars enemy4;

	vars obs;
	vars obs1;
	vars obs2;
	vars obs3;  
	vars obs4;
	

	//EnemyNode* enemyList = NULL;
	//if (!enemy) return -1;
	//int enemycount = 0;
	int p = 0;

	StartWindow(&window);
	StartPlayer(&player, &window);
	StartTarget(&target, &window);

	StartEnemy(&enemy, &window);
	StartEnemy(&enemy2, &window);
	StartEnemy(&enemy3, &window);
	StartEnemy(&enemy4, &window);

	StartOb(&obs, &window);
	StartOb(&obs1, &window);
	StartOb(&obs2, &window);
	StartOb(&obs3, &window);
	StartOb(&obs4, &window);

	

	InitWindow((int)window.x, (int)window.y, window.name);

	

	SetExitKey(KEY_Q);


	SetWindowIcon(LoadImage("icon.png"));
	ChangeDirectory(argv[0]);
	printf("%s", GetWorkingDirectory());


	while (!WindowShouldClose()) {
		
		BeginDrawing();
		if (IsKeyDown(KEY_F)) { 
			
			ToggleFullscreen();
			HideCursor();
		
		}

		
		//if (IsKeyDown(KEY_F)) FullS
		
		if (p == 0) {
			DrawText("Copyright zvqle\nBuild 1.0\n", 10, 10, 19, RED);
			DrawText("RedGreen Chaser", GetScreenWidth() / 2 - 200, GetScreenHeight() / 2 - 100, 50, GREEN);
			DrawText("Press Space To Start", GetScreenWidth() / 2 - 160, GetScreenHeight() / 2 + 100, 30, WHITE);
			DrawText("Press Q To Quit", GetScreenWidth() / 2 - 110, GetScreenHeight() / 2 + 200, 30, WHITE);
			if (IsKeyDown(KEY_SPACE)) p = 1;

		}
		else if (p == 1) {
			Rectangle playerRec = DrawPlayer(&player);
			Rectangle targetRec = DrawTarget(&target);

			Rectangle enemyRec = DrawEnemy(&enemy);
			Rectangle enemyRec2 = DrawEnemy(&enemy2);
			Rectangle enemyRec3 = DrawEnemy(&enemy3);
			Rectangle enemyRec4 = DrawEnemy(&enemy4);
			Rectangle obsRec = DrawOb(&obs);
			Rectangle obsRec1 = DrawOb(&obs1);
			Rectangle obsRec2 = DrawOb(&obs2);
			Rectangle obsRec3 = DrawOb(&obs3);
			Rectangle obsRec4 = DrawOb(&obs4);

			//messagebox("test", "test");


			if (Collision(&target, &player, &enemy, &enemy2, &enemy3, &enemy4, targetRec, playerRec, enemyRec, enemyRec2, enemyRec3, enemyRec4, &obs, &obs1, &obs2, &obs3, &obs4, obsRec, obsRec1, obsRec2, obsRec3, obsRec4) == 1) {
				p = 2;
			}
			//CollisionOb(&obs, &obs1, &obs2, &obs3, &obs4, obsRec, obsRec1, obsRec2, obsRec3, obsRec4);


			//Collision(&target, &player, enemy, targetRec, playerRec, enemyRec);

			ClearBackground(BLACK);

		}
		else if (p == 2) {
			//DrawText("Made By zvqle", 10, 10, 30, RED);
			DrawText("YOU LOOSE!!", GetScreenWidth() / 2 - 130, GetScreenHeight() / 2 - 100, 50, RED);
			DrawText("Press Space To Restart", GetScreenWidth() / 2 - 160, GetScreenHeight() / 2 + 100, 30, WHITE);
			DrawText("Press Q To Quit", GetScreenWidth() / 2 - 110, GetScreenHeight() / 2 + 200, 30, WHITE);
			ClearBackground(BLACK);
			if (IsKeyDown(KEY_SPACE)) p = 1;

		}
		
		
		//Collision(&target, &player, &enemy,targetRec, playerRec, enemyRec);

		



		EndDrawing();


	}
	

	
	//free(enemy);
	return 0;
}