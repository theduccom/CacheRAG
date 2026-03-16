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

int rail[11],railal=0,sp[2];
double  c1,c2,t;
int main(void){
	int a;
	while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&rail[1],&rail[2],&rail[3],&rail[4],&rail[5],&rail[6],&rail[7],&rail[8],&rail[9],&rail[10],&sp[0],&sp[1])){
		railal=0;
		t=0;
		for(a=1;a<=10;a++)railal+=rail[a];
		c1=(double)sp[0]/3600;
		c2=(double)sp[1]/3600;
		for(a=1;a<=10;a++){
			t+=(double)rail[a]/c1;
			if((double)t*(sp[0]+sp[1])/3600>=railal){
				cout << a << endl;
				break;
			}
		}
	}
	return 0;
}