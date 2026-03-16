#include <iostream>
using namespace std;

char Division_class(int, int, int);

int main(void)
{
  int pm[10000], pe[10000], pj[10000];
  char s_class[10000];
  int n;
  
  while(1)
    {
      cin >> n;
      if(n == 0) break;
      
      for(int i = 0 ; i < n ; i++)
	{
	  cin >> pm[i] >> pe[i] >> pj[i];
	  s_class[i] = Division_class(pm[i], pe[i], pj[i]); 
	}
      for(int i = 0 ; i < n ; i++)
	{
	  cout << s_class[i] << endl;
	}
    }
  return 0;
}

char Division_class(int math, int english, int japanese)
{
  if(math == 100 || english == 100 || japanese == 100) return 'A';
  if(((math + english) / 2) >= 90) return 'A';
  if(((math + english + japanese) / 3) >= 80) return 'A';
  if(((math + english + japanese) / 3) >= 70) return 'B';
  if(((math + english + japanese) / 3) >= 50 && math >= 80 || english >= 80) return 'B';
  else return 'C';
}