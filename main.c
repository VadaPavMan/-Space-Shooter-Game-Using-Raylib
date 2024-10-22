/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "include/raylib.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    // Initialization
    const int screenWidth = 900;
    const int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "Space Boi");

    SetTargetFPS(60);  
    
    Texture2D space = LoadTexture("assests/pngegg.png");             // Set our game to run at 60 frames-per-second

    // Main game loop
    while (!WindowShouldClose())    
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawTexture(space, 0, 0, WHITE);

        EndDrawing();
    }


    UnloadTexture(space);

    CloseWindow();


    return 0;
}