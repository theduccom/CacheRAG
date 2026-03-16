#include <iostream>
const int MAX = 50001;
using namespace std;

bool p[MAX];

void f(){
    for(int i=0 ; i<MAX ; i++){
        p[i] = (i<=1)? false : true ;
    }
    for(int i=2 ; i<=MAX ; i++){
        if( p[i] ){
            for(int j=i*2 ; j<MAX ; j+=i){
                p[j] = false;
            }
        }
    }
}

int main(){
    int n;

    f();
    while( cin >> n , n ){
		int ans = 0;
		//if( n > 3 && n%2 == 0){
			for(int i=2 ; i <= n/2 ; ++i ){
				if( p[i] && p[n - i]){
					//cout << n << " = " << p_[i] << " + " << n - p_[i] << endl;
					ans++;
				}
			}
		//}
		cout << ans << endl;
    }
}