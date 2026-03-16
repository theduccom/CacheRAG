#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	float mon,low=1000000,high=0;
	while(cin>>mon){
		if(low>mon)low=mon;
		if(high<mon)high=mon;
	}
	cout<<high-low<<endl;
	return 0;
}