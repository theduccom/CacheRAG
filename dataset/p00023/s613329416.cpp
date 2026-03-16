#include <iostream>
#include <string>
#include <cmath>
#include <list>
#include <map>
#include <vector>

using namespace std;

int checkIntersection(double xa,double ya,double ra,double xb,double yb, double rb){
    double d = (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
    double sr = (ra+rb)*(ra+rb);
    double dr = (ra-rb)*(ra-rb);
    
    if (d > sr){
        return 0;
    }else if(d<sr && d<d){
        return 1;
    }else if(dr>d){
        return (ra>rb)?2:-2;
    }else return 1;
    
    
    
}

int main (int argc, char const* argv[]){
    double xa, ya,ra, xb,yb,rb;
    int i, n, result;
    
    cin >> n;
    while(cin >> xa>> ya>>ra>> xb>> yb>> rb){
        result = checkIntersection(xa, ya,ra, xb,yb,rb);
        
        cout << result << endl;
    }
    
    
    return 0;
}