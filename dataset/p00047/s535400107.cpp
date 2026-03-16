#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[256];
	a['A']='A';
	a['B']='B';
	a['C']='C';
	char A,B,C;
	while(cin>>A>>B>>C)
		swap(a[A],a[C]);
	for(int i=0;i<256;i++)
		if(a[i]=='A')
			cout<<(char)i<<endl;
}