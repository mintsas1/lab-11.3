#include <iostream>

using namespace std;

int countOccurrences(int* x, int* y, int n, int m) {
    int count = 0;
    int second_element = *(x + 1);

    for (int i = 0; i < m; ++i) {
        if (*(y + i) == second_element) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;

    cout << "Enter the size of the first array (n): ";
    cin >> n;
    cout << "Enter the size of the second array (m): ";
    cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "x[" << i << "]: ";
        cin >> *(x + i);
    }

    cout << "Enter the elements of the second array:\n";
    for (int i = 0; i < m; ++i) {
        cout << "y[" << i << "]: ";
        cin >> *(y + i);
    }

    int occurrences = countOccurrences(x, y, n, m);

    cout << "The second element of the first array occurs in the second array " << occurrences << " times.\n";

    delete[] x;
    delete[] y;

    return 0;
}




    





