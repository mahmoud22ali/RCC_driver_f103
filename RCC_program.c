/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 28 DES 2023             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F103xx             */
/**********************************************/

#include"RCC_interfaces.h"
#include"RCC_registers.h"
#include"RCC_private.h"

void RCC_Enable(char copy_sysclock)
{
	switch(copy_sysclock)
	{
		case HSI:
			SET_BIT(RCC_PTR->RCC_CR,HSION);
			while(GET_BIT(RCC_PTR->RCC_CR,HSIRDY)==0);
			CLR_BIT(RCC_PTR->RCC_CFGR,SW0);
			CLR_BIT(RCC_PTR->RCC_CFGR,SW1);
			break;
		case HSE:
			SET_BIT(RCC_PTR->RCC_CR,HSEON);
			while(GET_BIT(RCC_PTR->RCC_CR,HSERDY)==0);
			SET_BIT(RCC_PTR->RCC_CFGR,SW0);
			CLR_BIT(RCC_PTR->RCC_CFGR,SW1);
			break;
		case PLL:
			SET_BIT(RCC_PTR->RCC_CR,PLLON);
			while(GET_BIT(RCC_PTR->RCC_CR,PLLRDY)==0);
			CLR_BIT(RCC_PTR->RCC_CFGR,SW0);
			SET_BIT(RCC_PTR->RCC_CFGR,SW1);
			break;
	}
}
void RCC_Disable(char copy_sysclock)
{
	switch(copy_sysclock)
		{
			case HSI:
				CLR_BIT(RCC_PTR->RCC_CR,HSION);
				break;
			case HSE:
				CLR_BIT(RCC_PTR->RCC_CR,HSEON);
				break;
			case PLL:
				CLR_BIT(RCC_PTR->RCC_CR,PLLON);
				break;
		}
}
void RCC_PLL_MUX(char copy_sysclock , char copy_mul)
{
	switch(copy_sysclock)
			{
				case HSI_CLK_DIV_2:
					CLR_BIT(RCC_PTR->RCC_CFGR,PLLSRC);
					break;
				case HSE_CLK:
					SET_BIT(RCC_PTR->RCC_CFGR,PLLSRC);
					CLR_BIT(RCC_PTR->RCC_CFGR,PLLXTPRE);
					break;
				case HSE_CLK_DIV_2:
					SET_BIT(RCC_PTR->RCC_CFGR,PLLSRC);
					SET_BIT(RCC_PTR->RCC_CFGR,PLLXTPRE);
					break;
			}
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xFFC3FFFF)|(copy_mul<<PLLMUL0);
}
void RCC_AHB_Prescaler(char Prescaler)
{
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xFFFFFF0F)|(Prescaler<<HPRE0);
}
void RCC_APB1_Prescaler(char Prescaler)
{
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xFFFFF8FF)|(Prescaler<<PPRE10);
}
void RCC_APB2_Prescaler(char Prescaler)
{
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xFFFFC7FF)|(Prescaler<<PPRE20);
}
void RCC_ADC_Prescaler(char Prescaler)
{
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xFFFF3FFF)|(Prescaler<<ADCPRE0);
}
void RCC_USB_Prescaler(char Prescaler)
{
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xFFBFFFFF)|(Prescaler<<USBPRE);
}
void  Microcontroller_clock_output(char src_output)
{
	RCC_PTR->RCC_CFGR=(RCC_PTR->RCC_CFGR&0xF8FFFFFF)|(src_output<<MCO0);
}
void RCC_AHB_peripheral_enable(char peripheral)
{
	SET_BIT(RCC_PTR->RCC_AHBENR,peripheral);
}
void RCC_AHB_peripheral_Disable(char peripheral)
{
	CLR_BIT(RCC_PTR->RCC_AHBENR,peripheral);
}
void RCC_APB2_peripheral_enable(char peripheral)
{
	SET_BIT(RCC_PTR->RCC_APB2ENR,peripheral);
}
void RCC_APB2_peripheral_Disable(char peripheral)
{
	CLR_BIT(RCC_PTR->RCC_APB2ENR,peripheral);
}
void RCC_APB1_peripheral_enable(char peripheral)
{
	SET_BIT(RCC_PTR->RCC_APB1ENR,peripheral);
}
void RCC_APB1_peripheral_Disable(char peripheral)
{
	CLR_BIT(RCC_PTR->RCC_APB1ENR,peripheral);
}
void RCC_Backup_domain_enable(char peripheral)
{
	SET_BIT(RCC_PTR->RCC_BDCR,peripheral);
}
void RCC_Backup_domain_Disable(char peripheral)
{
	CLR_BIT(RCC_PTR->RCC_BDCR,peripheral);
}
void RCC_Control_status_enable(char peripheral)
{
	SET_BIT(RCC_PTR->RCC_CSR,peripheral);
}
void RCC_Control_status_Disable(char peripheral)
{
	CLR_BIT(RCC_PTR->RCC_CSR,peripheral);
}
