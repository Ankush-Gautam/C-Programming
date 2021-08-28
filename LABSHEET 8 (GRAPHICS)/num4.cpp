///4. Write a program to draw a rectangle filled with red color and place a text “GM College” in the
///    center of the rectangle with white color.

#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd =  DETECT , gm;

    initgraph(&gd,&gm,"");

    //drawing a rectangle
    setfillstyle(SOLID_FILL,RED);
    rectangle(200,300,500,100);
    floodfill(201,101,15);
    outtextxy(300,200,"GM COLLEGE");

    getch();
    closegraph();

    return 0;
}
