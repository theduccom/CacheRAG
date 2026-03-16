#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int main(void){
	string str;
	int times[10];
	int n;
	
	cin >> n;
	for(int k=0;k<n;k++){
		
		cin >> str;
		string maxi, mini;
		memset(times, 0, sizeof(times));
		for(int i=0;i<str.size();i++){
			times[str[i] - '0']++;
		}
		
		for(int i=0;i<=9;i++){
			for(int j=0;j<times[i];j++){
				mini += i + '0';
			}
			for(int j=0;j<times[9-i];j++){
				maxi += (9-i) + '0';
		 	}
		}
		istringstream issmin(mini), issmax(maxi);
		int intmin, intmax;
		issmin >> intmin;
		issmax >> intmax;
		cout << intmax - intmin<< endl;
	}
}