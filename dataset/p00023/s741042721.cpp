#include <iostream>
#include <utility>
#include <cmath>
 
using namespace std;
 
int main(void){
    int N;
    cin >> N;
 
    for(int i=0;i<N;i++){
        pair<double,double> p[2];
        double d,r[2];
 
        for(int j=0;j<2;j++){
            float x,y;
            cin >> x >> y >> r[j];
            p[j]=make_pair(x,y);
        }
        d=sqrt(pow(p[0].first-p[1].first,2)+pow(p[0].second-p[1].second,2));
 
        cout << (d<=r[0]+r[1]?d+r[1]>=r[0]?d+r[0]>=r[1]?1:-2:2:0) << endl;
    }
 
    return 0;
}