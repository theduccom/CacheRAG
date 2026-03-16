#include <iostream>
#include <string>
using namespace std;

string Sum(string FirstInteger, string SecondInteger)
{
	if(FirstInteger.size() < SecondInteger.size()){
		swap(FirstInteger, SecondInteger);
	}
	int Degit = FirstInteger.size();
	string AddedZero(Degit - SecondInteger.size(), '0');
	SecondInteger = AddedZero + SecondInteger;
	string SumInteger(Degit, '0');
	bool IsMoveUp = false;
	for(int i = 0; i < Degit; i++){
		int Sum = IsMoveUp + FirstInteger[Degit-1-i] - '0' + SecondInteger[Degit-1-i] - '0';
		IsMoveUp = Sum / 10;
		SumInteger[Degit-1-i] = (Sum % 10) + '0';
	}
	if(IsMoveUp){
	    SumInteger = '1' + SumInteger;
	}
	return SumInteger;
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