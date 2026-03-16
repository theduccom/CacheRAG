#include <iostream>
using namespace std;

int main(){
    int n;
    int max_d;
    int max_p;

    while(cin >> n, n != 0){
        int p;
        int d1, d2;
        max_d = 0;

        for(int i=1; i<=n; i++){
            cin >> p >> d1 >> d2;
            if(d1 + d2 > max_d){
                max_d = d1 + d2;
                max_p = p;
            }
        }
        printf("%d %d\n", max_p, max_d);
    }
    return 0;
}