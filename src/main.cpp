#include <raylib-cpp.hpp>
#include "grid.h"

int main() 
{
    //　色は自分でRGBA構造体を作成し使用するのと、デフォルトである色を指定し使用する２種類がある
    Color red = {255, 0, 0, 255}; // R=255, G=0, B=0, A=255 -> 完全な赤
    Color darkBlue = {44, 44, 127, 255}; //　紫青

    Grid grid = Grid();
    grid.print();

    InitWindow(300, 600, "raylib Tetris"); // (幅、高さ、タイトル)
    SetTargetFPS(60); // これを指定しないとそのコンピュータの速度によってデフォルトで決まる

    while(WindowShouldClose() == false) // windowが閉じられるアクションが続くまで
    {
        BeginDrawing(); //
        ClearBackground(darkBlue); //これで背景色指定。
        grid.draw();

        EndDrawing(); // 

    }
    CloseWindow();

}