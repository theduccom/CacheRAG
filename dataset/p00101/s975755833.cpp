#include <stdio.h>
#include<math.h>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
	int n;
	char buf[1100];

	scanf("%d",&n);
	getchar();

	for(int i=0; i < n; i++){
		fgets(buf,1100,stdin);

		for(int k=0; buf[k] != '\n' && buf[k] != '\n'; k++){
			if(k >= 6 && buf[k] == 'o' && buf[k-1] == 'n' && buf[k-2] == 'i'&&
					buf[k-3] == 'h' && buf[k-4] == 's' && buf[k-5] == 'o' && buf[k-6] == 'H'){
				buf[k] = 'a';
			}
		}

		printf("%s",buf);
		buf[0] = '\0';
	}


    return 0;
}