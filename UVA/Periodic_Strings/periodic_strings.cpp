#include <iostream>
#include <string>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb pushback
#define all(x) x.begin(), x.end()

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { 
    int t;
    cin >> t;
    int cont = 0;
    
    while(t--){
        string s;
        cin >> s;
        if (cont > 0) cout << endl;
        cont++;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            temp += s[i];

            bool b = true;

            int tempsize = temp.size();

            int j;

            if (tempsize > s.size()/2) {
                cout << s.size() << endl;
                break;
            }
            for(j = tempsize; j < s.size(); j+=tempsize){
                string temp2 = s.substr(j, tempsize);

                if(temp2 != temp){
                    b = false;
                    break;
                }
            }

            if(b && j == s.size()){
                cout << tempsize << endl;
                break;
            }
        }
    }

    exit(0);
}