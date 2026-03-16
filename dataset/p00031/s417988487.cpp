#include<iostream>
using namespace std;

int output[10],len;

int main(){
	int n;
	
	while( cin >> n )
	{
		len = 0;
		for( int i = 0;i < 10;i++ ){
			if( n&(1<<i) ){
				output[len] = (1<<i);
				len++;
			}
		}
		for( int i = 0;i < len-1;i++ ){
			cout << output[i] << " ";
		}
		cout << output[len-1] << endl;
	}
	return 0;
}