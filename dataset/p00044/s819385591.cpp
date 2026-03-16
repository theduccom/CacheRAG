#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{ 
  const int END = -1;
  const int NUM = 50022;
  int num;
  int i,index,index2,index3;
  
  cin >> num;

  vector<int> eratos(NUM);

  for(i = 0;i < NUM - 1 ; i++)
    eratos[i] = i+2;
  eratos[i] = END;
 
  while(!cin.eof()){
    i = 0;
    index3 = 0;
  while(eratos[i]!=END)
    {
      if(eratos[i]!=0)
        {
          index = i + 1;
          index3 = i + 1;
          while(eratos[index]!=END)
            {
              if(eratos[index]%eratos[i] != 0)
                {
                  eratos[index3] = eratos[index];
                  index3++;
                }
              index++;
            }
          eratos[index3] = END;
        }
      i++;
    }
 
  for(i = 0; i < index3; i++)
    {
      if(eratos[i]==num)
        {
          cout << eratos[i-1] << " " << eratos[i+1] << endl;
          break;
        }
      else if(eratos[i] > num)
        {   
              cout << eratos[i-1] << ' ' << eratos[i] << endl;
              break;
        }
    }
    cin >> num;
  }
  return 0;
}