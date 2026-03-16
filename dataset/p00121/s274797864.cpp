#include <iostream>
#include <sstream>
#include <queue>
#include <cstdlib>
#include <map>
using namespace std;

class NODE{
public:
	int num;
	int depth;
	int zero;
};

int tbl[]={1,10,100,1000,10000,100000,1000000,10000000};

int swap(const int& n,const int a,int b){
	int x = (n%tbl[7-a+1]) / tbl[7-a];
	int y = (n%tbl[7-b+1]) / tbl[7-b];
	return n-x*tbl[7-a] - y*tbl[7-b] + y*tbl[7-a] + x*tbl[7-b];
}	



int main(){
	queue<NODE> Q;
	NODE p = {1234567,0,0};
	Q.push(p);
	map<int,int> done;
	while(Q.size()){
		NODE q = Q.front(); Q.pop();
		if( done.find(q.num) != done.end())continue;
		done[q.num] = q.depth;
		if( (q.zero+1)%4 ){
			int next = q.zero+1;
			int nextNum = swap(q.num,q.zero,next);
			if( done.find(nextNum) == done.end() ){
				NODE qt = {nextNum,q.depth+1,next};
				Q.push(qt);
			}
		}
		if( q.zero%4 ){
			int next = q.zero-1;
			int nextNum = swap(q.num,q.zero,next);
			if( done.find(nextNum) == done.end() ){
				NODE qt = {nextNum,q.depth+1,next};
				Q.push(qt);
			}
		}
		
		if( q.zero < 4){
			int next = q.zero+4;
			int nextNum = swap(q.num,q.zero,next);
			if( done.find(nextNum) == done.end() ){
				NODE qt = {nextNum,q.depth+1,next};
				Q.push(qt);
			}
		}else{
			int next = q.zero-4;
			int nextNum = swap(q.num,q.zero,next);
			if( done.find(nextNum) == done.end() ){
				NODE qt = {nextNum,q.depth+1,next};
				Q.push(qt);
			}
		}
	}
	string getData,t;
	while( getline(cin,getData) && getData != ""){
		stringstream ss(getData);
		getData = "";
		while(ss >> t)getData+=t;
		int t_i = atoi(getData.c_str());
		cout << done[t_i] << endl;
		
	}
}