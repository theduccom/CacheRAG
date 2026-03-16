#include <iostream>
using namespace std;
void swap_(int* a,int* b){
	int temp=*a;*a=*b;*b=temp;
}
int main(){
	char ch[4];int cup[3]={1,0,0};
	while(cin >> ch){
		int temp[2];
		for(int i=0; i<=2;i+=2){
		if(ch[i]=='A') temp[i/2]=0;
			else if(ch[i]=='B') temp[i/2]=1;
			else if(ch[i]=='C') temp[i/2]=2;
		};
		swap_(&cup[temp[0]],&cup[temp[1]]);
	};
	if(cup[0]==1) cout << "A\n" ;
	else if(cup[1]==1) cout << "B\n" ;
	else if(cup[2]==1) cout << "C\n" ;
}