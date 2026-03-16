#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int unit_price, unit_sales;
	char dummy;
	
	int price_sum = 0, sales_sum = 0;
	int n;
	
	for ( n=0; cin >> unit_price >> dummy >> unit_sales; n++ ) {
		price_sum += unit_price * unit_sales;
		sales_sum += unit_sales;
	}
	
	float avg_sales = static_cast<float>(sales_sum) / n;
	
	avg_sales += 0.5; avg_sales = floor(avg_sales);
	
	cout << price_sum << endl;
	cout << static_cast<int>(avg_sales) << endl;
	
	return 0;
}