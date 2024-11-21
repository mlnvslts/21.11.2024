#include <iostream>

using namespace std;
int main() {
    int arr[3][4]{
        {3, 5, 6, 7},
        {12, 1, 1, 1},
        {0, 7, 12, 1}
    };

    int arrCount1 = sizeof(arr)/sizeof(arr[0]);
    int arrCount2 = sizeof(arr[0])/sizeof(arr[0][0]);
    int rowSum[3]{};
    int columnSum[4]{};
    int totalSum = 0;


    for ( int i = 0; i < arrCount1; ++i) {
        for (int j = 0; j < arrCount2; ++j) {
            cout << arr[i][j] << "  ";
            rowSum[i]+=arr[i][j];
            columnSum[j]+=arr[i][j];
        }
        cout << " | " << rowSum[i] << endl;
        totalSum += rowSum[i];
        cout << endl;
    }

    cout << "------------------" << endl;
    for (int k = 0; k < arrCount2; ++k)
    {
        cout << columnSum[k] << "  ";
        totalSum += columnSum[k];
    }
    cout << "| " << totalSum << endl;

    
    
}