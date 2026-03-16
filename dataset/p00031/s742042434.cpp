#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, tmp, *array, tmp2;
	
	while(cin >> n){
		array = (int *)calloc(10, sizeof(int));
		tmp2 = 0;
		while(n > 0){
			tmp = 1;
			while(n >= tmp){
				tmp *= 2;
			}
			tmp /= 2;
			array[tmp2++] = tmp;
			n -= tmp;
		}
		tmp2--;
		cout << array[tmp2];
		for(int i = tmp2 - 1; i >= 0; i--){
			cout << " " << array[i];
		}
		cout << endl;
		free(array);
	}
	
	return 0;
}