#ifndef GLOBAL_H
#define GLOBAL_H

#include "sl.h"

namespace SlArkJB
{
enum Pantallas { MenuScreen = 1, GameplayScreen, GameOverScreen, End };
extern int screenWidth;
extern int screenHeight;
struct Vector2
{
	double x;
	double y;
};

namespace KeyManager
{
	void Update(int key, int state);
	bool GetKeyUp(int key, int state);
}

extern int escKey;
extern int aKey;
extern int leftKey;

}


#endif

