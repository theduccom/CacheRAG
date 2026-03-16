#include<iostream>
using namespace std;

const int size = 1000001;
bool a[size],DP[size];
int n,x;
int m[30];

void eratos(){
	if(size>=1)
		a[0] = false;
	if(size>=2)
		a[1] = false;
	for(int i=2; i<size; i++)
		a[i] = true;
	for(int i=2; i*i<size; i++)
		if(a[i])
			for(int j=i*i; j<size; j+=i)
				a[j] = false;
}

int main(){
	eratos();
	while(true){
		cin >> n >> x;
		if(!n&&!x)
			return 0;
		for(int i=0; i<n; i++)
			cin >> m[i];
		DP[0] = true;
		for(int i=1; i<=x; i++)
			DP[i] = false;
		for(int i=0; i<n; i++)
			for(int k=0; k<=x; k++)
				if(DP[k]&&k+m[i]<=x)
					DP[k+m[i]] = true;
		bool flag = true;
		for(int i=x; i>2; i-=2){
			if(!(i%2))
				i--;
			if(DP[i] && a[i]){
				cout << i << endl;
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "NA\n";
	}
}