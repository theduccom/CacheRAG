#include <iostream>
using namespace std;

bool so[1000001];

int main(void)
{
	so[0] = so[1] = true;
	// 素数表 true = 素数じゃない
	for(int i = 2; i <= 1000000; i++){
		for(int j = i*2; j <= 1000000; j+=i){
			so[j] = true;
	
		}
	}

	int N,M;

	while(cin >> N >> M, N | M){
		bool d[1000001] = {};
		d[0] = true;

		int mo;
		for(int i = 0; i < N; i++){
			cin >> mo;

			for(int j = 0; j + mo <= M; j++)
				d[j+mo] |= d[j];

		}

		int max = 0;
		for(int i = 0; i <= M; i++)
			if(d[i] && !so[i] && max < i)
				max = i;
		if(max)
			cout << max << endl;
		else
			cout << "NA" << endl;
	}
	

	return 0;
}
	