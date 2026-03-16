#include <iostream>

#define A 0
#define B 1
#define AB 2
#define O 3
using namespace std;

int main(){
	string str;

	int num;
	int data[4];
	for(int i=0;i<4;i++){
		data[i]=0;
	}
	while(cin>>num){
		if(num==0){
			break;
		}
		cin.ignore();
		cin>>str;
		if(str == "A"){
			data[A]++;
		}
		else if(str == "B"){
			data[B]++;
		}
		else if(str == "O"){
			data[O]++;
		}
		else{
			data[AB]++;
		}
	}

	for(int i=0;i<4;i++){
		cout<<data[i]<<endl;
	}
	return 0;

}

/*
Sample Input
1,B
2,A
3,B
4,AB
5,B
6,O
7,A
8,O
9,AB
10,A
11,A
12,B
13,AB
14,A
Output for the Sample Input
5
4
3
2
*/