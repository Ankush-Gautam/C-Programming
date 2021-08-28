///2. Write a program to draw a circle, square and rectangle each with different colors using graphics function.

#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT , gm;

    initgraph(&gd,&gm,"");

    //drawing rectangle with red color
    setcolor(RED);
    rectangle(50,50,200,100);

    //drawing circle with blue color
    setcolor(BLUE);
    circle(100,200,50);

    //drawing square with green color
    setcolor(GREEN);
    rectangle(50,300,100,350);

    getch();
    closegraph();

    return 0;
}
