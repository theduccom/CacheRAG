#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
char str[200];
pair<int,int>ad(int a);
pair<int,int>mul(int a);
pair<int,int>fact(int a);
pair<int,int>ad(int a){
	pair<int,int> res=mul(a);
	while(str[res.second]=='+'||str[res.second]=='-'){
		pair<int,int>v=mul(res.second+1);
		if(str[res.second]=='+')res.first+=v.first;
		else res.first-=v.first;
		res.second=v.second;
	}
	return res;
}
pair<int,int>mul(int a){
	pair<int,int> res=fact(a);
	while(str[res.second]=='*'||str[res.second]=='/'){
		pair<int,int>v=fact(res.second+1);
		if(str[res.second]=='*')res.first*=v.first;
		else res.first/=v.first;
		res.second=v.second;
	}
	return res;
}
pair<int,int>fact(int a){
	if(str[a]=='('){
		pair<int,int> res=ad(a+1);
		res.second++;
		return res;
	}else{
		int val=0;
		while(isdigit(str[a])){
			val=val*10+str[a++]-'0';
		}
		return make_pair(val,a);
	}
}
int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		scanf("%s",str);
		printf("%d\n",ad(0).first);
	}
}