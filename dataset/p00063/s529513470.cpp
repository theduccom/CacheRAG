#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int count=0;
	while(cin>>str){
		if(str.length()==1){
			count++;
		}else if(str.length()%2==0){
			for(int i=0;i<str.length()/2;i++){
				if(str[i]==str[str.length()-1-i]){
					if(i==str.length()/2-1) count++;
					continue;
				}else break;
			}
		}else if(str.length()%2==1){
			for(int i=0;i<(str.length()-1)/2;i++){
				if(str[i]==str[str.length()-1-i]){
					if(i==(str.length()-1)/2-1) count++;
					continue;
				}else break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}