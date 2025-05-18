#include <iostream>
#include <cmath>
using namespace std;

int reachNumber(int target) {
    target = abs(target);  // symmetry
    int step = 0, sum = 0;

    while (sum < target || (sum - target) % 2 != 0) {
        step++;
        sum += step;
    }

    return step;
}

int main() {
    int target = 10;
    cout << "Minimum steps to reach " << target << ": " << reachNumber(target) << endl;
    return 0;
}
