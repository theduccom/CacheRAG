#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int test(int n, int s, int i){//n個でsを作る
	//cout << n <<" "<<s<<" "<<i<<endl;
	if(n==0){
		if(s==0){
			return 1;//作れた
		}else{
			return 0;
		}
	}
	if(i>=10 || s-i<0){
		return 0;
	}

	return test(n, s, i+1) + test(n-1, s-i, i+1);
}

int main(){
	int n;
	string omori[]={"1", "2", "4", "8", "16", "32", "64", "128", "256", "512"};
	int t[10];
	while(cin >> n ){
		for(int i=0;i<10;i++){
			t[i]=(n%2);
			n/=2;
		}
		string str="";
		for(int i=0;i<10;i++){
			//cout << t[i] << endl;
			if(t[i])str+=omori[i]+" ";
		}
		str.erase(str.end()-1);
		cout << str << endl;
	}
	return 0;
}