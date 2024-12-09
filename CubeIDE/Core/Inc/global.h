#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

extern int command_flag;
extern char command_data[];
extern uint8_t temp;

extern char buffer[];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

extern uint8_t read_adc_flag;
extern uint8_t ok_flag;

#endif /* INC_GLOBAL_H_ */
