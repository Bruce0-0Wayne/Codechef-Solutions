#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int stepSize, remainingHeight;
        cin >> stepSize >> remainingHeight;
        int totalSteps = 0;
        int stepsTaken = 0;

        // First, use smaller steps (x/2) up to 5 steps or until height becomes non-positive
        while (stepsTaken < 5 && remainingHeight > 0) {
            remainingHeight -= stepSize / 2;
            stepsTaken++;
        }

        // If there's still height to reduce, use larger steps (x)
        while (remainingHeight > 0) {
            remainingHeight -= stepSize;
            stepsTaken++;
        }

        totalSteps = stepsTaken;
        cout << totalSteps << endl;
    }
    return 0;
}
