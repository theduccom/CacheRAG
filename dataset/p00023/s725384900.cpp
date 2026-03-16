#include<iostream>
#include<cmath>
using namespace std;

typedef struct  circle{
    double x;
    double y;
    double r;
}CIRCLE;

int main(void){

    CIRCLE a,b;
    int n;
    double sum,diff1,diff2,len;

    cin >> n;

    while(n > 0){

        cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;

            sum = a.r + b.r;
            diff1 = a.r - b.r;
            diff2 = b.r - a.r;
            len = sqrt(pow(a.x - b.x,2.0) + pow(a.y - b.y,2.0));

            if(diff1 > len){
                cout << "2" << endl;
            }else if(diff2 > len){
                cout << "-2" << endl;
            }else if(fabs(diff1) <= len && len <= a.r + b.r){
                cout << "1" << endl;
            }else{
                cout << "0" << endl;
            }

        n--;
    }

    return 0;
}