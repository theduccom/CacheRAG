#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
int n,s;
string str;
	scanf("%d\n",&n);
for(int i=0;i<n;i++){
	getline(cin,str);
	s=str.size();
for(int j=0;j<s-6;j++){
if(str[j]=='H'&&str[j+1]=='o'&&str[j+2]=='s'&&str[j+3]=='h'&&str[j+4]=='i'&&str[j+5]=='n'&&str[j+6]=='o')str[j+6]='a';
}
cout<<str<<endl;
}
return 0;
}