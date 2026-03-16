#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
   int n, outcnt = 0, point = 0;
   string str;

   queue<bool> que;

   cin >> n;

   for( int i = 0; i < n; ++i )
   {
      while(outcnt != 3)
      {
         cin >> str;

         if( str == "HIT" )
         {
            que.push(true);
            if( que.size() == 4 )
            {
               que.pop();
               ++point;
            }
         }
         else if( str == "HOMERUN" )
         {
            point += que.size() + 1;
            while( !que.empty() ) que.pop();
         }
         else if( str == "OUT" )
         {
            ++outcnt;
         }
      }
      cout << point << endl;
      outcnt = point = 0;
      while( !que.empty() ) que.pop();
   }
}
   