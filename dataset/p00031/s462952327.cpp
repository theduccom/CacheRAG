#include <iostream>

using namespace std;

int main(){
	int num,count;
	int weight[10];
	for(int i=0,j=1;i<10;i++,j*=2){
		weight[i]=j;
	}
	//for(int i=0;i<10;i++){
	//	cout << weight[i] << endl;
	//}
	while(cin >> num){
		count = 0;
		for(int i=0;i<10 && num;i++){
			if(num%2){
				if(count){
					cout << " " << weight[i];
				}
				else{
					cout << weight[i];
					count++;
				}
			}
			num /= 2;
		}
		cout << endl;
	}

}