/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 28 DES 2023             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F103xx             */
/**********************************************/

#ifndef RCC_INTERFACING_H_
#define RCC_INTERFACING_H_

#define SET_BIT(REG, BIT_POSN)     (REG |= (1 << BIT_POSN))
#define CLR_BIT(REG, BIT_POSN)   (REG &= ~(1 << BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)  (REG ^= (1 << BIT_POSN))
#define GET_BIT(REG, BIT_POSN)    ((REG >> BIT_POSN) & 1)

void RCC_Enable(char copy_sysclock);
void RCC_Disable(char copy_sysclock);
void RCC_PLL_MUX(char copy_sysclock , char copy_mul);
void RCC_AHB_Prescaler(char Prescaler);
void RCC_APB1_Prescaler(char Prescaler);
void RCC_APB2_Prescaler(char Prescaler);
void RCC_ADC_Prescaler(char Prescaler);
void RCC_USB_Prescaler(char Prescaler);
void RCC_Microcontroller_clock_output(char src_output);
void RCC_AHB_peripheral_enable(char peripheral);
void RCC_AHB_peripheral_Disable(char peripheral);
void RCC_APB2_peripheral_enable(char peripheral);
void RCC_APB2_peripheral_Disable(char peripheral);
void RCC_APB1_peripheral_enable(char peripheral);
void RCC_APB1_peripheral_Disable(char peripheral);
void RCC_Backup_domain_enable(char peripheral);
void RCC_Backup_domain_Disable(char peripheral);
void RCC_Control_status_enable(char peripheral);
void RCC_Control_status_Disable(char peripheral);

#endif /* RCC_INTERFACING_H_ */
