
/*******************************************************************************
**  FILE-NAME: Rte_IoHwAb.h                                                     **
**                                                                            **
**  MODULE-NAME: AUTOSAR RTE GENERATION TOOL                                  **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 4.4.2                                                   **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/
/*
 * INPUT FILE:
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\ECUCD_EcucValueCollection.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Com.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Det.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_EcuC.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Os.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Rte.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Adc.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_BswM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Can.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanIf.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanSM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanTp.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Com.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_ComM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Crc.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dcm.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dem.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Det.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dio.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Fee.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_FiM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Fls.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Gpt.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Icu_43.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Mcu.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_MemIf.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_NvM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Os.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_PduR.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Port.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Pwm_43.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Spi.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Wdg_43.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Composition\EcuExtract.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DBImport\Project.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DataTypes\AUTOSAR_DataTypes.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DataTypes\AUTOSAR_DataTypes_Etc.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_ComM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Dcm.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Dem.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_FiM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Mode.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Rte.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_WdgM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\MODE_PortInterfaces.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_Bsw_BswM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_ComM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_Det.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_FiM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_EcuM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_IoHwAb.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_WdgIf.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_WdgM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_Dcm.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_Dem.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_EcuM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_NvM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_IoHwAb.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_WdgM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_swc_ErrorManagement\App_ErrM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_sys_EcuM_R40\generator\EcuM_PortInterface.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_sys_WdgM_R40\generator\Swcd_WdgM_Fixed.arxml

 * GENERATED ON:  This timestamp is removed.
*/

/*******************************************************************************
* PRE-JUSTIFICATION BEGINE SECTION (MISRA-C RULE CHECKER)
* These rules will not be applied for verification based on the MISRA Rule
* in Rte generated source
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
  polyspace:begin<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:begin<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                         MULTIPLE INCLUSION PROTECTION                      **
*******************************************************************************/
 #ifndef RTE_IOHWAB_H
      #define RTE_IOHWAB_H
 /*
  * CAUTION:
  *
  * Do NOT
  *
  *   #define RTE_ALLOW_CROSS_HEADER_INCLUSION
  *
  * in ASW/BSW code. The symbol shall be used only for RTE internally.
  */
 #ifndef RTE_ALLOW_CROSS_HEADER_INCLUSION
      #ifdef RTE_APPLICATION_HEADER_FILE
      #error Multiple application header files included.
      #endif
      #define RTE_APPLICATION_HEADER_FILE
      #endif

/*******************************************************************************
**                  Include Section                                           **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */
#include "Rte_IoHwAb_Type.h"

