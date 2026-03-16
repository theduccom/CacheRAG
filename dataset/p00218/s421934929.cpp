#include<iostream>

using namespace std;

int main()
{
	int num, a, b, c;
		while(cin >> num , num)
		{
			for(int i = 0; i < num; i++)
			{
				cin >> a >> b >> c;

				if(a == 100 || b == 100 || c == 100 || (a+b)/2 >= 90 || (a+b+c)/3 >= 80)
				{
					cout << "A" << endl;
				}
				else if((a+b+c)/3 >= 70 || (a+b+c)/3 >= 50 && a >= 80 || b >= 80)
				{
					cout << "B" << endl;
				}
				else
				{
					cout << "C" << endl;
				}
			}
		}
}