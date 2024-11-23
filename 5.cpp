#include <iostream>

using namespace std;
int main() {
    int arr[10]{};
    int choise;
    int n;
    int m;
    float sum = 0;
    float average;
    cout << "Введите 10 оценок студента: ";
    for (int i = 0; i < 10; ++i){
        cin >> arr[i];
    }
    cout << endl;

    cout << "Меню: " << endl << "1. Вывод оценок" << endl << "2. Пересдача экзамена" 
    << endl << "3. Выходит ли стипендия?" << endl << "Выберите один из пунктов меню: ";
    cin >> choise;

    if (choise == 1){
        for (int i = 0; i < 10; ++i){
        cout << arr[i] << ' ';
        }
    }
    if (choise == 2){
        cout << "Введите порядковый номер оценки: ";
        cin >> n;
        cout << "Введите новую оценку: ";
        cin >> m;
        arr[n-1]=m;
        cout << "Оценка изменена." << endl;
        for (int i = 0; i < 10; ++i){
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
    if (choise == 3){
        for (int i = 0; i < 10; ++i){
            sum+=arr[i];
        }
        average = sum / 10;
        cout << "Средний балл студента: " << average << endl;
        if (average < 4.5) {
            cout << "Стипендии не будет";
        }
        else {
            cout << "Стипендия будет" << endl;
        }
    }
    
}