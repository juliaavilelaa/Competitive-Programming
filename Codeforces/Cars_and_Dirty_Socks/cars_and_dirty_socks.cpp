// Summer School - Dia 2
#include<iostream>
using namespace std;

int main(){
    int n,r;

    cin>>n;

    while(n--){
        cout<<1<<endl;
        cout.flush();

        int p;
        cin>>p;

        if(p==2){
            cout<<3<<endl;
            cout.flush();
        }else{
            cout<<2<<endl;
            cout.flush();
        }

        cin>>r;
    }

    return 0;
}