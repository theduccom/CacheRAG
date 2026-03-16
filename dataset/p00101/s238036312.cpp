#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	getchar();
	while(n > 0){
	    char a[2000] = {0};
	    scanf("%[^\n]",a);
	    getchar();
	    int len = 0;
	    for(int i = 0; a[i] != 0; i++) len++;
	    for(int i = 0; i < len; i++){
            if(a[i] == 'H' && a[i+1] == 'o' && a[i+2] == 's' && a[i+3] == 'h' && a[i+4] == 'i' && a[i+5] == 'n' && a[i+6] == 'o') a[i+6] = 'a';
	    }
	    printf("%s\n",a);
        n--;
	}
	return 0;
}