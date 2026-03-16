#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

	queue <string> data;
	string str;

	while(cin>>str){
		int i;
		if(str.find("hoge",0)==0){
			break;
		}
		if( (i=str.find("apple",0))>-1){
			str.replace(i,5,"peach");
		}
		else if( (i=str.find("peach",0))>-1){
			str.replace(i,5,"apple");
		}
		
		data.push(str);
		
	}
	int num = data.size();
	for(int i=0;i<num-1;i++){
		cout<<data.front();
		data.pop();
		cout<<" ";
	}
	cout<<data.front()<<endl;

	return 0;

}

/*
Sample Input
the cost of one peach is higher than that of one apple.
Output for the Sample Input
the cost of one apple is higher than that of one peach.
*/