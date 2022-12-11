#include <iostream>
using namespace std;

// correct answer is 4613732

int main(){
	int a, b, c, sum;
	a = 0; b = 1; sum = 0;
	while(b <= 4000000){
		c = a + b;
		a = b;
		b = c; 
	if (b % 2 == 0)
		sum = sum + b;
	}
	cout << sum << "\n";
	return 0;
}
