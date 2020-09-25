#include <iostream>
using namespace std;

string is_leap_year(int);

int main() {
    int input = 0;

    do {
        cin.clear();
        cout << "Leap Year Calculator" << endl;
        cout << "Enter a year: ";
        cin >> input;
        cout << endl;
    } while (cin.fail());


    cout << input << " is " << is_leap_year(input) << "a leap year" << endl;

}

string is_leap_year(int year) {
    string s = "";
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 != 0) {
                s = "not ";
            }
        }
    } else {
        s = "not ";
    }
    return s;
}
