#pragma once

#define BUFSIZE 512


typedef struct {

	float x;
	float y;
	float sizeX;
	float sizeY;
	char name[BUFSIZE];

} vars;

typedef struct EnemyNode {

	vars enemy;
	struct EnemyNode* next;

} EnemyNode;