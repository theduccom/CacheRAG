#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main(){
	string str;
	while(cin >> str != '\0'){
		for(int i=0;i<str.size();i++){
			if(str[i]!='@'){
				cout << str[i];
			}else{
				int r=str[i+1]-'0';
				char ey=str[i+2];
				for(int j=0;j<r;j++){
					cout << ey;
				}
				i+=2;
			}
		}
		cout << endl;
	}
}