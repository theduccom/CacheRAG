#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);
const double eps=1e-8;

int h,w;
vector<vector<char> > field;

int main(){
	while(1){
		cin>>h>>w;
		if(!h&&!w) break;
		field=vector<vector<char> >(h,vector<char>(w));
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>field[i][j];
			}
		}
		int H=0,W=0;
		bool loop=0;
		while(field[H][W]!='.'){
			if(field[H][W]=='!'){
				cout<<"LOOP"<<endl;
				loop=1;
				break;
			}
			char tmp=field[H][W];
			field[H][W]='!';
			if(tmp=='>') W++;
			else if(tmp=='<') W--;
			else if(tmp=='^') H--;
			else H++;
		}
		if(!loop) cout<<W<<' '<<H<<endl;
	}
}