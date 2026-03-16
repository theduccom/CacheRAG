#include <iostream>
using namespace std;

int twopow(int n)
{
	int ans = 1;
	for(int i=0;i<n;i++){
		ans *= 2;
	}
	return ans;
}

int main()
{
	int n;
	while(cin >> n){
		bool o[10] = {0};
		int mn=n;
		for(int i=0;i<10;i++){
			o[i] = (mn%2==1);
			mn/=2;
		}
		bool flag=false;
		for(int i=0;i<10;i++){
			if(o[i]==1){
				if(flag==true)
					cout << " ";
				flag = true;
				cout << twopow(i);
			}
		}
		cout << endl;
	}
	return 0;
}