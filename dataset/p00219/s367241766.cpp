#include <iostream>
using namespace std;
int hoge(int *n){cin>>*n;return *n;}
int main(){
	int n,num,ice[10];
	while(hoge(&n)){
		for(int i=0;i<10;i++) ice[i]=0;
		while(n--) cin >> num,ice[num]++;
		for(int i=0;i<10;i++){
			if(ice[i]) while(ice[i]--) cout<< "*";
			else cout << "-";
			cout << endl;
		}
	}
	return 0;
}