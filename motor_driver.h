#ifndef __motor_driver_H //check if this file has been run before, unique identifier before and after
#define __motor_driver_H

#include "stdint.h" //include standard int library
#include "stm32f4xx_hal.h" //include to access timer handles

typedef struct motor_driver {
	//have a max count for motor
	TIM_HandleTypeDef* htim;//timer handle
	uint32_t           chan1;//timer channel a
	uint32_t           chan2;//timer chanel b
} motor_driver_t;

//function prototypes:

void drive(motor_driver_t*, int32_t);

//drive

void enable(motor_driver_t*); //enable pins

//enable

void disable(motor_driver_t*);
//brake
#endif /*__motor_driver_H*/
