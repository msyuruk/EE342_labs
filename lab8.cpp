#include <iostream>
template <typename T>

class Vector3D {
    public:
    T x, y, z;
    Vector3D(){
    }
    Vector3D(T x, T y, T z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector3D operator+(const Vector3D& v){
        Vector3D sum;
        sum.x = x + v.x;
        sum.y = y + v.y;
        sum.z = z + v.z;
        return sum;
    }
    void print(){
        std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
    }
};

int main (){
    Vector3D<double> v1(1.1, 2.2, 3.3);
    Vector3D<double> v2(1.1, 2.2, 3.3);
    Vector3D<double> result;
    result = v1 + v2;
    v1.print();
    v2.print();
    result.print();
    return 0;
}