// Summer School - Dia 4
#include<iostream>
using namespace std;

int main(){

    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(b!=a+1 || d!=c+1 || c<=b){
            printf("-1\n");
            continue;
        }

        int h=1+(c-b);

        int restoa=a%h;
        if(restoa<1 || restoa>=h || restoa!=c%h){
            printf("-1\n");
            continue;
        }

        int w=d/h; if(d%h>0){w++;}
        printf("%d %d\n",w,h);
    }

    return 0;
}