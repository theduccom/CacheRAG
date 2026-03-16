#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>
using namespace std;
int main(){
	string str;
	map<char,int> A;
	A['I'] = 1;
	A['V'] = 5;
	A['X'] = 10;
	A['L'] = 50;
	A['C'] = 100;
	A['D'] = 500;
	A['M'] = 1000;
	A['E'] = -1;
	while(cin >> str){
	    int ans = 0;
	    str += "E";
        for(int i = 0; str[i] != 'E'; i++){
            if(A[str[i]] < A[str[i+1]]){
                ans -= A[str[i]];
            }
            else{
                ans += A[str[i]];
            }
        }
        cout << ans << endl;
	}
	return 0;
}