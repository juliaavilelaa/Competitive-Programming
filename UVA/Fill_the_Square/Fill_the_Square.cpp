#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

char m[10][10];
int n;

void letra(int i, int j){
    map<char, int> mp;
    if(i-1>=0 && m[i-1][j]!='.') mp[m[i-1][j]]++;
    if(i+1<n && m[i+1][j]!='.') mp[m[i+1][j]]++;
    if(j-1>=0 && m[i][j-1]!='.') mp[m[i][j-1]]++;
    if(j+1<n && m[i][j+1]!='.') mp[m[i][j+1]]++;

    char c='A';
    for(auto it:mp){
        if(c==it.first) c++;
        else break;
    }

    m[i][j]=c;
    cout<<c;
}

int main() { _

    int t;cin>>t;
    for(int caso=1;caso<=t;caso++){
        cout<<"Case "<<caso<<":"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>m[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m[i][j]=='.') letra(i,j);
                else cout<<m[i][j];
            }
            cout<<endl;
        }
    }

	exit(0);
}	