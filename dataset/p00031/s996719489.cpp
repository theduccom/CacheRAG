#include<iostream>
using namespace std;

int main(){
	int i, j, input, weight;
	while(cin>>input){
		i=1;
		while(true){
			weight = 1;
			if(input%2){
				for(j=1;j<i;j++){
					weight *= 2;
				}
				cout << weight;
				if(input/2 == 0){
					cout << endl;
					break;
				}
				cout << " ";
			}
			input /= 2;
			i++;
		}
	}
	return 0;
}