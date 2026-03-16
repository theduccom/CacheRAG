#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int p1[100],p2[100];
		for(int i=0;i<100;i++){
			p1[i] = 0; p2[i] = 0;
		}
		string a,b;
		cin >> a ;
		cin >> b ;
		if(a.size() > 80 || b.size() > 80){
			cout << "overflow" << endl;
			continue;
		}

		int pos = 0;
		for(unsigned i=a.size();i>0;i--){
			stringstream sst;
			sst << a[i-1];
			sst >> p1[pos++];
		}
		pos = 0;
		for(unsigned i=b.size();i>0;i--){
			stringstream sst;
			sst << b[i-1];
			sst >> p2[pos++];
		}
		for(int i=0;i<100;i++){
			int ans = p1[i]+p2[i];
			p1[i] = ans % 10;
			p1[i+1] += ans/10;
		}
		bool flag = true;
		for(int i=99;i>=0;i--){
			if(flag){
				if(i != 0 && p1[i] == 0)
					continue;
				else{
					if(i > 79){
						cout << "overflow" ;
						break;
					}
					flag = false;
				}
			}
			cout << p1[i];
		}
		cout << endl;
	}
	return 0;
}