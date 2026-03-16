#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

double sq(double a){
    return a*a;
}
int main(){
    vector<pair<double,double> >vec;
    double x,y,b,z,s=0;
    char c;
    while(cin>>x>>c>>y)
        vec.push_back(make_pair(x, y));
    int a=1;
    while(a+1!=vec.size()){
        x=sqrt(sq(vec[0].first-vec[a].first)+sq(vec[0].second-vec[a].second));
        y=sqrt(sq(vec[0].first-vec[a+1].first)+sq(vec[0].second-vec[a+1].second));
        b=sqrt(sq(vec[a+1].first-vec[a].first)+sq(vec[a+1].second-vec[a].second));
        z=(x+y+b)/2;
        s+=sqrt(z*(z-x)*(z-b)*(z-y));
        a++;
    }
    cout<<s<<endl;
}