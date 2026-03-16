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
bool Find[110000] ; // 探索リスト
void furui(int num){
   for(int i = 2; i <= num; i++){
        Find[i] = true;
        if(i%2==0) Find[i] = false;
    }
    for(int i = 2; i*i < num; i++){
        if(Find[i] == false) continue; 
        for(int j = i * 2; j< num; j += i) {
            if(Find[j]) Find[j] = false;
        }
    }
    Find[2]= true; 
}

int main(void){

const int zmax=110000;
int n,sw=0;
	
	furui(zmax);
	while(cin >> n){
		if(n==0 || cin.eof()) break;
		int s=0,sn=0;
		rep2(i,2,zmax){
			if(Find[i]){
				s += i;
				sn++;
			}
			if(sn >= n) break;
		}
		cout << s << endl;
	}
	return 0;
	
	
}