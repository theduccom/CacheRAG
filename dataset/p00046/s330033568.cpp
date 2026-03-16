#include <iostream>
using namespace std;
int main(void)
{
	double h[10000];
	int ptr=0;
	while(cin >> h[ptr]){
		ptr++;
	}
	double max=h[0];
	double min=h[0];
	for(int i=1; i<ptr; i++){
		if(h[i]>max) max = h[i];
		if(h[i]<min) min = h[i];
	}
	cout << max-min<< endl;
	return 0;
}