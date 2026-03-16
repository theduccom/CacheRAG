#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
 
 
#define TIMES(i) while(i--) 
#define REP(i, n) for ( int i = 0; i < n; i++ ) 
 
 
 using namespace std;
 
 int main() { 
     int n; 
     cin >> n; 
 
     TIMES(n) { 
         // ??\??? 
         double ax, ay, ar, bx, by, br; 
         cin >> ax >> ay >> ar >> bx >> by >> br; 
 
         // ?????¢????±??????? 
         double dis_x = abs(ax-bx), 
           dis_y = abs(ay-by), 
             dist = sqrt(dis_x * dis_x + dis_y * dis_y); 
 
         // cout << dis_x << " " << dis_y << " " << dist << endl; 
 
         // ??¢???????????? 
         if ( dist > ar + br ) { 
             cout << 0; 
 
         // a???????????????????????? 
         } else if ( dist + ar < br ) { 
             cout << -2; 
 
         // b???????????????????????? 
         } else if ( dist + br < ar ) { 
             cout << 2; 
 
         // ????????£????????? 
         } else { 
             cout << 1; 
         } 
         cout << endl; 
     } 
 
 
     return 0; 
 } 