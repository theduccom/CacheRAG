#include <iostream>
#include <vector>
#define N 1000000
using namespace std;

int main(){
  bool isP[N];
  vector<long> v;

  for( int i=0;i<N;i++ ) isP[i]=true;

  v.push_back( 0 );
  //  int k=0;
  for( int i=2;i<N && v.size()<=N+1 ;i++ ){
      if( !isP[i] ) continue;
      v.push_back( i+v.back() );
      // ++k;
      for( int j=i*2;j<N;j+=i ) isP[j] = false;
  }
	 //	 cout << "k="<<k<<endl;

	 int n;
       while( cin>>n && n )
	 cout << v[n] << endl;

	 return 0;

};