#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>

using namespace std;

int main(void){
	int n;
	int a,b;
	int s;
	string str;
	cin >> n;
	getline(cin,str);
	for(a=0;a<n;a++){
		getline(cin,str);
        s=str.size();
		for(b=0;b<s;b++){
			if(str[b]=='H' && str[b+1]=='o' && str[b+2]=='s' && str[b+3]=='h' && str[b+4]=='i' && str[b+5]=='n' && str[b+6]=='o')str[b+6]='a';
		}
		cout << str << endl;

	}
}