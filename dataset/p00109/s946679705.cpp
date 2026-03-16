#include<string>
#include<cctype>
#include<stdio.h>
using namespace std;
int ex(char **b);
int te(char **b);
int fu(char **b);
int num(char **b);
int main(){
	int n;
	char s[1000];
	scanf("%d\n",&n);
	while(n--){
		scanf("%s",s);
		char *p = s;
		printf("%d\n",ex(&p));
	}
}


//和差
int ex(char **b){
	int r=te(b);
	for(;;){
		if(**b=='+')r+=te(&(++*b));
		else if(**b=='-')r-=te(&(++*b));
		else break;
	}
	return r;
}
//乗除
int te(char **b){
	int r=fu(b);
	for(;;){
		if(**b=='*')r*=fu(&(++*b));
		else if(**b=='/')r/=fu(&(++*b));
		else break;
	}
	return r;
}
//数字
int num(char **b){
	int r=0,cnt=0;
	while(isdigit(**b)){
		r*=10;
		r+=**b-'0';
		++*b;
		cnt++;
	}
	return r;
}
//括弧
int fu(char **b){
	if(**b=='('){
		int r=ex(&(++*b));
		++*b;
		return r;
	}
	else return num(b);
}