#include <map>
#include <queue>
#include <set>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
    set<string> words;
    map<string,priority_queue<int, vector<int>,greater<int> > > indeces;
    char wd[32];
    int page;
    
    while (cin >> wd >> page){
        string strWd(wd);
        
        words.insert(strWd);
        if (indeces.find(strWd) == indeces.end()){
            priority_queue<int,vector<int>, greater<int> > pq;
            indeces.insert(make_pair(strWd, pq));
        }
        indeces[strWd].push(page);
    }
    for (set<string>::iterator itr = words.begin(); itr != words.end(); itr++){
        string wd = *itr;
        cout << wd << endl;
        cout << indeces[wd].top();
        indeces[wd].pop();
        while (!indeces[wd].empty()){
            cout << " " << indeces[wd].top();
            indeces[wd].pop();
        }
        cout << endl;
    }
  
    return 0;
}