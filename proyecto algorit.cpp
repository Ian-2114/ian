#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int actual = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = actual;
    }
}

void mostrarArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int datos[] = {5, 3, 8, 4, 2};
    int n = sizeof(datos) / sizeof(datos[0]);

    cout << "Antes de ordenar: ";
    mostrarArreglo(datos, n);

    insertionSort(datos, n);

    cout << "Después de ordenar: ";
    mostrarArreglo(datos, n);

    return 0;
}
