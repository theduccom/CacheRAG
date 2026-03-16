#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	string sstr;
	while(1){
		getline(cin,sstr);
		if(cin.eof())
			break;

		string retStr;
		for(int i = 0; i < 26; i++){
			string str=sstr;
			if(i==4){
			//	cout<<endl;
			}
			for(int j = 0; j < str.size(); j++){
				if(str[j] >= 'a' && str[j] <= 'z'){
					str[j] = str[j] - i;
					if(str[j] < 'a'){
						str[j]+=26;
					}
				}
			}
			bool f=false;
			for(int j = 0; j + 2 < str.size(); j++){
				if(str.substr(j,3)=="the"){
					f=true;
					break;
				}
				else if(j+3<str.size()&& str.substr(j,4)=="this"){
					f=true;
					break;
				}
				else if(j+3<str.size()&&str.substr(j,4)=="that"){
					f=true;
					break;
				}
			}
			if(f){
				retStr=str;
				break;
			}
		}

		cout<<retStr<<endl;
	}

	return 0;
}