#include<stdio.h>
int main(void)
{
	int i;
	char blood[3];
	int a,b,o,ab;

	a=b=o=ab=0;
	while(scanf("%d,",&i)!=EOF){
		scanf("%s",blood);
		if(blood[0]=='A' && blood[1]=='B'){
			ab++;
		}
		else if(blood[0]=='A'){
			a++;
		}
		else if(blood[0]=='B'){
			b++;
		}
		else if(blood[0]=='O'){
			o++;
		}
	}
	printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
	return 0;
}