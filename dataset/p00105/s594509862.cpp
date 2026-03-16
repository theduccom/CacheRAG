#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<set>

using namespace std;

int main(){
    map<string,set<int> >m;
    set<string>s;
    string w;
    int p;
    while(cin>>w>>p){
        if(w==">")break;
        m[w].insert(p);
        s.insert(w);
    }
    set<int>::iterator it;
    set<string>::iterator st;
    for (st = s.begin(); st != s.end(); ++st){
        cout<<*st<<endl;
        it = m[*st].begin();
        if(m[*st].size()>1)
            for (; it != prev(m[*st].end(), 1); ++it)
                cout<<*it<<" ";
        cout<<*it<<endl;
    }
}