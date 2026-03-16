#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string>
#include<cmath>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<algorithm>

using namespace std;

#define OUT cout <<
#define IN cin >>
#define E << endl;
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define RFOR(i,a,b) for(int i = a; i >= b;i--)

string str;
string rstr;
int countt = 0;

int main(){
	while(IN str){
		RFOR(i, str.size() - 1, 0){
			rstr += (str[i]);
			//OUT str[i] E
		}
		//OUT rstr E
		if(str == rstr){
			countt++;
		}
		rstr.erase(rstr.begin(), rstr.end());
	}
	OUT countt E

}	