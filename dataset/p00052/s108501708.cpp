#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;



void count_zero(int* z){
	int cnt=0;
	for(int i=1 ; i<=20000 ; ++i){
		if(i%5==0) cnt++;
		if (i%15625==0) cnt+=5;
	    else if (i%3125==0) cnt+=4;
		else if (i%625==0) cnt+=3;
		else if (i%125==0) cnt+=2;
		else if (fmod(i,12.5)==0) cnt+=1;
		z[i]=cnt;
	}
}

int main(){
	int zero[20001]={0};
	int n;
	count_zero(zero);
	while(cin>>n , n){
		cout << zero[n] << endl;
	}
	return 0;
}