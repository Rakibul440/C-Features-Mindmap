#include <iostream>
using namespace std;

const int dim = 3;

class Matrix{

    int m[dim][dim];
public :
    void read(void);
    void display(void);
    friend Matrix transpos(Matrix);  // return a Matrix
};

void Matrix::read(void){

    cout << "Enter all the elements to the 3X3 matrix : \n";
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim ; j++){
            cout << "m[" << i << "][" << j << "] = " ;
            cin >> m[i][j];
        }
    }
    cout << "\n";
}

void Matrix::display(void){
    for(int i = 0; i < dim; i++){
        for(int j  = 0; j < dim ; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
}

Matrix transpos(Matrix M1){

    Matrix M2;

    for(int i = 0; i < dim ; i++){
        for(int j =0; j<dim; j++){
            M2.m[i][j] = M1.m[j][i];
        }
    }


    return M2;
}


int main(){

    Matrix Mat1,mat_trans;
    Mat1.read();
    cout << "You've entered following Matrix: \n";
    Mat1.display();

    mat_trans = transpos(Mat1);
    cout << "\nTransposed matrix : \n";
    mat_trans.display();

    return 0;
}
