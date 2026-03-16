#include<iostream>
#include<string>
using namespace std;
int main(){
	string n;
	while(getline(cin,n)){
		string tmp=n;
		for(int i=0;i<26;i++){
			if(tmp.find("the")!=-1||tmp.find("that")!=-1||tmp.find("this")!=-1)break;
			for(int j=0;j<tmp.size();j++){
				if(tmp[j]==' '||tmp[j]=='.')continue;
				if(tmp[j]=='z')tmp[j]='a';
				else tmp[j]++;
			}
		}
		cout<<tmp<<endl;
	}
	return 0;
}