#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <string>
#include <map>
#include <set>
using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    puts((a && b) || c ? "Open" : "Close");
}