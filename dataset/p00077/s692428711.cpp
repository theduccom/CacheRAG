#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
long i,n;
string s,t;
stringstream ss;
char c;
while(cin>>s){
ss.str("");ss.clear();t="";
ss<<s;
while(ss>>c){
if(c=='@'){
ss>>c;n=c-48;
ss>>c;
for(i=0;i<n;i++)t+=c;
}else{
t+=c;
}
}
cout<<t<<endl;
}
return 0;
}