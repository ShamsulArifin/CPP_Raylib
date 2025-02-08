#include "raylib.h"

int main()
{
	int width;
	width = 350;
	InitWindow(width, 200, "Sam's Window");

	while (true)
	{
		BeginDrawing();
		ClearBackground(RED);
		EndDrawing();
	}
}