#include <iostream>
using namespace std;

int main() {
    int n = 5,highest,lowest,i;
    int arr[n] = {65, 21, 35, 98, 23};

    highest = arr[0];
    lowest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }

    cout << "Highest element: " << highest << endl;
    cout << "Lowest element: " << lowest << endl;

    return 0;
}