#include <iostream>
using namespace std;

int main()
{
	char c[1024];
	while(cin.getline(c, sizeof(c))){
		for(int i=0;i<1024;i++)
			if(c[i]>='a' && c[i]<='z')
				c[i] = static_cast<char>(c[i]-32);
		cout << c << endl;
	}
	return 0;
}