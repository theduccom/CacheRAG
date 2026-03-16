#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cup[3] = {1,0,0};
    char a,b,r;
    while (scanf(" %c,%c",&a,&b) != EOF)
    {
	swap(cup[int(a-'A')],cup[int(b-'A')]);
    }
    for (int i=0; i<3; i++)
    {
	if (cup[i] == 1)
	{
	    r = 'A' + i;
	    break;
	}
    }
    cout << r << endl;
}