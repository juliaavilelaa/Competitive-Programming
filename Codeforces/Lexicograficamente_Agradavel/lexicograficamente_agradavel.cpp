// #include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<algorithm>
#include <vector>
#include <set>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

    string s; cin>>s;
    int n;cin>>n;

    vector<string > v(n);

    for(int i=0;i<s.size();i++){
        if(i<n) v[i]="";
        v[i%n]+=s[i];
    }

    for(int i=0;i<n;i++) sort(v[i].begin(), v[i].end());

    int pos=0;
    for(int i=0;i<s.size();i++){
        cout<<v[i%n][pos];
        if(i%n==n-1) pos++;
    }

	
	exit(0);
}	