#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int d,phi;
    int tot_phi = 90;
    float tot_dcos,tot_dsin;
    while(d || phi){
        scanf("%d,%d",&d,&phi);
        tot_dcos += d*cos(tot_phi*M_PI/180);
        tot_dsin += d*sin(tot_phi*M_PI/180);
        tot_phi -= phi;
    }
    cout << (int)tot_dcos << endl << (int)tot_dsin << endl;
}