#include <iostream>
using namespace std;

int main() {
    int first_number, second_number, summ;
    cout << "Enter numbers: ";
    cin >> first_number >> second_number;
    summ = first_number + second_number;
    cout << first_number << "+" << second_number << "=" << summ;
    return 0;
}