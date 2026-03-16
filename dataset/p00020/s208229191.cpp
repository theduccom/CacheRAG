//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
typedef vector< vector<ll> > mat;
const ll M = 10007;

int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
	int n = (int)(str[i]);
	if(97 <= n && n <= 122) str[i] = (char)(n - 32);
    }
    cout << str << endl;


    return 0;
}