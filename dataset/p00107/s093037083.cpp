#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	double tate, yoko, takasa, ana, taikaku, hankei;
	while(1){
		cin >> tate >> yoko >> takasa;
		if(tate == 0 && yoko == 0 && takasa == 0){
			break;
		}

		if(tate > yoko){
			if(yoko > takasa){
				taikaku = sqrt(yoko * yoko + takasa * takasa);
			}

			else if(takasa > yoko && tate > takasa){
				taikaku = sqrt(yoko * yoko + takasa * takasa);
			}
		}

		else if(yoko > tate){
			if(tate > takasa){
				taikaku = sqrt(takasa * takasa + tate * tate);
			}

			else if(takasa > tate && yoko > takasa){
				taikaku = sqrt(takasa * takasa + tate * tate);
			}
		}

		else if(takasa > yoko){
			if(yoko > tate){
				taikaku = sqrt(yoko * yoko + tate * tate);
			}

			else if(tate > yoko && takasa > tate){
				taikaku = sqrt(yoko * yoko + tate * tate);
			}
		}

		hankei = taikaku / 2;

		cin >> n;

		for(int i = 0; i < n; i++){
			cin >> ana;
			if(ana > hankei){
				cout << "OK" << endl;
			}

			else{
				cout << "NA" << endl;
			}
		}
	}

	return 0;
}