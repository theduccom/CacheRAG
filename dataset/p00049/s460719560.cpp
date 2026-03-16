#include <cstdio>
#include <string>
using namespace std;

int main()
{
	int n;
	char blood[5];
	int a,b,ab,o;
	
	a = b = ab = o = 0;
	while(scanf("%d,%s", &n, blood) != EOF){
		string str = blood;
		
		if(str == "A") a++;
		else if(str == "B") b++;
		else if(str == "AB") ab++;
		else if(str == "O") o++;
		
	}
	
	printf("%d\n%d\n%d\n%d\n", a, b, ab, o);
	
	return(0);
}