#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;main(){string in;int n,ma,mi;cin>>n;while(n--){cin>>in;sort(in.begin(),in.end());istringstream x(in);x>>mi;sort(in.rbegin(),in.rend());istringstream y(in);y>>ma;cout<<ma-mi<<endl;}}