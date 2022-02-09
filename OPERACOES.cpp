#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	char calc;
	double n1, n2, m, d;
	
	cin >> calc;
	if(calc == 'M'){
		cin >> n1 >> n2;
		n1 * n2;
		m = n1 * n2;
		cout << fixed << setprecision(2);
		cout << m << endl;
	}
		if(calc == 'D'){
		cin >> n1 >> n2;
		n1 / n2;
		d = n1 / n2;
		cout << fixed << setprecision(2);
		cout << d << endl;
	}
	
	
	return 0;
}
