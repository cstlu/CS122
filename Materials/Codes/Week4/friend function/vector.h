#pragma once
class Matrix;
class Vector
{
private:
    double *coords;
    int n;
public:
 
    Vector();
    Vector(int N, double x); // tạo vector có N chiều, mỗi ô có giá trị x
    Vector(const Vector &a);
    ~Vector();
    void nhap();
    void xuat();
    int Cong(const Vector &a); // return 1 nếu cộng đc
    void NhanK(const double &k);
    int Tru(Vector a); // return 1 nếu trừ đc
    double TichVoHuong(const Vector &a);
 
    friend Vector multiply(const Matrix &a, const Vector &b);
};
