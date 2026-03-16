#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>


#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

//素数num以下のふるい
void sosuu(int num,vector<bool>& Find){
//	bool Find[num] ; // 探索リスト
    for(int i = 2; i <= num; i++){
//        Find[i] = true;
        if(i%2==0) Find[i] = false;
    }
    for(int i = 2; i*i < num; i++){
        if(Find[i] == false) continue; // すでに除いた数は飛ばす
        for(int j = i * 2; j< num; j += i) {
            if(Find[j]) Find[j] = false;
        }
    }
    Find[2]= true;
}

int main(void){

int n;
	vector<bool> ssu(50100,true);
	sosuu(50100,ssu);
	vector<int> ss2;
	rep(i,50100) if(ssu[i]) ss2.push_back(i);
	while(cin >> n){
		if( cin.eof() || n ==0 ) break;
		int cnt = 0;
		int zx = min(n, (int)ss2.size());
		rep2(i,2,zx){
			if(ss2[i] > n - ss2[i]) break;
			if(ssu[n-ss2[i]] )	cnt++;
			}
		cout << cnt << endl;
	}
	return 0;
	
	
}