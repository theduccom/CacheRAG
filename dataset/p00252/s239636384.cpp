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

int a,b,c;

int main(void){
	cin >> a >> b >> c;
	if(a==1 && b==0 && c==0)cout << "Close" << endl;
	if(a==0 && b==1 && c==0)cout << "Close" << endl;
	if(a==1 && b==1 && c==0)cout << "Open" << endl;
	if(a==0 && b==0 && c==1)cout << "Open" << endl;
	if(a==0 && b==0 && c==0)cout << "Close" << endl;
    return 0;
}