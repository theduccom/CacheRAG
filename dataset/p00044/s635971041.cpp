#include<iostream>

#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) for(int i=0;i<a;i++)


using namespace std;



int main(){
	bool prime[1000001];
	rep(i, 1000001){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;

	loop(i, 2, 1001){
		if (prime[i]){
			for (int j = i * 2; j < 1000001; j += i){
				prime[j] = false;
			}
		}
	}



	int ord;
	while (cin >> ord){
		int small, big;
		loop(i, ord+1, 1000001){
			if (prime[i]){
				big = i;
				break;
			}
		}
		for (int i = ord-1; i > 0; i--){
			if (prime[i]){
				small = i;
				break;
			}
		}

		cout << small << " " << big << endl;
	}

}