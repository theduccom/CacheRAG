#include <iostream>
#include <string>

using namespace std;

int main(){

	string str;
	int ans = 0;
	while(cin>>str){
		if(str[0] == '0'){
			break;
		}
		int size = str.size();
		int state = 0;
		if(size%2==0){
			for(int i=0;i<str.size()/2;i++){
				if(str[i] != str[size-i-1]){
					state = 1;
					break;
				}
			}
		}
		else{
			for(int i=0;i<str.size()/2+1;i++){
				if(str[i] != str[size-i-1]){
					state = 1;
					break;
				}
			}
		}
		if(state == 0){
			ans++;
		}
	}
	cout<<ans<<endl;
}

/*
Sample Input
abcba
sx
abcddcba
rttrd
Output for the Sample Input
2
*/