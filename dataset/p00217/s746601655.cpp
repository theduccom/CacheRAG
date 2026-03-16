#include <iostream>
using namespace std;

int main(){
	int n, p, d1, d2, ap, ad;

	while(cin>>n, n){
		ap=ad=-1;
		while(n--){
			cin>>p>>d1>>d2;
			if(ad<d1+d2)ap=p, ad=d1+d2;
		}
		printf("%d %d\n", ap, ad);
	}
	return 0;
}