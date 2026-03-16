#include<iostream>
#include<string>
using namespace std;

#define POS y*w+x

int main(){
while(1){
	int w, h;
	string str;
	getline( cin, str );
	sscanf( str.c_str(), "%d %d", &h, &w );
	if( (h==0)&&(w==0) ) break;

	char *data = new char[w*h];
	// data input
	for( int y=0; y<h; y++ ){
		getline( cin, str );
		for( int x=0; x<w; x++ ){
			data[POS] = str.c_str()[x];
		}
	}

	// search
	int p = 0, cnt=0;
	while( data[p] != '.' ){
		switch(data[p]){
		case '>':
			p++;
			break;
		case '<':
			p--;
			break;
		case 'v':
			p+=w;
			break;
		case '^':
			p-=w;
			break;
		}
		cnt++;
		if( cnt > w*h ) break;
	}

	// output
	if( cnt > w*h ){
		cout << "LOOP" << endl;
	}else{
		cout << p%w << " " << p/w << endl;
	}

	delete[] data;
	data = 0;
}
	return 0;
}