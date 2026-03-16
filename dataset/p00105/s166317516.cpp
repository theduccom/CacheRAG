#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
#define F first
#define S second
#define MP make_pair
#define PB push_back
int main(){
    string s;
    int n;
    vector<int> emp;
    map<string,vector<int>> m;
    while(cin>>s){
        cin>>n;
        if(m.find(s)==m.end())m.insert(MP(s,emp));
        m[s].PB(n);
    }
    for(auto u:m){
        sort(u.S.begin(),u.S.end());
        cout<<u.F<<endl<<u.S[0];
        for(int j=1;j<u.S.size();j++)cout<<" "<<u.S[j];
        cout<<endl;
    }
}
