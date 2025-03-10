// Summer School - Dia 1
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,w=-1;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=i+1 && w==-1){
            w=i;
        }
    }

    string s;
    cin>>s;
    int cont[n],c=0;
    for(int i=0;i<n;i++){
        cont[i]=c;
        if(i<n-1 && s[i]=='1'){c++;}
    }

    for(int i=0;i<n-1;i++){
        if(a[i]!=i+1){
            if(cont[a[i]-1]-cont[i]<(a[i]-1) -i){
                cout<<"NO\n";
                return 0;
            }
        }
    }

    cout<<"YES\n";

    /*int w1=w;
    while(w<n){
        if(a[w]==w+1){
            w++;
            continue;
        }

        if(s[w]=='0'){
            cout<<"NO\n";
            return 0;
        }

        int aux=a[w];
        a[w]=a[w]
    }
    */

    return 0;
}