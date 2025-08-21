#include<iostream>
#include<string>
using namespace std;

int main(){

    int t,total=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="donate"){
            int v;
            cin>>v;
            total+=v;
        }else cout<<total<<endl;
    }

    return 0;
}