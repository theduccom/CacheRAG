    #include<iostream>
    #include<string>
    using namespace std;
     
    int main() {
    	char A, B, C;
    	char D;
    	while (1) {
    		cin >> A >>D>> B;
    		if (A == 'A') {
    			C = B;
    		}
    		else if (B == 'A') {
    			C = A;
    		}
    		if (C == 'B' || C == 'C') {
    			break;
    		}
    	}
    	while (cin>>A>>D>>B) {
    		if (A == C) {
    			C = B;
    		}
    		else if (B == C) {
    			C = A;
    		}
    	}
    	cout << C << endl;
    	return 0;
    }