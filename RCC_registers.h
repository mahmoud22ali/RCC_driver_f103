/*
 * RCC_registers.h
 *
 *  Created on: Dec 25, 2023
 *      Author: Windows 7
 */

#ifndef RCC_REGISTAR_H_
#define RCC_REGISTAR_H_

#include <stdint.h>

//RCC  registers
typedef struct
{
	uint32_t RCC_CR;
	uint32_t RCC_CFGR;
	uint32_t RCC_CIR;
	uint32_t RCC_APB2RSTR;
	uint32_t RCC_APB1RSTR;
	uint32_t RCC_AHBENR;
	uint32_t RCC_APB2ENR;
	uint32_t RCC_APB1ENR;
	uint32_t RCC_BDCR;
	uint32_t RCC_CSR;
}rcc_reg;
#define RCC_PTR ((rcc_reg *)0x40021000)
//rcc_reg *RCC_PTR =((rcc_reg *)0x40021000);

//register (RCC_CR)
enum
{
	HSION,
	HSIRDY,
	HSITRIM0=3,
	HSITRIM1,
	HSITRIM2,
	HSITRIM3,
	HSITRIM4,
	HSICAL0,
	HSICAL1,
	HSICAL2,
	HSICAL3,
	HSICAL4,
	HSICAL5,
	HSICAL6,
	HSICAL7,
	HSEON,
	HSERDY,
	HSEBYP,
	CSSON,
	PLLON=24,
	PLLRDY
};

//register (RCC_CFGR)
enum
{
	SW0=0,
	SW1,
	SWS0,
	SWS1,
	HPRE0,
	HPRE1,
	HPRE2,
	HPRE3,
	PPRE10,
	PPRE11,
	PPRE12,
	PPRE20,
	PPRE21,
	PPRE22,
	ADCPRE0,
	ADCPRE1,
	PLLSRC,
	PLLXTPRE,
	PLLMUL0,
	PLLMUL1,
	PLLMUL2,
	PLLMUL3,
	USBPRE,
	MCO0,
	MCO1,
	MCO2,
};


#endif /* RCC_REGISTAR_H_ */
