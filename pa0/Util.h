#include<cmath>
#include<Eigen/Eigen>
//#include<Eigen/Core>
//#include<Eigen/Dense>
#include<iostream>

float VecDot(Eigen::Vector3f pre, Eigen::Vector3f post)
{
    float out = pre[0] * post[0] + pre[1] * post[1] + pre[2] * post[2];
    return out;
}

Eigen::Vector3f VectorMulMatrix(Eigen::Vector3f vec, Eigen::Matrix3f matrix)
{
    Eigen::Vector3f m1(matrix(0), matrix(3), matrix(6));
	Eigen::Vector3f m2(matrix(1), matrix(4), matrix(7));
	Eigen::Vector3f m3(matrix(2), matrix(5), matrix(8));
    float x1 = VecDot(vec, m1);
    float x2 = VecDot(vec, m2);
    float x3 = VecDot(vec, m3);
    std::cout <<x1<<std::endl;
     
	Eigen::Vector3f out(x1, x2, x3);
	return out;
}




