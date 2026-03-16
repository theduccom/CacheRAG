#include<iostream>
#include<string>
using namespace std;
int main(){
long i,l,n=0;
string s;
while(cin>>s){
l=s.size();
for(i=0;i<l/2;i++)if(s[i]!=s[l-1-i])break;
if(i>=l/2)n++;
}
cout<<n<<endl;
return 0;
}