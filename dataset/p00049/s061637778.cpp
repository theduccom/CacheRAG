#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int num;
  int blood_num[4] = {0};
  string blood;
  char c;
  
  while(cin >> num >> c >> blood)
    {
      if(blood == "A") blood_num[0]++;
      if(blood == "B") blood_num[1]++;
      if(blood == "AB") blood_num[2]++;
      if(blood == "O") blood_num[3]++;
    }
  for(int i = 0 ; i < 4 ; i++)
    {
      cout << blood_num[i] << endl;
    }
  return 0;
}

  