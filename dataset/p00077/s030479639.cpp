#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;
 
int main()
{	while(1){
		string str;
		cin>>str;
		if(cin.eof()) return 0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='@'){
				int n=str[i+1]-'0';
				for(int j=0;j<n;j++) cout<<str[i+2];
				i=i+2;
			}else cout<<str[i];
		}
		cout<<endl;		
	}
	return 0;
}