///3. Write a program to draw triangle, ellipse using graphics function.

#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    //drawing a triangle using 3lines connecting with each other
    line(300, 100, 200, 200);
    line(300, 100, 400, 200);
    line(200, 200, 400, 200);
    outtextxy(260,150,"Triangle");

    //drawing an ellipse
    ellipse(300,300,0,360,100,50);
    outtextxy(280,300,"Ellipse");

    getch();
    closegraph();

    return 0;
}
