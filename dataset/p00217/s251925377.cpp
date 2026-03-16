#include<iostream>
using namespace std;
int main()
{
	int n,p[10000],d1[10000],d2[10000],bangou;
	while(1){
		int max=0;
		cin >> n;
		if(n==0)break;
		for(int i=0 ; i<n ; ++i){
			cin >> p[i] >> d1[i] >> d2[i];
		}
		for(int i=0 ; i<n ; ++i){
			if(max<d1[i]+d2[i]){
				max = d1[i]+d2[i];
				bangou = p[i];
			}
		}
		cout << bangou << " " << max << endl;
	}
	return 0;
}