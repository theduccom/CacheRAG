#include <iostream>
#include <vector>
using namespace std;

int main() {
	char str[128]="";
	vector<int> r;
	while (scanf("%s",str) != EOF)
	{
		int i=-1;
		int pn=0,n=0,s=0;
		do
		{
			i++;
			switch (str[i]){
				case 'M':
					n=1000;
					break;
				case 'D':
					n=500;
					break;
				case 'C':
					n=100;
					break;
				case 'L':
					n=50;
					break;
				case 'X':
					n=10;
					break;
				case 'V':
					n=5;
					break;
				case 'I':
					n=1;
					break;
				default:
					n=0;
					break;
			}
			if (pn<n && pn!=0)
			{
				s+=n-pn;
				pn=0;
			} else {
				s+=pn;
				pn=n;
			}
		} while (str[i] != 0);
		r.push_back(s);
	}
	for (int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}