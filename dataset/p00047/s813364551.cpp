#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstring>
#define loop(i,b,n) for(int i = b; i<n; i++)
#define rep(i,n)  loop(i,0,n)
#define INF 1e7
#define MAX 1e7
using namespace std;

int main (){
    char temp,a,g1,g2,temp2,mem = 'A';
    while(cin >>temp >>g1>>temp2 ){
        if(mem  == temp)
            mem = temp2;
        else if(mem == temp2)
            mem = temp;
    }
    cout << mem << endl;
}