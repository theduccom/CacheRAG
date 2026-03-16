#include<iostream>
#include<list>
#include <algorithm>
#include<cmath>
using namespace std;

void cheese(int x,int y,int z){
    int number,tmp;
    list<int> hole;
    cin >> number;
    double xy = sqrt(x/2*x/2+y/2*y/2);
    double xz = sqrt(x/2*x/2+z/2*z/2);
    double zy = sqrt(z/2*z/2+y/2*y/2);
    
    for(int i=0;i<number;i++){
        cin >> tmp;
        hole.push_back(tmp);
    }
    list<int>::iterator it = hole.begin();
    for(;it != hole.end();it++){
        double r = (double)*it;
        //3つの面に対して原点を中心とした長方形を作る.
        if((r>xy)||(r>xz)||(r>zy))
            cout << "OK" << endl;
        else {
            cout << "NA"<< endl;
        }
    }
    
}

int main(){
    int x,y,z;
    cin >>x >> y>> z;
    while(x!=0 && y!=0&&z!=0){
        cheese(x,y,z);
        cin >> x>>y>>z;
    }
    return 0;
}