#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

using namespace std;


int **Create(size_t n, size_t m) {
    int **M = new int *[n];
    for (size_t i = 0; i < n; ++i) {
        M[i] = new int[m];
    }
    return M;
}


void Free(int **M, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        delete[] M[i];
    }
    delete[] M;
}

void Input(int **M, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            cout << "M[" << i << "][" << j << "] = ";
            cin >> M[i][j];
        }
    }
}


void FillRandomNumbers(int **matrix, const size_t rows, const size_t columns) {
    srand((unsigned int) time(0));

    for (size_t row = 0; row < rows; row++)
        for (size_t column = 0; column < columns; column++)
            matrix[row][column] = rand() % 100;
}

void Print(int **M, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            cout << M[i][j] << ' ';
        }
        cout << endl;
    }
}


int MaxElem(int **M, size_t k, size_t m) {
    int mx = M[k][0];
    for (size_t j = 1; j < m; ++j)
        if (mx < M[k][j])
            mx = M[k][j];
    return mx;
}

void Process(int **M, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j <= i; ++j) {
            if (MaxElem(M, j, m) < MaxElem(M, i, m)) {
                int *t = M[i];
                M[i] = M[j];
                M[j] = t;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Rus");

    size_t n, m;

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    int **A = Create(n, m);

    FillRandomNumbers(A, n, m);

    Process(A, n, m);

    Print(A, n, m);

    Free(A, n);

    system("pause");

    return 0;
}
