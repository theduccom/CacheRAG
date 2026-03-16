#include <iostream>
using namespace std;

int main(void){
	int n,a,b,c; //ツ青板学,ツ英ツ古ェ,ツ債堕古ェ

	while(cin>>n && n){
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;

			double me = (a + b) / 2.0;
			double avg = (a + b + c) / 3.0;

			if(a==100 || b==100 || c==100 || me >= 90 || avg >= 80)
				cout<<"A\n";
			else if(avg >= 70 || avg >= 50 && (a >= 80 || b >= 80))
				cout<<"B\n";
			else
				cout<<"C\n";
		}
	}

	return 0;
}