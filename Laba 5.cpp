#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int sumValuesArreySmallerVariable() 
{
    string nameMassiw = "";
    int b, n, m;
    cout << "Введите имя массива:";
    cin >> nameMassiw;
    cout << "Введите кол-во строк массива " << nameMassiw << ":";
    cin >> n;
    cout << "Введите кол-во столбцов массива " << nameMassiw << ":";
    cin >> m;
    cout << "Введите переменную от -50 до 50:" << endl;
    cin >> b;
    cout << endl;
    cout << "Массив " << nameMassiw << ":" << endl;
    int C[n][m];
    int summ = 0;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
         C[i][j] = rand() % 101 - 50;
        }
    } 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
            if (C[i][j] < b){
                summ = summ + C[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
    return summ;
}


int main() 
{
    int G, A;
    G = sumValuesArreySmallerVariable();
    cout << G << endl;
    A = sumValuesArreySmallerVariable();
    cout << A << endl;
}