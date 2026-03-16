#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int base,i,j,n,o,point;
	char state[8];
	cin >> n;
	for(i=0;i<n;i++)
	{
		o=base=point=0;
		while(o<3)
		{
			cin >> state;
			if (strcmp(state, "HIT") == 0)
			{
					if(base == 3)
						point++;
					else
						base++;
			}
			else if (strcmp(state, "HOMERUN") == 0)
			{
					base++;
					point+= base;
					base =0;
			}
			else if (strcmp(state, "OUT") == 0)
					o++;
		}
		cout << point << endl;
	}
	return 0;
}
					
						