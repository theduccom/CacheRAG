#include <iostream>
#include <cmath>

using namespace std;

bool input(int* l, int* v)
{
	char dummy;
	for (int i=0; i<10; i++) {
		if ( !(cin >> l[i]) ) return false;
		cin >> dummy;
	}
	for (int i=0; i<2; i++) {
		if ( !(cin >> v[i]) ) return false;
		if (i==0) cin >> dummy;
	}
	return true;
}

int main()
{
	int l[10];
	int v[2];
	while ( input(l, v) ) {
		int L = 0;
		for (int i=0; i<10; i++) L += l[i];
		float rate = static_cast<float>(v[0]) / static_cast<float>(v[0] + v[1]);
		int meet_pos = ceil(L * rate);
		
		//cout << "rate = " << rate << " meet_pos = " << meet_pos << endl;
		
		int meet_rail_num;
		int sum_of_length = 0;
		for (meet_rail_num = 0; sum_of_length < meet_pos; meet_rail_num++) {
			sum_of_length += l[meet_rail_num];
		}
		
		cout << meet_rail_num << endl;
	}
	
	return 0;
}