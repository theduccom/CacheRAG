#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int cheese_size;
  int length[3]; /* height, width, breadth */
  int n;
  int door_size, redius;
  
  while(1)
    {
      cin >> length[0] >> length[1] >> length[2];
      if(length[0] == 0 && length[1] == 0 && length[2] == 0) break;
      sort(length, length + 3);
      cheese_size = length[0] * length[0] + length[1] * length[1]; 
      
      cin >> n;
      
      for(int i = 0 ; i < n ; i++)
	{
	  cin >> redius;
	  door_size = (2 * redius) * (2 * redius); /* ツ陳シツ径 x ツ陳シツ径ツ。ツ青ウツ陛サツ形 */
	  
	  if(cheese_size < door_size) cout << "OK" << endl;
	  else cout << "NA" << endl;
	}
    }
  return 0;
}