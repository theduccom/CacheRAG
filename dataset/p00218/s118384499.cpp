#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

char get(int a,int b,int c){
	if(a==100||b==100||c==100 || a+b>=180 || a+b+c >= 240)return 'A';
	if(a+b+c>=210 || (a+b+c>=150&&(a>=80||b>=80)))return 'B';
	return 'C';
}
int main(){
	int n;
	while(cin >> n , n){
		rep(i,n){
			int a,b,c;
			cin >> a >> b >> c;
			cout << get(a,b,c) << endl;
		}
	}
}