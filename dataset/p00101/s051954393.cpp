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

int main(){
	int n=0;
	string str;
	cin >> n;
	getline(cin,str);
	for(int i=0;i<n;i++){
		getline(cin,str);
		for(int j=0;j<str.size();j++){
			if(str[j] == 'H' && str[j+1] == 'o' && str[j+2] == 's' && str[j+3] == 'h' && str[j+4] == 'i' && str[j+5] == 'n' && str[j+6] == 'o'){
				str[j+6] = 'a';
			}
		}
		cout << str << endl;
	}
	return 0;
}