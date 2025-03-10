// Summer School - Dia 7
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);

        if((x+y)%2==1){
            printf("-1 -1\n");
            continue;
        }

        int d= (x+y)/2;

        int xc=0, yc=d;
        bool foi=false;
        while(xc<=d){
            //d de b pra c               
            if(abs(x-xc)+abs(yc-y) == xc+yc){
                printf("%d %d\n",xc,yc);
                foi=true;
                break;
            }

            xc++;yc--;
        }

        if(!foi){
            printf("-1 -1\n");
        }

    }

    return 0;
}