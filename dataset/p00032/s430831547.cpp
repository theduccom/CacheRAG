#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d=0,e=0;
	char f;
	while(cin>>a>>f>>b>>f>>c){
		if(a*a+b*b==c*c){
			d++;
		}
		if(a==b){
			e++;
		}
	}
	cout<<d<<endl<<e<<endl;
	return 0;
}

