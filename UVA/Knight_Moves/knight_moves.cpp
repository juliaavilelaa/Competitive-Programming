#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

int dx[] = {1,1,-2,-2,-1,-1,2,2};
int dy[] = {2,-2,-1,1,-2,2,-1,1};

bool ok(int x, int y){
    if(x>= 0 && x <8 && y >=0 && y <8){
        return true;
    }

    return false;
}

vector<vector<int> > dist(9,vector<int>(9,-1));
void djk(int x1, int y1){

    set<pair<int,pair<int,int> > >st;
    st.insert(make_pair(0,make_pair(x1,y1)));
    dist[x1][y1] = 0;

    while(!st.empty()){
        pair<int,int> no = (*st.begin()).second;
        int cost = (*st.begin()).first;

        st.erase(st.begin());

        for(int i = 0; i < 8; i++){
            int newx = no.first + dx[i];
            int newy = no.second + dy[i];
            
            if(ok(newx, newy)){
                if(1 + cost < dist[newx][newy] || dist[newx][newy] == -1){
                    dist[newx][newy] = 1 + cost;
                    st.insert(make_pair(dist[newx][newy],make_pair(newx, newy)));
                }
            }
        }
    }
}

int main(){
    string s1, s2;
    
    map<pair<int,int>, vector<vector<int> > > mp;
    while(cin >> s1 >> s2){
        int y1 = s1[0] - 'a'; //coluna
        int x1 = s1[1] - '0' - 1; //linha

        int y2 = s2[0] - 'a'; //coluna
        int x2 = s2[1] - '0' - 1; //linha
        
        if(mp.find(make_pair(x1,y1)) != mp.end()){
            printf("To get from %s to %s takes %d knight moves.\n",s1.c_str(),s2.c_str(),mp[make_pair(x1,y1)][x2][y2]);
        }else{
            dist = vector<vector<int> >(9,vector<int>(9,-1));
            djk(x1,y1);
            mp[make_pair(x1,y1)] = dist;
            printf("To get from %s to %s takes %d knight moves.\n",s1.c_str(),s2.c_str(),mp[make_pair(x1,y1)][x2][y2]);

        }
    }

}