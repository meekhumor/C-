#include <iostream>
#include <vector>
using namespace std;

vector<int> createVector(int n) {
    vector<int> vec;
    for (int i = 1; i <= n; ++i) {
        vec.push_back(i);
    }
    return vec;
}

int main() {
    vector<int> myVector = createVector(5);
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
