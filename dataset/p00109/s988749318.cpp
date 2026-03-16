#include<iostream>

using namespace std;

string mozi
;
int koko
;
// mae ni tukutta raiburari *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
int koubunnkaiseki();
int koubunnkaiseki2();
int koubunnkaiseki3();

int koubunnkaiseki3()
{
  int atai;
  if( mozi[koko] == '(' ) 
    {
      koko = koko + 1;
      atai = koubunnkaiseki();
      koko = koko + 1;
    }
  else
    {
      atai = 0;
      while( koko < mozi.size() && '0' <= mozi[koko] && mozi[koko] <= '9' )
	{
	  atai = atai * 10;
	  atai = atai + ( mozi[koko] - '0' );
	  koko = koko + 1;
	}
    }
  return atai;
}

int koubunnkaiseki2()
{
  int atai = koubunnkaiseki3();
  for(;mozi[koko]=='*'||mozi[koko]=='/';)
    {
      if( mozi[koko] == '*' )
	{
	  koko = koko + 1;
	  atai = atai * koubunnkaiseki3();
	}
      else
	{
	  koko = koko + 1;
	  atai = atai / koubunnkaiseki3();
	}
    }
  return atai;
}

int koubunnkaiseki()
{
  int atai = koubunnkaiseki2();
  for(;mozi[koko]=='+'||mozi[koko]=='-';)
    {
      if( mozi[koko] == '+' ) 
	{
	  koko = koko + 1;
	  atai = atai + koubunnkaiseki2();
	}
      else 
	{
	  koko = koko + 1;
	  atai = atai - koubunnkaiseki2();
	}
    }
  return atai;
}

int main(int argc,char *argv) 
{
  int dataset;
  cin >> dataset;
  for(int kaisuu=0;kaisuu<dataset;kaisuu++)
    {
      cin >> mozi;
      koko = 0;
      cout << koubunnkaiseki() << endl;
    }
}