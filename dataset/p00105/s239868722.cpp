#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;pair<string,int> a[100];int main(){int t=0,g,i;while(cin>>a[t].x>>a[t].y)t++;sort(a,a+t);string f,b=a[0].x;cout<<b<<endl<<a[0].y;for(i=1;i<t;i++){bool n=0;f=a[i].x,g=a[i].y;if(f==b)n=1;if(n)cout<<" "<<g;else cout<<endl<<f<<endl<<g;b=f;}cout<<endl;return 0;}