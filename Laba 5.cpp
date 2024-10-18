#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int sumValuesArreySmallerVariable(int m, int b) 
{
    int C[1000];
    int summ = 0;
    srand(time(0));
    for (int i = 0; i < m; i++) {
    C[i] = rand() % 101 - 50;
    }
    for (int i = 0; i < m; i++) {
    if (C[i] < b){
    summ = summ + C[i];
    }
    }
    return summ;
}
int main() 
{
    int G, A;
    G = sumValuesArreySmallerVariable(10 , 47);
    cout << G << endl;
    A = sumValuesArreySmallerVariable(29, 15);
    cout << A << endl;
}