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

int main(void){
	int n;
	int a,b,c;
	int num[8],num2[10];
	string str;
	char ans[9],ans2[9];
	int max,min;
	cin >> n;
	for(c=0;c<n;c++){
		max=0,min=0;
		for(a=0;a<10;a++)num2[a]=0;
		cin >> str;
		for(a=0;a<8;a++)num[a]=str[a]-'0',ans[a]='\0',ans2[a]='\0';
		for(a=0;a<8;a++)num2[num[a]]++;
		a=9;
		b=0;
		while(a>=0){
			if(num2[a]>0)ans[b]=a+'0',num2[a]--,b++;
			else a--;
		}
		for(a=0;a<8;a++)ans2[7-a]=ans[a];
		max=atoi(ans);
		min=atoi(ans2);
		cout << max-min << endl;
	}
	return 0;
}