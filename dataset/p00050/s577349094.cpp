#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

char ary[1010];
int main(){
	fgets(ary,1010,stdin);
	int n=strlen(ary);
	stack<int> pe,ap;
	for(int i=0;i<n-4;i++){
		if(ary[i]=='a'&&ary[i+1]=='p'&&ary[i+2]=='p'&&ary[i+3]=='l'&&ary[i+4]=='e') ap.push(i);
		else if(ary[i]=='p'&&ary[i+1]=='e'&&ary[i+2]=='a'&&ary[i+3]=='c'&&ary[i+4]=='h') pe.push(i);
	}
	while(!ap.empty()){
		int tmp=ap.top();ap.pop();
		ary[tmp]='p';
		ary[tmp+1]='e';
		ary[tmp+2]='a';
		ary[tmp+3]='c';
		ary[tmp+4]='h';
	}
	while(!pe.empty()){
		int tmp=pe.top();pe.pop();
		ary[tmp]='a';
		ary[tmp+1]='p';
		ary[tmp+2]='p';
		ary[tmp+3]='l';
		ary[tmp+4]='e';
	}
	printf("%s",ary);
	return 0;
}