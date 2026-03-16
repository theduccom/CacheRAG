#include<iostream>
using namespace std;

int main(){
	int n, t;
	int two, five;
	while(cin >> n){

		if(n==0)break;

		two=0;
		five=0;

		for(int i=2;i<=n;i+=2){
			t=i;

			while(t%2==0){
				++two;
				t/=2;
			}
		}

		for(int i=5;i<=n;i+=5){
			t=i;

			while(t%5==0){
				++five;
				t/=5;
			}
		}

		if( two <= five )cout << two << endl;
		else cout << five << endl;


	}


	return 0;
}