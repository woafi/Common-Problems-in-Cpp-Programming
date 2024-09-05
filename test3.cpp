#include <iostream>
#include <cmath>
using namespace std;

int calculateMinimumMoves(int x, int y, int k) {
    int moves = 0;
    while (true) {
        int move_x = moves / 2 + 1;  // The move length in the x direction
        int move_y = (moves + 1) / 2;  // The move length in the y direction

        if (move_x * k >= abs(x) && move_y * k >= abs(y)) {
            return moves + 1;
        }

        if (moves % 2 == 0) {  // Moving in the x direction
            x -= k * move_x;
        } else {  // Moving in the y direction
            y -= k * move_y;
        }

        moves++;
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k; // Read x, y, k for each test case

        x = abs(x); // We only need to consider the absolute value since direction alternates
        y = abs(y);

        int result = calculateMinimumMoves(x, y, k);
        cout << result << endl;
    }

    return 0;
}
