#ifndef __vdynblksskidpad_sfun_h__
#define __vdynblksskidpad_sfun_h__

/* Include files */
#define S_FUNCTION_NAME                sf_sfun
#include "covrt.h"
#include "emlrt.h"
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/MessageServiceLayer.h"
#include "sf_runtime/DebuggerRuntimeInterface.h"
#include "sf_runtime/sfc_mex.h"
#include "sf_runtime/sf_runtime_errors.h"
#include "sf_runtime/sf_partitioning_execution_bridge.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtClientServerAPIBridge.h"
#include "sf_runtime/sfc_sdi.h"
#include "sf_runtime/sf_test_language.h"
#include "simlogCIntrf.h"
#include "half_type.h"
#include "multiword_types.h"
#include "sf_runtime/sfc_messages.h"
#include "slccrt.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtInfF                         ((real32_T)mxGetInf())
#define rtMinusInfF                    (-(real32_T)mxGetInf())
#define rtNaNF                         ((real32_T)mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

/* Auxiliary Header Files */
#include "insertShapeUtilsCore_api.hpp"

/* Forward Declarations */
/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void vdynblksskidpad_initializer(void);
extern void vdynblksskidpad_terminator(void);

/* Function Definitions */

/* We load infoStruct for rtw_optimation_info on demand in mdlSetWorkWidths and
   free it immediately in mdlStart. Given that this is machine-wide as
   opposed to chart specific, we use NULL check to make sure it gets loaded
   and unloaded once per machine even though the  methods mdlSetWorkWidths/mdlStart
   are chart/instance specific. The following methods abstract this out. */
extern mxArray* load_vdynblksskidpad_optimization_info(boolean_T isRtwGen,
  boolean_T isModelRef, boolean_T isExternal);
extern void unload_vdynblksskidpad_optimization_info(void);

#endif
