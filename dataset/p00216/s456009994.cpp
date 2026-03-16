/*
 * src.cpp
 *
 *  Created on: 2016/08/04
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	int w;
	do{
		cin>>w;
		if (w!=-1){
			int b;
			if (w<10){
				b=1150;
			}else if (w<20){
				b=1150+125*(w-10);
			}else if (w<30){
				b=1150+125*10+140*(w-20);
			}else{
				b=1150+125*10+140*10+160*(w-30);
			}
			cout<<4280-b<<endl;
		}
	}while (w!=-1);
	return 0;
}