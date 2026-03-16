#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n && n){
		int mod2=0, mod5=0;
		for(int i=1;i<=n;i++){
			int tmp, tmp2;
			tmp = i;
			while(1){
				if(tmp % 2==0){
					mod2++;
					tmp /= 2;
				}else{
					break;
				}
			}
			tmp2 = i;
			while(1){
				if(tmp2 % 5==0){
					mod5++;
					tmp2 /= 5;
				}else{
					break;
				}
			}
		}
		cout<<min( mod2, mod5 )<<endl;
	}
	return 0;
}