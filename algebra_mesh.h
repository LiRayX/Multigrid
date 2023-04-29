/**
 * @file algebra_mesh.h
 * @author xz (liruixiang@zju.edu.cn)
 * @brief  aim to solve 2D Poisson equation with homogeneous Dirichlet condition
 * @version 0.1
 * @date 2023-04-29
 * 
 * 
 */
#ifndef _AMESH_
#define _AMESH_

#include <iostream>
#include <Eigen/Dense>
#include <Eigen/SparseCore>
//#include "function.h"

//#define TEMPLATE template <typename T>

typedef double real;

typedef Eigen::SparseMatrix<real> Matrix;
typedef Eigen::VectorXd Solution;
typedef Eigen::VectorXd RHS;
typedef Eigen::Matrix<real, Eigen::Dynamic, Eigen::Dynamic> func;
//TEMPLATE//
class AlgebraMesh;

//TEMPLATE
class AlgebraMesh
{
public:
    AlgebraMesh(){};

    const int& get_index() const;
    const Matrix& get_Matrix() const;
    const Solution& get_Solution() const;
    const RHS& get_RHS() const;

    void set_index();//设置网格层数
    void assemble_matrix(const int &index); //组装刚度矩阵
    void set_RHS(const int &index, const func &func); //设置右端项,给定规模和方程的右端的2Dfunction()
    void solve_solution();//暂且使用V-cycle来求解

private:
    int index; //网格层数标识
    Matrix Stiffness;//刚度矩阵
    Solution u;//解
    RHS b;    //右端项




};










#else
#endif