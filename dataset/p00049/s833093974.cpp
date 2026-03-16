#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string s;
	int count[4];
	int step=0;

	memset(count,0,sizeof(count));

	while(cin >> s){
		if(s[2] == ',')step=1;

		if(s[2+step] == 'A'){
			if(s[3+step] == 'B'){
				count[2]++;
			}else{
				count[0]++;
			}
		}else if(s[2+step] == 'B'){
			count[1]++;
		}else if(s[2+step] == 'O'){
			count[3]++;
		}

		step = 0;
	}

	for(int i=0;i<4;i++){
		cout << count[i] << endl;
	}

}