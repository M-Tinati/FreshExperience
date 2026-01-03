#include <iostream>
#include "raylib.h"

using namespace std;

int main(void) {
    //Initialization
    const int screenWidth = 800;
    const int screenHeight = 540;
    InitWindow(screenWidth , screenHeight ,"Start Game");
    int currentspeed = 60;
    // Vector2 CircleOne = {0 , (float)screenHeight/3.0f};
    // Vector2 CircleTwo = {0 , (float)screenHeight*(2.0f/3.0f)};
    Vector2 ball = {(float)screenWidth/2,(float)screenHeight/2 }; //center screen
    const float circleRadius = 32.0f;
    SetTargetFPS(currentspeed);
    // Main Game Loop
    while (!WindowShouldClose())
    {   
        // enum Move{
        //     KEY_RIGHT,
        //     KEY_LEFT,
        //     KEY_UP,
        //     KEY_DOWN
        // };
        // Move move;
        // switch (move)
        // {
        // case KEY_RIGHT :
        //     ball.x += 2.0f;
        //     break;
        // case KEY_LEFT :
        //     ball.x += 2.0f;
        //     break;
        // case KEY_UP :
        //     ball.y -= 2.0f;
        //     break;
        // case KEY_DOWN :
        //     ball.y += 2.0f;
        //     break;
        // };
        if (IsKeyDown(KEY_RIGHT)) ball.x += 2.0f;
        if (IsKeyDown(KEY_LEFT))  ball.x -= 2.0f;
        if (IsKeyDown(KEY_UP))    ball.y -= 2.0f;
        if (IsKeyDown(KEY_DOWN))  ball.y += 2.0f;
        BeginDrawing();
            ClearBackground(RAYWHITE);
            // DrawCircleV(CircleOne,circleRadius,RED);
            // DrawCircleV(CircleTwo,circleRadius,GREEN);
            DrawCircleV(ball,40,MAROON);
        EndDrawing();
    }
    CloseWindow();


    return 0;
}