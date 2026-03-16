#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a=0,b=0,o=0,ab=0;
    string str,tmp;
    while (cin >> str)
    {
	tmp = str.erase(0,str.find(",")+1);
	if (tmp == "A")
	{
	    a++;
	} else if (tmp == "B") {
	    b++;
	} else if (tmp == "AB") {
	    ab++;
	} else if (tmp == "O") {
	    o++;
	}
    }
    cout << a << endl << b << endl << ab << endl << o << endl;
    return 0;
}