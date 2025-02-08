#include "raylib.h"

int main()
{
	// window dimensions
	int window_width{800};
	int window_height{450};

	InitWindow(window_width, window_height, "Sam's Window");

	// circle coordinates
	int circle_x{200};
	int circle_y{200};
	
	// axe coordinates
	int axe_x{400};
	int axe_y{0};

	int direction{10};

	SetTargetFPS(60);
	while (WindowShouldClose() != true)
	{
		BeginDrawing();
		ClearBackground(WHITE);

		// Game logic begins

		DrawCircle(circle_x, circle_y, 25, DARKGREEN);
		DrawRectangle(axe_x, axe_y, 50, 50, RED);

		// move the axe
		axe_y += direction;
		if(axe_y > 450 || axe_y < 0)
		{
			direction = -direction;
		}

		if (IsKeyDown(KEY_D) && circle_x < 350)
		{
			circle_x += 10;
		}

		if (IsKeyDown(KEY_A) && circle_x > 0)
		{
			circle_x -= 10;
		}

		// Game logic ends
		EndDrawing();
	}
}