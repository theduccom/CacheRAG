#include <bits/stdc++.h>
using namespace std;

int main() {
pair<string,int> p;
vector<pair<string,int> > v;
while(cin>>p.first>>p.second){
v.push_back(make_pair(p.first,p.second));
}
sort(v.begin(),v.end());

cout<<v[0].first<<endl;
cout<<v[0].second;
string bef=v[0].first;
for (int i = 1; i < v.size(); ++i) {
    if(bef!=v[i].first){
    	cout<<endl;
    	cout<<v[i].first<<endl;
    	cout<<v[i].second;
    	bef=v[i].first;
    }else{
    	cout<<" "<<v[i].second;
    }
}
cout<<endl;
}