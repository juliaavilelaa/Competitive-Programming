#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

    int n,cont=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            if((i+1<n && s[i+1]=='a') || (i-1>=0 && s[i-1]=='a')) cont++; 
        }
    }

    cout<<cont<<endl;
	
	exit(0);
}	