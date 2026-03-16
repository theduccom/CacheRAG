#include <iostream>

using namespace std;
class MAN{
public:
	unsigned int uriage;
	int number;
};

int main(int argc, char const* argv[])
{
	MAN person[4000];
	int n;
	bool flag;

	while( cin >> n && n != 0 ){
		for( int i = 0;i < n;i++ ){
			person[i].uriage = 0;
			person[i].number = 0;
		}

		for( int i = 0;i < n;i++ ){
			int target;
			unsigned int a,b;
			cin >> target >> a >> b;

			int j;
			for( j = 0;j < i;j++ ){
				if( person[j].number == target ){
					person[j].uriage += a*b;
					break;
				}
			}
			if( j == i ){
				person[i].number = target;
				person[i].uriage = a * b;
			}
		}
		flag = false;
		for( int i = 0;i < n;i++ ){
			if( person[i].uriage >= 1000000 ){
				cout << person[i].number << endl;
				flag = true;
			}
		}
		if( flag == false ) cout << "NA" << endl;
	}

	return 0;
}