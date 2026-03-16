//A Figure on Surface

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	const int N = 8;
	while(1)
	{
		string a[N];
		int i, j;
		for(i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		if(!cin)
			break;

		//¶ã©çÌÀWð²×é
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				if(a[i][j] == '1')
					goto DISCOVER;
			}
		}
		DISCOVER:
		//ÔÈñÄÇ¤ÅàÇ¢©çÀSÉs«Üµå¤
		if( (i < N-1) && (j < N-1) && 
			(a[i][j] == a[i+1][j]) &&
			(a[i][j] == a[i][j+1]) &&
			(a[i][j] == a[i+1][j+1]) )
			cout << 'A' << endl;
		else if((i < N-3) && 
			(a[i][j] == a[i+3][j]) )
			cout << 'B' << endl;
		else if((j < N-3) &&
			(a[i][j] == a[i][j+3]) )
			cout << 'C' << endl;
		else if((i < N-2) && (j > 0 ) &&
			(a[i][j] == a[i+2][j-1]) )
			cout << 'D' << endl;
		else if((j < N-2) &&
			(a[i][j] == a[i+1][j+2]) )
			cout << 'E' << endl;
		else if((i < N-2) &&
			(a[i][j] == a[i+2][j+1]) )
			cout << 'F' << endl;
		else
			cout << 'G' << endl;
	}
	return 0;
}