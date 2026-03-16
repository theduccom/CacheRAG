#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;
 
int main()
{
    int n;
    cin>> n;
    string str;
    int a[8]; 
    vector<string>s;
    for(int i=0;i<n;i++){
       cin>>str;
       s.push_back(str);      
    }
    for(int i=0;i<n;i++){
       string str2=s[i];
       int a[8]={0};
       for(int j=0;j<8;j++){
           a[j]=str2[j]-'0';
      } 
      sort(a,a+8);
      int max=0,min=0,t=1;
      for(int i=0;i<8;i++){
          min+=a[7-i]*t;
          t*=10;
      }
      t=1;
      for(int i=0;i<8;i++){
          max+=a[i]*t;
          t*=10;
      }  
      cout<<(max-min)<<endl;
    }    
    return 0;
}