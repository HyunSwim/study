/*******************************************************************************
**                                                                            **
**  (C) 2013 HYUNDAI AUTRON Co., Ltd.                                         **
**  Confidential Proprietary Information. Distribution Limited.               **
**  Do Not Copy Without Prior Permission                                      **
**                                                                            **
**  FILE-NAME : EcuM_PBcfg.c                                                  **
**                                                                            **
**  PRODUCT   : AUTOSAR EcuM Module                                           **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 2.8.1                                                       **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/

/*
 * INPUT FILE:    Configuration\ECU\Mcal\Ecud_Spi.arxml
 *                Configuration\ECU\Mcal\Ecud_Wdg.arxml
 *                Configuration\ECU\Ecud_PduR.arxml
 *                Configuration\ECU\Ecud_CanSM.arxml
 *                Configuration\ECU\Ecud_CanTp.arxml
 *                Configuration\ECU\Ecud_Dcm.arxml
 *                Configuration\ECU\Mcal\Ecud_Icu.arxml
 *                Configuration\ECU\Ecud_WdgM.arxml
 *                Configuration\ECU\Mcal\Ecud_Mcu.arxml
 *                Configuration\ECU\Ecud_IoHwAb.arxml
 *                Configuration\ECU\Mcal\Ecud_Port.arxml
 *                Configuration\ECU\Mcal\Ecud_Can.arxml
 *                Configuration\ECU\Ecud_ComM.arxml
 *                Configuration\ECU\Ecud_Os.arxml
 *                Configuration\ECU\Ecud_FiM.arxml
 *                Configuration\ECU\Mcal\Ecud_Pwm.arxml
 *                Configuration\ECU\Ecud_EcuM.arxml
 *                Configuration\ECU\Ecud_CanIf.arxml
 *                Configuration\ECU\Ecud_Com.arxml
 *                Configuration\ECU\Ecud_Dem.arxml
 *                Configuration\ECU\Mcal\Ecud_Adc.arxml
 *                Configuration\ECU\Ecud_Det.arxml
 *                Configuration\ECU\Mcal\Ecud_Dio.arxml
 *                Configuration\ECU\Mcal\Ecud_Gpt.arxml
 * GENERATED ON:  This timestamp is removed.
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "EcuM.h"
#include "EcuM_Ram.h"
#include "EcuM_Generated_Types.h"
#include "Rte_Main.h"
#include "BswM.h"


/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define ECUM_START_SEC_CONST_32
#include "MemMap.h"
/* Global array for Hash Value configured in the consistency hash parameter */
CONST(uint32, ECUM_CONST) EcuM_GaaPBcfgHashValue[ECUM_NO_OF_HASH_SEGMENTS] = {
  0x00000001, 0x23456789
};
#define ECUM_STOP_SEC_CONST_32
#include "MemMap.h"


#define ECUM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
/* Config structure */
CONST(EcuM_ConfigType, ECUM_CONST) EcuM_GaaConfig[ECUM_NO_OF_PB_CONFIG_SET] =
{
  /* Config 0 - 1 */
  {
    /* *pEcuMConfigConsistencyHash */
    &EcuM_GaaPBcfgHashValue[0],

    /* ddEcuMDefaultState */
    ECUM_STATE_SLEEP,

    /* ucEcuMDefaultResetMode */
    0,

    /* ucEcuMDefaultSleepMode */
    0,

    /* ucLcfgHashArrayIndex */
    0,

    /* *pConfigSet */
    /* Configuration set for BswM */
    (P2CONST (void, AUTOMATIC, ECUM_CONST)) NULL_PTR
  }
};

#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"


/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/