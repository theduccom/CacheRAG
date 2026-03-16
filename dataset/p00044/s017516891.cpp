#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

#define SIZE 100000
bool prime[SIZE];

int main(){
    memset( prime, 0, sizeof(prime) );
    for( int i=2; i<(int)sqrt(SIZE)+1; i++ ){
        if( !prime[i] ){
            for( int j=i+i; j<SIZE; j+=i ){
                prime[j] = true;
            }
        }
    }

    int n;
    while( cin >> n ){
        for( int i=n-1; i>=2; i-- ){
            if( !prime[i] ){
                cout << i;
                break;
            }
        }
        for( int i=n+1; i<SIZE; i++ ){
            if( !prime[i] ){
                cout << " " << i << endl;
                break;
            }
        }
    }
    return 0;
}