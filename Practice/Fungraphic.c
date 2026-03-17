#include <graphics.h>
#include <conio.h>
#include <windows.h>  // for Sleep()

int main() {
    int gd = DETECT, gm;
    int x = 50, y = 200;

    initgraph(&gd, &gm, "");   // no path needed in MinGW

    while (!kbhit()) {
        cleardevice();

        setcolor(WHITE);
        circle(x, y, 20);

        setfillstyle(SOLID_FILL, WHITE);
        floodfill(x, y, WHITE);

        x += 5;

        if (x > getmaxx() - 20)
            x = 50;

        Sleep(50);   // Windows delay

    }

    closegraph();
    return 0;
}