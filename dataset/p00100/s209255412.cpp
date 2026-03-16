#include <iostream>
#include <cstring>
using namespace std;

int main(){
	long long int n,i,j,tmp,mx,price[4000][2],a,b,c;
	bool flag;
	while(cin >> n && n){
		flag = false;
		mx = 0;
		memset(price,'\0',sizeof(price));
		for(i = 0;i < n;++i){
			cin >> a >> b >> c;
			for(j = 0;j < mx;++j){
				if(price[j][0] == a){
					tmp = j;
					flag = true;
				}
			}
			if(flag) price[tmp][1] += (b * c);
			else {
				price[mx][1] += (b * c);
				price[mx][0] = a;
				++mx;
			}
			flag = false;
		}
		flag = false;
		for(i = 0;i < mx;++i){
			if(price[i][1] >= 1000000){
				cout << price[i][0] << endl;
				flag = true;
			}
		}
		if(flag == false) cout << "NA" << endl;
	}
	return 0;
}