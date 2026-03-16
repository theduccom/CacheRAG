#include<iostream>

using namespace std;

int main(){
	int n,p,d1,d2;
	int sum;
	int num,kyori;

	while(cin >> n,n){
		for(int i=0;i<n;i++){
			cin >> p >> d1 >> d2;
			if(i == 0){
				num = p;
				kyori = d1+d2;
			}else{
				if(d1+d2 > kyori){
					num = p;
					kyori = d1 + d2;
				}
			}
		}
		cout << num << " " << kyori << endl;
	}

	return 0;
}