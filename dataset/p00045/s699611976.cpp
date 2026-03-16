#include <cstdio>

using namespace std;

int main(){
	int co[1000], qua[1000];
	int i = 0;
	int sum = 0,ave = 0;
	
	while (scanf("%d,%d", &co[i], &qua[i]) != EOF){
		sum += co[i] * qua[i];
		ave += qua[i];
		i++;
	}
	
	ave = (ave*10)/i + 5;
	ave /= 10;
	
	printf("%d\n%d\n", sum, ave);
}