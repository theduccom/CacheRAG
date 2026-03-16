#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        long long a[5000] = {0};
        long long int number;
        long long int jun[5000] = {0};
        long long tanka,kazu;
        for(int i = 1; i <= n; i++){
            cin >> number >> tanka >> kazu;
            a[number] += tanka * kazu;
            jun[i] = number;
        }
        for(int i = 0; i < 4000; i++){
            for(int j = i+1; j <= 4000; j++){
                if(jun[i] == jun[j]) jun[j] = 0;
            }
        }

        bool flg = 0;
        for(int i = 1; i <= 4000; i++){
            if(a[jun[i]] >= 1000000){
                cout << jun[i] << endl;
                flg = 1;
            }
        }


        if(!flg) cout << "NA" << endl;
	}
	return 0;
}