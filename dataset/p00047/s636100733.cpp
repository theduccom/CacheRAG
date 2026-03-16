#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{	
	int n[3] = {1,0,0};
	char k[3];
	while(cin>>k){
		if(k[0]=='A'){
			if(k[2]=='B'){
				swap( n[0], n[1] );
			}else{
				swap( n[0], n[2] );
			}
		}
		if(k[0]=='B'){
			if(k[2]=='A'){
				swap( n[1], n[0]);
			}else{
				swap( n[1], n[2]);
			}
		}
		if(k[0]=='C'){
			if(k[2]=='A'){
				swap( n[2], n[0]);
			}else{
				swap( n[2], n[1]);
			}
		}
		
	}
		if(n[0]==1) cout<<'A'<<endl;
		else if(n[1]==1) cout<<'B'<<endl;
		else cout<<'C'<<endl;
		
	return 0;
}