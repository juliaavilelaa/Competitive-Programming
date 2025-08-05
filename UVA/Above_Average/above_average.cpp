// UVA 10370

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        vector<int> scores(n);
        int soma=0;
        for(int i=0;i<n;i++){
            scanf("%d",&scores[i]);
            soma+=scores[i];
        }

        int averageint=soma/n;
        double average=double(soma)/double(n);

        sort(scores.begin(), scores.end());

        int m,h=n-1,l=0;
        int meio=n;
        while(l<=h){
            m=(h+l)/2;
            if(scores[m]>averageint){
                meio=m;
                h=m-1;
            }else if(scores[m]<=averageint){
                l=m+1;
            }
        }

        double qto=double(n-meio)*100/double(n);

        printf("%.3lf%\n",qto);

    }

    return 0;
}