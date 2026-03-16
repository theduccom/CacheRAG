#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#include <utility>
#include <numeric>
using namespace std;
typedef pair<double,double> P;
int b[19][19];


int main(){
	
	int dx[]={1,-1,-4,4};
	
	string s="01234567";
	
	queue<string> que;
	map<string,int> ans;
	que.push(s);
	ans[s]=0;
	
	while(que.size()){
		string q=que.front();
		que.pop();
		int x=q.find("0");
		for(int i=0;i<4;i++){
			int next = x+dx[i];
			if(next>=0&&next<=7&&!(x==3&&next==4)&&!(x==4&&next==3)){
				string nextq = q;
				swap(nextq[x],nextq[next]);
				if(ans.find(nextq)==ans.end()){
					que.push(nextq);
					ans[nextq]=ans[q]+1;
				}
			}
		}
	}
	
	string input="";
	while(getline(cin,input)){
		input.erase(remove(input.begin(),input.end(),' '),input.end());
		cout<<ans[input]<<endl;
	}
}