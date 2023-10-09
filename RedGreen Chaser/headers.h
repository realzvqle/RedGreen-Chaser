#define _CRT_SECURE_NO_WARNINGS

#include <raylib.h>
#include "vars.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


//#define MAX_ENEMYS 20

// DeltaTime
#define dt GetFrameTime();





// window.h
void StartWindow(vars* window);



// player.h
void StartPlayer(vars* player, vars* window);
Rectangle DrawPlayer(vars* player);




// target.h
void StartTarget(vars* target, vars* window);
Rectangle DrawTarget(vars* target);



// collision.h
int Collision(vars* target, vars* player, vars* enemy, vars* enemy2, vars* enemy3, vars* enemy4, Rectangle targetRec, Rectangle playerRec, Rectangle enemyRec, Rectangle enemyRec2, Rectangle enemyRec3, Rectangle enemyRec4, vars* obs, vars* obs1, vars* obs2, vars* obs3, vars* obs4, Rectangle obsRec, Rectangle obsRec1, Rectangle obsRec2, Rectangle obsRec3, Rectangle obsRec4);



// enemy.h
void StartEnemy(vars* enemy, vars* window);
Rectangle DrawEnemy(vars* enemy);


// obsticle.h
void StartOb(vars* obs, vars* window);
Rectangle DrawOb(vars* obs);