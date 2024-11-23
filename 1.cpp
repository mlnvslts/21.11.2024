#include <iostream>

using namespace std;
int main() {
    int arr[3][3]{
    {3, 2, 6},
    {7, 1, 9},
    {10, 4, 5}
    };

    int arrCount1 = sizeof(arr)/sizeof(arr[0]);
    int arrCount2 = sizeof(arr[0])/sizeof(arr[0][0]);
    float arrCount3 = arrCount1 * arrCount2;

    for (int i = 0; i < arrCount1; ++i) {
        for (int j = 0; j < arrCount2; ++j){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    int rowSum[3]{};
    int totalSum = 0;
    int min = arr[0][0];
    int max = arr[0][0];


    for ( int i = 0; i < arrCount1; ++i) {
        for (int j = 0; j < arrCount2; ++j) {
            rowSum[i]+=arr[i][j];
            if (arr[i][j] < min) {
                min = arr[i][j];
            }

            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        totalSum += rowSum[i];
        cout << endl;
    }

    cout <<"Сумма всех элементов: " << totalSum << endl;
    cout << "Среднее арифметическое: " << totalSum / arrCount3 << endl;
    cout << "Минимальный эффект: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
}