/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 extern "C"
 {
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#ifdef RTE_VENDOR_ID
  #if (RTE_VENDOR_ID != 76)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Vendor Id"
  #endif
#else
  #define RTE_VENDOR_ID 76
#endif

#ifdef RTE_MODULE_ID
  #if (RTE_MODULE_ID != 2)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Module Id"
  #endif
#else
  #define RTE_MODULE_ID 2
#endif

#ifdef RTE_SW_MAJOR_VERSION
  #if (RTE_SW_MAJOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Major Version"
  #endif
#else
  #define RTE_SW_MAJOR_VERSION 4
#endif

#ifdef RTE_SW_MINOR_VERSION
  #if (RTE_SW_MINOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Minor Version"
  #endif
#else
  #define RTE_SW_MINOR_VERSION 4
#endif

#ifdef RTE_SW_PATCH_VERSION
  #if (RTE_SW_PATCH_VERSION != 2)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Patch Version"
  #endif
#else
  #define RTE_SW_PATCH_VERSION 2
#endif

#ifdef RTE_AR_RELEASE_MAJOR_VERSION
  #if (RTE_AR_RELEASE_MAJOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Major Version"
  #endif
#else
  #define RTE_AR_RELEASE_MAJOR_VERSION 4
#endif

#ifdef RTE_AR_RELEASE_MINOR_VERSION
  #if (RTE_AR_RELEASE_MINOR_VERSION != 0)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Minor Version"
  #endif
#else
  #define RTE_AR_RELEASE_MINOR_VERSION 0
#endif

#ifdef RTE_AR_RELEASE_REVISION_VERSION
  #if (RTE_AR_RELEASE_REVISION_VERSION != 3)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Revision Version"
  #endif
#else
  #define RTE_AR_RELEASE_REVISION_VERSION 3
#endif

/*******************************************************************************
** Init Macro
*******************************************************************************/

/******************************************************************************
** Type Definitions for Rte API                                               **
*******************************************************************************/

/*******************************************************************************
** Global Variables                                                           **
*******************************************************************************/

/*******************************************************************************
** Global Variables for Per Instance Memory                                   **
*******************************************************************************/

/*******************************************************************************
** Invalid Value Const Variables                                              **
*******************************************************************************/

/*******************************************************************************
** Macros for Direct API functions defined in PDS                             **
*******************************************************************************/

/*******************************************************************************
** Macros for InDirect(port oriented) API functions defined in PDS            **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for port handles of PDS                                   **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for component instance handles                            **
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:5.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #3724)
*/
struct Rte_CDS_IoHwAb
{
  VAR(uint8, RTE_DATA) _dummy;
};

/*
  polyspace:end<MISRA-C:5.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #3724)
*/
/*******************************************************************************
** Component instance handles                                                 **
*******************************************************************************/
#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
extern const struct Rte_CDS_IoHwAb Rte_Inst_IoHwAb;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
** Global Variables for Component Instance Handle                             **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for component instance handles                            **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for PerInstanceMemory (Exists only for multiple instances)**
*******************************************************************************/

/*******************************************************************************
** Macros for Direct API functions                                            **
*******************************************************************************/

/*******************************************************************************
** Macros for Exclusive Areas                                                 **
*******************************************************************************/

/*******************************************************************************
** Macros for ApplicationError in Client Server                               **
*******************************************************************************/

#ifndef RTE_E_IoHwAb_If_McuSpecific_E_NOT_SUPPORTED
#define RTE_E_IoHwAb_If_McuSpecific_E_NOT_SUPPORTED 12U
#endif

#ifndef RTE_E_IoHwAb_If_Icu_E_NOT_SUPPORTED
#define RTE_E_IoHwAb_If_Icu_E_NOT_SUPPORTED 9U
#endif

#ifndef RTE_E_IoHwAb_If_Pwm_E_NOT_SUPPORTED
#define RTE_E_IoHwAb_If_Pwm_E_NOT_SUPPORTED 11U
#endif

#ifndef RTE_E_IoHwAb_If_Gpt_E_NOT_SUPPORTED
#define RTE_E_IoHwAb_If_Gpt_E_NOT_SUPPORTED 10U
#endif

#ifndef RTE_E_IoHwAb_If_AnaIn_E_BUSY
#define RTE_E_IoHwAb_If_AnaIn_E_BUSY 7U
#endif

#ifndef RTE_E_IoHwAb_If_AnaInDir_E_BUSY
#define RTE_E_IoHwAb_If_AnaInDir_E_BUSY 4U
#endif

#ifndef RTE_E_IoHwAb_If_AnaInDir_E_WRONG_LENGTH
#define RTE_E_IoHwAb_If_AnaInDir_E_WRONG_LENGTH 5U
#endif

#ifndef RTE_E_IoHwAb_If_AnaInDir_E_SETUP_BUFFER_FAIL
#define RTE_E_IoHwAb_If_AnaInDir_E_SETUP_BUFFER_FAIL 6U
#endif

/*******************************************************************************
** Prototypes for Rte API                                                     **
*******************************************************************************/
#define RTE_START_SEC_CODE
#include "MemMap.h"
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAb_R_IoHwAbGptLogical0_Cbk_Notification(void);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

#define RTE_START_SEC_CODE
#include "MemMap.h"
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAb_R_IoHwAbGptLogical_EMIOS4_Cbk_Notification(void);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

#define RTE_START_SEC_CODE
#include "MemMap.h"
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_IoHwAb_R_IoHwAbIcuLogical_Timestamp_PA8_Cbk_Notification(void);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/*******************************************************************************
** API Mapping                                                                **
*******************************************************************************/
#ifndef Rte_Call_R_IoHwAbGptLogical0_Cbk_Notification
#define Rte_Call_R_IoHwAbGptLogical0_Cbk_Notification Rte_Call_IoHwAb_R_IoHwAbGptLogical0_Cbk_Notification
#endif

#ifndef Rte_Call_R_IoHwAbGptLogical_EMIOS4_Cbk_Notification
#define Rte_Call_R_IoHwAbGptLogical_EMIOS4_Cbk_Notification Rte_Call_IoHwAb_R_IoHwAbGptLogical_EMIOS4_Cbk_Notification
#endif

#ifndef Rte_Call_R_IoHwAbIcuLogical_Timestamp_PA8_Cbk_Notification
#define Rte_Call_R_IoHwAbIcuLogical_Timestamp_PA8_Cbk_Notification Rte_Call_IoHwAb_R_IoHwAbIcuLogical_Timestamp_PA8_Cbk_Notification
#endif

/*******************************************************************************
** Client Server Macro                                                        **
*******************************************************************************/

/*******************************************************************************
** Prototypes for Runnable entities                                           **
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:8.8:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1132)
*/

#define IoHwAb_START_SEC_CODE
#include "IoHwAb_MemMap.h"
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AnaInDirReadDirect(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_ValueType, AUTOMATIC, RTE_APPL_DATA) Value, IN VAR(IoHwAb_LengthType, AUTOMATIC) AnaInDirLength);

