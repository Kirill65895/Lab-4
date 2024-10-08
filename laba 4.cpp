#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int m, n, N;
    int C[m][n];
    int summ = 0;
    int quantity = 0;
    cout << "Введите размерность: ";
    cin >> N;

    srand(time(0));
    m = N;
    n = N;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
         C[i][j]=rand() % 21 - 10;
        }
    } 
    cout << " " << endl;
    cout << "Матрица: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
        cout << C[i][j] << "  ";
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