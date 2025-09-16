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

    int cartas[11]={0, 4,4,4,4,4, 4,4,4,4,16};
    int rodadas,a;
    cin>>rodadas;
    
    cin>>a;
    if(a>10) a=10;
    cartas[a]--;

    int joao=a;

    cin>>a;
    if(a>10) a=10;
    cartas[a]--;

    joao+=a;



    cin>>a;
    if(a>10) a=10;
    cartas[a]--;

    int maria=a;

    cin>>a;
    if(a>10) a=10;
    cartas[a]--;

    maria+=a;

    for(int i=0;i<rodadas;i++){
        cin>>a;
        if(a>10) a=10;
        cartas[a]--;

        joao+=a;
        maria+=a;
    }

    int mganhar=23-maria;
    int jperder=24-joao;

    if(mganhar<=jperder && cartas[mganhar]>0){
        cout<<mganhar<<endl;
        exit(0);
    }

    while(mganhar>=jperder){
        if(cartas[jperder]>0){
            cout<<jperder<<endl;
            exit(0);
        }
        jperder++;
    }

    cout<<"-1"<<endl;
	exit(0);
}	