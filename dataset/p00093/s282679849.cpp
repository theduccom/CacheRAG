#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;
 
int main()
{
	int a,b;
	bool first = true;	
	for(;;){
		cin>>a>>b;		
		if(a==0) return 0;
		if(!first)
            		cout << endl;
       		else
            		first = false;
		if(a%4!=0) a=a-(a%4)+4;
		if((a%100==0)&&(a%400!=0)) a+=4;
		bool na=true;
		for(int i=a;a<=b;a=a+4){
			if((a%100==0)&&(a%400!=0)) continue;
			cout << a << endl;
			na=false;
		}
		if(na) cout<<"NA"<<endl;
	}
}