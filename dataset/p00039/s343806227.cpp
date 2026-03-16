#include <iostream>
#include <string>
using namespace std;

int To_num(char);
int Calculate(string);

int main(void)
{
  string roma;
  
  while(cin >> roma) cout << Calculate(roma) << endl;
  return 0;
}

int Calculate(string str)
{
  int ans = 0;
  int now;
  int next;
  
  for(int i = 0 ; i < str.size() ; i++)
    {
      now = To_num(str[i]);
      if(i != str.size() - 1) next = To_num(str[i+1]);
      else next = -1;

      if(now >= next) ans += now;
      else
	{
	  ans += next - now;
	  i++;
	}
    }
  return ans;
}
      
int To_num(char c) /* ツδ債ーツマツ青板篠堋づーツ個サツ催敖づ個青板篠堋づ個表ツ記ツづ可陛渉つヲツづゥ */
{
  if(c == 'I') return 1;
  if(c == 'V') return 5;
  if(c == 'X') return 10;
  if(c == 'L') return 50;
  if(c == 'C') return 100;
  if(c == 'D') return 500;
  if(c == 'M') return 1000;
  return -1;
}