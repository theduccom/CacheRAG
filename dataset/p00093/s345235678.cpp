#include<iostream>
using namespace std;
	void judge(int a, int b);
	
	int main(void){
		int a, b;
		cin >> a >> b;
		if(a != 0 && b != 0){
			judge(a, b);
		}
		while(1){

			cin >> a >> b;
			if(a == 0 && b == 0){
				break;
			}
			cout << endl;
			judge(a, b);
		}
		return 0;	
	}
	void judge(int a, int b){
		int ans[1000] = {0};
		int j = 0;
		for(int i = a; i <= b; i++){
			if(i%400 == 0){
				ans[j] = i;
				j++;
			}else if(i%4 == 0 && i%100 != 0){
				ans[j] = i;
				j++;
			}
		}
		if(j == 0){
			cout << "NA" << endl;
 		}else{
 			int i;
 			for(i = 0; i < j ; i++){
 				cout << ans[i] << endl;
 			}
 		}
	}