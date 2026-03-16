#include<iostream>
#include<cstdio>
using namespace std;
void swap(int &c1, int &c2){
	int tmp;
	tmp=c1;c1=c2;c2=tmp;
}

int main(){
	char ch1,ch2;
	int cup[3] = {1,0,0};
	while(scanf("%c,%c%*c", &ch1, &ch2) != EOF){
		swap(cup[ch1-'A'], cup[ch2-'A']);
	}
	for(int i=0;i<3;i++){
		if(cup[i])printf("%c\n", 'A'+i);
	}
	return 0;
}