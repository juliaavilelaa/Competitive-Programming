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

    int n, x,y;
    cin>>n>>x>>y;

    int maximo=2,meio,cont=0;
    for(int i=2;i<=n;i++) maximo*=2;
	meio=maximo/2;

    while(x!=meio && y!=meio){
        cont++;
        int dobrox=x*2;
        int dobroy=y*2;
        if(dobrox>maximo) x=dobrox-maximo;
        else x=dobrox;

        if(dobroy>maximo) y=dobroy-maximo;
        else y=dobroy;
    }

    cout<<cont<<endl;

	exit(0);
}	