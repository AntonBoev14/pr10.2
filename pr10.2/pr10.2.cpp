#include <iostream>
#include <cmath> 
using namespace std;

double max(double a, double b) {
    return (a > b) ? a : b; 
}

int main() {
    setlocale(0, "ru");
    double s, t;

    cout << "Введите значение s: ";
    cin >> s;
    cout << "Введите значение t: ";
    cin >> t;

    double max1 = max(t, 3 * s);
    double max2 = max(2 - t, pow(s, 2)); 

    double result = max1 - max2;

    cout << "Результат: " << result << endl;

    return 0;
}
