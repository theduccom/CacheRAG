
#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0; i<n;i++)
#define MAX 105000
using namespace std;

int main (){
	/*for(int k = 1; k<MAX;k++)
	{
		if(PrimeCheck(v[k+1]))
		{
			//cout << v[k+1] << " ";
			v2[d] = v[k+1];
			d++;
		}
	}
	//rep(i,d) cout << v2[i] << " ";
	//cout << d << endl;*/
	int number;
	while(cin >> number,number)
	{


		int counter = 0;
		vector<bool>v(MAX+1,0);
		vector<int>v2(MAX,0);
		rep(i,MAX)
			v[i+1] = true;
		long long answer = 0;
		int lim = (int)sqrt(number);
		int d = 0;
//		cout << lim <<" ";
		for(int i = 2; i<MAX; i++)
		{
			if(v[i])
			{
				for(int j = 2; j <MAX/i;j++)
				{
					v[j*i]  = false;
					//cout << " " << i << "i*j=  " << i*j;
				}
				v2[d] = i;
				d++;
			}	
		}
		//rep(i,number) cout << v[i+1] << " ";
		for(int i = 2; i<MAX+1;i++)
		{	
			if(v[i])
			{
				answer+=i;
				counter++;
				//cout << " " << i;
				if(counter == number)
					break;
			}
			
		}
		cout  /*<< " answer is "*/ << answer << endl;
	    
	}
	return 0;
}