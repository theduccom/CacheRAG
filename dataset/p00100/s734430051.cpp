#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	long long int number,code,tanka,kazu;
	int count,flag;
	int syain[4000];
	long long int total[4000];
	while(cin >> number && number != 0){
		count = 0;
		for(int i=0;i<number;i++){
			cin >> code >> tanka >> kazu;
			count++;
//			cout << code << tanka << kazu << endl;
			for(int j = 0;j<count;j++){
				if(syain[j] == code){
					//cout << "yahoo" << endl;
					total[j] += (tanka * kazu);
					count--;
					break;
				}
				if(j == count - 1){
					//cout << "bb" << endl;
					syain[j] = code;
					total[j] = tanka * kazu;
				}
			}

			//			cout << code << " " << tanka*kazu << endl;
		}
		flag = 0;
		for(int j = 0; j < count;j++){
			if(total[j]>=1000000){
				cout << syain[j] << endl;
				flag = 1;
			}
			syain[j] = 0;
		}
		if(!flag){
			cout << "NA" << endl;
		}
	}

}