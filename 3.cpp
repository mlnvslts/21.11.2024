#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
    int arr1[5][10]{{},{},{},{},{}};
    int arr2[5][5]{{},{},{},{},{}};
    int arr1Count1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr1Count2 = sizeof(arr1[0])/sizeof(arr1[0][0]);
    int arr2Count1 = sizeof(arr2)/sizeof(arr2[0]);
    int arr2Count2 = sizeof(arr2[0])/sizeof(arr2[0][0]);

    for (int i = 0; i < arr1Count1; ++i) {
        for (int j = 0; j < arr1Count2; ++j) {
            arr1[i][j] = rand() % 51;
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < arr2Count1; ++i) {
        for (int j = 0; j < arr2Count2; ++j) {
            arr2[i][j] = arr1[i][j * 2] + arr1[i][j * 2 + 1];
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}