#include<cmath>
#include<eigen3/Eigen/Eigen>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

float VecDot(Eigen::Vector3d pre, Eigen::Vector3d post)
{
    float out = pre[0] * post[0] + pre[1] * post[1] + pre[2] * post[2];
    return out;
}

Eigen::Vector3d VectorMulMatrix(Eigen::Vector3d vec, Eigen::Matrix3d matrix)
{
    Eigen::Vector3d m1(matrix(0), matrix(3), matrix(6));
	Eigen::Vector3d m2(matrix(1), matrix(4), matrix(7));
	Eigen::Vector3d m3(matrix(2), matrix(5), matrix(8));
    float x1 = VecDot(vec, m1);
    float x2 = VecDot(vec, m2);
    float x3 = VecDot(vec, m3);
    std::cout <<x1<<std::endl;
     
	Eigen::Vector3d out(x1, x2, x3);
	return out;
}




