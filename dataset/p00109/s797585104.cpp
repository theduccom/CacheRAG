#include<bits/stdc++.h>
using namespace std;

char* p;

int number();
int term();
int expression();
int program();

int main(){
	int n;	cin>>n;
	char x[100];
	for(int i=0;i<n;i++){
		scanf("%s",x);
		p=x;
		cout<<expression()<<endl;
	}

	return 0;
}

int program(){
	int num;
	if(*p=='('){
		p++;
		num=expression();
		p++;
	}else num=number();

	return num;
}

int number(){
	int num=0;
	while('0'<=*p &&*p<='9'){
		num*=10;	num+=(*p-'0');
		p++;
	}

	return num;
}

int expression(){
	int num=term();
	while(1){
		if(*p=='+'){
			p++;
			num+=term();
		}else if(*p=='-'){
			p++;
			num-=term();
		}else break;
	}

	return num;
}

int term(){
	int num=program();
	while(1){
		if(*p=='*'){
			p++;
			num*=program();
		}else if(*p=='/'){
			p++;
			num/=program();
		}else break;
	}

	return num;
}

