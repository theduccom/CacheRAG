#include <iostream>
using namespace std;

int main(){
    int a[8];
    char c[8];
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        while(scanf("%s", c) != EOF){
            for(int j=0; j<8; ++j) a[j] = c[j] - '0';
            for(int j=1; j<8; ++j){
                int tmp = a[j];
                if(a[j-1] > tmp){
                    int k = j;
                    do{
                        a[k] = a[k-1];
                        --k;
                    }while(k > 0 && a[k-1] > tmp);
                    a[k] = tmp;
                }
            }
            int max = 0;
            int min = 0;
            for(int d=10000000, j=0; d>=1; d/=10,++j){
                min += d*a[j];
                max += d*a[7-j];
            }
            cout << max-min << endl;
        }
    }
    return 0;
}