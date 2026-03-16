#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str;
	int c=0;
	while(cin>>str){
		bool f=true;
		for(int i=0;i<str.length()/2;i++){
			if(str[i]!=str[str.length()-1-i]){f=false;break;}
		}
		if(f)c++;
	}
	cout<<c<<endl;
	return 0;
}