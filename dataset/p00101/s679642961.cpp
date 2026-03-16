#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int n;
	cin>>n;
	string str;
	getline(cin,str);
	for(int m = 0; m < n; m++){
		getline(cin,str);
		string nstr;
		int prvIdx=0;
		bool start=false;
		for(int i = 0; i < str.size(); i++){
			if(i+6<str.size()&&str.substr(i,7)=="Hoshino"){
				nstr+="Hoshina";
				i+=6;
			}
			else{
				nstr+=str[i];
			}
			//if(i==str.size()-1){
			//	if(!start){
			//		nstr+=str[i];
			//	}
			//	else{
			//		string ss=str.substr(prvIdx,i-prvIdx+1);
			//		if(ss=="Hoshino"){
			//			nstr+="Hoshina";
			//		}
			//		else
			//			nstr+=ss;
			//	}
			//}
			//else if(((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))){
			//	if(!start){
			//		start=true;
			//		prvIdx=i;
			//	}
			//}
			//else{
			//	if(start){
			//		string ss=str.substr(prvIdx,i-prvIdx);
			//		if(ss=="Hoshino"){
			//			nstr+="Hoshina";
			//		}
			//		else{
			//			nstr+=ss;
			//		}
			//		start=false;
			//	}
			//	nstr+=str[i];
			//}

			//if(i==str.size()-1){
			//	string ss=str.substr(prvIdx,str.size()-prvIdx);
			//	if(ss=="Hoshino"){
			//		nstr+="Hoshina";
			//	}
			//	else
			//		nstr+=ss;
			//}
			//else if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))){
			//	string ss=str.substr(prvIdx,i-prvIdx);
			//	if(ss=="Hoshino"){
			//		nstr+="Hoshina";
			//	}
			//	else
			//		nstr+=ss;
			//	nstr+=str[i];
			//	prvIdx=i+1;
			//}
		}
		cout<<nstr<<endl;
	}

	return 0;
}