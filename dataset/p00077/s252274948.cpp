#include<iostream>
#include<string>
using namespace std;

int main(){
	int i, j, len;
	string str1, str2;
	while(cin>>str1){
		str2.erase();
		len = str1.size();
		for(i=0;i<len;i++){
			if(str1[i] == '@'){
				for(j=0;j<str1[i+1]-'0';j++){
					str2 += str1[i+2];
				}
				i+=2;
			}else{
				str2 += str1[i];
			}
		}
		cout<<str2<<endl;
	}
	return 0;
}