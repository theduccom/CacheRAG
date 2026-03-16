// 2014/09/08 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		double d2 = (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
		double rp = (ra+rb)*(ra+rb);
		double rm = (ra-rb)*(ra-rb);

		if(d2<rm && ra>rb){
			cout << 2 << endl;
		}
		else if(d2<rm && ra<rb){
			cout << -2 << endl;
		}
		else if(d2<=rp){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}

	return 0;
}