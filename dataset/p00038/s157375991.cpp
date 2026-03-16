#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,s,n) for(int i=s; i<n; i++)
#define ALL(x) x.begin(), x.end()
#define pb push_back
#define foreach(it,con) for(auto it=con.begin();it!=con.end();it++)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;



string judge(int* nums){
	map<int,int> count;
	FOR(i,1,14){
		count[i] = 0;
	}
	rep(i,5){
		count[nums[i]]++;
	}
	
	bool is2 = false;
	bool is3 = false;
	int c=0;
	int mc=0;
	string ret="";
	foreach(it,count){
		if(it->second>0){
			c++; 
			mc=max(mc,c);
		}else{
			c=0;
		}
		if(it->second==4){
			ret = "four card";
			break;
		}else if(it->second==3){
			if(is2){
				ret = "full house";
				break;
			}else{
				is3 = true;
			}
		}else if(it->second==2){
			if(is3){
				ret = "full house";
				break;
			}else if(is2){
				ret = "two pair";
				break;
			}else{
				is2 = true;
			}
		}
	}
	if(count[1]==1&&count[13]==1&&count[12]==1&&count[11]==1&&count[10]==1){
		return "straight";
	}
	if(mc==5){
		return "straight";
	}else if(ret!=""){
		return ret;
	}else if(is3){
		return "three card";
	}else if(is2){
		return "one pair";
	}
	return "null";
}



int main(){
	int nums[5];
	while(scanf("%d,%d,%d,%d,%d",&nums[0],&nums[1],&nums[2],&nums[3],&nums[4])+1){
		cout << judge(nums) << endl;
	}
	return 0;	
}