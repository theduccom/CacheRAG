#include <iostream>
using namespace std;


int main(){
	int weight[11];
	weight[0] = 1;
	for(int i = 1;i<=10;i++)weight[i]=2*weight[i-1];
	while(true)
	{
	int object;
	cin >> object;
	if (cin.eof())break;
	int j = 0;
	for(int i = 0;i <=9;i++){
		if((object % 2)==1)
			{
			cout << weight[i];
			if(object == 1) break;
			else cout << " ";
			}
		object = object /2;
		}
	cout << endl;
	}
	
	return 0;
}