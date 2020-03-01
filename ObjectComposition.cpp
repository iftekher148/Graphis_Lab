#include<graphics.h>
#include<stdio.h>

int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);

  setcolor(RED);

  circle(150,150,75);
  floodfill(150,150,RED);

  circle(150,300,75);
  floodfill(150,300,RED);

  circle(300,150,75);
  floodfill(300,150,RED);

  circle(300,300,75);
  floodfill(300,300,RED);

   setcolor(RED);
   rectangle(150,150,300,300);
   floodfill(300,300,RED);

   delay(50000);
   closegraph();

  return 0;
}


