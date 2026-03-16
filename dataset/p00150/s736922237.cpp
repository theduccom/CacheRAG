#include<iostream>
using namespace std;

const int size = 10001;
bool a[size];

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
	int n;
	eratos();
	while(true){
		cin >> n;
		if(!n)
			return 0;
		if(!(n%2))
			n--;
		for(int i=n; i>=5; i-=2){
			if(a[i] && a[i-2]){
				cout << i-2 << ' ' << i << endl;
				break;
			}
		}				
	}
}