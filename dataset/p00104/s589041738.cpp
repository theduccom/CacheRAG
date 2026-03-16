#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct RECORD{
  int x;
  int y;
};

int main(){
  int i, j, k, l, n, w, h, loop;
  string tile[100];
  RECORD one;
  vector<RECORD> data;

  while(1){
    cin >> w >> h;
    if(w == 0 && h == 0) break;

    for(i=0; i<w; ++i)
      cin >> tile[i];

    i = 0;
    j = 0;
    loop = 0;
    while(1){
      k = i;
      l = j;

      if(tile[i][j] == '>'){
	++j;
      }else if(tile[i][j] == '<'){
	--j;
      }else if(tile[i][j] == '^'){
	--i;
      }else if(tile[i][j] == 'v'){
	++i;
      }else if(tile[i][j] == '.'){
	cout << j << " " << i << endl;
	break;
      }

      if(tile[i][j] != tile[k][l]){
	for(n=0; n<data.size(); ++n){
	  if(data[n].x == i && data[n].y == j){
	    cout << "LOOP" << endl;
	    loop = 1;
	    break;
	  }
	}

	if(loop == 1) break;
	one.x = i;
	one.y = j;
	data.push_back(one);
      }
    }

    data.clear();
  }

  return 0;
}