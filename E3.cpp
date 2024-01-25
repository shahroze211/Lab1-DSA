#include<iostream>
using namespace std;

const int Size = 20;

void input(int a[Size][Size], int m, int n) {
    cout << "Input elements of the matrix "<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           
            cin >> a[i][j];
        }
    }
}

void display(int a[Size][Size], int m, int n) {
    cout << "Matrix elements "<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int sum(int a[Size][Size], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

void row_sum(int a[Size][Size], int m, int n) {
    cout << "row sum "<<endl;
    for (int i = 0; i < m; i++) {
        int rowsum = 0;
        for (int j = 0; j < n; j++) {
            rowsum += a[i][j];
        }
        cout << "Row " << i << "= " << rowsum << endl;
    }
}

void column_sum(int a[Size][Size], int m, int n) {
    cout << "column sum:"<<endl;
    for (int j = 0; j < n; j++) {
        int colsum = 0;
        for (int i = 0; i < m; i++) {
            colsum += a[i][j];
        }
        cout << "Column " << j << "= " << colsum << endl;
    }
}

void transpose(int a[Size][Size], int m, int n) {
    int transpose[Size][Size];

    cout << "Transpose of the matrix"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[i][j] = a[j][i];
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int matrix[Size][Size];

    cout << "Enter the number of rows (m) "<<endl;
    cin >> m;
    cout << "Enter the number of columns (n) "<<endl;
    cin >> n;

    int choice;
    do {
        cout << "Menu:"<<endl;
        cout << "1. Input elements into matrix"<<endl;
        cout << "2. Display elements of matrix"<<endl;
        cout << "3. Sum of all elements of matrix"<<endl;
        cout << "4. Display row-wise sum of matrix" << endl;
        cout << "5. Display column-wise sum of matrix"<<endl;
        cout << "6. Create transpose of matrix"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch (choice) {
        case 1:
            input(matrix, m, n);
            break;
        case 2:
            display(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sum(matrix, m, n) << endl;
            break;
        case 4:
            row_sum(matrix, m, n);
            break;
        case 5:
            column_sum(matrix, m, n);
            break;
        case 6:
            transpose(matrix, m, n);
            break;
        case 7:
            cout << "Exiting program."<<endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option."<<endl;
        }
    } while (choice != 7);

    return 0;
}
