#include <iostream>

using namespace std;

void print_open(){ cout << "Open" << endl; }
void print_close(){ cout << "Close" << endl; }

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a && !b && !c) print_close();
	if (!a && b && !c) print_close();
	if (a && b && !c) print_open();
	if (!a && !b && c) print_open();
	if (!a && !b && !c) print_close();

	return 0;
}