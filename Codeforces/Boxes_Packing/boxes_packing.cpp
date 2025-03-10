// Summer School - Dia 1
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> cont;
    int n,a, maior=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        cont[a]++;
        if(cont[a]>maior){
            maior=cont[a];
        }
    }

    printf("%d\n",maior);

    return 0;
}