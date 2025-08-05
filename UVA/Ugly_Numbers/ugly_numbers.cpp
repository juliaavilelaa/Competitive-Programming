#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    // int cont=1501;
    vector<ll> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    map<ll, int> mp;
    mp[1] = 1;
    mp[2] = 1;
    mp[3] = 1;
    mp[5] = 1;

    ll i = 1;
    while (i < 500) {
        // cout<<2*v[i] << " ";
        if (mp[2*v[i]] != 1) {
            v.push_back(2*v[i]);
            mp[2*v[i]] = 1;
        }
        i++;
    }
    sort(v.begin(), v.end());

    i = 1;
    while (i < 1000) {
        // cout<<2*v[i] << " ";
        if (mp[3*v[i]] != 1) {
            v.push_back(3*v[i]);
            mp[3*v[i]] = 1;
        }
        i++;
    }
    sort(v.begin(), v.end());

    i = 1;
    while (i < 1500) {
        // cout<<2*v[i] << " ";
        if (mp[5*v[i]] != 1) {
            v.push_back(5*v[i]);
            mp[5*v[i]] = 1;
        }
        i++;
    }
    sort(v.begin(), v.end());

    cout << v.size() << endl;
    

    // cont=1;
    // for(int n : st){
    //     cout << n << " ";
    //     if(cont==11){
    //         cout << "The 1500'th ugly number is " << n <<endl;
    //         break;
    //     }
    //     cont++;
    // }

    exit(0);
}