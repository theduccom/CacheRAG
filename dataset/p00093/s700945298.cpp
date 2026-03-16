#include <iostream>
using namespace std;

int main(){
	bool flag = true;
	int i,j,count;
	static bool year[3001];
	for(int i=0;i<3001;i++){
		if(i % 4 == 0){
			if (i % 100 == 0){
				if(i % 400 == 0){
					year[i] = true;
				}
			}
			else{
				year[i] = true;
			}
		}
	}
	while(cin >> i >> j && (i!=0&&j!=0)){
		if(!flag) cout << "\n";
		flag = false;
		count = 0;
		for(int x = i;x<=j;x++){
			if(year[x] == true){
				cout << x << endl;;
				count++;
			}
		}
		if(count == 0) cout << "NA" << endl;
	}
	return 0;
}