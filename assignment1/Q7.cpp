#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cout << "Enter a sequence of numbers, separated by spaces: ";
    getline(cin, input);
    
    vector<int> nums;
    stringstream ss(input);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end());
    
    cout << "Sorted numbers: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
