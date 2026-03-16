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
#include<cctype>

using namespace std;

int main(){
	int n;
	string str;
	string ans;
	while(cin >> str){
		for(int i=0;i<str.size();i++){
			if(str[i] == '@'){
				cout << ans.append(str[i+1]-'0',str[i+2]);
				i+=2;
				ans = "";
			}else{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}