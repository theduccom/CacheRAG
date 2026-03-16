#include <iostream>
#include <string>
using namespace std;

int main()
{
    char field[11][11];
    string r;
    int i,j;
    do {
	for (i=0; i<8; i++)
	{
	    scanf("%s",field[i]);
	}
	for (i=0; i<8; i++)
	{
	    for (j=0; j<8; j++)
	    {
		if (field[i][j] == '1')goto b;
	    }
	}
    b:
	if (field[i][j+1] == '1')
	{
	    if (field[i][j+2] == '1')
		r="C";
	    else if (field[i+1][j] == '1') {
		if (field[i+1][j+1] == '1')
		    r="A";
		else
		    r="G";
	    }
	    else
		r="E";
	} else {
	    if (field[i+2][j] == '1')
		r="B";
	    else if (field[i+1][j+1] == '1')
		r="F";
	    else
		r="D";
	}
	cout << r << endl;
	getchar();
    } while (getchar() != EOF);
    return 0;
}