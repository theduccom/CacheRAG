#include <iostream>
using namespace std;
string text;
int i,n;
int main(){
	while(getline(cin,text)){
		n=1;
		while(n!=27){
			i=0;
			while(i!=text.size()){
				if('a'<=text[i]&&text[i]<'z'){
					text[i]+=1;
				}else if(text[i]=='z'){
					text[i]='a';
				}
				i++;
			}
			if(text.find("the")!=-1)break;
			if(text.find("this")!=-1)break;
			if(text.find("that")!=-1)break;
			n++;
		}
		cout <<text<<endl;
	}
	return 0;
}