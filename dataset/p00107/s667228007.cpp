#include<iostream>
#include<vector>
#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std; 

int main()
{
	vector<int> len(4);
	fill(len.begin(), len.end(), 1000000000);
	while(cin >> len[0] >> len[1] >> len[2])
	{
		if(!len[0] && !len[1] && !len[2])
			break;
		float rad;
		sort(len.begin(), len.end() );
		rad = sqrt(len[0]*len[0] + len[1]*len[1]);

		int num, enter[10100];
		cin >> num;

		for(int i = 0; i < num; i++)
		{
			cin >> enter[i];
		}

		for(int i = 0; i < num; i++)
		{
			if(2 * enter[i] > rad) cout << "OK" << endl;
			else cout << "NA" << endl; 
		}
	}
}