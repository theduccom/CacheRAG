#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int cupA,cupB,cupC;

bool check(int cup){
	if(cup==1)return true;
	else return false;
}

int WtoB(int cup){
	if(cup==1)return 0;
	else return 1;
}

void func(char c1,char c2){
	if(c1=='A'){
		if(c2=='B'){
			if(check(cupA) || check(cupB)){
				cupA=WtoB(cupA);
				cupB=WtoB(cupB);
			}
		}else{
			if(check(cupA) || check(cupC)){
				cupA=WtoB(cupA);
				cupC=WtoB(cupC);
			}
		}
	}else if(c1=='B'){
		if(c2=='A'){
			if(check(cupB) || check(cupA)){
				cupB=WtoB(cupB);
				cupA=WtoB(cupA);
			}
		}else{
			if(check(cupB) || check(cupC)){
				cupB=WtoB(cupB);
				cupC=WtoB(cupC);
			}
		}
	}else if(c1=='C'){
		if(c2=='A'){
			if(check(cupC) || check(cupA)){
				cupC=WtoB(cupC);
				cupA=WtoB(cupA);
			}
		}else{
			if(check(cupC) || check(cupB)){
				cupC=WtoB(cupC);
				cupB=WtoB(cupB);
			}
		}
	}
}
		

int main(){
	char cup1,cup2;
	string ss;
	cupA=1;
	cupB=0;
	cupC=0;
	while(cin>>ss){
		cup1=ss[0];
		cup2=ss[2];
		func(cup1,cup2);
	}
	if(cupA==1)cout<<'A'<<endl;
	else if(cupB==1)cout<<'B'<<endl;
	else cout<<'C'<<endl;
	return 0;
}