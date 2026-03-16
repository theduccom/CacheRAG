#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int ball[3]={1,0,0};
	string str;
	while(cin >> str){
		swap(ball[str[0]-'A'],ball[str[2]-'A']);
	}
	for(int i=0;i<3;i++){
		if(ball[i])cout << (char)('A'+i) << endl;
	}
}