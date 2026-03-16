#include<iostream>
#include<string>

using namespace std;

int main(){
	
    string s1, s2;
    int n;
    
    cin >> n;
    
    while( n-- ) {
    	
	cin >> s1 >> s2;
	
	if( s1.length() > 80 || s2.length() > 80)
  	cout << "overflow\n";
  	
  	else {
  	
  	int i1 = s1.length();
  	int i2 = s2.length();
  	
  	string ans;
    int tmp = 0;
    int up = 0;
  	
  	while( i1 > 0 && i2 > 0 ) {
  		
  		tmp = (s1[i1 - 1] + s2[i2 - 1]) - 2 * '0' + up;
  		
        up = tmp / 10;
        tmp %= 10;
        ans = char(tmp + '0') + ans;
  	
  		i1--;
  		i2--;
  		
	  }
	  if (i1 > 0) {
        while( i1 > 0  ) {
            tmp = s1[i1 - 1] - '0' + up;
            
            up = tmp / 10;
            tmp %= 10;
            ans = char(tmp + '0') + ans;
            
            i1--;
        }
    }
        else if (i2 > 0) {
            while( i2 > 0  ) {
            tmp = s2[i2 - 1] - '0' + up;
                
            up = tmp / 10;
            tmp %= 10;
            ans = char(tmp + '0') + ans;
                
            i2--;
        }
    }
 
        if (up > 0)
        ans = char(up + '0') + ans;
 
        if (ans.size() > 80)
        cout << "overflow" << endl;
        
        else
        cout << ans << endl;
  }
}
  return 0;
}
