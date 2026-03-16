#include<iostream>
#include<string>
using namespace std;
int main(){
string::size_type j=0,k=0;
string s;
getline(cin,s);
for(;;){
j=s.find("apple",j+1);
k=s.find("peach",k+1);
if(j==string::npos)break;
if(k==string::npos)break;
if(j<k){s.replace(j,5,"peach");k=j;}
else{s.replace(k,5,"apple");j=k;}
}
if(j==string::npos){
for(;;){
s.replace(k,5,"apple");
k=s.find("peach",k+1);
if(k==string::npos)break;
}
}else{
for(;;){
s.replace(j,5,"peach");
j=s.find("apple",j+1);
if(j==string::npos)break;
}
}
cout<<s<<endl;
return 0;
}