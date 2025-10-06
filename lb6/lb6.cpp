#include <iostream>
#include <cstdlib> 
#include <ctime>    
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;     
    int a[n];

    srand(time(0));       

    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 101 - 50;  
        cout << a[i] << " ";
    }
    cout << endl;

    int minElement = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minElement)
            minElement = a[i];
    }
    cout << "Найменший елемент масиву: " << minElement << endl;




    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[maxIndex]) {   
                maxIndex = j;
            }
        }
        
        int temp = a[i];
        a[i] = a[maxIndex];
        a[maxIndex] = temp;
    }

    cout << "Масив після сортування за спаданням: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
