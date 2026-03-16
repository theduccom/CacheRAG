#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(){

	string str;
	getline(cin,str);
	string nstr="";

	for(int i = 0; i+4 < str.size(); i++){
		string cut=str.substr(i,5);
		if(cut=="apple"){
			cut="peach";
			for(int j = 0; j < cut.size(); j++){
				str[i+j]=cut[j];
			}
			i+=5;
		}
		else if(cut=="peach"){
			cut="apple";
			for(int j = 0; j < cut.size(); j++){
				str[i+j]=cut[j];
			}
			i+=5;
		}
	}

	//int head=0;
	//for(int i = 0; i < str.size(); i++){
	//	if(str[i]==' '||str[i]=='.'){
	//		string cut=str.substr(head,i-head);
	//		if(cut=="peach")
	//			cut="apple";
	//		else if(cut=="apple")
	//			cut="peach";
	//		head=i+1;
	//		nstr+=cut;
	//		if(str[i]=='.')
	//			nstr+='.';
	//		else
	//			nstr+=' ';
	//	}
	//}
	//if(str[str.size()-1]!='.'){
	//	string cut=str.substr(head,str.size()-head);
	//	if(cut=="peach"){
	//		cut="apple";
	//	}
	//	else if(cut=="apple"){
	//		cut="peach";
	//	}
	//	nstr+=cut;
	//}

	cout<<str<<endl;

	return 0;
}