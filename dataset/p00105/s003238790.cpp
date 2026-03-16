#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    vector<vector<int>> index(1,vector<int>());
    string str;
    vector<string> what;
    int page, pages = 1;
    while(cin >> str >> page){
        if(mp[str] == 0){
            mp[str] = pages;
            vector<int> newin(1, page);
            index.push_back(newin);
            what.push_back(str);
            pages++;
        }
        else{
            index[mp[str]].push_back(page);
        }
    }
    sort(what.begin(), what.end());
    for(int i = 0;i<what.size();i++){
        str = what[i];
        sort(index[mp[str]].begin(), index[mp[str]].end());
        cout << str << endl;
        for (int i = 0; i < index[mp[str]].size();i++){
            if(i == index[mp[str]].size()-1){
                cout << index[mp[str]][i] << endl;
            }
            else{
                cout << index[mp[str]][i] << " ";
            }
        }
    }
    return 0;
}