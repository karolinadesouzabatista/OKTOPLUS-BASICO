#include <iostream>

using namespace std;

int main() {
	
	int a, b, result;
	
	cin >> a >> b;
	
	result = (a+b)/2;
	
	if (result >= 7){
		cout << "Aprovado";
	}
	if ((result < 7) && (result >= 4)){
		cout << "Recuperacao";
	}
	if (result < 4){
		cout << "Reprovado";
	}
	
	return 0;
}
