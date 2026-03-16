#include<iostream>
using namespace std;

int main()
{
	int h, w, d, n, r;
	bool f;
	while (cin>>h>>w>>d, h||w||d) {
		cin>>n;
		while (n-- >  0) {
			cin>>r;
			f = 0;
			if (h*h+w*w < 4*r*r) f = 1;
			if (w*w+d*d < 4*r*r) f = 1;
			if (d*d+h*h < 4*r*r) f = 1;
			if (f) cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
	return 0;
}