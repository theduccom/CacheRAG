#include<iostream>
using namespace std;

int main()
{
    int prime[30000];
        prime[0] = 2;
    int num = 1, n;

    for(int i=3; i<50100; i++){
        bool f = true;
        for(int j=0; j<num; j++){
            if(i%prime[j] == 0){
                f = false;
                break;
            }
        }
        if(f){
            prime[num] = i;
            num++;
        }
    }

    while(cin >> n, !cin.eof()){

        int i;

        for(i=0; prime[i]<n; i++){
        }
        cout << prime[i-1] << ' ' << ((prime[i] == n) ? prime[i+1] : prime[i]) << endl;
    }

    return 0;
}