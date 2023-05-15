#include <iostream>
#include <string>
#include <stdexcept> // std::out_of_range()
#include <iomanip>   // std::setw()

using namespace std;

#include "matrix.h"

#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
    #warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
    #pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif

ostream& operator<<(ostream& os,const TwoDimensionMatrix& matrix){
    for(size_t i=0; i<matrix.size_; i++){
        for(size_t j=0; j<matrix.size_; j++){
            os<<matrix.matrix_[i][j];
            if(not(j+1<matrix.size_ and i+1<matrix.size_)){os<<" ";}
        }
    }
    return os;
}
istream& operator>>(istream& is,TwoDimensionMatrix& matrix){
    MatrixElement x;
    for(size_t i=0; i<matrix.size_; i++){
        for(size_t j=0; j<matrix.size_; j++){
            is>>x;
            matrix.matrix_[i][j]=x;
        }
    }
    return is;
}
TwoDimensionMatrix operator+(const TwoDimensionMatrix& matrix1, const TwoDimensionMatrix& matrix2){
    TwoDimensionMatrix matrixsum;
    for(size_t i=0; i<matrix1.size_; i++){
        for(size_t j=0; j<matrix1.size_; j++){
            matrixsum.matrix_[i][j]=matrix1.matrix_[i][j]+matrix2.matrix_[i][j];
        }
    }
    return matrixsum;
}