#include <iostream>
#include <string>
using namespace std;
void swap_(int* a,int* b){
	int temp=*a;*a=*b;*b=temp;
}
//あとで削除
int chtoint(const char ch){int n=0;
	if(ch=='0')n=0;if(ch=='1')n=1;if(ch=='2')n=2;if(ch=='3')n=3;
	if(ch=='4')n=4;if(ch=='5')n=5;if(ch=='6')n=6;if(ch=='7')n=7;
	if(ch=='8')n=8;if(ch=='9')n=9;
	return (n);
}
int main(){
	int n ; cin >> n ;
	for(int i=0;i<n;i++){
		char a[8];int b[8];
		for(int j=0;j<8;j++) cin >> a[j] ;
		for(int j=0;j<8;j++) b[j]=chtoint(a[j]);
		for(int i=1;i<=7;i++){
			for(int j=7;j>=i;j--){
			if(b[j-1]>b[j]) swap_(&b[j-1],&b[j]) ;
		};};
		int min=b[0]; int max=b[7];
		for(int j=6;j>=0;j--) max=max*10+b[j];
		for(int j=1;j<=7;j++) min=min*10+b[j];
		int diff=max-min;
	cout << diff << '\n' ;
	};
}