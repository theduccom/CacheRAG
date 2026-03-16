#include <iostream>
#include <string>

using namespace std;

int r(char s){
	if(s=='I')return 1;
	if(s=='V')return 5;
	if(s=='X')return 10;
	if(s=='L')return 50;
	if(s=='C')return 100;
	if(s=='D')return 500;
	if(s=='M')return 1000;
}

int main()
{
	string str;
	while(cin>>str){
		int s=str.size(),i=0,sum=0;
		for(i=0;i<s-1;i++){
			if(r(str[i])>=r(str[i+1]))sum+=r(str[i]);
			else{
				sum+=r(str[i+1])-r(str[i]);
				i++;
			}
		}
		if(i<s)sum+=r(str[i]);
		cout<<sum<<endl;
		str.clear();
	}
}