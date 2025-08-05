// UVA 1585

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int zeros=0, total=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='O') zeros++;
            else zeros=0;

            total+=zeros;
        }

        cout<<total<<endl;
    }

    return 0;
}