#include <iostream>
using namespace std;

double weird_math(int);

int main() {
    int input = 0;
    bool good_input = false;


    do {

        // get user input
        cout << "Input a positive whole number to see some weird math answer." << endl << "number: ";
        cin >> input;
        cout << endl;

        // validate user input
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        } else if (input > 0 && input < 100000){
            good_input = true;
        }

    } while (!good_input);

    cout << "Your weird math answer is: " << weird_math(input) << endl;

    return 0;
}

double weird_math(int n) {
    // recursively get the answer
    double i = n;
    if (i > 0) {
        return i / (i + 1) + weird_math(i - 1);
    }

    return 0;
}
