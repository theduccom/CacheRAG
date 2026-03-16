#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<utility>
#include<cctype>
using namespace std;

#define ull unsigned long long
#define ll long long
#define rep(i,j) for(int i=0;i<j;++i)
#define loop(i,a,j) for(int i=a;i<j;++i)
#define mpi(it,table,T,E) for(map<T,E>::iterator it = table.begin();it!=table.end();++it)
#define PI 3.141592654
/*
ifstream fin("input.txt");
ofstream fout("output.txt");
#define cin fin
#define cout fout
*/


int main(){
	string line;	
	int tot = 0;
	while( getline(cin,line) ){
		bool flag = true;
		for(int i=0,j=line.size()-1;i<j;i++,j--){
			if(line[i] != line[j]){
				flag = false;
			}
		}
		if(flag){
			tot++;
		}
	}
	cout<<tot<<endl;
	return 0;
}