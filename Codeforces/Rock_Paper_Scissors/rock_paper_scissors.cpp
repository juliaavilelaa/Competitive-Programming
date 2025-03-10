// Summer School - Dia 8
#include<iostream>
using namespace std;

int main(){

    int n,ar,as,ap,br,bs,bp;
    scanf("%d",&n);
    scanf("%d %d %d",&ar,&as,&ap);
    scanf("%d %d %d",&br,&bs,&bp);

    int win=0;
    if(br+bs<as){
        win+=(as-(br+bs));
    }
    if(bs+bp<ap){
        win+=(ap-(bs+bp));
    }
    if(br+bp<ar){
        win+=(ar-(br+bp));
    }

    printf("%d ",win);

    win=0;
    if(ar>=bs){win+=bs;}
    else{win+=ar;}

    if(as>=bp){win+=bp;}
    else{win+=as;}

    if(ap>=br){win+=br;}
    else{win+=ap;}

    printf("%d\n",win);

    return 0;
}