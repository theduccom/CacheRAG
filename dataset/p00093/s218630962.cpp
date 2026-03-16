#include<iostream>
#include<vector>

using namespace std;

int main(){
  int i, a, b, leap, count=0;
  vector<int> leapyear;

  while(1){
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    else if(count != 0) cout << endl;

    for(i=a; i<=b; ++i){
      if(i%400 == 0)
	leap = 1;
      else if(i%100 == 0)
	leap = 0;
      else if(i%4 == 0)
	leap = 1;
      else
	leap = 0;

      if(leap == 1)
	leapyear.push_back(i);
    }

    if(leapyear.size() == 0){
      cout << "NA" << endl;
    }else{
      for(vector<int>::size_type i=0; i != leapyear.size(); ++i)
	cout << leapyear[i] << endl;
    }

    leapyear.clear();
    ++count;
  }

  return 0;
}