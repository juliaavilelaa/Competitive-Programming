// #include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int c,r,total;
    ll disp;
    cin>>disp;
    cin>>c>>r;
    vector<ll> cansativas(c);

    for(int i=0;i<c;i++) cin>>cansativas[i];

    for(int i=0;i<r;i++){
        ll a;
        cin>>a;
        disp+=a;
    }


    total=r;
    for(int i=0;i<c;i++){
        if(disp>=cansativas[i]){
            total++;
            disp-=cansativas[i];

        }else break;
    }

    cout<<total<<endl;

	exit(0);
}	