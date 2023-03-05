#include <iostream>
using namespace std;

int main() {
    int n, count = 0, sum = 0;
    double avg = 0;

    cout << "Enter a sequence of numbers terminated by -1:" << endl;
    cin >> n;
    while (n != -1) {
        count++;
        sum += n;
        cin >> n;
    }

    if (count > 0) {
        avg = static_cast<double>(sum) / count;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    } else {
        cout << "No numbers were entered!" << endl;
    }

    return 0;
}
