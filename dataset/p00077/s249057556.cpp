#include <iostream>
#include <string>
using namespace std;
int main(){
	string str,s;
	int i,m;
	while(cin >> str){
		s="";
		for(i=0;i<str.size();i++){
			if(str[i]=='@'){
				m=str[i+1]-'0';
				s.append(m,str[i+2]);
				i=i+2;
			}else{
				s+=str[i];
			}
		}
		cout << s <<endl;
	}
	return 0;
}