//0046
#include <bits/stdc++.h>
using namespace std;

int main(){
	double tmp,maxa,mina,dif,flag = 1;
	while(cin>>tmp){
		if(flag){
			flag = 0;
			maxa = mina = tmp;
		}
		else{
			maxa = max(tmp,maxa);
			mina = min(tmp,mina);
		}
	}
		dif = maxa - mina;
		printf("%.2f",dif);
	return 0;
}