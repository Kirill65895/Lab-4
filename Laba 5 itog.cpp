#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int sumValuesArreySmallerVariable(int Long, int b) 
{
    int C[1000];
    int summ = 0;
    srand(time(0));
    for (int i = 0; i < Long; i++) {
        C[i] = rand() % 101 - 50;
        if (C[i] < b){summ = summ + C[i];}}return summ;}
int main() 
{
    int Arrey_G, Arrey_V;
    Arrey_G = sumValuesArreySmallerVariable(8 , 47);
    cout << Arrey_G << endl;
    Arrey_V = sumValuesArreySmallerVariable(4, 15);
    cout << Arrey_V << endl;
}