#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main(){
	int value[10], w;
	vector<int> v;

	for(int i=0; i<10; i++)
	{
		value[i] = (int)pow(2.0,i);
	}
	sort(value,value+10,greater<int>());

	while(cin>>w)
	{
		v.clear();
		for(int i=0; i<10; i++)
		{
			if(value[i]<=w)
			{
				w -= value[i];
				v.push_back(value[i]);
			}
		}
		for(int i=v.size()-1; i>=0; i--)
		{
			if(i == 0)
			{
				cout << v[i] << endl;
			}
			else
			{
				cout << v[i] << " ";
			}
		}
	}
    return 0;  
}  