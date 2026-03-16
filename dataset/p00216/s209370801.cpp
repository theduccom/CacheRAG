//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int W;
	int R;
	while(1){
		R=0;
		cin>>W;
		if(W==-1) break;
		if(W<=10)R=1150;
		else if(W>10&&W<=20)R=1150+(W-10)*125;
		else if(W>20&&W<=30)R=1150+1250+(W-20)*140;
		else if(W>30)R=1150+1250+1400+(W-30)*160;

		cout<<4280-R<<endl;
	}


	return 0;
}