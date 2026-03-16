#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

bool check(string str)
{
	int j = str.size()-1;
	for(int i=0;i<str.size()/2;i++){ //0 to 2
		if(str[i] != str[j]){
			return false;
		}else{
			j--;
		}
	}
	return true;
}

int main(){
	int cnt=0;
	string str;
	string swap;
	while(cin >> str){
		if(check(str)){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}