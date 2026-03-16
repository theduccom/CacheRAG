#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

map<string,vector<int>> index;
int main(){
    string s; int p;
    while(cin>>s>>p) index[s].push_back(p);
    for(auto &w:index){
        cout<<w.first<<endl;
        sort(w.second.begin(), w.second.end());
        rep(i,w.second.size()){
            cout<<w.second[i]<<(i==w.second.size()-1 ? '\n' : ' ');
        }
    }
}