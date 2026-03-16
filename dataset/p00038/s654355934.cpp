#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

bool str(int a[])
{
	if((a[0]==a[1]+1&&a[1]==a[2]+1&&a[2]==a[3]+1&&a[3]==a[4]+1)){
		return true;
	}else if(a[0]==13&&a[1]==12&&a[2]==11&&a[3]==10&&a[4]==1){
		return true;
	}else{
		return false;
	}
}
		
			

int main()
{
	int a[5];
	int count;
	while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]) != EOF){
		count = 0;
		sort(a,a+5,greater<int>());
		for(int i=0;i<4;++i){
			for(int j=i+1;j<5;++j){
				if(a[i]==a[j])count++;
			}
		}
		
		switch(count){
		  case 6:
			cout << "four card" << endl;
			break;
		  case 4:
			cout << "full house" << endl;
			break;
		  case 3:
			cout << "three card" << endl;
			break;
		  case 2:
			cout << "two pair" << endl;
			break;
		  case 1:
			cout << "one pair" << endl;
			break;
		  default:
			if(str(a)){
				cout << "straight" << endl;
			}else{
				cout << "null" << endl;
			}
		}
	}
}
		