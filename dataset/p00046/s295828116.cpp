#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define BOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
typedef long long ll;


int main(){
    
    double i;
    vector<double> a;
    while(cin>>i){
        a.push_back(i);
    }
    
    sort(a.begin(),a.end());
    
    cout<<fixed<<setprecision(10)<<a[a.size()-1]-a[0]<<endl;
    
    return 0;
}