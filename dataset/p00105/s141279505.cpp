#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define vi vector<int>
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "<debug " << x << endl;
#define inf 5000
using namespace std;

int main(){
    string word;
    int page;
    map<string,vector<int> > info;

    while(cin >> word >> page){
        info[word].pb(page);
    }
    map<string, vector<int> >::iterator it;
    for(it = info.begin(); it != info.end(); it++){
        vector<int> &pageList = it->second;
        cout << it->first << endl;
        sort(all(pageList));
        for(int i = 0; i < pageList.size(); i++){
            if(i) cout << ' ';
            cout << pageList[i];
        }
        cout << endl;
    }
}