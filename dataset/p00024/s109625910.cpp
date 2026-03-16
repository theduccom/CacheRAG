//Physical Experiments

#include<cstdio>
#include<cmath>
using namespace std;

int main(void){
    double v;
    int n;
    
    while(scanf("%lf", &v) != EOF){
        //??°?????????????¨??????????
        n = (int)(v*v / 98.0 + 1.0) + 1;
    
        printf("%d\n", n);
    }
    
    return 0; 
}