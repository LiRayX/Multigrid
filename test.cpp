/**
 * @file test.cpp
 * @author xz (liruixiang@zju.edu.cn)
 * @brief  a test program for eigen
 * @version 0.1
 * @date 2023-04-28
 * 
 * 
 */
#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXd;
 /**
  * @brief 
  * 
  * @return int 
  */
int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}