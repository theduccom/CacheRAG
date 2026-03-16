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
char maps[12][12]; 

void saiki(int y,int x){ 
	if(maps[y][x]!='0'){      
		maps[y][x]='0';        
		if(y+1<12)saiki(y+1,x); 
		if(y-1>=0)saiki(y-1,x);   
		if(x+1<12)saiki(y,x+1);     
		if(x-1>=0)saiki(y,x-1);   
	}     return; 
}        
int main(){   
	while(1){  
		int ret = 0;   
		for(int i=0;i<12;i++)for(int j=0;j<12;j++)if(!(cin >> maps[i][j]))return 0;  
		for(int i=0;i<12;i++)for(int j=0;j<12;j++)if(maps[i][j]=='1'){     
			ret++;             
			saiki(i,j);    
		}   
		cout << ret << endl;    
	}
	return 0;
}