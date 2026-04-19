#include <iostream>
using namespace std;

class Matrix{
    int **p;
    int d1;
    int d2;

public :
    Matrix(int x, int y);
    void getElement(int i , int j, int value){p[i][j] = value;};
    int & putElement(int i , int j){ return p[i][j] ;};
};

Matrix::Matrix(int x, int y){
    d1 = x;
    d2 = y;

    p = new int *[d1];

    for(int i = 0; i < d1; i++){
        p[i] = new int[d2];
    }
}

int main(){

    int m,n;
    cout << "Ente the size of the matrix : ";
    cin >> m >> n;
    Matrix A(m,n);

    cout << "Enter Matrix elements row by row : \n";

    int value;

    for (int i  = 0; i < m ; i++){

            for(int j = 0; j < n ; j++){
            cin >> value;
            A.getElement(i,j,value);
        }
    }
    cout << "\n";
    cout << A.putElement(1,2);

    return 0;
}
