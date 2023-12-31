#ifndef _CONTROL_H
#define _CONTROL_H

#include <imu.h>
#include <motor.h>
#include <stdint.h>

//flight status
#define FLIGHT_LOCKED		0
#define FLIGHT_UNLOCKED		1
#define FLIGHT_ACCELERATE	2
#define FLIGHT_TAKING_OFF	3
#define FLIGHT_FLYING		4
#define FLIGHT_LANDING		5


//有限时间状态观测器定义
struct FTO_2_TYPE
{	
	double b0;//飞机重量
	//观测值，依次为位置、速度、扰动
	double x1;
	double x2;
	double x3;
	//观测增益
	double bate1;
	double bate2;
	double bate3;
	//有限时间观测器参数
	double m1;
	double m2;
	double m3;
	double m4;
	double l;
};
extern struct FTO_2_TYPE X_FTO; 
extern struct FTO_2_TYPE Y_FTO; 

 

struct pid_param_ty
{
	float kp;
	float ki;
	float kd;
};

struct angle_ctrl_ty
{
	struct pid_param_ty pid_param[3];
	struct vector_f_3 expect_angle;
	struct vector_f_3 angle_err;
	struct vector_f_3 old_angle_err;
	struct vector_f_3 angle_err_d;
	struct vector_f_3 angle_err_i;
	struct vector_f_3 out_angle_speed;
};

struct angle_speed_ctrl_ty
{
	struct pid_param_ty pid_param[3];
	struct vector_f_3 expect_angle_speed;
	struct vector_f_3 angle_speed_err;
	struct vector_f_3 old_angle_speed_err;
	struct vector_f_3 angle_speed_err_d;
	struct vector_f_3 angle_speed_err_i;
	struct vector_f_3 out_motor_speed;
};

struct height_ctrl_ty
{
	struct pid_param_ty pid_param;
	double expect_height;
	double height_err;
	double old_height_err;
	double height_err_d;
	double height_err_i;
	double out_height_speed;
};

struct height_speed_ctrl_ty
{
	struct pid_param_ty pid_param;
	double expect_height_speed;
	double height_speed_err;
	double old_height_speed_err;
	double height_speed_err_d;
	double height_speed_err_i;
	float  out_throttle;
};

struct x_speed_ctrl_ty
{
	struct pid_param_ty pid_param;
	double expect_x_speed;
	double x_speed_err;
	double old_x_speed_err;
	double x_speed_err_d;
	double x_speed_err_i;
	double out_pitch;
};

struct y_speed_ctrl_ty
{
	struct pid_param_ty pid_param;
	double expect_y_speed;
	double y_speed_err;
	double old_y_speed_err;
	double y_speed_err_d;
	double y_speed_err_i;
	double out_roll;
};

struct x_posi_ctrl_ty
{
	struct pid_param_ty pid_param;
	double expect_x_posi;
	double old_expect_x_posi;
	double expect_x_posi_d;
	double old_expect_x_posi_d;
	double expect_x_posi_dd;
	double x_posi_err;
	double old_x_posi_err;
	double x_posi_err_d;
	double x_posi_err_i;
	double out_x_sp;
	double s_x;
	double s_x_d;
	double s_x_i;
	double s_x_I;
};

struct y_posi_ctrl_ty
{
	struct pid_param_ty pid_param;
	double expect_y_posi;
	double old_expect_y_posi;
	double expect_y_posi_d;
	double old_expect_y_posi_d;
	double expect_y_posi_dd;
	double y_posi_err;
	double old_y_posi_err;
	double y_posi_err_d;
	double y_posi_err_i;
	double out_y_sp;
	double s_y;
	double s_y_d;
	double s_y_i;
	double s_y_I;
};

struct pid_data_ty
{
    struct pid_param_ty angle_speed_pid_param[3];
    struct pid_param_ty angle_pid_param[3];
    struct pid_param_ty height_speed_pid_param;
    struct pid_param_ty height_pid_param;
	struct pid_param_ty x_speed_pid_param;
	struct pid_param_ty y_speed_pid_param;
	struct pid_param_ty x_posi_pid_param;
	struct pid_param_ty y_posi_pid_param;
	float thr_hover;
};

struct ctrl_data_ty
{
	struct angle_ctrl_ty angle_ctrl;
	struct angle_speed_ctrl_ty angle_speed_ctrl;
	struct height_ctrl_ty height_ctrl;
	struct height_speed_ctrl_ty height_speed_ctrl;
	struct x_speed_ctrl_ty x_speed_ctrl;
	struct y_speed_ctrl_ty y_speed_ctrl;
	struct x_posi_ctrl_ty x_posi_ctrl;
	struct y_posi_ctrl_ty y_posi_ctrl;
	float thr;
	float thr_weight;
	float thr_hover;
	float out_roll;
	float out_pitch;
	float out_yaw;
	uint8_t flight_status;
};

struct remote_ctrl_ty 
{
	float yaw;
	float throttle;
	float roll;
	float pitch;
	uint8_t lock_btn;
	uint8_t unlock_btn;
	uint8_t restart_btn;
	uint8_t takeoff_btn;
	uint8_t land_btn;
	uint8_t cali_btn;
};

extern struct pid_data_ty pid_data;

int ctrl_init(struct ctrl_data_ty * ctrl_data);
void ctrl_reset(struct ctrl_data_ty * ctrl_data);
void motor_throttle_ctrl(struct ctrl_data_ty * body_ctrl, struct Motors * motor, struct remote_ctrl_ty * remote_ctrl, float dt);
void angle_ctrl(struct ctrl_data_ty * body_ctrl,struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);
void angle_speed_ctrl(struct ctrl_data_ty * body_ctrl,struct data_fusion_ty * body_data , float dt);
void height_ctrl(struct ctrl_data_ty * body_ctrl,struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);
void height_speed_ctrl(struct ctrl_data_ty * body_ctrl, struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);
void xy_speed_ctrl(struct ctrl_data_ty * body_ctrl, struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);
void xy_position_ctrl(struct ctrl_data_ty * body_ctrl, struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);
void flight_status_control(struct ctrl_data_ty * body_ctrl, struct remote_ctrl_ty * remote_ctrl, float dt);
void test_control(float dt);

void SMC_xy_position_ctrl(struct ctrl_data_ty * body_ctrl, struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);
void STSMC_xy_position_ctrl(struct ctrl_data_ty * body_ctrl, struct data_fusion_ty * body_data, struct remote_ctrl_ty * remote_ctrl, float dt);

void FTO_init();
void FTO_update(float dt, float u, float fb, struct FTO_2_TYPE * fto);
void ESO_update(float dt, float u, float fb, struct FTO_2_TYPE * eso);

#endif