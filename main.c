/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for the Empty PSoC6 Application
*              for ModusToolbox.
*
* Related Document: See Readme.md
*
*
*******************************************************************************
* (c) 2019, Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* ("Software"), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries ("Cypress") and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software ("EULA").
*
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress's integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer of such
* system or application assumes all risk of such use and in doing so agrees to
* indemnify Cypress against all liability.
*******************************************************************************/

#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "GUI.h"
#include "stdbool.h"
#include "cycfg_capsense.h"
#include "cy_retarget_io.h"
#include "stdio.h"
#include "stdlib.h"
#include "82655.c"

const cy_stc_sysint_t cy_capsense_config = {
		.intrSrc = CYBSP_CSD_IRQ,
		.intrPriority = 7u
};

void CapSense_Handler()
{
	Cy_CapSense_InterruptHandler(CYBSP_CSD_HW, &cy_capsense_context);
}

void process_touch();

int main(void)
{
    cy_rslt_t result;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    __enable_irq();

    GUI_Init();
    /* CapSense example of emWin
     * 			START           */
//    Cy_CapSense_Init(&cy_capsense_context);
//    Cy_SysInt_Init(&cy_capsense_config, CapSense_Handler);
//    NVIC_ClearPendingIRQ(cy_capsense_config.intrSrc);
//    NVIC_EnableIRQ(cy_capsense_config.intrSrc);
//    Cy_CapSense_Enable(&cy_capsense_context);
//
//    Cy_CapSense_ScanAllWidgets(&cy_capsense_context);
//    GUI_Clear();
//    GUI_FillCircle(170, 110, 10);
    /*			END				*/

//    GUI_SetFont(&GUI_Font8x16);
//    GUI_SetBkColor(GUI_BLUE);
//    GUI_Clear();
//    GUI_SetPenSize(10);
//    GUI_SetColor(GUI_RED);
//    GUI_DrawLine(80, 10, 240, 90);
//    GUI_DrawLine(80, 90, 240, 10);
//    GUI_SetBkColor(GUI_BLACK);
//    GUI_SetColor(GUI_WHITE);
//    GUI_SetTextMode(GUI_TM_NORMAL);
//    GUI_DispStringHCenterAt("GUI_TM_NORMAL" , 160, 10);
//    GUI_SetTextMode(GUI_TM_REV);
//    GUI_DispStringHCenterAt("GUI_TM_REV" , 160, 26);
//    GUI_SetTextMode(GUI_TM_TRANS);
//    GUI_DispStringHCenterAt("GUI_TM_TRANS" , 160, 42);
//    GUI_SetTextMode(GUI_TM_XOR);
//    GUI_DispStringHCenterAt("GUI_TM_XOR" , 160, 58);
//    GUI_SetTextMode(GUI_TM_TRANS | GUI_TM_REV);
//    GUI_DispStringHCenterAt("GUI_TM_TRANS | GUI_TM_REV", 160, 74);

//    GUI_WRAPMODE aWm[] = { GUI_WRAPMODE_NONE, GUI_WRAPMODE_CHAR, GUI_WRAPMODE_WORD};
//    GUI_RECT Rect = {10, 10, 59, 59};
//    char acText[] = "This example demonstrates text wrapping";
//    int i;
//    GUI_SetTextMode(GUI_TM_TRANS);
//    for (i = 0; i < 3; i++) {
//     GUI_SetColor(GUI_BLUE);
//     GUI_FillRectEx(&Rect);
//     GUI_SetColor(GUI_WHITE);
//     GUI_DispStringInRectWrap(acText, &Rect, GUI_TA_LEFT, aWm[i]);
//     Rect.x0 += 60;
//     Rect.x1 += 60;
//    }


//    float f = 123.45678;
//    GUI_Clear();
//    GUI_SetFont(&GUI_Font8x8);
//    GUI_DispStringAt("GUI_DispFloat:\n", 0, 0);
//    GUI_DispFloat(f, 9);
//    GUI_GotoX(100);
//    GUI_DispFloat(-f, 9);
//    GUI_DispStringAt("GUI_DispFloatFix:\n", 0, 20);
//    GUI_DispFloatFix(f, 9, 2);
//    GUI_GotoX(100);
//    GUI_DispFloatFix(-f, 9, 2);
//    GUI_DispStringAt("GUI_DispSFloatFix:\n", 0, 40);
//    GUI_DispSFloatFix(f, 9, 2);
//    GUI_GotoX(100);
//    GUI_DispSFloatFix(-f, 9, 2);
//    GUI_DispStringAt("GUI_DispFloatMin:\n", 0, 60);
//    GUI_DispFloatMin(f, 3);
//    GUI_GotoX(100);
//    GUI_DispFloatMin(-f, 3);
//    GUI_DispStringAt("GUI_DispSFloatMin:\n", 0, 80);
//    GUI_DispSFloatMin(f, 3);
//    GUI_GotoX(100);
//    GUI_DispSFloatMin(-f, 3);


//    GUI_Clear();
//    GUI_SetDrawMode(GUI_DRAWMODE_NORMAL);
//    GUI_FillCircle(150, 100, 50);
//    GUI_SetDrawMode(GUI_DRAWMODE_XOR);
//    GUI_FillCircle(150, 150, 50);


//	GUI_ALPHA_STATE AlphaState;
//	GUI_EnableAlpha(1);
//	GUI_SetBkColor(GUI_WHITE);
//	GUI_Clear();
//	GUI_SetColor(GUI_BLACK);
//	GUI_DispStringHCenterAt("Alphablending", 45, 41);
//	GUI_SetUserAlpha(&AlphaState, 0xC0);
//	GUI_SetColor(GUI_RED);
//	GUI_FillRect(0, 0, 49, 49);
//	GUI_SetColor(GUI_GREEN);
//	GUI_FillRect(20, 20, 69, 69);
//	GUI_SetColor(GUI_BLUE);
//	GUI_FillRect(40, 40, 89, 89);
//	GUI_RestoreUserAlpha(&AlphaState);

    /* Many Triangles */
//    const GUI_POINT aPoints[] = {
//    { 0, 20},
//    { 40, 20},
//    { 20, 0}
//    };
//    GUI_POINT aMagnifiedPoints[GUI_COUNTOF(aPoints)];
//    int Mag, y = 0, Count = 4;
//    GUI_Clear();
//    GUI_SetColor(GUI_GREEN);
//    for (Mag = 1; Mag <= 4; Mag *= 2, Count /= 2) {
//		int i, x = 0;
//		GUI_MagnifyPolygon(aMagnifiedPoints, aPoints, GUI_COUNTOF(aPoints), Mag);
//		for (i = Count; i > 0; i--, x += 40 * Mag) {
//			GUI_FillPolygon(aMagnifiedPoints, GUI_COUNTOF(aPoints), x, y);
//		}
//    y += 20 * Mag;
//    }

    /* concentric circles */
//    for (int i = 10; i < 50; i += 3) {
//    	GUI_DrawCircle(120, 60, i);
//    }


    /* speedometer */
//    int x0 = 160;
//    int y0 = 180;
//    int i;
//    char ac[4];
//    GUI_SetBkColor(GUI_WHITE);
//    GUI_Clear();
//    GUI_SetPenSize( 5 );
//    GUI_SetTextMode(GUI_TM_TRANS);
//    GUI_SetFont(&GUI_FontComic18B_ASCII);
//    GUI_SetColor( GUI_BLACK );
//    GUI_DrawArc( x0,y0,150, 150,-30, 210 );
//    GUI_Delay(1000);
//    for (i=0; i<= 23; i++) {
//		float a = (-30+i*10)*3.1415926/180;
//		int x = -141*cos(a)+x0;
//		int y = -141*sin(a)+y0;
//		if (i%2 == 0)
//			GUI_SetPenSize( 5 );
//		else
//			GUI_SetPenSize( 4 );
//		GUI_DrawPoint(x,y);
//		if (i%2 == 0) {
//			x = -123*cos(a)+x0;
//			y = -130*sin(a)+y0;
//			sprintf(ac, "%d", 10*i);
//			GUI_SetTextAlign(GUI_TA_VCENTER);
//			GUI_DispStringHCenterAt(ac,x,y);
//		}
//    }

    /* QR code */
//    GUI_SetBkColor(GUI_WHITE);
//    GUI_Clear();
//    GUI_SetBkColor(GUI_WHITE);
//    GUI_QR_Draw(GUI_QR_Create("https://www.linkedin.com/in/oleh-novosad-506985146/", 7, GUI_QR_ECLEVEL_L, 0), 0, 0);


//    GUI_JPEG_Draw(&ac82655, sizeof(ac82655), 0, 0);

    for(;;)
    {
//    	if(CY_CAPSENSE_NOT_BUSY == Cy_CapSense_IsBusy(&cy_capsense_context))
//    	{
//    		Cy_CapSense_ProcessAllWidgets(&cy_capsense_context);
//    		process_touch();
//    		Cy_CapSense_ScanAllWidgets(&cy_capsense_context);
//    	}
    }
}

