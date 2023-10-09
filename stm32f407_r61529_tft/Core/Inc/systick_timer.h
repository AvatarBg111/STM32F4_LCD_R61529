/*
 * systick.h
 *
 *  Created on: Oct 6, 2023
 *      Author: AvatarBg111
 */

#ifndef INC_SYSTICK_H_
#define INC_SYSTICK_H_

uint32_t GetSysTickTimer_ms(void);

void delay_us(unsigned int us);
void delay_ms(unsigned int ms);

void clear_wait_ms();
uint8_t wait_ms(uint32_t time);

void clear_wait_ms_ch(uint8_t channel);
void reset_wait_ms_ch(uint8_t channel);
uint8_t wait_ms_ch(uint8_t channel, uint32_t time);

#endif /* INC_SYSTICK_H_ */
