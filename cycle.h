/**
 * @file cycle.h
 * @author xz (liruixiang@zju.edu.cn)
 * @brief v-cycle regualr mesh
 * @version 0.1
 * @date 2023-04-29
 * 
 * 
 */
#ifndef _CYCLE_
#define _CYCLE_

#include <iostream>
#include "algebra_mesh.h"

typedef Eigen::VectorXd Residual;

class cycle;


class cycle
{
public:
    cycle () {};
    ~cycle();

    void set_times(const int &k);
    void set_mu_1(const int &mu_1);
    void set_mu_2(const int &mu_2);

    
    Residual restriction(const int &index, Residual &res);//限制算子
    Solution prolongation(const int &index, Solution &u);//延拓算子

    Solution pre_smoothing();
    Solution post_smoothing();
    Solution solver();
 



private:
    AlgebraMesh Finemesh; //最细的网格,对于代数网格,我们只需要知道刚度矩阵和右端项即可.
    int times; //V-cycle的次数
    int mu_1;  //pre-smoothing
    int mu_2;  //post-smoothing
};

void cycle::set_times(const int &k)
{
    times = k;
};



#else
#endif