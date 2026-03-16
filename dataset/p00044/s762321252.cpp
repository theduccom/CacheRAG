#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)
#define num  50111

using namespace std;




int main(void){
 
int innum;
 
	bool Find[num] ; // 探索リスト
    for(int i = 2; i <= num; i++){
        Find[i] = true;
        if(i%2==0) Find[i] = false;
    }
    for(int i = 2; i*i < num; i++){
        if(Find[i] == false) continue; // すでに除いた数は飛ばす
        for(int j = i * 2; j< num; j += i) {
            if(Find[j]) Find[j] = false;
        }
    }
    Find[2]= true;
//	rep(i,200) if(Find[i]) cout << i << " ";
    while(cin >> innum){
    	for(int i=innum-1;;i--){
    		if(Find[i]){
    			cout << i << " "; 
             	break;  }
        }
    	for(int i=innum+1;;i++){
    		if(Find[i]){
    			cout << i ; 
            	break; }
        }
		cout << endl;
    }
    return 0;
}