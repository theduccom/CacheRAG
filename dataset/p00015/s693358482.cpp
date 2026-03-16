#include <iostream>
#include <string>
using namespace std;

string Sum(string& FirstInteger, string& SecondInteger)
{
	int Degit;
	string AddedZero;
	if(FirstInteger.size() < SecondInteger.size()){
		Degit = SecondInteger.size();
		for(int i = 0; i < Degit - FirstInteger.size(); i++){
			AddedZero.push_back('0');
		}
		FirstInteger = AddedZero + FirstInteger;
	}else{
		Degit = FirstInteger.size();
		for(int i = 0; i < Degit - SecondInteger.size(); i++){
			AddedZero.push_back('0');
		}
		SecondInteger = AddedZero + SecondInteger;
	}
//	cout << FirstInteger << '+' << endl << SecondInteger << endl;
	string SumInteger;
	SumInteger.resize(Degit);
	bool IsMoveUp  = false;
	bool WasMoveUp = false;
	for(int i = 0; i < Degit; i++){
		WasMoveUp = IsMoveUp;
		int Sum = WasMoveUp + FirstInteger[Degit-1-i] - '0' + SecondInteger[Degit-1-i] - '0';
		if(Sum >= 10){
			IsMoveUp = true;
			Sum -= 10;
		}else{
			IsMoveUp = false;
		}
		SumInteger[Degit-1-i] = Sum + '0';
	}
	if(IsMoveUp == true){
	    return '1' + SumInteger;
	}else{
	    return SumInteger;
	}
}

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		string FirstInteger, SecondInteger;
		cin >> FirstInteger >> SecondInteger;
//		cout << FirstInteger << '+' << SecondInteger << endl;
		string SumInteger = Sum(FirstInteger, SecondInteger);
//		cout << SumInteger.size() << "keta" << endl;
		if(SumInteger.size() <= 80){
//		    cout << "c" << endl;
		    cout << SumInteger.c_str() << endl;
//			cout << "b" << endl;
		}else{
			cout << "overflow" << endl;
		}
//		cout << "a" << endl;
	}
	return 0;
}