FUNC(void, IoHwAb_CODE) IoHwAb_AnaInFreeze(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(void, IoHwAb_CODE) IoHwAb_AnaInRead(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_ValueType, AUTOMATIC, RTE_APPL_DATA) Value);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AnaInReadDirect(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_ValueType, AUTOMATIC, RTE_APPL_DATA) Value);

FUNC(void, IoHwAb_CODE) IoHwAb_AnaInUnfreeze(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(void, IoHwAb_CODE) IoHwAb_DigDirIsInput(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_BoolType, AUTOMATIC, RTE_APPL_DATA) blResult);

FUNC(void, IoHwAb_CODE) IoHwAb_DigDirIsOutput(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_BoolType, AUTOMATIC, RTE_APPL_DATA) blResult);

FUNC(void, IoHwAb_CODE) IoHwAb_DigDirReadDirect(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_LevelType, AUTOMATIC, RTE_APPL_DATA) Level);

FUNC(void, IoHwAb_CODE) IoHwAb_DigDirSetToInput(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(void, IoHwAb_CODE) IoHwAb_DigDirSetToOutput(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(void, IoHwAb_CODE) IoHwAb_DigDirWriteDirect(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, IN VAR(IoHwAb_LevelType, AUTOMATIC) Level);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GptDisableNotification(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GptEnableNotification(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GptGetTimeElapsed(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_GptValueType, AUTOMATIC, RTE_APPL_DATA) Value);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GptGetTimeRemaining(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_GptValueType, AUTOMATIC, RTE_APPL_DATA) Value);

FUNC(void, IoHwAb_CODE) GptChannelConfiguration_Dummy_Cbk(void);

FUNC(void, IoHwAb_CODE) GptChannelConfiguration_IoHwAbTest_Cbk(void);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GptStartTimer(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, IN VAR(IoHwAb_GptValueType, AUTOMATIC) Value);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GptStopTimer(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuDisableEdgeCount(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuDisableEdgeDetection(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuDisableNotification(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuEnableEdgeCount(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuEnableEdgeDetection(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuEnableNotification(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuGetDutyCycleValues(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_IcuDutyCycleType, AUTOMATIC, RTE_APPL_DATA) DutyCycle);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuGetEdgeNumbers(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_IcuEdgeNumberType, AUTOMATIC, RTE_APPL_DATA) Num);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuGetInputState(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_IcuStateType, AUTOMATIC, RTE_APPL_DATA) State);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuGetTimeElapsed(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_IcuValueType, AUTOMATIC, RTE_APPL_DATA) Time);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuGetTimestampIndex(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_IcuIndexType, AUTOMATIC, RTE_APPL_DATA) TimestampIdx);

FUNC(void, IoHwAb_CODE) IcuTimestampMeasurement_0_Cbk(void);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuResetEdgeCount(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuSetActivationCondition(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, IN VAR(IoHwAb_IcuActivationType, AUTOMATIC) Activation);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuStartSignalMeasurement(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuStartTimestamp(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_IcuValueType, AUTOMATIC, RTE_APPL_DATA) BufPtr, IN VAR(uint16, AUTOMATIC) BufSize, IN VAR(uint16, AUTOMATIC) NotiItv);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuStopSignalMeasurement(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_IcuStopTimestamp(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_McuSpecificControlIBE(IN VAR(IoHwAb_IndexType, AUTOMATIC) PortGroup, IN VAR(IoHwAb_IndexType, AUTOMATIC) PinConfig, IN VAR(IoHwAb_LevelType, AUTOMATIC) Level);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_PwmDisableNotification(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_PwmEnableNotification(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, IN VAR(IoHwAb_PwmEdgeType, AUTOMATIC) NotificationEdge);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_PwmGetOutputState(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, OUT P2VAR(IoHwAb_LevelType, AUTOMATIC, RTE_APPL_DATA) Level);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_PwmSetDutyCycle(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, IN VAR(uint16, AUTOMATIC) Duty);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_PwmSetOutputToIdle(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx);

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_PwmSetPeriodAndDuty(IN VAR(IoHwAb_IndexType, AUTOMATIC) ChIdx, IN VAR(IoHwAb_PwmPeriodType, AUTOMATIC) Period, IN VAR(uint16, AUTOMATIC) Duty);

#define IoHwAb_STOP_SEC_CODE
#include "IoHwAb_MemMap.h"

/*
  polyspace:end<MISRA-C:8.8:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1132)
*/

/*******************************************************************************
** Runnables Mapping                                                          **
*******************************************************************************/
#ifndef RTE_RUNNABLE_IoHwAb_Re_AnaInDir_ReadDirect
#define RTE_RUNNABLE_IoHwAb_Re_AnaInDir_ReadDirect IoHwAb_AnaInDirReadDirect
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_AnaIn_Freeze
#define RTE_RUNNABLE_IoHwAb_Re_AnaIn_Freeze IoHwAb_AnaInFreeze
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_AnaIn_Read
#define RTE_RUNNABLE_IoHwAb_Re_AnaIn_Read IoHwAb_AnaInRead
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_AnaIn_ReadDirect
#define RTE_RUNNABLE_IoHwAb_Re_AnaIn_ReadDirect IoHwAb_AnaInReadDirect
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_AnaIn_Unfreeze
#define RTE_RUNNABLE_IoHwAb_Re_AnaIn_Unfreeze IoHwAb_AnaInUnfreeze
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_DigDir_IsInput
#define RTE_RUNNABLE_IoHwAb_Re_DigDir_IsInput IoHwAb_DigDirIsInput
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_DigDir_IsOutput
#define RTE_RUNNABLE_IoHwAb_Re_DigDir_IsOutput IoHwAb_DigDirIsOutput
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_DigDir_ReadDirect
#define RTE_RUNNABLE_IoHwAb_Re_DigDir_ReadDirect IoHwAb_DigDirReadDirect
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_DigDir_SetToInput
#define RTE_RUNNABLE_IoHwAb_Re_DigDir_SetToInput IoHwAb_DigDirSetToInput
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_DigDir_SetToOutput
#define RTE_RUNNABLE_IoHwAb_Re_DigDir_SetToOutput IoHwAb_DigDirSetToOutput
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_DigDir_WriteDirect
#define RTE_RUNNABLE_IoHwAb_Re_DigDir_WriteDirect IoHwAb_DigDirWriteDirect
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_DisableNotification
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_DisableNotification IoHwAb_GptDisableNotification
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_EnableNotification
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_EnableNotification IoHwAb_GptEnableNotification
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_GetTimeElapsed
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_GetTimeElapsed IoHwAb_GptGetTimeElapsed
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_GetTimeRemaining
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_GetTimeRemaining IoHwAb_GptGetTimeRemaining
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_GptChannelConfiguration_Dummy_Cbk_Cbk
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_GptChannelConfiguration_Dummy_Cbk_Cbk GptChannelConfiguration_Dummy_Cbk
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_GptChannelConfiguration_IoHwAbTest_Cbk_Cbk
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_GptChannelConfiguration_IoHwAbTest_Cbk_Cbk GptChannelConfiguration_IoHwAbTest_Cbk
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_StartTimer
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_StartTimer IoHwAb_GptStartTimer
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Gpt_StopTimer
#define RTE_RUNNABLE_IoHwAb_Re_Gpt_StopTimer IoHwAb_GptStopTimer
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_DisableEdgeCount
#define RTE_RUNNABLE_IoHwAb_Re_Icu_DisableEdgeCount IoHwAb_IcuDisableEdgeCount
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_DisableEdgeDetection
#define RTE_RUNNABLE_IoHwAb_Re_Icu_DisableEdgeDetection IoHwAb_IcuDisableEdgeDetection
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_DisableNotification
#define RTE_RUNNABLE_IoHwAb_Re_Icu_DisableNotification IoHwAb_IcuDisableNotification
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_EnableEdgeCount
#define RTE_RUNNABLE_IoHwAb_Re_Icu_EnableEdgeCount IoHwAb_IcuEnableEdgeCount
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_EnableEdgeDetection
#define RTE_RUNNABLE_IoHwAb_Re_Icu_EnableEdgeDetection IoHwAb_IcuEnableEdgeDetection
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_EnableNotification
#define RTE_RUNNABLE_IoHwAb_Re_Icu_EnableNotification IoHwAb_IcuEnableNotification
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_GetDutyCycleValues
#define RTE_RUNNABLE_IoHwAb_Re_Icu_GetDutyCycleValues IoHwAb_IcuGetDutyCycleValues
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_GetEdgeNumbers
#define RTE_RUNNABLE_IoHwAb_Re_Icu_GetEdgeNumbers IoHwAb_IcuGetEdgeNumbers
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_GetInputState
#define RTE_RUNNABLE_IoHwAb_Re_Icu_GetInputState IoHwAb_IcuGetInputState
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_GetTimeElapsed
#define RTE_RUNNABLE_IoHwAb_Re_Icu_GetTimeElapsed IoHwAb_IcuGetTimeElapsed
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_GetTimestampIndex
#define RTE_RUNNABLE_IoHwAb_Re_Icu_GetTimestampIndex IoHwAb_IcuGetTimestampIndex
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_IcuTimestampMeasurement_0_Cbk_Cbk
#define RTE_RUNNABLE_IoHwAb_Re_Icu_IcuTimestampMeasurement_0_Cbk_Cbk IcuTimestampMeasurement_0_Cbk
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_ResetEdgeCount
#define RTE_RUNNABLE_IoHwAb_Re_Icu_ResetEdgeCount IoHwAb_IcuResetEdgeCount
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_SetActivationCondition
#define RTE_RUNNABLE_IoHwAb_Re_Icu_SetActivationCondition IoHwAb_IcuSetActivationCondition
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_StartSignalMeasurement
#define RTE_RUNNABLE_IoHwAb_Re_Icu_StartSignalMeasurement IoHwAb_IcuStartSignalMeasurement
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_StartTimestamp
#define RTE_RUNNABLE_IoHwAb_Re_Icu_StartTimestamp IoHwAb_IcuStartTimestamp
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_StopSignalMeasurement
#define RTE_RUNNABLE_IoHwAb_Re_Icu_StopSignalMeasurement IoHwAb_IcuStopSignalMeasurement
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Icu_StopTimestamp
#define RTE_RUNNABLE_IoHwAb_Re_Icu_StopTimestamp IoHwAb_IcuStopTimestamp
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_McuSpecific_ControlIBE
#define RTE_RUNNABLE_IoHwAb_Re_McuSpecific_ControlIBE IoHwAb_McuSpecificControlIBE
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Pwm_DisableNotification
#define RTE_RUNNABLE_IoHwAb_Re_Pwm_DisableNotification IoHwAb_PwmDisableNotification
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Pwm_EnableNotification
#define RTE_RUNNABLE_IoHwAb_Re_Pwm_EnableNotification IoHwAb_PwmEnableNotification
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Pwm_GetOutputState
#define RTE_RUNNABLE_IoHwAb_Re_Pwm_GetOutputState IoHwAb_PwmGetOutputState
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Pwm_SetDutyCycle
#define RTE_RUNNABLE_IoHwAb_Re_Pwm_SetDutyCycle IoHwAb_PwmSetDutyCycle
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Pwm_SetOutputToIdle
#define RTE_RUNNABLE_IoHwAb_Re_Pwm_SetOutputToIdle IoHwAb_PwmSetOutputToIdle
#endif
#ifndef RTE_RUNNABLE_IoHwAb_Re_Pwm_SetPeriodAndDuty
#define RTE_RUNNABLE_IoHwAb_Re_Pwm_SetPeriodAndDuty IoHwAb_PwmSetPeriodAndDuty
#endif

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 }
#endif

#endif

/*******************************************************************************
* PRE-JUSTIFICATION END SECTION (MISRA-C RULE CHECKER)
*******************************************************************************/
/*
  polyspace:end<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
  polyspace:end<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:end<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
