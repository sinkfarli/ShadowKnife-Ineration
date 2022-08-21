/**
 * @file pid.c
 * @author 影风远sinkfarli
 * @brief PID Control Algorithm，PID采样。
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "pid.h"


/**
 * @brief PID 相关变量
 */
typedef struct PID{
    float setinput;    //设置输入值
    float actualinput;  //实际输入值

    float error_prev;  //上一次误差值

    float P;    //比例
    float I;    //积分
    float D;    //微分
}PID;



/**
 * @brief 
 * 
 */
void PID_Init(PID* sptr)
{
    sptr->setinput = 0;
    sptr->actualinput = 0;
    sptr->error_prev = 0;

    sptr->P = 0.1;
    sptr->I = 0.01;
    sptr->D = 0.1;
}


/**
 * @brief PID位置算法
 * 
 * @param input 输入的值
 * @return float 
 */
float PID_Algorithm(PID* sptr,float error)
{
    float output;

    //u(p) = P * e(k)
    float proportional = sptr->P + error;
    //u(i) = I * [e(k) + e(k-1)]
    float integral = sptr->I * (error + sptr->error_prev);
    //u(d) = D * [e(k) - e(k-1)]
    float derivative = sptr->D * (error - sptr->error_prev);

    //u(k) = P * e(k) + I * [e(k) + e(k-1)] + D * [e(k) - e(k-1)]
    output = proportional + integral + derivative;
    return output;
}

