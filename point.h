#ifndef _POINT_
#define _POINT_

#include <iostream>
#include <Eigen/Dense>
#include <Eigen/SparseCore>

#define TEMPLATE template <int DIM, typename T>

TEMPLATE class Point;

TEMPLATE
class Point
{
public:
    

private:
    Eigen::Matrix<T,DIM,1> coords;

};










#else
#endif