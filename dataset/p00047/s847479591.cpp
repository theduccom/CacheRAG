#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
 
using namespace std;
  
int main(){
	int ball[256] = {0};
	ball['A'] = 1;

	char cup[2];
	while(~scanf("%c,%c", &cup[0], &cup[1])){
		swap(ball[cup[0]], ball[cup[1]]);
	}

	for(int i = 'A'; i <= 'C'; i++){
		if(ball[i]){
			cout << (char)i << endl;
		}
	}

	return 0;
}