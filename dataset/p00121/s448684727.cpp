#include<cstdio>
#include<string>
#include<map>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
map < string, int >d;
int dx[] = { -1, 1, 4, -4 };

void
swap (string & str, int x, int nx)
{
  char t = str[x];
  str[x] = str[nx];
  str[nx] = t;
}

void
bfs (void)
{
  string sp = "01234567";
  queue < string > que;
  que.push (sp);
  d[sp] = 0;
  while (!que.empty ())
    {
      string s = que.front ();
      que.pop ();
      int x = s.find ('0');
      for (int i = 0; i < 4; i++)
	{
	  int nx = x + dx[i];
	  if (0 <= nx && nx <= 7 && !(x == 3 && nx == 4) && !(x == 4 && nx == 3))
	    {
	      string ns = s;
	      swap (ns, x, nx);
	      if (d.find (ns) == d.end ())
		{
		  d[ns] = d[s] + 1;
		  que.push (ns);
		}
	    }
	}
    }
}

int
main (void)
{
  bfs ();
  string str;
  while (getline(cin, str))
    {
      string::iterator end_it = remove(str.begin(), str.end(), ' ');
      str.erase(end_it, str.end());
      printf ("%d\n", d[str]);
    }
  return 0;
}