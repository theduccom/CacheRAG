#include <iostream>
using namespace std;

int main()
{
	bool b[]={true,false,false};
	char c1,c,c2;
	while(cin >> c1 >> c >> c2)
	{
		swap(b[c1-'A'],b[c2-'A']);
	}
	for(int i=0; i<3; i++)
	{
		if(b[i]) cout << (char)(i+'A') << endl;
	}
}