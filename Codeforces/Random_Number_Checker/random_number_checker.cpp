// Summer School - Dia 7
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n,a, odd=0, even=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a%2==0){
            even++;
        }else{
            odd++;
        }
    }

    if(abs(odd-even)<=1){
        printf("Good\n");
    }else{
        printf("Not Good\n");
    }

    return 0;
}