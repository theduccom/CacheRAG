#include <iostream>
using namespace std;
int main(void)
{
	char str[101];
	while(cin >> str){
		int i = 0;
		do{
			if(str[i] ==  '@'){
				i += 2;
				int num = str[i-1] - '0';
				for(int j=0; j < num; j++){
					putchar(str[i]);
				}
			}else{
				putchar(str[i]);
			}
			i++;
		}while(str[i]);
		putchar('\n');
	}
	return 0;
}