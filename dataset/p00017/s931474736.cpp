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
	string str;
	while(getline(cin,str)){
		for(int j=0;j<=26;j++){
			for(int i=0;i<str.size();i++){
				if(str[i]>='a' && str[i] <='z'){
					if(str[i] != 'z'){
						str[i]+=1;
					}else{
						str[i] = 'a';
					}
				}
			}
			if(str.find("the") != string::npos || str.find("this") != string::npos || str.find("that") != string::npos){
				cout << str << endl;
			}
		}
	}
	return 0;
}