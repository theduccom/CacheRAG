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
    while(cin>>n){
	if(n==0) return 0;
         int a[11][11]={0};
	 int sum=0;
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
		cin>>a[i][j]; 
                sum+= a[i][j]; 
             }
          }

          for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
               a[i][n]+=a[i][j];                
             }
          }
          for(int j=0;j<n;j++){
             for(int i=0;i<n;i++){
                a[n][j]+=a[i][j];               
             }
          }
          a[n][n]=sum;
          for(int i=0;i<n+1;i++){
             for(int j=0;j<n+1;j++){
		cout<<setw(5)<<a[i][j];
             }
             cout<<endl;
           }
    }
}