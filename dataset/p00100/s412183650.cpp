#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(!n){
			break;
		}
		map<unsigned long long int,unsigned long long int> syain;
		bool flag = true;
		unsigned long long int a,b,c;
		for(int i=0;i<n;i++){
			map<unsigned long long int,unsigned long long int> tmp;
			cin >> a >> b >> c;
			if(syain.find(a) != syain.end() && syain[a] < 1000000)
				syain[a] += b*c;
			else
				syain[a] = b*c;
			if(syain[a] >= 1000000){
				cout << a << endl;				
				flag = false;
			}
		}
		if(flag)
			cout << "NA" << endl;
	}
	return 0;
}