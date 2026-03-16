//0049
#include <bits/stdc++.h>
using namespace std;

int main(){
	int co,a = 0,b = 0,ab = 0,o = 0,i,tmp;
	string str;
	while(cin>>str){
		for(i = 2;i < str.size();i++){
				if(str[i] == 'A'){
					if(str[i+1]=='B'){
						tmp = 2;
						break;
					}
					else
						tmp = 0;
						break;
				}
				else if(str[i] == 'B')
					tmp = 1;
				else
					tmp = 3;
		}
		if(tmp == 0){
			a++;
		}
		else if(tmp == 1){
			b++;
		}
		else if(tmp == 2){
			ab++;
		}
		else{
			o++;
		}
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<ab<<endl;
	cout<<o<<endl;
	return 0;
}