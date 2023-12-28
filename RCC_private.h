/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 28 DES 2023             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F103xx             */
/**********************************************/

#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

/************************** Clock Types *****************************
*@ClockType_t enum
*
*/
enum
{
	HSI=0,
	HSE,
	PLL,
	LSI,
	LSE,
	RTC,
};

/***************** PLL Clock Input *********************
*@PLLSRC_t enum
*/
enum
{
	HSI_CLK_DIV_2=0,
	HSE_CLK,
	HSE_CLK_DIV_2,
};

/***************** PLL multiplication factor *************
* @PLLMUL_t
*
*/
enum
{
	 PLL_input_clock_2,
	 PLL_input_clock_3,
	 PLL_input_clock_4,
	 PLL_input_clock_5,
	 PLL_input_clock_6,
	 PLL_input_clock_7,
	 PLL_input_clock_8,
	 PLL_input_clock_9,
	 PLL_input_clock_10,
	 PLL_input_clock_11,
	 PLL_input_clock_12,
	 PLL_input_clock_13,
	 PLL_input_clock_14,
	 PLL_input_clock_15,
	 PLL_input_clock_16,
};

/***************   AHB Prescaler  *******************
* @AHB_Prescaler_t
*
*/
enum
{
	SYSCLK_divided_1=0,
	SYSCLK_divided_2=8,
	SYSCLK_divided_4=9,
	SYSCLK_divided_8=10,
	SYSCLK_divided_16=11,
	SYSCLK_divided_64=12,
	SYSCLK_divided_128=13,
	SYSCLK_divided_256=14,
	SYSCLK_divided_512=15,
};

/***************   APB Prescaler  *******************
* @APB_Prescaler_t
*
*/
enum
{
	 HCLK_divided_1=0,
	 HCLK_divided_2=4,
	 HCLK_divided_4=5,
	 HCLK_divided_8=6,
	 HCLK_divided_16=7,
};

/***************   PCLK Prescaler  *******************
* @PCLK_Prescaler_t
*
*/
enum
{
	 PCLK2_divided_2=0,
	 PCLK2_divided_4=1,
	 PCLK2_divided_6=2,
	 PCLK2_divided_8=3,
};
enum

/***************   USP Prescaler  *******************
* @USP_Prescaler_t
*
*/
{
	 PLL_divided_1_p_5=0,
	 PLL_divided_1=1,
};

/***************   MCO source MUX  *******************
* @MCO source MUX
*
*/
enum
{
	 No_clock=0,
	 SYSCLK_selected=4,
	 HSI_clock_selected=5,
	 HSE_clock_selected=6,
	 PLL_clock_selected=7,
};

/***************   AHB Peripherals    ******************
* @AHB_Peripherals_t
*
*/
enum
{
	DMA1EN=0,
	DMA2EN=1,
	SRAMEN=2,
	FLITFEN=4,
	CRCEN=6,
	FSMCEN=8,
	SDIOEN=10,
};

/***************   APB2 Peripherals    ******************
* @APB2_Peripherals_t
*
*/
enum
{
		AFIOEN  =0,
		GPIOAEN =2,
		GPIOBEN =3,
		GPIOCEN =4,
		ADC1EN=9,
		ADC2EN=10,
		TIM1EN=11,
		SPI1EN=12,
		TIM8EN=13,
		USART1EN=14,
		ADC3EN=15,
		TIM9EN=19,
		TIM10EN =20,
		TIM11EN=21,

};

/***************   APB1 Peripherals   *******************
* @APB1_Peripherals_t
*
*/
enum
{
		TIM2EN=0,
		TIM3EN=1,
		TIM4EN=2,
		TIM5EN=3,
		TIM6EN=4,
		TIM7EN=5,
		TIM12EN=6,
		TIM13EN=7,
		TIM14EN=8,
		WWDGEN=11,
		SPI2EN=14,
		SPI3EN=15,
		USART2EN=17,
		USART3EN=18,
		USART4EN=19,
		USART5EN=20,
		I2C1EN=21,
		I2C2EN=22,
		USBEN=23,
		CANEN	=25,
		BKPEN	=27,
		PWREN	=28,
		DACEN	=29,
};

/***************   RCC_BDCR  register   *******************
* RCC_BDCR  register
*
*/
enum
{
	LSEON=0,
	LSEBYP=2,
	RTCSEL0=8,
	RTCSEL1=9,
	RTCEN=15,
	BDRST=16,
};

/***************   RCC_CSR  register   *******************
* RCC_CSR  register
*
*/
enum
{
	LSION=0,
	RMVF=24,
	PINRSTF=26,
	PORRSTF=27,
	SFTRSTF=28,
	IWDGRSTF=29,
	WWDGRSTF=30,
	LPWRRSTF=31,
};

#endif /* RCC_PRIVATE_H_ */

