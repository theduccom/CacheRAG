#include <cstdio>
#include <iostream>

using namespace std;

double data[10];
double n;
double ans=0;

int main(){
	while(cin >> n){
		ans = 0;
		data[0] = n;
		for(int i=1;i<10;i++){
			if((i+1)%2 == 0){
				data[i] = data[i-1] * 2;
			}else{
				data[i] = data[i-1] / 3;
			}
		}

		for(int i=0;i<10;i++)ans += data[i];

		printf("%0.8lf\n",ans);
	}
}