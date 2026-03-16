#include<iostream>
#include<string>
using namespace std;
int main(){
long a,b[4]={0};
string bb;
while(cin>>a){
cin>>bb;
if(bb==",A")b[0]++;
else if(bb==",B")b[1]++;
else if(bb==",AB")b[2]++;
else if(bb==",O")b[3]++;
}
cout<<b[0]<<endl;
cout<<b[1]<<endl;
cout<<b[2]<<endl;
cout<<b[3]<<endl;
return 0;
}