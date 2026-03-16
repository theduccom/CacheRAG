#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
double x;
vector<double> v;
while(cin>>x){
v.push_back(x);
}
sort(v.begin(),v.end());
printf("%.5f\n",v[v.size()-1]-v[0]);
return 0;
}