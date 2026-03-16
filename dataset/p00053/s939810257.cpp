#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
bool prime[1000000];
int main()
{
	int n;
	prime[1] = true;
	for(int i = 2; i * i <= 105000; i++){
	    if(prime[i] == false){
            for(int j = i; j <= 105000; j+=i){
                prime[j] = true;
            }
            prime[i] = false;
	    }
	}
	int p[105000];
	for(int i = 2,j = 1; i <= 105000; i++){
        if(prime[i] == false){
            p[j] = i;
            j++;
        }
	}


	while(1){
	    int sum = 0;
        cin >> n;
        if(n == 0) break;
        for(int i = 1; i <= n; i++){
            sum += p[i];
        }
        cout << sum << endl;
	}
	return 0;
}