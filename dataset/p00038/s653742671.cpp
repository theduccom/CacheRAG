#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<array>

using namespace std;


bool isStraight( const array<int,5>& cs )
{
  if ( cs[0] == 1 && cs[1] == 10 && cs[2] == 11 && cs[3] == 12 && cs[4] == 13 )
    return true;
  
  for ( auto i = 0; i < 4; ++i )
    {
      if ( cs[i] + 1 != cs[i+1] )
        return false;
    }

  return true;
}

bool isOnePair( const array<int,5>& cs )
{
  for ( auto i = 0; i < 4; ++i )
    {
      if ( cs[i] == cs[i+1] )
        return true;
    }

  return false;
}

bool isTwoPair( const array<int,5>& cs )
{
  for ( auto i = 0; i < 2; ++i )
    {
      for ( auto j = i + 2; j < 4; ++j )
        {
          if ( cs[i] == cs[i+1] && cs[j] == cs[j+1] )
            return true;
        }
    }

  return false;
}

bool isThreeCard( const array<int,5>& cs )
{
  for ( auto i = 0; i < 3; ++i )
    {
      if ( cs[i] == cs[i+1] && cs[i+1] == cs[i+2] )
        return true;
    }

  return false;
}

int main()
{
  array<int,5> card;
  char c;

  while ( cin >> card[0] >> c >> card[1] >> c >> card[2] >> c >> card[3] >> c >> card[4] )
    {
      sort( card.begin(), card.end() );
      
      if ( card[0] == card[1] && card[1] == card[2] && card[2] == card[3] )
        cout << "four card" << endl;
      else if ( card[1] == card[2] && card[2] == card[3] && card[3] == card[4] )
        cout << "four card" << endl;
      else if ( card[0] == card[1] && card[1] == card[2] && card[3] == card[4] )
        cout << "full house" << endl;
      else if ( card[0] == card[1] && card[2] == card[3] && card[3] == card[4] )
        cout << "full house" << endl;
      else if ( isStraight( card ) )
        cout << "straight" << endl;
      else if ( isThreeCard( card ) )
        cout << "three card" << endl;
      else if ( isTwoPair( card ) )
        cout << "two pair" << endl;
      else if ( isOnePair( card ) )
        cout << "one pair" << endl;
      else
        cout << "null" << endl;
    }
  
  return 0;
}