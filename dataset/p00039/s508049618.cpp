#include <cstdio>
using namespace std;

int Num(int a){
	switch(a){
		case 73 : return 1;
		case 86 : return 5;
		case 88 : return 10;
		case 76 : return 50;
		case 67 : return 100;
		case 68 : return 500;
		case 77 : return 1000;
		default : return 0;
	}
}

int main(){
	char str[110];
	int ch1, ch2, sum;
	
	for(int i = 0; i < 110; i++) str[i] = 0;
	
	while((scanf("%s", str)) != EOF){
		sum = 0;
		
		for(int i = 0; str[i] != 0; i++){
			ch1 = Num(str[i]);
			ch2 = Num(str[i + 1]);
			if(ch1 >= ch2) sum += ch1;
			else sum -= ch1;
		}
		
		printf("%d\n", sum);
		
		for(int i = 0; i < 110; i++) str[i] = 0;
	}
	
	return 0;
}