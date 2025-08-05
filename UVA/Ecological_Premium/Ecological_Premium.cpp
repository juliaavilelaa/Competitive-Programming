#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

int main() { _
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll total=0;
        while(n--){
            int a,b,c; cin>>a>>b>>c;
            total+=(a*c);
        }
        cout<<total<<endl;
    }

	exit(0);
}	