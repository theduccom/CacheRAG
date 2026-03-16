#include <iostream>
#include <string>

using namespace std;


int w,h;

int map[10001];
bool visited[10001];

int move(int pos) {

  if(visited[pos]==true) return -1;

  else {

    visited[pos]=true;

    switch(map[pos]) {

    case 0:
      return pos;

    case 1:
      return move(pos+1);

    case 2:
      return move(pos-w);

    case 3:
      return move(pos-1);

    case 4:
      return move(pos+w);

    }

  }

  return -1;

}

int main() {

  string buf;

  int res;
  

  while(cin >> h >> w) {

    if(w==0 && h==0) break;

    getline(cin,buf);

    for(int i=0;i<10001;i++) visited[i]=false;

    for(int i=0;i<h;i++) {

      getline(cin,buf);

      for(int j=0;j<w;j++) {

	switch(buf[j]) {

	case '.':
	  map[i*w+j]=0;
	  break;

	case '>':
	  map[i*w+j]=1;
	  break;

	case '^':
	  map[i*w+j]=2;
	  break;

	case '<':
	  map[i*w+j]=3;
	  break;

	case 'v':
	  map[i*w+j]=4;
	  break;

	}

      }

    }
    /*
    for(int i=0;i<h;i++) {

      for(int j=0;j<w;j++) {

	cout << map[i*w+j];

      }

      cout << endl;

    }
    */
    res=move(0);

    if(res==-1) cout << "LOOP" << endl;

    else cout << res%w << " " << res/w << endl;
    
  }

  return 0;

}
	  
 