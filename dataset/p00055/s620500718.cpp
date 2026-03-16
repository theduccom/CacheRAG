#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> a(10);
    double sum;

    while(cin >> a[0]){
        sum = 0.0;
        for(int i=1; i<=9; i++){
            if(i%2 == 1){
                a[i] = a[i-1] * 2.0;
            }else{
                a[i] = a[i-1] / 3.0;
            }
        }

        for(int i=0; i<10; i++){
            sum += a[i];
        }

        printf("%.8lf\n", sum);
    }

    return 0;
}