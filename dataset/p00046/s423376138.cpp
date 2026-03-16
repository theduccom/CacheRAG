#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	double mauntain[50];
	int j=0;
	double n;
	double max_height = 0.0;
	double min_height = 1000000.0;
	while(cin >> n){
		mauntain[j] = n;
		j++;
	}

	for(int i=0;i<j;i++){
		if(max_height < mauntain[i])max_height = mauntain[i];
	}

	for(int i=0;i<j;i++){
		if(min_height > mauntain[i])min_height = mauntain[i];
	}

	cout << max_height - min_height << endl;
}