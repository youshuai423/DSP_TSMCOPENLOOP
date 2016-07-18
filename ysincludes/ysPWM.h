/******************************************************************************
| includes
|--------------------------------------------------------------------------------------------*/
#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

/******************************************************************************
| defines
|--------------------------------------------------------------------------------------------*/
//#define period				7500  // 10KHz��Ӧʱ������TBCLK = SYSCLKOUT
#define period				15000  // 10KHz��Ӧʱ������TBCLK = SYSCLKOUT(for test)
#define prediv				0  // Ԥ��Ƶ
//#define limitclk				150  // Ԥ��Ƶ���Ӧ��1usʱ����
#define limitclk				750  // Ԥ��Ƶ���Ӧ��1usʱ����
#define zerolimit				300
#define DT				150   // ����

/******************************************************************************
| variables
|--------------------------------------------------------------------------------------------*/

/******************************************************************************
| local functions prototypes
|--------------------------------------------------------------------------------------------*/
void InitPWM(void);