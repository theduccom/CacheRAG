#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int a = 0,v1,v2;
	int cnt = 0;
	char b;
	vector<int> data;
	while(~scanf("%d%c",&a,&b)){
		if(b == ','){
			cnt++;
			if(cnt == 11){
				v1 = a;
			}else{
				for(int i=0;i<a;i++){
					data.push_back(cnt);
				}
			}
		}else{
			v2 = a;
			v1 = ceil( v1 * (double)data.size() / (v1+v2) );
			cout << data[v1-1] << endl;
			cnt = 0;
			data.clear();
		}
	} 
}