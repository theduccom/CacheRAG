#include<cstdio>

using namespace std;

int main(void){
	int h1,h2,tai;
	int data,tyou=0,hisi=0;

	while((scanf("%d,%d,%d",&h1,&h2,&tai))!=EOF){
		if(h1==h2)	hisi++;
		data=h1*h1+h2*h2;
		if(data==tai*tai)	tyou++;
	}
	printf("%d\n%d\n",tyou,hisi);

	return 0;
}