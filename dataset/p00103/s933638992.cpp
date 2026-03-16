#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int count;
  int out_count = 0;
  int first = 0;
  int second = 0;
  int third = 0;
  int point = 0;

  string h = "HIT";
  string o = "OUT";
  string home = "HOMERUN";

  cin>>count;

  while(1){
    string v;
    cin>>v;

    if(v == o){
      ++out_count;
      if(out_count%3 == 0){
        cout<<point<<endl;
        point = 0;
        first = 0;
        second = 0;
        third = 0;
      }
      if(out_count == count*3){
        break;
      }
    }
    else if(v == h){
      if(third == 1){
        point += 1;
        third = 0;
      }
      if(second == 1){
        third = 1;
        second = 0;
      }
      if(first == 1){
        second = 1;
      }
      first = 1;
    }
    else if(v == home){
      if(third == 1){
        point += 1;
        third = 0;
      }
      if(second == 1){
        point += 1;
        second = 0;
      }
      if(first == 1){
        point += 1;
        first = 0;
      }
      ++point;
    }
  }
  return 0;
}