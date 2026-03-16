#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
  array< double, 10 > distance;
  int speed1 = 0, speed2 = 0, sum = 0;
  double dis;
  char tmp;
  while ( cin >> distance[0] >> tmp >>distance[1] >> tmp >>
                distance[2] >> tmp >> distance[3] >> tmp >>
                distance[4] >> tmp >> distance[5] >> tmp >>
                distance[6] >> tmp >> distance[7] >> tmp >>
                distance[8] >> tmp >> distance[9] >> tmp >>
                speed1 >> tmp >> speed2 )
  {
        for ( int j = 0 ; j < 10 ; j++ ) sum += distance[j];
        dis = 1.0 * speed1 * sum / ( speed1 + speed2 );
        sum = 0;
        for ( int k = 0 ; k < 10 ; k++ )
        {
                sum += distance[k];
                if ( sum >= dis )
                {
                        cout << k+1 << endl;
                        break;
                }
        }
        sum = 0;
  }

  return 0;
}