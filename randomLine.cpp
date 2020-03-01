#include<graphics.h>
#include<stdio.h>

int myrand(int up){
   return rand() % (up+1);
}

int main(){
 int gd = DETECT,gm;
 initgraph(&gd,&gm,NULL);

 int lines=myrand(700);
 for(int i=0;i<lines;i++){
    setcolor(myrand(15));
    line(myrand(100),myrand(200),myrand(250),myrand(400));

 }
  getchar();
    closegraph();
    return 0;
}
