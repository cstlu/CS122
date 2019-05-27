#pragma once
class Vector;
class Matrix
{
private:
    int m; // dòng
    int n; // cột
    double **elements; 
public:
    Matrix();
    ~Matrix();
    Matrix(const Matrix & a);
    void nhap();
    void xuat();
    int Cong(const Matrix & a); // return 1 nếu cộng dc
    void Nhan(const double & k);// Nhân với 1 số K
    int Nhan(const Matrix & a);// NHân với 1 CMatrix, return 1 nếu nhân đc
 
    friend Vector multiply(const Matrix &a, const Vector &b);
};