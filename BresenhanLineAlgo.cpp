#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main(){
int x1,x2,y1,y2;
INPUT:
    cout<<"First coordinate:";
    cin>>x1>>y1;
    cout<<"End coordinate:";
    cin>>x2>>y2;

    if(x1>x2){
       swap(x1,x2);
       swap(y1,y2);
    }

    if((x1<0 || x2<0 || y1<0 || y2<0) ||(abs((y1-y2)/(x1-x2))>1)){
        cout<<"INVALID INPUT!";
        goto INPUT;
    }

    int gd= DETECT,gm;
    initgraph(&gd,&gm,NULL);

    int m=2*(y2-y1);
    int sloperror=m-(x2-x1);
    for(int x=x1,y=y1;x<=x2;x++){
        putpixel(x,y,RED);
        delay(100);
        sloperror=sloperror+m;
        if(sloperror>=0){
            y++;
            sloperror=sloperror+m-2*(x2-x1);
        }
    }
    getchar();
    closegraph();
    return 0;

}
