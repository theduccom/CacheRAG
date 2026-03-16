#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Plane{
private:
	vector< vector< int > > m_plane;
	int m_nx, m_ny;
	int m_initiation_range;
	stringstream m_ss_buf;
public:
	Plane(int nx, int ny, int init_range);//Constructor
	~Plane();//Destructor
	//「平面の中で爆弾が置かれているマス」を設定
	//int LineNo : 行番号　0-based
	//string LineString : 行番号LineNoの情報(8文字の0と1の文字列)
	void setInitialPosition(int LineNo, string &LineString);
	//初期起爆位置を入力し、起爆させる
	void Initiate(int initiation_x, int initiation_y);
	void DebugPrint();
};

Plane::Plane(int nx, int ny, int init_range){
	m_nx = nx; m_ny = ny;
	m_initiation_range = init_range;
	//配列の確保
	m_plane.resize(m_ny);
	for(int i=0; i<m_ny ;i++){
		m_plane[i].resize(m_nx);
	}
}

Plane::~Plane(){}

void Plane::setInitialPosition(int LineNo, string &LineString){
	string::iterator iterator_x;
	iterator_x = LineString.begin();
	for(int x=0;x<m_nx;x++){
		m_ss_buf<<*iterator_x;
		m_ss_buf >> m_plane[LineNo][x];
		iterator_x++;
		m_ss_buf.clear();
		m_ss_buf.str("");
	}
}

void Plane::Initiate(int initiation_x, int initiation_y){
	// Initiation code goes here...
	int xs = initiation_x - 1 - m_initiation_range;
	if(xs<0){xs=0;}
	int xe = initiation_x - 1 + m_initiation_range;
	if(xe>m_nx-1){xe = m_nx-1;}
	
	int ys = initiation_y - 1 - m_initiation_range;
	if(ys<0){ys=0;}
	int ye = initiation_y - 1 + m_initiation_range;
	if(ye>m_ny-1){ye = m_ny-1;}
	
	//[initiation_x-1][initiation_y-1]を起爆して０にする
	m_plane[initiation_y-1][initiation_x-1]=0;
	
	// cout<<"bomb = "<<initiation_x-1<<", "<<initiation_y-1<<endl;
	// cout<<"bombrange xs = "<<xs<<endl;
	// cout<<"bombrange xe = "<<xe<<endl;
	// cout<<"bombrange ys = "<<ys<<endl;
	// cout<<"bombrange ye = "<<ye<<endl;
	// this->DebugPrint();
	
	//x-direction
	for(int x = xs;x<=xe;x++){
		if(m_plane[initiation_y-1][x]==1){
			this->Initiate(x+1,initiation_y);
		}
	}
	//y-direction
	for(int y = ys;y<=ye;y++){
		if(m_plane[y][initiation_x-1]==1){
			this->Initiate(initiation_x,y+1);
		}
	}
}

void Plane::DebugPrint(){
	for(int y=0;y<m_ny;y++){
		for(int x=0;x<m_nx;x++){
			cout<<m_plane[y][x];
		}
		cout<<endl;
	}
}

int main() {
	// your code goes here
	int n_datasets = 0;
	int initiation_x, initiation_y;
	string Line;
	
	Plane plane(8, 8, 3);
	cin>>n_datasets;
	for(int d = 0;d<n_datasets;d++){
		cout<<"Data "<<d+1<<":"<<endl;
		for (int y=0;y<8;y++){
			cin>>Line;
			//cout<<"y="<<y<<",  Line="<<Line<<endl;//dubug
			plane.setInitialPosition(y, Line );
		}
		cin>>initiation_x;
		cin>>initiation_y;
		// cout<<"before initiation"<<endl;
		// plane.DebugPrint();
		plane.Initiate(initiation_x,initiation_y);
		// cout<<"after initiation"<<endl;
		plane.DebugPrint();
	}
	return 0;
}