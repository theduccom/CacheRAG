#include <iostream>
#include <string>
using namespace std;
#define N 8

int ptn[7]={18, 48, 6, 30, 20, 34, 16};

int main(void){
    string str,tmp;
	while (true){
		int i=0;
		getline(cin,tmp);
		if (cin.eof()) break;
		if (tmp.length()>0){
			str = tmp;
			i++;
		}else str = "";

		while (i<N){
			getline(cin,tmp);
			str+=tmp;
			i++;
		}
		int s=0, mini=(int)str.length();
		for (int i=0; i<str.length(); i++){
			if (str[i]=='1'){
				if (i<mini) mini =i;
				s+=i;
			}
		}
		s -= mini*4;
		for (int i=0; i<7; i++){
			if (ptn[i]==s){ 
				cout<<char(i+'A')<<endl;
				break;
			}
		}
	}
	return 0;
}