/*
 * SoftwareTimer.h
 *
 *  Created on: Aug 30, 2025
 *      Author: nguye
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#define NUM_TASKS 2
extern int timer_flag[NUM_TASKS];

void setTimer();
void timerRun();
int isTimerExpired(int index);
#endif /* INC_SOFTWARETIMER_H_ */
