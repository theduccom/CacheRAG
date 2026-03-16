#include <iostream>
#include <string>
#include <stdlib.h>
#define substr(source,a,b,destination) destination="";for(int i=a;i<b;i++)destination+=source[i]
using namespace std;

int main(void){
	string str;

	while(getline(cin,str)){
		for(int cif=0;cif!=26;cif++){
				for(int i=0;i<str.length();i++){
					if('A'<=str[i]&&str[i]<='Z'){
						str[i]=(str[i]-'A'+1)%26+'A';
					}else if('a'<=str[i]&&str[i]<='z'){
						str[i]=(str[i]-'a'+1)%26+'a';
					}
				}
			for(int i=0;i<str.length();i++){
				string g="";
				int j=i;
				while(i!=str.length()&&str[i]!=' ')g+=str[i++];
				if(g=="that" || g=="the"||g=="this"){
					cout<<str<<endl;
					break;
				}
			}
		}
	}
	return 0;
}