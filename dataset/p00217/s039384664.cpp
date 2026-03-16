#include<iostream>
#include<map>

using namespace std;

int main(void){
	while(1){
		map<int, int> data;
		int a,n;
		cin >> n;
		if(n==0)break;
		for(a=0;a<n;a++){
			int b,c,d;
			cin >> b >> c >> d;
			data.insert(pair<int, int>(c+d,b));
		}
		map<int, int>::iterator it = data.end();
		it--;
		cout << (*it).second << " " << (*it).first << endl;
	}
	return 0;
}