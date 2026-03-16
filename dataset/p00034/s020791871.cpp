#include <iostream>
#include <string>
using namespace std;

int main(){
	while (true)
	{
		double l[11] = {}, v[3];
		int ans;
		char knm;
		for(int i=0;i<10;i++){
			cin >> l[i] >> knm;
			l[10] += l[i];
		}
		if (cin.eof()) { break; }
		cin >> v[0] >> knm >> v[1];
		v[2] = v[0] + v[1];
		l[10] = l[10] * v[0] / v[2];
		for(ans = 0; ans<10;ans++){
			l[10] -= l[ans];
			if(l[10]<=0){
				break;
			}
		}
		cout << ans + 1 << endl;
	}

}