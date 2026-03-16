#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	double n;
	while(cin>>n){
		double nums[11];
		double sum=n;
		nums[0]=n;
		for(int i = 1; i < 10; i++){
			if(i%2)
				nums[i]=nums[i-1]*2;
			else
				nums[i]=nums[i-1]/3;
			sum+=nums[i];
		}
		printf("%.6f\n",sum);
	}

	return 0;
}