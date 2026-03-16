#include <iostream>

using namespace std;

int ctoi(char c){
  if(c=='A')
    return 0;
  if(c=='B')
    return 1;
  if(c=='C')
    return 2;
}

int main(void)
{
  int cup[3];
  char x,y,c;
  int a,b;
  int count=0;
  
  cup[0]=1;
  cup[1]=0;
  cup[2]=0;

  while(cin >> x >> c >> y)
    {
      a=ctoi(x);
      b=ctoi(y);
      swap(cup[a],cup[b]);
      count++;
      if(count>50)
	break;
    }

  for(int i=0;i<3;i++)
    {
      if(cup[i]==1)
	{
	  if(i==0)
	    cout << "A" <<endl;
	  else if(i==1)
	    cout << "B" <<endl;
	  else if(i==2)
	    cout << "C" <<endl;
	}
    }
  
  return 0;
}


