#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	
	int a, b;
	
	bool first, first2;
	
	cin >> a >> b;
	
	first2 = true;
	
	while(a != 0 && b != 0){
		
		if(!first2){
			printf("\n");
		}
		
		first2 = false;
		first = false;
		
		for(int i = a; i <= b; i++){
			if(i % 4 == 0){
				if(i % 100 == 0){
					if(i % 400 == 0){
						printf("%d\n", i);
						first = true;
						continue;
					}
					continue;
				}
				printf("%d\n", i);
				first = true;
				continue;
			}
		}
		
		if(!first){
			printf("NA\n");
		}
		
		cin >> a >> b;
	}
	
	return 0;
}