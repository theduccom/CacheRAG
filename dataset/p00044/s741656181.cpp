#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
   int n;
   int prime[60000] = {1,1};
   vector<int> r1,r2;
   int count=0;
   for (int i=2; i<=244; i++)
   {
       if (prime[i] == 0)
       {
	   for (int j=i*2; j<60000; j+=i)
	   {
	       prime[j] = 1;
	   }
       }
   }
   while (scanf("%d",&n) != EOF)
   {
       int previous,forward;
       for (int i=n-1; i>0; i--)
       {
	   if (prime[i]==0)
	   {
	       previous = i;
	       break;
	   }
       }
       for (int i=n+1; i<60000; i++)
       {
	   if (prime[i]==0)
	   {
	       forward = i;
	       break;
	   }
       }
       r1.push_back(previous);
       r2.push_back(forward);
   }
   for (int i=0; i<r1.size(); i++)
   {
       cout << r1[i] << " " << r2[i] << endl;
   }
   return 0;
}