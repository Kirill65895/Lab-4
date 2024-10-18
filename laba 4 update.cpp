#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 100;
    int N;
    int C[SIZE][SIZE];
    int summ = 0;
    int quantity = 0;
    cout << "Введите размерность: ";
    cin >> N;

    srand(time(0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
         C[i][j] = rand() % 60 + 10;
        }
    } 
    cout << " " << endl;
    cout << "Матрица: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        cout << C[i][j] << " ";
        if (i - j == 1){
            summ = summ + C[i][j];
            quantity += 1;
        }
        }
        cout << endl;
    } 
    cout << " " << endl;
    cout << "Сумма элементов под главной диагональю: " << summ << endl;
    cout << "Число элементов под главной диагональю: " << quantity << endl;
}