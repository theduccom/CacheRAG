#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  char s[104];
	int alpha[256];

	alpha['\0'] = 0;
	alpha['I'] = 1;
	alpha['V'] = 5;
	alpha['X'] = 10;
	alpha['L'] = 50;
	alpha['C'] = 100;
	alpha['D'] = 500;
	alpha['M'] = 1000;

	while(scanf("%s",s) != EOF){
		int sum = 0;
		int len = strlen(s);

		for(int i=0;i<len;i++){
			if(alpha[s[i]] >= alpha[s[i+1]]){
				sum += alpha[s[i]];
			}
			else{
				sum -= alpha[s[i]];
			}
		}
		cout<<sum<<endl;
	}

  return 0;
}