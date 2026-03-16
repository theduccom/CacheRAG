#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

double r(double x1[2], double x2[2]){
        return pow(pow(x1[0]-x2[0],2)+pow(x1[1]-x2[1],2),0.5);
}
int main(){
        int n = 0;
        char c;
        double x[20][2];
        double s = 0;
        while(cin >> x[n][0] >> c >> x[n][1]) ++n;
        for(int i = 1; i < n-1; i++){
                double d[3] = {0};
                d[0] = r(x[0],x[i]);
                d[1] = r(x[0],x[i+1]);
                d[2] = r(x[i],x[i+1]);
                double z = (d[0]+d[1]+d[2])/2;
                s += pow(z*(z-d[0])*(z-d[1])*(z-d[2]),0.5);
        }   
        printf("%.6f\n",s);
}