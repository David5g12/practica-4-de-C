#include<iostream>
#include<cstdlib>
#define maxf 3
#define maxc 5

using namespace std;
int main(int argc, char* argv[]) {

    float a[maxf][maxc];
    int f, c;

    cout << "Asigna los numeros para rellenar la matriz 3x5:" << endl;
    for (f = 0; f < maxf; f++) {
        for (c = 0; c < maxc; c++) {
            cin >> a[f][c];
        }
    }
    cout << "La matriz resultante de 3x5 es:" << endl;
    for (f = 0; f < maxf; f++) {
        for (c = 0; c < maxc; c++) {
            cout << a[f][c] << "    ";
        }
        cout << "\n" << endl;
    }

    system("PAUSE");

    return 0;
}