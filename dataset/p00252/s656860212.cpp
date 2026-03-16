/*
 * src.cpp
 *
 *  Created on: 2016/08/08
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if ((a && b) || c){
		cout<<"Open"<<endl;
	}else{
		cout<<"Close"<<endl;
	}
	return 0;
}