#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;main(){int n;string s;map<string,set<int> >z;map<string,set<int> >::iterator q;set<int>::iterator x;while(cin>>s>>n)z[s].insert(n);for(q=z.begin();q!=z.end();cout<<endl){cout<<(s=q++->first)<<endl;for(x=z[s].begin(),n=0;x!=z[s].end();cout<<*x++)if(n++)cout<<" ";}return 0;}