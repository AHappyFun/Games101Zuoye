#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

#define M_PI 3.1415926

using namespace std;

int main(){
    Eigen::Vector3d P(2.0f,1.0f,1.0f);   //3x1向量
    
    Eigen::Matrix3d rotate;
    Eigen::Matrix3d move;

    double theta = 45.0/180.0 * M_PI;

    rotate << cos(theta), -sin(theta), 0,
              sin(theta), cos(theta), 0, 
              0, 0, 1;

    move << 1, 0, 1, 
            0, 1, 2, 
            0, 0, 1;

    P = move * rotate * P;   //P先旋转、再移动

    cout << P << endl;

    return 0;
}