void process_touch()
{
	uint32_t button0_status;
	uint32_t button1_status;
	cy_stc_capsense_touch_t* slider_touch_info;
	uint16_t slider_pos;
	uint8_t slider_touch_status;
	static bool trigger = true;

	static uint16_t vertical = 110;
	static uint16_t horizontal = 170;

	static uint32_t button0_status_prev;
	static uint32_t button1_status_prev;

    button0_status = Cy_CapSense_IsSensorActive(CY_CAPSENSE_BUTTON0_WDGT_ID,
    													CY_CAPSENSE_BUTTON0_SNS0_ID,
														&cy_capsense_context);

    button1_status = Cy_CapSense_IsSensorActive(CY_CAPSENSE_BUTTON1_WDGT_ID,
    													CY_CAPSENSE_BUTTON0_SNS0_ID,
														&cy_capsense_context);

    slider_touch_info = Cy_CapSense_GetTouchInfo(
    									CY_CAPSENSE_LINEARSLIDER0_WDGT_ID,
    									&cy_capsense_context);
	slider_touch_status = slider_touch_info->numPosition;
	slider_pos = slider_touch_info->ptrPosition->x;

    if((0u != button0_status) && (button0_status_prev != button0_status) && (trigger == false))
    {
    	trigger = true;
    }

    else if((0u != button1_status) && (button1_status_prev != button1_status) && (trigger == true))
	{
    	trigger = false;
	}


    if(trigger == true)
    {
    	horizontal = slider_pos;
    	GUI_Clear();
		GUI_FillCircle(horizontal, vertical, 10);
    }
    else {
		vertical = slider_pos;
		GUI_Clear();
		GUI_FillCircle(horizontal, vertical, 10);
	}


    button0_status_prev = button0_status;
    button1_status_prev = button1_status;
}

/* [] END OF FILE */
