#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
cin>>n;
for (int i = 0; i < n; ++i) {
int sum=0,out=0,finsum=0;
while(1){
cin>>s;
if(s=="HIT"){sum++;if(sum==4){finsum+=1;sum=3;}}
if(s=="OUT"){out++;if(out==3)break;}
if(s=="HOMERUN"){finsum+=sum;finsum++;sum=0;}
}
cout<<finsum<<endl;
}
}