// Summer School - Dia 1
#include<iostream>
using namespace std;

int main(){

    int n,last0,first0=10000000,cont=1;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(a[i]==0){
            if(i<first0){first0=i;}

            last0=i;
            cont=1;
        }else{
            a[i]=cont;
            cont++;
        }
    }

    for(int i=last0;i>=0;i--){
        if(a[i]==0 && i>=first0){
            cont=1;
        }else if(a[i]>cont || i<first0){
            a[i]=cont;
            cont++;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}