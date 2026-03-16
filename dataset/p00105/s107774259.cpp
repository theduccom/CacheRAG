#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct w{string s;long p;
w(string s_,long p_):s(s_),p(p_){}
};
class cm{
public:
bool operator()(const w& a,const w& b){
if(a.s==b.s)return a.p<b.p;
else return a.s<b.s;
}
};
int main(){
vector<w> ww;
long p,i,j,n,f;
string s;
while(cin>>s>>p){
ww.push_back(w(s,p));
}
sort(ww.begin(),ww.end(),cm());
n=ww.size();
for(i=0;i<n;i++){
cout<<ww[i].s<<endl;f=0;
for(;i<n;i++){
if(f>0)cout<<" ";cout<<ww[i].p;f=1;
if(i<n-1&&ww[i].s!=ww[i+1].s){cout<<endl;break;}
}
}
cout<<endl;
return 0;
}