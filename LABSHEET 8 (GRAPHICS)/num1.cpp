///1. Write a program to draw line with blue color and dotted type.

#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(BLUE);
    setlinestyle(1,0,1);
    line(50,50,600,50);

    getch();
    closegraph();

    return 0;
}
