#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string str;
	getline(cin,str);
	string w[2]={"apple","peach"};
	string t[2]={"topeac","toappl"};
	for(int i=0;i<2;i++){
		while(1){
			if(str.find(w[i])!=string::npos){
				str.replace(str.find(w[i]),w[i].length(),t[i]);
			}
			else break;
		}
	}
	for(int i=0;i<2;i++){
		while(1){
			if(str.find(t[i])!=string::npos){
				str.replace(str.find(t[i]),t[i].length(),w[1-i]);
			}
			else break;
		}
	}
	cout<<str<<endl;
}