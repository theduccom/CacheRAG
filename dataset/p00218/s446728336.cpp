#include<iostream>
using namespace std;

int main(void){

	while(1){
		int n,pm,pe,pj,pme,pmej,k[10000];
		cin >> n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin >> pm >> pe >> pj;
			pme=(pm+pe)/2;
			pmej=(pm+pe+pj)/3;
			if(pm==100||pe==100||pj==100||pme>=90||pmej>=80)k[i]=1;
			else if(pmej>=70||pmej>=50&&(pm>=80||pe>=80))k[i]=2;
			else k[i]=3;
		}
		for(int i=0;i<n;i++){
			if(k[i]==1)cout << "A" << endl;
			else if(k[i]==2)cout << "B" << endl;
			else cout << "C" << endl;
		}
	}
	return 0;
}