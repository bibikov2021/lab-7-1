#include <iostream>
using namespace std;


double g(double a, double b) {
    a = 1 / a;
    b = 1 / b;
    double sr_garm = 2 / (a + b);
    return sr_garm;
}

int main() {
	setlocale(LC_ALL, "ru");


    double a, b;
    cout << "¬ведите числа через пробел: ";
    cin >> a >> b;

    cout << g(a, b);


	return 0;
}