
#include <iostream>

using namespace std;

int main()
{
	int q;

	for (int i = 1; i < 10; i++){
		for (int iq = 1; iq < 10; iq++){
			q = i * iq;

			cout << i << "x" << iq << "=" << q << endl;
		}
	}

	return 0;
}