#include <iostream>
#include <cmath>

using namespace std;

class Coordinate{
    public:
    float x,y,z;
    float calculate_length(){
        return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    };
};

class Vec3d {
    public:
    Coordinate point;
    Vec3d(){
        point.x = 0;
        point.y = 0;
        point.z = 0;
    };
    Vec3d(float x, float y, float z){
        point.x = x;
        point.y = y;
        point.z = z;
    };
    void set_values(float x, float y, float z)
    {
        point.x = x;
        point.y = y;
        point.z = z;
    
    };
    void unit_vec(){
        float length = sqrt(pow(point.x,2)+pow(point.y,2)+pow(point.z,2));
        point.x = point.x/length;
        point.y = point.y/length;
        point.z = point.z/length;
    };
};

int main(){

    Vec3d v1(4,8,8);
    v1.unit_vec();
    cout << v1.point.x << " " << v1.point.y << " " << v1.point.z << endl;

    Vec3d v2;
    v2.set_values(4,8,8);
    v2.unit_vec();
    cout << v2.point.x << " " << v2.point.y << " " << v2.point.z << endl;

    return 0;
}