#include<iostream>
#include<algorithm>
using namespace std;

const int MAX_DEPTH = 50;
int data[8];
int dx[4] = {-4,1,-1,4};

int abs(int x){
	if( x>0 )
		return x;
	return -x;
}

//評価関数(マンハッタン距離。枝刈用)
int check()
{
	int i,j;
	int s = 0;
	for( i = 1; i < 8; i++ ){
		for( j = 0; j < 8; j++ ){
			if( data[j] == i )
				break;
		}
		s += abs(j/4 - i/4) + abs(j%4 - i%4);
	}
	return s;
}

//実体(ちなみにtrueが返えるのは、最下層の呼び出し時であることがIDA()関数より保障される。)
//t,uは1手前に値をswapしたインデックスの番号
bool func( int depth,int maxdepth,int t,int u )
{
	int i,j;
	
	/*cout << depth << " " << maxdepth << " " << check() << endl;
	for( i = 0;i < 8;i++ ){
		cout << data[i] << " ";
	}
	cout << endl;*/
	
	//枝刈とか
	if( depth > maxdepth )
		return false;
	if( check() == 0 )
		return true;
	if( check() + depth > maxdepth )
		return false;
		
	for( i = 0;i < 8;i++ ){
		if( data[i] == 0 )
			break;
	}
	//0はi番目にある。4方向を考える
	for( j = 0;j < 4;j++ ){
		if( i+dx[j] < 0 || i+dx[j] > 7 || ( (i+dx[j])%4 - i%4 )*dx[j] < 0 )
			continue;
		if( (data[i] == t && data[i+dx[j]] == u) || (data[i] == u && data[i+dx[j]] == t) )
			continue;
		swap( data[ i ],data[ i+dx[j] ] );
		if( func( depth+1,maxdepth,data[ i ],data[ i+dx[j] ] ) )
			break;
		swap( data[ i ],data[ i+dx[j] ] );
	}
	if( j < 4 )
		return true;
	return false;
}

//詰将棋パターンを枝刈しているだけな、全探索に毛が生えた程度のIDA*。
int IDA(){
	int i;
	for( i = 0; i < MAX_DEPTH; i++ ){
		if( func( 0,i,0,0 ) )
			break;
	}
	return i;
}

int main(){
	int i;
	
	while( cin >> data[0] )
	{
		for( i = 1;i < 8;i++ )
			cin >> data[i];
				
		cout << IDA() << endl;
	}
	return 0;
}