#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int ex(char c){
	int rtn;
	if(c == 'A') rtn = 0;
	if(c == 'B') rtn = 1;
	if(c == 'C') rtn = 2;
	return rtn;
}

void disp(bool cup[]){
	if(cup[0] == true) cout <<'A';
	if(cup[1] == true) cout <<'B';
	if(cup[2] == true) cout <<'C';
	cout <<endl;
}

int main(){
	bool cup[3] = {false};
	char cng1, cng2;
	cup[0] = true;
	while(scanf("%c,%c", &cng1, &cng2) != EOF){
		cng1 = ex(cng1);
		cng2 = ex(cng2);
		swap(cup[cng1], cup[cng2]);
	}
	disp(cup);
	return 0;
}