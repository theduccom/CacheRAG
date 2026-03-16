#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

struct dat{ string s; int i; };

int main(){
	string str;
	int a[8];
	dat d, d2;
	
	map<string, int> cost;
	map<string, bool> checked;
	
	queue<dat> que;
	
	cost["01234567"] = 0;
	checked["01234567"] = true;
	
	d.s = "01234567"; d.i = 0;
	que.push(d);
	while(!que.empty()){
		d = que.front(); que.pop();
		//cout << d.s << " " << d.i << endl;
		for(int i = 0; i < 8; i++){
			if(d.s[i] == '0'){
				if(i % 4 > 0){
					d2 = d;
					swap(d2.s[i], d2.s[i - 1]);
					if(!checked[d2.s]){
						checked[d2.s] = true;
						cost[d2.s] = d.i + 1;
						d2.i += 1;
						que.push(d2);
					}
				}
				if((i + 1) % 4 > 0){
					d2 = d;
					swap(d2.s[i], d2.s[i + 1]);
					if(!checked[d2.s]){
						checked[d2.s] = true;
						cost[d2.s] = d.i + 1;
						d2.i += 1;
						que.push(d2);
					}
				}
				
				break;
			}
		}
		for(int i = 0; i < 8; i++){
			if(d.s[i] == '0'){
				if(i < 4){
					d2 = d;
					swap(d2.s[i], d2.s[i + 4]);
					if(!checked[d2.s]){
						checked[d2.s] = true;
						cost[d2.s] = d.i + 1;
						d2.i += 1;
						que.push(d2);
					}
				}
				else{
					d2 = d;
					swap(d2.s[i], d2.s[i - 4]);
					if(!checked[d2.s]){
						checked[d2.s] = true;
						cost[d2.s] = d.i + 1;
						d2.i += 1;
						que.push(d2);
					}
				}
				
				break;
			}
		}
	}
	
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]){
		for(int i = 0; i < 8; i++){
			str += a[i] + 48;
		}
		cout << cost[str] << endl;
		str.erase();
	}
	
	return 0;
}