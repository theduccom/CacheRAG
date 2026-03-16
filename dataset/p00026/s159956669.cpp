#include <iostream>

using namespace std;

class Field{
private:
	int v[14][14]; //only 2-11 will be used.
public:
	Field(){
		int i, j;
		for(i=0;i<14;i++){
			for(j=0;j<14;j++){
				v[i][j] = 0;
			}
		}
	}

	void Drop(int x, int y, int s){
		x += 2;
		y += 2;

		if(s == 1){
			v[x][y]++; v[x-1][y]++; v[x+1][y]++; v[x][y-1]++; v[x][y+1]++;
		}else if(s == 2){
			int i, j;
			for(i=x-1;i<=x+1;i++){
				for(j=y-1;j<=y+1;j++){
					v[i][j]++;
				}
			}
		}else{
			int i, j;
			for(i=x-1;i<=x+1;i++){
				for(j=y-1;j<=y+1;j++){
					v[i][j]++;
				}
			}
			v[x-2][y]++; v[x+2][y]++; v[x][y-2]++; v[x][y+2]++;
		}
	}

	void printResult(){
		int i, j;
		int num = 0;
		int max = 0;

		for(i=2;i<=11;i++){
			for(j=2;j<=11;j++){
				if(v[i][j] == 0){
					num++;
				}
				if(max < v[i][j]){
					max = v[i][j];
				}
			}
		}
		cout << num << endl;
		cout << max << endl;
	}
};

int main(void){
	Field field;
	int x, y ,size;

	while(cin >> x){
		cin.ignore();
		cin >> y;
		cin.ignore();
		cin >> size;
		field.Drop(x, y, size);
	}

	field.printResult();
	return 0;
}