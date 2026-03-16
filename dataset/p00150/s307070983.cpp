#include<iostream>
using namespace std;

#define MAX 10002
#define sqrtMAX 100

int main()
{
	bool b[MAX+1] = {0};
	int i, j;
	b[0] = 1;
	b[1] = 1;
	for(i=4; i<=MAX; i+=2) b[i] = 1;
	for(i=3; i<=sqrtMAX; i+=2)
		for(j=i+i; j<=MAX; j+=i) b[j] = 1;

	int p[MAX+1] = {0};
	j = 5;
	for(i=5; i<MAX-2; i+=2) {
		p[i] = j;
		p[i+1] = j;
		if ( !(b[i]|b[i+2]) ) j = i+2;
	}

	while (cin>>i, i) cout<<p[i]-2<<" "<<p[i]<<endl;

	return 0;
}