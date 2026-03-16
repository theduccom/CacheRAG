#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>


using namespace std;

//vector<double> a;


int main(){
	double a;
	while(cin>>a){
		double sum=a;
		for(int i=0; i<9; i++){
			if(i%2==0)a*=2;
			else a/=3;
			sum+=a;
		}
		//cout<<sum<<endl;
		printf("%.15lf\n", sum);
	}

}