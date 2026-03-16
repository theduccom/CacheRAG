#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime>

using namespace std;

char field[11][11],field2[11][11];

int main(void){
	while(1){
		int i,j;
		bool flag=false;
		for(j=0;j<11;j++){
			for(i=0;i<11;i++){
				field[i][j]='\0';
				field2[i][j]='\0';
			}
		}
		for(i=0;i<8;i++){
			if(scanf("%s",field[i])==EOF){
				flag=true;
				break;
			}
		}
		if(flag)break;
		for(j=0;j<8;j++){
			for(i=0;i<8;i++){
				field2[i][j]=field[j][i];
			}
		}
		for(j=0;j<8;j++){
			for(i=0;i<8;i++){
				if(field2[i][j]=='1' && field2[i+1][j]=='1' && field2[i][j+1]=='1' && field2[i+1][j+1]=='1')printf("A\n");
				if(field2[i][j]=='1' && field2[i][j+1]=='1' && field2[i][j+2]=='1' && field2[i][j+3]=='1')printf("B\n");
				if(field2[i][j]=='1' && field2[i+1][j]=='1' && field2[i+2][j]=='1' && field2[i+3][j]=='1')printf("C\n");
				if(field2[i+1][j]=='1' && field2[i+1][j+1]=='1' && field2[i][j+1]=='1' && field2[i][j+2]=='1')printf("D\n");
				if(field2[i][j]=='1' && field2[i+1][j]=='1' && field2[i+1][j+1]=='1' && field2[i+2][j+1]=='1')printf("E\n");
				if(field2[i][j]=='1' && field2[i][j+1]=='1' && field2[i+1][j+1]=='1' && field2[i+1][j+2]=='1')printf("F\n");
				if(field2[i][j+1]=='1' && field2[i+1][j+1]=='1' && field2[i+1][j]=='1' && field2[i+2][j]=='1')printf("G\n");
			}
		}
	}
	return 0;
}