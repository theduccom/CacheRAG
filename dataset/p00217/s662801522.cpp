#include <iostream>
using namespace std;

int main()
{
	int n,p,d1,d2,mp,md;
	while(cin >> n){
		mp=0,md=0;
		if(n == 0)
			break;
		for(int i=0;i<n;i++){
			cin >> p >> d1 >> d2;
			if(md < d1+d2){
				mp = p;
				md = d1+d2;
			}
		}
		cout << mp <<" "<< md << endl;
	}
	return 0;
}