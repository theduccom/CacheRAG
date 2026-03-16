#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
set<pair<string,int> >RB;set<pair<string,int> >::iterator it,ot;string T;int N;
int main() {
    while (cin>>T>>N) {RB.insert(make_pair(T,N));} it=ot=RB.begin();cout<<(it->first)<<endl<<(it->second);it++;
    while (it!=RB.end()) {if ((ot->first)==(it->first)) cout<<" "<<(it->second); else cout<<endl<<(it->first)<<endl<<(it->second);it++,ot++;}
    cout<<endl;return 0;}