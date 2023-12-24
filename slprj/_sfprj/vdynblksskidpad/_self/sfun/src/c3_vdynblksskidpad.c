/* Include files */

#include "vdynblksskidpad_sfun.h"
#include "c3_vdynblksskidpad.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c3_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c3_b_emlrtMCI = { 443,/* lineNo */
  1,                                   /* colNo */
  "insertObjectAnnotation",            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pName */
};

static emlrtMCInfo c3_c_emlrtMCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c3_d_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c3_e_emlrtMCI = { 15,/* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo c3_f_emlrtMCI = { 889,/* lineNo */
  35,                                  /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtMCInfo c3_g_emlrtMCI = { 884,/* lineNo */
  1,                                   /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtMCInfo c3_h_emlrtMCI = { 79,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c3_i_emlrtMCI = { 1317,/* lineNo */
  35,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtMCInfo c3_j_emlrtMCI = { 1312,/* lineNo */
  1,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtMCInfo c3_k_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c3_l_emlrtMCI = { 74,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c3_m_emlrtMCI = { 81,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c3_n_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRSInfo c3_emlrtRSI = { 68, /* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_b_emlrtRSI = { 53,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_c_emlrtRSI = { 40,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_d_emlrtRSI = { 25,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_e_emlrtRSI = { 97,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_f_emlrtRSI = { 108,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_g_emlrtRSI = { 125,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_h_emlrtRSI = { 126,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_i_emlrtRSI = { 127,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_j_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c3_k_emlrtRSI = { 278,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_l_emlrtRSI = { 300,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_m_emlrtRSI = { 321,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_n_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c3_o_emlrtRSI = { 16,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_p_emlrtRSI = { 36,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_q_emlrtRSI = { 161,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_r_emlrtRSI = { 179,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_s_emlrtRSI = { 183,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_t_emlrtRSI = { 287,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_u_emlrtRSI = { 25,/* lineNo */
  "parseInserterColor",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\parseInserterColor.m"/* pathName */
};

static emlrtRSInfo c3_v_emlrtRSI = { 41,/* lineNo */
  "parseInserterColor",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\parseInserterColor.m"/* pathName */
};

static emlrtRSInfo c3_w_emlrtRSI = { 336,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_x_emlrtRSI = { 337,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_y_emlrtRSI = { 369,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_ab_emlrtRSI = { 353,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_bb_emlrtRSI = { 562,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_cb_emlrtRSI = { 580,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_db_emlrtRSI = { 844,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_eb_emlrtRSI = { 874,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c3_fb_emlrtRSI = { 124,/* lineNo */
  "insertShapeBuildable",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pathName */
};

static emlrtRSInfo c3_gb_emlrtRSI = { 130,/* lineNo */
  "insertShapeBuildable",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pathName */
};

static emlrtRSInfo c3_hb_emlrtRSI = { 134,/* lineNo */
  "insertShapeBuildable",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pathName */
};

static emlrtRSInfo c3_ib_emlrtRSI = { 138,/* lineNo */
  "insertShapeBuildable",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pathName */
};

static emlrtRSInfo c3_jb_emlrtRSI = { 580,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_kb_emlrtRSI = { 593,/* lineNo */
  "insertObjectAnnotation",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pathName */
};

static emlrtRSInfo c3_lb_emlrtRSI = { 27,/* lineNo */
  "rotatedRectangleHeadDisplay",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+bbox\\rotatedRectangleHeadDisplay.m"/* pathName */
};

static emlrtRSInfo c3_mb_emlrtRSI = { 136,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_nb_emlrtRSI = { 201,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_ob_emlrtRSI = { 205,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_pb_emlrtRSI = { 236,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_qb_emlrtRSI = { 250,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_rb_emlrtRSI = { 254,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_sb_emlrtRSI = { 415,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_tb_emlrtRSI = { 442,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_ub_emlrtRSI = { 446,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_vb_emlrtRSI = { 450,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_wb_emlrtRSI = { 454,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_xb_emlrtRSI = { 331,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_yb_emlrtRSI = { 333,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_ac_emlrtRSI = { 29,/* lineNo */
  "parseInserterColor",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\parseInserterColor.m"/* pathName */
};

static emlrtRSInfo c3_bc_emlrtRSI = { 483,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_cc_emlrtRSI = { 479,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_dc_emlrtRSI = { 1130,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_ec_emlrtRSI = { 909,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_fc_emlrtRSI = { 913,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_gc_emlrtRSI = { 923,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_hc_emlrtRSI = { 924,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_ic_emlrtRSI = { 936,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_jc_emlrtRSI = { 937,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_kc_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c3_lc_emlrtRSI = { 15,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c3_mc_emlrtRSI = { 1270,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_nc_emlrtRSI = { 1258,/* lineNo */
  "insertText",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pathName */
};

static emlrtRSInfo c3_oc_emlrtRSI = { 40,/* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo c3_pc_emlrtRSI = { 6,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#vdynblksskidpad:812"               /* pathName */
};

static emlrtRTEInfo c3_emlrtRTEI = { 5,/* lineNo */
  25,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812"               /* pName */
};

static emlrtRTEInfo c3_b_emlrtRTEI = { 6,/* lineNo */
  79,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812"               /* pName */
};

static emlrtRTEInfo c3_c_emlrtRTEI = { 6,/* lineNo */
  60,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812"               /* pName */
};

static emlrtRTEInfo c3_d_emlrtRTEI = { 580,/* lineNo */
  27,                                  /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtRTEInfo c3_e_emlrtRTEI = { 183,/* lineNo */
  5,                                   /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtRTEInfo c3_f_emlrtRTEI = { 185,/* lineNo */
  5,                                   /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtRTEInfo c3_g_emlrtRTEI = { 130,/* lineNo */
  88,                                  /* colNo */
  "insertShapeBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pName */
};

static emlrtRTEInfo c3_h_emlrtRTEI = { 138,/* lineNo */
  85,                                  /* colNo */
  "insertShapeBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pName */
};

static emlrtRTEInfo c3_i_emlrtRTEI = { 99,/* lineNo */
  40,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

static emlrtRTEInfo c3_j_emlrtRTEI = { 99,/* lineNo */
  1,                                   /* colNo */
  "insertObjectAnnotation",            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pName */
};

static emlrtRTEInfo c3_k_emlrtRTEI = { 126,/* lineNo */
  1,                                   /* colNo */
  "insertObjectAnnotation",            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pName */
};

static emlrtRTEInfo c3_l_emlrtRTEI = { 127,/* lineNo */
  1,                                   /* colNo */
  "insertObjectAnnotation",            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m"/* pName */
};

static emlrtRTEInfo c3_m_emlrtRTEI = { 1255,/* lineNo */
  17,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_n_emlrtRTEI = { 1257,/* lineNo */
  17,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_o_emlrtRTEI = { 1260,/* lineNo */
  35,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_p_emlrtRTEI = { 1260,/* lineNo */
  17,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_q_emlrtRTEI = { 1270,/* lineNo */
  52,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_r_emlrtRTEI = { 1413,/* lineNo */
  1,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_s_emlrtRTEI = { 441,/* lineNo */
  32,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_t_emlrtRTEI = { 445,/* lineNo */
  32,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_u_emlrtRTEI = { 449,/* lineNo */
  32,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_v_emlrtRTEI = { 453,/* lineNo */
  32,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_w_emlrtRTEI = { 257,/* lineNo */
  1,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_x_emlrtRTEI = { 258,/* lineNo */
  1,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_y_emlrtRTEI = { 886,/* lineNo */
  1,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_ab_emlrtRTEI = { 905,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_bb_emlrtRTEI = { 906,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_cb_emlrtRTEI = { 907,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_db_emlrtRTEI = { 908,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_eb_emlrtRTEI = { 909,/* lineNo */
  26,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_fb_emlrtRTEI = { 913,/* lineNo */
  24,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_gb_emlrtRTEI = { 931,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_hb_emlrtRTEI = { 919,/* lineNo */
  6,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_ib_emlrtRTEI = { 933,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_jb_emlrtRTEI = { 920,/* lineNo */
  6,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_kb_emlrtRTEI = { 934,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_lb_emlrtRTEI = { 921,/* lineNo */
  6,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_mb_emlrtRTEI = { 935,/* lineNo */
  4,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_nb_emlrtRTEI = { 922,/* lineNo */
  6,                                   /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_ob_emlrtRTEI = { 936,/* lineNo */
  24,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_pb_emlrtRTEI = { 923,/* lineNo */
  27,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_qb_emlrtRTEI = { 937,/* lineNo */
  24,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtRTEInfo c3_rb_emlrtRTEI = { 924,/* lineNo */
  26,                                  /* colNo */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m"/* pName */
};

static emlrtBCInfo c3_emlrtBCI = { 0,  /* iFirst */
  MAX_int32_T,                         /* iLast */
  5,                                   /* lineNo */
  19,                                  /* colNo */
  "labels",                            /* aName */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812",              /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c3_sb_emlrtRTEI = { 5,/* lineNo */
  17,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812"               /* pName */
};

static emlrtDCInfo c3_emlrtDCI = { 6,  /* lineNo */
  67,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812",              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c3_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  67,                                  /* colNo */
  "bboxes",                            /* aName */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812",              /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c3_b_emlrtDCI = { 6,/* lineNo */
  86,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812",              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c3_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  86,                                  /* colNo */
  "labels",                            /* aName */
  "MATLAB Function1",                  /* fName */
  "#vdynblksskidpad:812",              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "insertObjectAnnotation",            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertObjectAnnotation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1413,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1413,                                /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1413,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1413,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_i_emlrtBCI = { 1,/* iFirst */
  10664,                               /* iLast */
  1256,                                /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1421,                                /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1421,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_l_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  931,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_m_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  919,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_n_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  919,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_o_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  905,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  905,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  931,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  917,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c3_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  918,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "insertText",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\vision\\vision\\insertText.m",/* pName */
  0                                    /* checkKind */
};

static char_T c3_cv[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'S',
  'i', 'z', 'e' };

static char_T c3_cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o', 'm',
  'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

static uint16_T c3_uv[256] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
  3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U,
  20U, 21U, 22U, 23U, 24U, 25U, 26U, 27U, 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U,
  36U, 37U, 38U, 39U, 40U, 41U, 42U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U,
  52U, 53U, 54U, 55U, 56U, 57U, 58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U,
  68U, 69U, 70U, 71U, 72U, 73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U, 83U,
  84U, 85U, 86U, 87U, 88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U, 0U, 0U,
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 172U, 163U, 132U, 133U, 189U, 150U,
  232U, 134U, 142U, 139U, 157U, 169U, 164U, 258U, 138U, 259U, 131U, 147U, 242U,
  243U, 141U, 151U, 136U, 260U, 222U, 241U, 158U, 170U, 245U, 244U, 246U, 162U,
  173U, 201U, 199U, 174U, 98U, 99U, 144U, 100U, 203U, 101U, 200U, 202U, 207U,
  204U, 205U, 206U, 233U, 102U, 211U, 208U, 209U, 175U, 103U, 240U, 145U, 214U,
  212U, 213U, 104U, 235U, 237U, 137U, 106U, 105U, 107U, 109U, 108U, 110U, 160U,
  111U, 113U, 112U, 114U, 115U, 117U, 116U, 118U, 119U, 234U, 120U, 122U, 121U,
  123U, 125U, 124U, 184U, 161U, 127U, 126U, 128U, 129U, 236U, 238U, 186U };

static int16_T c3_iv[261] = { 9, 0, 0, 4, 4, 4, 8, 8, 8, 8, 3, 4, 4, 6, 10, 4, 7,
  4, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 10, 10, 10, 5, 10, 8, 7, 8, 9, 7, 6,
  9, 9, 3, 4, 8, 6, 10, 9, 9, 7, 9, 8, 6, 8, 8, 8, 10, 8, 7, 7, 4, 6, 4, 8, 6, 7,
  7, 8, 6, 8, 7, 4, 7, 7, 3, 4, 7, 3, 11, 7, 7, 8, 8, 5, 6, 4, 7, 6, 9, 7, 6, 7,
  4, 4, 4, 8, 8, 8, 8, 7, 9, 9, 8, 7, 7, 7, 7, 7, 7, 6, 7, 7, 7, 7, 3, 3, 3, 3,
  7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 5, 8, 8, 8, 0, 8, 7, 8, 10, 0, 7, 7, 0, 11, 9,
  0, 10, 0, 0, 8, 8, 0, 0, 0, 0, 0, 6, 6, 0, 10, 7, 5, 4, 10, 0, 0, 0, 0, 6, 6,
  0, 4, 8, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 6, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 8, 7, 8, 7, 7, 3, 3, 3, 3, 9, 9, 0, 9, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 7,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 9, 7, 7, 6, 7, 8, 0, 10, 5, 5, 5, 10, 10, 10, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 6, 4 };

/* Function Declarations */
static void initialize_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void initialize_params_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void mdl_start_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void mdl_terminate_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance);
static void mdl_setup_runtime_resources_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void enable_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void disable_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void sf_gateway_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void ext_mode_exec_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance);
static void c3_update_jit_animation_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void c3_do_animation_call_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void set_sim_state_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance, const mxArray *c3_st);
static void initSimStructsc3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance);
static void initSubchartIOPointersc3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void c3_insertObjectAnnotation(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], real_T
  c3_position_data[], int32_T c3_position_size[2], char_T c3_labelTemp[10],
  uint8_T c3_c_RGB[2764800]);
static void c3_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], real_T
  c3_position_data[], int32_T c3_position_size[2], char_T c3_label[10], uint8_T
  c3_c_RGB[2764800], int32_T c3_b_position_data[], int32_T c3_b_position_size[2],
  char_T c3_outLabel[10], boolean_T *c3_showOrientation, uint8_T c3_color_data[],
  int32_T c3_color_size[2], uint8_T c3_textColor_data[], int32_T
  c3_textColor_size[2], boolean_T *c3_isEmpty);
static void c3_assertValidSizeArg(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void c3_insertShape(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T c3_position_data[],
  int32_T c3_position_size[2], uint8_T c3_varargin_4_data[], uint8_T c3_c_RGB
  [2764800]);
static void c3_b_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T
  c3_position_data[], int32_T c3_position_size[2], uint8_T c3_varargin_4_data[],
  uint8_T c3_c_RGB[2764800], int32_T c3_positionOut_data[], int32_T
  c3_positionOut_size[2], uint8_T c3_colorOut_data[], int32_T c3_colorOut_size[2]);
static void c3_shapeInserterCG(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  uint8_T c3_b_tmpRGB[2764800], int32_T c3_positionOut_data[], int32_T
  c3_positionOut_size[2], uint8_T c3_color_data[], uint8_T c3_outImage[2764800]);
static real_T c3_sumColumnB(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  int16_T c3_x[10]);
static real_T c3_sum(SFc3_vdynblksskidpadInstanceStruct *chartInstance, const
                     emlrtStack *c3_sp, int16_T c3_x_data[], int32_T c3_x_size[2]);
static real_T c3_b_sumColumnB(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  int16_T c3_x_data[], int32_T c3_vlen);
static void c3_insertGlyphs(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_imgIn[2764800], uint16_T c3_ucTextU16[10],
  c3_sS4wEAasIzogBF5n8Y5amaF c3_textLocationXY, uint8_T c3_imgOut[2764800]);
static void c3_insertText(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T c3_position[2],
  char_T c3_text[10], uint8_T c3_varargin_6_data[], uint8_T c3_varargin_8_data[],
  int32_T c3_varargin_14, int32_T c3_varargin_16, uint8_T c3_c_RGB[2764800]);
static void c3_c_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T
  c3_position[2], char_T c3_text[10], uint8_T c3_varargin_6_data[], uint8_T
  c3_varargin_8_data[], int32_T c3_varargin_14, int32_T c3_varargin_16, uint8_T
  c3_c_RGB[2764800], int32_T c3_b_position[2], c3_cell_wrap_0 c3_outText[1],
  uint8_T c3_textColor_data[], int32_T c3_textColor_size[2], uint8_T
  c3_boxColor_data[], int32_T c3_boxColor_size[2], int32_T *c3_shapeWidth,
  int32_T *c3_shapeHeight);
static void c3_insertTextBox(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_c_RGB[2764800], int32_T c3_position[2],
  uint16_T c3_ucTextU16[10], uint8_T c3_boxColor[3], int32_T c3_shapeWidth,
  int32_T c3_shapeHeight, uint8_T c3_d_RGB[2764800], c3_sS4wEAasIzogBF5n8Y5amaF *
  c3_textLocationXY);
static void c3_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier,
  uint8_T c3_y[2764800]);
static void c3_b_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_y[2764800]);
static uint8_T c3_c_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static uint8_T c3_d_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_slStringInitializeDynamicBuffers
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance);
static void c3_chart_data_browse_helper(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T
  *c3_isValueTooBig);
static void c3_d_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], real_T
  c3_position_data[], int32_T c3_position_size[2], uint8_T c3_c_RGB[2764800],
  int32_T c3_b_position_data[], int32_T c3_b_position_size[2], boolean_T
  *c3_showOrientation, uint8_T c3_color_data[], int32_T c3_color_size[2],
  uint8_T c3_textColor_data[], int32_T c3_textColor_size[2], boolean_T
  *c3_isEmpty);
static void c3_b_insertGlyphs(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_imgIn[2764800], uint16_T c3_ucTextU16[10],
  c3_sS4wEAasIzogBF5n8Y5amaF c3_textLocationXY);
static void c3_e_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], char_T
  c3_text[10], uint8_T c3_varargin_6_data[], uint8_T c3_varargin_8_data[],
  int32_T c3_varargin_14, int32_T c3_varargin_16, uint8_T c3_c_RGB[2764800],
  c3_cell_wrap_0 c3_outText[1], uint8_T c3_textColor_data[], int32_T
  c3_textColor_size[2], uint8_T c3_boxColor_data[], int32_T c3_boxColor_size[2],
  int32_T *c3_shapeWidth, int32_T *c3_shapeHeight);
static c3_sS4wEAasIzogBF5n8Y5amaF c3_b_insertTextBox
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance, const emlrtStack *c3_sp,
   uint8_T c3_c_RGB[2764800], int32_T c3_position[2], uint16_T c3_ucTextU16[10],
   uint8_T c3_boxColor[3], int32_T c3_shapeWidth, int32_T c3_shapeHeight);
static void init_dsm_address_info(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  emlrtStack c3_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c3_st.tls = chartInstance->c3_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c3_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "video_and_image_blockset", 2);
  emlrtLicenseCheckR2022a(&c3_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c3_doneDoubleBufferReInit = false;
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  static const int32_T c3_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c3_condTxtEndIdx[1] = { 118 };

  static const int32_T c3_condTxtStartIdx[1] = { 103 };

  static const uint32_T c3_decisionTxtEndIdx = 0U;
  static const uint32_T c3_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, chartInstance->c3_JITStateAnimation,
                        chartInstance->c3_JITTransitionAnimation);
  setDataBrowseFcn(chartInstance->S, (void *)&c3_chart_data_browse_helper);
  chartInstance->c3_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_IsDebuggerActive,
    &chartInstance->c3_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c3_mlFcnLineNumber, &chartInstance->c3_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c3_covrtInstance, 1U, 0U, 1U,
    17U);
  covrtChartInitFcn(chartInstance->c3_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c3_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c3_decisionTxtStartIdx, &c3_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c3_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c3_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 1U, 0U, 1U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 285);
  covrtEmlIfInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U, 99, 118, -1,
                    261, false);
  covrtEmlForInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U, 127, 150, 253);
  covrtEmlMCDCInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U, 102, 118, 1U,
                      0U, c3_condTxtStartIdx, c3_condTxtEndIdx, 2U,
                      c3_postfixPredicateTree, false);
}

static void mdl_cleanup_runtime_resources_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c3_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c3_covrtInstance);
}

static void enable_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  static char_T c3_b_cv[10] = { 'c', 'o', 'n', 'e', '_', 'l', 'a', 'b', 'e', 'l'
  };

  c3_cell_wrap_0 c3_enumNames[1];
  c3_cell_wrap_0 c3_r;
  emlrtStack c3_b_st;
  emlrtStack c3_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c3_b_bboxes_data[2000];
  real_T c3_c_bboxes_data[4];
  real_T c3_c_i;
  real_T c3_d;
  int32_T c3_b_bboxes_size[2];
  int32_T c3_bboxes_size[2];
  int32_T c3_labels_size[2];
  int32_T c3_tmp_size[1];
  int32_T c3_b_i;
  int32_T c3_b_loop_ub;
  int32_T c3_c_loop_ub;
  int32_T c3_d_i;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_loop_ub;
  char_T c3_y[10];
  boolean_T c3_b;
  boolean_T c3_b1;
  c3_st.tls = chartInstance->c3_fEmlrtCtx;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 2U, (real_T)
                      (*chartInstance->c3_c_img)[c3_i]);
  }

  c3_loop_ub = (*chartInstance->c3_bboxes_sizes)[0] *
    (*chartInstance->c3_bboxes_sizes)[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 0U,
                      (*chartInstance->c3_bboxes_data)[c3_i1]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_JITTransitionAnimation[0] = 0U;
  chartInstance->c3_sfEvent = CALL_EVENT;
  c3_bboxes_size[0] = (*chartInstance->c3_bboxes_sizes)[0];
  c3_bboxes_size[1] = (*chartInstance->c3_bboxes_sizes)[1];
  c3_b_loop_ub = (*chartInstance->c3_bboxes_sizes)[0] *
    (*chartInstance->c3_bboxes_sizes)[1] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_b_loop_ub; c3_i2++) {
    c3_b_bboxes_data[c3_i2] = (*chartInstance->c3_bboxes_data)[c3_i2];
  }

  c3_labels_size[0] = (*chartInstance->c3_labels_sizes)[0];
  for (c3_i3 = 0; c3_i3 < 2764800; c3_i3++) {
    chartInstance->c3_img[c3_i3] = (*chartInstance->c3_c_img)[c3_i3];
  }

  covrtEmlFcnEval(chartInstance->c3_covrtInstance, 4U, 0, 0);
  c3_b = (c3_bboxes_size[0] == 0);
  c3_b1 = (c3_bboxes_size[1] == 0);
  if (covrtEmlIfEval(chartInstance->c3_covrtInstance, 4U, 0, 0, covrtEmlMcdcEval
                     (chartInstance->c3_covrtInstance, 4U, 0, 0,
                      !covrtEmlCondEval(chartInstance->c3_covrtInstance, 4U, 0,
         0, c3_b || c3_b1)))) {
    c3_tmp_size[0] = c3_labels_size[0];
    if (c3_tmp_size[0] < 0) {
      emlrtDynamicBoundsCheckR2012b(c3_tmp_size[0], 0, MAX_int32_T, &c3_emlrtBCI,
        &c3_st);
    }

    c3_d = (real_T)c3_tmp_size[0];
    c3_i6 = (int32_T)c3_d;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c3_d, mxDOUBLE_CLASS, c3_i6,
      &c3_sb_emlrtRTEI, &c3_st);
    for (c3_b_i = 0; c3_b_i < c3_i6; c3_b_i++) {
      c3_c_i = 1.0 + (real_T)c3_b_i;
      covrtEmlForEval(chartInstance->c3_covrtInstance, 4U, 0, 0, 1);
      c3_tmp_size[0] = c3_labels_size[0];
      if (c3_c_i != (real_T)(int32_T)muDoubleScalarFloor(c3_c_i)) {
        emlrtIntegerCheckR2012b(c3_c_i, &c3_b_emlrtDCI, &c3_st);
      }

      c3_i7 = (int32_T)c3_c_i;
      if ((c3_i7 < 1) || (c3_i7 > c3_tmp_size[0])) {
        emlrtDynamicBoundsCheckR2012b(c3_i7, 1, c3_tmp_size[0], &c3_c_emlrtBCI,
          &c3_st);
      }

      for (c3_i8 = 0; c3_i8 < 10; c3_i8++) {
        c3_r.f1[c3_i8] = c3_b_cv[c3_i8];
      }

      c3_enumNames[0] = c3_r;
      for (c3_i9 = 0; c3_i9 < 10; c3_i9++) {
        c3_y[c3_i9] = c3_enumNames[0].f1[c3_i9];
      }

      if (c3_c_i != (real_T)(int32_T)muDoubleScalarFloor(c3_c_i)) {
        emlrtIntegerCheckR2012b(c3_c_i, &c3_emlrtDCI, &c3_st);
      }

      c3_i10 = (int32_T)c3_c_i;
      if ((c3_i10 < 1) || (c3_i10 > c3_bboxes_size[0])) {
        emlrtDynamicBoundsCheckR2012b(c3_i10, 1, c3_bboxes_size[0],
          &c3_b_emlrtBCI, &c3_st);
      }

      c3_d_i = c3_i10 - 1;
      c3_b_bboxes_size[0] = 1;
      c3_b_bboxes_size[1] = c3_bboxes_size[1];
      c3_c_loop_ub = c3_bboxes_size[1] - 1;
      for (c3_i11 = 0; c3_i11 <= c3_c_loop_ub; c3_i11++) {
        c3_c_bboxes_data[c3_i11] = c3_b_bboxes_data[c3_d_i + c3_bboxes_size[0] *
          c3_i11];
      }

      for (c3_i12 = 0; c3_i12 < 2764800; c3_i12++) {
        chartInstance->c3_b_img[c3_i12] = chartInstance->c3_img[c3_i12];
      }

      c3_b_st.site = &c3_pc_emlrtRSI;
      c3_insertObjectAnnotation(chartInstance, &c3_b_st, chartInstance->c3_b_img,
        c3_c_bboxes_data, c3_b_bboxes_size, c3_y, chartInstance->c3_img);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c3_covrtInstance, 4U, 0, 0, 0);
  }

  for (c3_i4 = 0; c3_i4 < 2764800; c3_i4++) {
    (*chartInstance->c3_outImg)[c3_i4] = chartInstance->c3_img[c3_i4];
  }

  c3_do_animation_call_c3_vdynblksskidpad(chartInstance);
  for (c3_i5 = 0; c3_i5 < 2764800; c3_i5++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 3U, (real_T)
                      (*chartInstance->c3_outImg)[c3_i5]);
  }
}

static void ext_mode_exec_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void c3_update_jit_animation_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_do_animation_call_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(2, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", *chartInstance->c3_outImg, 3, 0U, 1U,
    0U, 3, 720, 1280, 3), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y",
    &chartInstance->c3_is_active_c3_vdynblksskidpad, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  int32_T c3_i;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 0)),
                      "outImg", chartInstance->c3_b_uv);
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    (*chartInstance->c3_outImg)[c3_i] = chartInstance->c3_b_uv[c3_i];
  }

  chartInstance->c3_is_active_c3_vdynblksskidpad = c3_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
     "is_active_c3_vdynblksskidpad");
  sf_mex_destroy(&c3_u);
  sf_mex_destroy(&c3_st);
}

static void initSimStructsc3_vdynblksskidpad(SFc3_vdynblksskidpadInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc3_vdynblksskidpad
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_insertObjectAnnotation(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], real_T
  c3_position_data[], int32_T c3_position_size[2], char_T c3_labelTemp[10],
  uint8_T c3_c_RGB[2764800])
{
  emlrtStack c3_st;
  int32_T c3_b_position_data[4];
  int32_T c3_textLocAndWidth[4];
  int32_T c3_b_position_size[2];
  int32_T c3_color_size[2];
  int32_T c3_textColor_size[2];
  int32_T c3_textPosition[2];
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_position;
  int32_T c3_q0;
  int32_T c3_q1;
  int32_T c3_qY;
  int32_T c3_shapeHeight;
  int32_T c3_shapeWidth;
  char_T c3_label[10];
  uint8_T c3_color_data[3];
  uint8_T c3_textColor_data[3];
  boolean_T c3_isEmpty;
  boolean_T c3_showOrientation;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  for (c3_i = 0; c3_i < 10; c3_i++) {
    c3_label[c3_i] = c3_labelTemp[c3_i];
  }

  c3_st.site = &c3_d_emlrtRSI;
  c3_d_validateAndParseInputs(chartInstance, &c3_st, c3_b_I, c3_position_data,
    c3_position_size, chartInstance->c3_RGB, c3_b_position_data,
    c3_b_position_size, &c3_showOrientation, c3_color_data, c3_color_size,
    c3_textColor_data, c3_textColor_size, &c3_isEmpty);
  for (c3_i1 = 0; c3_i1 < 2764800; c3_i1++) {
    c3_c_RGB[c3_i1] = chartInstance->c3_RGB[c3_i1];
  }

  if (!c3_isEmpty) {
    c3_st.site = &c3_c_emlrtRSI;
    c3_insertShape(chartInstance, &c3_st, chartInstance->c3_RGB,
                   c3_b_position_data, c3_b_position_size, c3_color_data,
                   c3_c_RGB);
    c3_st.site = &c3_b_emlrtRSI;
    c3_position = c3_b_position_size[1];
    for (c3_i2 = 0; c3_i2 < 4; c3_i2++) {
      c3_i3 = c3_i2 + 1;
      if ((c3_i3 < 1) || (c3_i3 > c3_position)) {
        emlrtDynamicBoundsCheckR2012b(c3_i3, 1, c3_position, &c3_d_emlrtBCI,
          &c3_st);
      }

      c3_textLocAndWidth[c3_i2] = c3_b_position_data[c3_i3 - 1];
    }

    c3_q0 = c3_textLocAndWidth[1];
    c3_q1 = 1;
    if ((c3_q1 < 0) && (c3_q0 > c3_q1 + MAX_int32_T)) {
      c3_qY = MAX_int32_T;
    } else if ((c3_q1 > 0) && (c3_q0 < c3_q1 + MIN_int32_T)) {
      c3_qY = MIN_int32_T;
    } else {
      c3_qY = c3_q0 - c3_q1;
    }

    c3_textLocAndWidth[1] = c3_qY;
    for (c3_i4 = 0; c3_i4 < 2; c3_i4++) {
      c3_textPosition[c3_i4] = c3_textLocAndWidth[c3_i4];
    }

    c3_shapeWidth = c3_textLocAndWidth[2];
    c3_shapeHeight = c3_textLocAndWidth[3];
    for (c3_i5 = 0; c3_i5 < 2764800; c3_i5++) {
      chartInstance->c3_b_RGB[c3_i5] = c3_c_RGB[c3_i5];
    }

    c3_st.site = &c3_emlrtRSI;
    c3_insertText(chartInstance, &c3_st, chartInstance->c3_b_RGB,
                  c3_textPosition, c3_label, c3_textColor_data, c3_color_data,
                  c3_shapeWidth, c3_shapeHeight, c3_c_RGB);
  }
}

static void c3_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], real_T
  c3_position_data[], int32_T c3_position_size[2], char_T c3_label[10], uint8_T
  c3_c_RGB[2764800], int32_T c3_b_position_data[], int32_T c3_b_position_size[2],
  char_T c3_outLabel[10], boolean_T *c3_showOrientation, uint8_T c3_color_data[],
  int32_T c3_color_size[2], uint8_T c3_textColor_data[], int32_T
  c3_textColor_size[2], boolean_T *c3_isEmpty)
{
  int32_T c3_i;
  for (c3_i = 0; c3_i < 10; c3_i++) {
    c3_outLabel[c3_i] = c3_label[c3_i];
  }

  c3_d_validateAndParseInputs(chartInstance, c3_sp, c3_b_I, c3_position_data,
    c3_position_size, c3_c_RGB, c3_b_position_data, c3_b_position_size,
    c3_showOrientation, c3_color_data, c3_color_size, c3_textColor_data,
    c3_textColor_size, c3_isEmpty);
}

static void c3_assertValidSizeArg(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_insertShape(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T c3_position_data[],
  int32_T c3_position_size[2], uint8_T c3_varargin_4_data[], uint8_T c3_c_RGB
  [2764800])
{
  emlrtStack c3_st;
  int32_T c3_positionOut_data[4];
  int32_T c3_color_size[2];
  int32_T c3_positionOut_size[2];
  uint8_T c3_color_data[3];
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_st.site = &c3_o_emlrtRSI;
  c3_b_validateAndParseInputs(chartInstance, &c3_st, c3_b_I, c3_position_data,
    c3_position_size, c3_varargin_4_data, chartInstance->c3_tmpRGB,
    c3_positionOut_data, c3_positionOut_size, c3_color_data, c3_color_size);
  c3_shapeInserterCG(chartInstance, chartInstance->c3_tmpRGB,
                     c3_positionOut_data, c3_positionOut_size, c3_color_data,
                     c3_c_RGB);
}

static void c3_b_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T
  c3_position_data[], int32_T c3_position_size[2], uint8_T c3_varargin_4_data[],
  uint8_T c3_c_RGB[2764800], int32_T c3_positionOut_data[], int32_T
  c3_positionOut_size[2], uint8_T c3_colorOut_data[], int32_T c3_colorOut_size[2])
{
  static real_T c3_dv[2] = { 0.0, 3.0 };

  static char_T c3_cv2[37] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'S', 'h', 'a', 'p', 'e', ':', 'p', 'o', 's', 'C', 'o', 'l',
    's', 'N', 'o', 't', '4', 'F', 'o', 'r', 'R', 'e', 'c', 't' };

  static char_T c3_b_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 's',
    'e', 'r', 't', 'S', 'h', 'a', 'p', 'e', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T c3_cv3[9] = { 'r', 'e', 'c', 't', 'a', 'n', 'g', 'l', 'e' };

  static char_T c3_b_cv1[5] = { 'C', 'o', 'l', 'o', 'r' };

  emlrtStack c3_b_st;
  emlrtStack c3_c_st;
  emlrtStack c3_d_st;
  emlrtStack c3_e_st;
  emlrtStack c3_st;
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_b_k;
  real_T c3_d;
  real_T c3_posSize;
  int32_T c3_tmp_data[2];
  int32_T c3_b_jcol;
  int32_T c3_c_k;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_iacol;
  int32_T c3_ibmat;
  int32_T c3_jcol;
  int32_T c3_k;
  int32_T c3_loop_ub;
  boolean_T c3_b_p;
  boolean_T c3_condition;
  boolean_T c3_errCond;
  boolean_T c3_p;
  (void)chartInstance;
  c3_dv[0U] = rtNaN;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_c_st.prev = &c3_b_st;
  c3_c_st.tls = c3_b_st.tls;
  c3_d_st.prev = &c3_c_st;
  c3_d_st.tls = c3_c_st.tls;
  c3_e_st.prev = &c3_d_st;
  c3_e_st.tls = c3_d_st.tls;
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    c3_c_RGB[c3_i] = c3_b_I[c3_i];
  }

  c3_st.site = &c3_q_emlrtRSI;
  c3_b_st.site = &c3_t_emlrtRSI;
  c3_c_st.site = &c3_u_emlrtRSI;
  c3_d_st.site = &c3_v_emlrtRSI;
  c3_e_st.site = &c3_j_emlrtRSI;
  c3_p = true;
  for (c3_k = 0; c3_k < 2; c3_k++) {
    c3_b_k = (real_T)c3_k + 1.0;
    if (c3_p) {
      if (c3_dv[(int32_T)c3_b_k - 1] != c3_dv[(int32_T)c3_b_k - 1]) {
        c3_b_p = true;
      } else {
        c3_d = (real_T)(1 + (((int32_T)c3_b_k - 1) << 1));
        if (c3_dv[(int32_T)c3_b_k - 1] == c3_d) {
          c3_b_p = true;
        } else {
          c3_b_p = false;
        }
      }
    } else {
      c3_b_p = false;
    }

    c3_p = c3_b_p;
  }

  if (!c3_p) {
    c3_y = NULL;
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c3_c_y = NULL;
    sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c3_e_st, &c3_e_emlrtMCI, "error", 0U, 2U, 14, c3_y, 14,
                sf_mex_call(&c3_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_e_st, NULL, "message", 1U, 2U, 14, c3_b_y, 14, c3_c_y)));
  }

  c3_st.site = &c3_r_emlrtRSI;
  c3_b_st.site = &c3_w_emlrtRSI;
  c3_posSize = (real_T)c3_position_size[1];
  if (c3_posSize != 4.0) {
    c3_errCond = true;
  } else {
    c3_errCond = false;
  }

  c3_c_st.site = &c3_y_emlrtRSI;
  c3_condition = c3_errCond;
  if (c3_condition) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c3_c_st, &c3_f_emlrtMCI, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_c_st, NULL, "message", 1U, 2U, 14, c3_e_y, 14, c3_f_y)));
  }

  c3_b_st.site = &c3_x_emlrtRSI;
  c3_c_st.site = &c3_ab_emlrtRSI;
  c3_st.site = &c3_s_emlrtRSI;
  c3_b_st.site = &c3_bb_emlrtRSI;
  if ((real_T)c3_position_size[1] == 2.0) {
    for (c3_i1 = 0; c3_i1 < 2; c3_i1++) {
      c3_tmp_data[c3_i1] = c3_position_data[c3_i1];
    }

    c3_c_st.site = &c3_cb_emlrtRSI;
    c3_positionOut_size[0] = 1;
    c3_positionOut_size[1] = 2;
    for (c3_i3 = 0; c3_i3 < 2; c3_i3++) {
      c3_positionOut_data[c3_i3] = c3_tmp_data[c3_i3];
    }
  } else {
    c3_positionOut_size[0] = 1;
    c3_positionOut_size[1] = c3_position_size[1];
    c3_loop_ub = c3_position_size[1] - 1;
    for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
      c3_positionOut_data[c3_i2] = c3_position_data[c3_i2];
    }
  }

  c3_colorOut_size[0] = 1;
  c3_colorOut_size[1] = 3;
  for (c3_jcol = 0; c3_jcol < 3; c3_jcol++) {
    c3_b_jcol = c3_jcol;
    c3_iacol = c3_b_jcol;
    c3_ibmat = c3_b_jcol;
    for (c3_c_k = 0; c3_c_k < 1; c3_c_k++) {
      c3_colorOut_data[c3_ibmat] = c3_varargin_4_data[c3_iacol];
    }
  }
}

static void c3_shapeInserterCG(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  uint8_T c3_b_tmpRGB[2764800], int32_T c3_positionOut_data[], int32_T
  c3_positionOut_size[2], uint8_T c3_color_data[], uint8_T c3_outImage[2764800])
{
  static boolean_T c3_bv[2] = { false, true };

  void *c3_colPtr;
  void *c3_polygonEdgePtr;
  void *c3_posPtr;
  void *c3_ptrObj;
  void *c3_ptsDWPtr;
  real_T c3_c_i;
  real_T c3_d;
  real_T c3_d1;
  int32_T c3_b_positionOut_data[4];
  int32_T c3_b_i;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i6;
  int32_T c3_loop_ub;
  uint32_T c3_b_dimens2;
  int16_T c3_c_dimens2;
  int16_T c3_dimens2;
  int16_T c3_i5;
  int16_T c3_i7;
  int16_T c3_i8;
  uint8_T c3_pixCount[1280];
  uint8_T c3_b_color_data[3];
  boolean_T c3_isInitialise;
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    chartInstance->c3_I[c3_i] = c3_b_tmpRGB[c3_i];
  }

  for (c3_i1 = 0; c3_i1 < 2764800; c3_i1++) {
    c3_outImage[c3_i1] = 0U;
  }

  c3_i2 = c3_positionOut_size[1];
  if (c3_i2 > 32767) {
    c3_i2 = 32767;
  } else if (c3_i2 < -32768) {
    c3_i2 = -32768;
  }

  c3_dimens2 = (int16_T)c3_i2;
  for (c3_i3 = 0; c3_i3 < 1280; c3_i3++) {
    c3_pixCount[c3_i3] = 0U;
  }

  c3_ptrObj = NULL;
  constructDrawBaseObjectShape(&c3_ptrObj);
  c3_polygonEdgePtr = NULL;
  c3_loop_ub = c3_positionOut_size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_b_positionOut_data[c3_i4] = c3_positionOut_data[c3_i4];
  }

  c3_i5 = c3_dimens2;
  if (c3_i5 < 0) {
    c3_i5 = 0;
  }

  c3_b_dimens2 = (uint32_T)c3_i5;
  c3_posPtr = NULL;
  getPositionDataPointer(&c3_posPtr, &c3_b_positionOut_data[0], 1U, c3_b_dimens2);
  c3_c_dimens2 = c3_dimens2;
  c3_ptsDWPtr = NULL;
  getPtsDWPointer(&c3_ptsDWPtr, 1, 2, 1, c3_c_dimens2);
  for (c3_i6 = 0; c3_i6 < 3; c3_i6++) {
    c3_b_color_data[c3_i6] = c3_color_data[c3_i6];
  }

  c3_colPtr = NULL;
  getColorDataPointer_uint8(&c3_colPtr, &c3_b_color_data[0], 1U, 3U);
  for (c3_b_i = 0; c3_b_i < 2; c3_b_i++) {
    c3_c_i = (real_T)c3_b_i + 1.0;
    c3_d = muDoubleScalarRound(c3_c_i - 1.0);
    if (c3_d < 32768.0) {
      if (c3_d >= -32768.0) {
        c3_i7 = (int16_T)c3_d;
      } else {
        c3_i7 = MIN_int16_T;
      }
    } else if (c3_d >= 32768.0) {
      c3_i7 = MAX_int16_T;
    } else {
      c3_i7 = 0;
    }

    c3_isInitialise = initialiseDrawbaseShape(c3_ptrObj, c3_i7, 1);
    if (!c3_isInitialise) {
      allocatePolygonEdgePointer(&c3_polygonEdgePtr, 1, 2, 1, c3_dimens2, false,
        c3_bv[(int32_T)c3_c_i - 1]);
      c3_d1 = muDoubleScalarRound(c3_c_i - 1.0);
      if (c3_d1 < 32768.0) {
        if (c3_d1 >= -32768.0) {
          c3_i8 = (int16_T)c3_d1;
        } else {
          c3_i8 = MIN_int16_T;
        }
      } else if (c3_d1 >= 32768.0) {
        c3_i8 = MAX_int16_T;
      } else {
        c3_i8 = 0;
      }

      instantiateDrawBaseShape_uint8(c3_ptrObj, &c3_outImage[0],
        &chartInstance->c3_I[0], c3_posPtr, c3_colPtr, 0.6, 1, 1, true, 720,
        1280, 3, 2, 1, c3_dimens2, 1, false, c3_bv[(int32_T)c3_c_i - 1],
        &c3_pixCount[0], c3_i8, c3_ptsDWPtr, c3_polygonEdgePtr);
    }
  }

  mDrawShapes(c3_ptrObj, false, true, 1, 1, 720, 1280);
  deallocateMemoryShape(c3_ptrObj);
  deallocatePolygonEdgePointer(c3_polygonEdgePtr);
  deletePositionDataPointer(c3_posPtr);
  deletePtsDWPointer(c3_ptsDWPtr);
  deleteColorDataPointer_uint8(c3_colPtr);
}

static real_T c3_sumColumnB(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  int16_T c3_x[10])
{
  real_T c3_y;
  int32_T c3_b_k;
  int32_T c3_k;
  (void)chartInstance;
  c3_y = (real_T)c3_x[0];
  for (c3_k = 0; c3_k < 9; c3_k++) {
    c3_b_k = c3_k;
    c3_y += (real_T)c3_x[c3_b_k + 1];
  }

  return c3_y;
}

static real_T c3_sum(SFc3_vdynblksskidpadInstanceStruct *chartInstance, const
                     emlrtStack *c3_sp, int16_T c3_x_data[], int32_T c3_x_size[2])
{
  emlrtStack c3_st;
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  real_T c3_y;
  int32_T c3_b_vlen;
  int32_T c3_c_vlen;
  int32_T c3_d_vlen;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_vlen;
  int16_T c3_b_x_data[10];
  boolean_T c3_b;
  boolean_T c3_b1;
  boolean_T c3_b2;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_st.site = &c3_kc_emlrtRSI;
  c3_b = (c3_x_size[1] == 1);
  if (c3_b || ((real_T)c3_x_size[1] != 1.0)) {
    c3_b1 = true;
  } else {
    c3_b1 = false;
  }

  if (!c3_b1) {
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c3_c_y = NULL;
    sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c3_st, &c3_k_emlrtMCI, "error", 0U, 2U, 14, c3_b_y, 14,
                sf_mex_call(&c3_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_st, NULL, "message", 1U, 1U, 14, c3_c_y)));
  }

  c3_vlen = c3_x_size[1];
  c3_b_vlen = c3_vlen;
  c3_b2 = (c3_x_size[1] == 0);
  if (c3_b2 || (c3_b_vlen == 0)) {
    c3_y = 0.0;
  } else {
    c3_loop_ub = c3_x_size[1] - 1;
    for (c3_i = 0; c3_i <= c3_loop_ub; c3_i++) {
      c3_b_x_data[c3_i] = c3_x_data[c3_i];
    }

    c3_c_vlen = c3_b_vlen;
    c3_d_vlen = c3_c_vlen;
    c3_y = c3_b_sumColumnB(chartInstance, c3_b_x_data, c3_d_vlen);
  }

  return c3_y;
}

static real_T c3_b_sumColumnB(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  int16_T c3_x_data[], int32_T c3_vlen)
{
  real_T c3_y;
  int32_T c3_b_k;
  int32_T c3_b_vlen;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_k;
  (void)chartInstance;
  c3_b_vlen = c3_vlen - 1;
  c3_y = (real_T)c3_x_data[0];
  c3_i = c3_b_vlen;
  c3_i1 = (uint8_T)c3_i - 1;
  for (c3_k = 0; c3_k <= c3_i1; c3_k++) {
    c3_b_k = c3_k;
    c3_y += (real_T)c3_x_data[c3_b_k + 1];
  }

  return c3_y;
}

static void c3_insertGlyphs(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_imgIn[2764800], uint16_T c3_ucTextU16[10],
  c3_sS4wEAasIzogBF5n8Y5amaF c3_textLocationXY, uint8_T c3_imgOut[2764800])
{
  int32_T c3_i;
  int32_T c3_i1;
  uint16_T c3_b_ucTextU16[10];
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    c3_imgOut[c3_i] = c3_imgIn[c3_i];
  }

  for (c3_i1 = 0; c3_i1 < 10; c3_i1++) {
    c3_b_ucTextU16[c3_i1] = c3_ucTextU16[c3_i1];
  }

  c3_b_insertGlyphs(chartInstance, c3_sp, c3_imgOut, c3_b_ucTextU16,
                    c3_textLocationXY);
}

static void c3_insertText(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T c3_position[2],
  char_T c3_text[10], uint8_T c3_varargin_6_data[], uint8_T c3_varargin_8_data[],
  int32_T c3_varargin_14, int32_T c3_varargin_16, uint8_T c3_c_RGB[2764800])
{
  c3_cell_wrap_0 c3_b_text[1];
  c3_sS4wEAasIzogBF5n8Y5amaF c3_textLocationXY;
  emlrtStack c3_st;
  int32_T c3_b_position[2];
  int32_T c3_boxColor_size[2];
  int32_T c3_textColor_size[2];
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i4;
  int32_T c3_shapeHeight;
  int32_T c3_shapeWidth;
  uint16_T c3_b_thisTextU16[10];
  uint16_T c3_thisTextU16[10];
  char_T c3_thisText[10];
  int8_T c3_i3;
  uint8_T c3_boxColor_data[3];
  uint8_T c3_textColor_data[3];
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_b_position[c3_i] = c3_position[c3_i];
  }

  c3_st.site = &c3_mb_emlrtRSI;
  c3_e_validateAndParseInputs(chartInstance, &c3_st, c3_b_I, c3_text,
    c3_varargin_6_data, c3_varargin_8_data, c3_varargin_14, c3_varargin_16,
    c3_c_RGB, c3_b_text, c3_textColor_data, c3_textColor_size, c3_boxColor_data,
    c3_boxColor_size, &c3_shapeWidth, &c3_shapeHeight);
  for (c3_i1 = 0; c3_i1 < 10; c3_i1++) {
    c3_thisText[c3_i1] = c3_b_text[0].f1[c3_i1];
  }

  for (c3_i2 = 0; c3_i2 < 10; c3_i2++) {
    c3_i3 = (int8_T)c3_thisText[c3_i2];
    if (c3_i3 < 0) {
      c3_i3 = 0;
    }

    c3_b_thisTextU16[c3_i2] = (uint16_T)c3_i3;
  }

  c3_st.site = &c3_nb_emlrtRSI;
  for (c3_i4 = 0; c3_i4 < 10; c3_i4++) {
    c3_thisTextU16[c3_i4] = c3_b_thisTextU16[c3_i4];
  }

  c3_textLocationXY = c3_b_insertTextBox(chartInstance, &c3_st, c3_c_RGB,
    c3_b_position, c3_thisTextU16, &c3_boxColor_data[0], c3_shapeWidth,
    c3_shapeHeight);
  c3_st.site = &c3_ob_emlrtRSI;
  c3_b_insertGlyphs(chartInstance, &c3_st, c3_c_RGB, c3_b_thisTextU16,
                    c3_textLocationXY);
}

static void c3_c_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], int32_T
  c3_position[2], char_T c3_text[10], uint8_T c3_varargin_6_data[], uint8_T
  c3_varargin_8_data[], int32_T c3_varargin_14, int32_T c3_varargin_16, uint8_T
  c3_c_RGB[2764800], int32_T c3_b_position[2], c3_cell_wrap_0 c3_outText[1],
  uint8_T c3_textColor_data[], int32_T c3_textColor_size[2], uint8_T
  c3_boxColor_data[], int32_T c3_boxColor_size[2], int32_T *c3_shapeWidth,
  int32_T *c3_shapeHeight)
{
  int32_T c3_i;
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_b_position[c3_i] = c3_position[c3_i];
  }

  c3_e_validateAndParseInputs(chartInstance, c3_sp, c3_b_I, c3_text,
    c3_varargin_6_data, c3_varargin_8_data, c3_varargin_14, c3_varargin_16,
    c3_c_RGB, c3_outText, c3_textColor_data, c3_textColor_size, c3_boxColor_data,
    c3_boxColor_size, c3_shapeWidth, c3_shapeHeight);
}

static void c3_insertTextBox(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_c_RGB[2764800], int32_T c3_position[2],
  uint16_T c3_ucTextU16[10], uint8_T c3_boxColor[3], int32_T c3_shapeWidth,
  int32_T c3_shapeHeight, uint8_T c3_d_RGB[2764800], c3_sS4wEAasIzogBF5n8Y5amaF *
  c3_textLocationXY)
{
  int32_T c3_b_position[2];
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  uint16_T c3_b_ucTextU16[10];
  uint8_T c3_b_boxColor[3];
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    c3_d_RGB[c3_i] = c3_c_RGB[c3_i];
  }

  for (c3_i1 = 0; c3_i1 < 2; c3_i1++) {
    c3_b_position[c3_i1] = c3_position[c3_i1];
  }

  for (c3_i2 = 0; c3_i2 < 10; c3_i2++) {
    c3_b_ucTextU16[c3_i2] = c3_ucTextU16[c3_i2];
  }

  for (c3_i3 = 0; c3_i3 < 3; c3_i3++) {
    c3_b_boxColor[c3_i3] = c3_boxColor[c3_i3];
  }

  *c3_textLocationXY = c3_b_insertTextBox(chartInstance, c3_sp, c3_d_RGB,
    c3_b_position, c3_b_ucTextU16, c3_b_boxColor, c3_shapeWidth, c3_shapeHeight);
}

const mxArray *sf_c3_vdynblksskidpad_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static void c3_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier,
  uint8_T c3_y[2764800])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_nullptr);
}

static void c3_b_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_y[2764800])
{
  int32_T c3_i;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), chartInstance->c3_c_uv, 1, 3, 0U,
                1, 0U, 3, 720, 1280, 3);
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    c3_y[c3_i] = chartInstance->c3_c_uv[c3_i];
  }

  sf_mex_destroy(&c3_u);
}

static uint8_T c3_c_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static uint8_T c3_d_emlrt_marshallIn(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_b_u;
  uint8_T c3_y;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_slStringInitializeDynamicBuffers
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_chart_data_browse_helper(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T
  *c3_isValueTooBig)
{
  const mxArray *c3_m = NULL;
  uint64_T c3_u;
  uint64_T c3_u1;
  int32_T c3_tmp_data[500];
  int32_T c3_tmp_size[2];
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_loop_ub;
  *c3_mxData = NULL;
  *c3_mxData = NULL;
  *c3_isValueTooBig = 0U;
  switch (c3_ssIdNumber) {
   case 4U:
    c3_i = (*chartInstance->c3_bboxes_sizes)[0] *
      (*chartInstance->c3_bboxes_sizes)[1];
    if (c3_i <= 0) {
      c3_u = 0ULL;
    } else {
      c3_u = (uint64_T)c3_i << 3;
    }

    if (c3_u <= 150000ULL) {
      sf_mex_assign(c3_mxData, sf_mex_create("mxData",
        chartInstance->c3_bboxes_data, 0, 0U, 1U, 0U, 2,
        (*chartInstance->c3_bboxes_sizes)[0], (*chartInstance->c3_bboxes_sizes)
        [1]), false);
    } else {
      *c3_isValueTooBig = 1U;
    }
    break;

   case 7U:
    c3_i1 = (*chartInstance->c3_labels_sizes)[0];
    if (c3_i1 <= 0) {
      c3_u1 = 0ULL;
    } else {
      c3_u1 = (uint64_T)c3_i1 << 2;
    }

    if (c3_u1 <= 150000ULL) {
      c3_tmp_size[0] = (*chartInstance->c3_labels_sizes)[0];
      c3_loop_ub = (*chartInstance->c3_labels_sizes)[0] - 1;
      for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
        c3_tmp_data[c3_i2] = (int32_T)(*chartInstance->c3_labels_data)[c3_i2];
      }

      sf_mex_assign(&c3_m, sf_mex_create("unnamed temp", &c3_tmp_data, 6, 0U, 1U,
        0U, 2, c3_tmp_size[0], 1), false);
      sf_mex_assign(c3_mxData, sf_mex_create_enum("yolov2ConeDetector_labels",
        c3_m), false);
    } else {
      *c3_isValueTooBig = 1U;
    }
    break;

   case 5U:
    *c3_isValueTooBig = 1U;
    break;

   case 6U:
    *c3_isValueTooBig = 1U;
    break;
  }

  sf_mex_destroy(&c3_m);
}

static void c3_d_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], real_T
  c3_position_data[], int32_T c3_position_size[2], uint8_T c3_c_RGB[2764800],
  int32_T c3_b_position_data[], int32_T c3_b_position_size[2], boolean_T
  *c3_showOrientation, uint8_T c3_color_data[], int32_T c3_color_size[2],
  uint8_T c3_textColor_data[], int32_T c3_textColor_size[2], boolean_T
  *c3_isEmpty)
{
  static char_T c3_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c3_cv4[46] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'O', 'b', 'j', 'e', 'c', 't', 'A', 'n', 'n', 'o', 't', 'a',
    't', 'i', 'o', 'n', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'N', 'u', 'm',
    'C', 'o', 'l', 'P', 'o', 's' };

  static char_T c3_b_cv[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 's',
    'e', 'r', 't', 'O', 'b', 'j', 'e', 'c', 't', 'A', 'n', 'n', 'o', 't', 'a',
    't', 'i', 'o', 'n', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
    'n', 'i', 't', 'e' };

  static char_T c3_cv3[44] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'O', 'b', 'j', 'e', 'c', 't', 'A', 'n', 'n', 'o', 't', 'a',
    't', 'i', 'o', 'n', ':', 'l', 'a', 'b', 'e', 'l', 'N', 'e', 'w', 'L', 'i',
    'n', 'e', 'C', 'R' };

  static char_T c3_cv2[25] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '3', ',', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ',' };

  static uint8_T c3_d_uv[3] = { MAX_uint8_T, MAX_uint8_T, 0U };

  emlrtStack c3_b_st;
  emlrtStack c3_st;
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_g_y = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_b_k;
  real_T c3_b_x;
  real_T c3_c_x;
  real_T c3_d;
  real_T c3_d1;
  real_T c3_numColsPositions;
  real_T c3_x;
  int32_T c3_b_ibmat;
  int32_T c3_b_itilerow;
  int32_T c3_b_jcol;
  int32_T c3_c_jcol;
  int32_T c3_d_jcol;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_iacol;
  int32_T c3_ibmat;
  int32_T c3_itilerow;
  int32_T c3_j;
  int32_T c3_jcol;
  int32_T c3_k;
  int32_T c3_loop_ub;
  boolean_T c3_b;
  boolean_T c3_b1;
  boolean_T c3_b2;
  boolean_T c3_b3;
  boolean_T c3_b4;
  boolean_T c3_b5;
  boolean_T c3_b_b;
  boolean_T c3_b_condition;
  boolean_T c3_b_hasCarriageRet;
  boolean_T c3_b_hasNewLine;
  boolean_T c3_b_isEmpty;
  boolean_T c3_c_b;
  boolean_T c3_condition;
  boolean_T c3_d_b;
  boolean_T c3_exitg1;
  boolean_T c3_hasCarriageRet;
  boolean_T c3_hasNewLine;
  boolean_T c3_p;
  (void)chartInstance;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    c3_c_RGB[c3_i] = c3_b_I[c3_i];
  }

  c3_st.site = &c3_e_emlrtRSI;
  c3_b_st.site = &c3_j_emlrtRSI;
  c3_p = true;
  c3_d = (real_T)c3_position_size[1];
  c3_i1 = (int32_T)c3_d - 1;
  c3_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_k <= c3_i1)) {
    c3_b_k = (real_T)c3_k + 1.0;
    c3_x = c3_position_data[(int32_T)c3_b_k - 1];
    c3_b_x = c3_x;
    c3_b_b = muDoubleScalarIsInf(c3_b_x);
    c3_b1 = !c3_b_b;
    c3_c_x = c3_x;
    c3_c_b = muDoubleScalarIsNaN(c3_c_x);
    c3_b2 = !c3_c_b;
    c3_d_b = (c3_b1 && c3_b2);
    if (c3_d_b) {
      c3_k++;
    } else {
      c3_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_p) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_y = NULL;
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_c_y = NULL;
    sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    sf_mex_call(&c3_b_st, &c3_emlrtMCI, "error", 0U, 2U, 14, c3_y, 14,
                sf_mex_call(&c3_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_b_st, NULL, "message", 1U, 2U, 14, c3_b_y, 14, c3_c_y)));
  }

  c3_b_position_size[0] = 1;
  c3_b_position_size[1] = c3_position_size[1];
  c3_loop_ub = c3_position_size[1] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
    c3_d1 = muDoubleScalarRound(c3_position_data[c3_i2]);
    if (c3_d1 < 2.147483648E+9) {
      if (c3_d1 >= -2.147483648E+9) {
        c3_i3 = (int32_T)c3_d1;
      } else {
        c3_i3 = MIN_int32_T;
      }
    } else if (c3_d1 >= 2.147483648E+9) {
      c3_i3 = MAX_int32_T;
    } else {
      c3_i3 = 0;
    }

    c3_b_position_data[c3_i2] = c3_i3;
  }

  c3_b3 = (c3_b_position_size[1] == 0);
  if (c3_b3) {
    c3_b_isEmpty = true;
  } else {
    c3_b_isEmpty = false;
  }

  *c3_isEmpty = c3_b_isEmpty;
  c3_st.site = &c3_f_emlrtRSI;
  c3_hasNewLine = false;
  c3_hasCarriageRet = false;
  for (c3_j = 0; c3_j < 10; c3_j++) {
    if (c3_hasNewLine) {
      c3_b_hasNewLine = true;
    } else {
      c3_b_hasNewLine = false;
    }

    c3_hasNewLine = c3_b_hasNewLine;
    if (c3_hasCarriageRet) {
      c3_b_hasCarriageRet = true;
    } else {
      c3_b_hasCarriageRet = false;
    }

    c3_hasCarriageRet = c3_b_hasCarriageRet;
  }

  if (c3_hasNewLine || c3_hasCarriageRet) {
    c3_b4 = true;
  } else {
    c3_b4 = false;
  }

  c3_b_st.site = &c3_k_emlrtRSI;
  c3_condition = c3_b4;
  if (c3_condition) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    sf_mex_call(&c3_b_st, &c3_b_emlrtMCI, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(&c3_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_b_st, NULL, "message", 1U, 1U, 14, c3_e_y)));
  }

  *c3_showOrientation = false;
  c3_st.site = &c3_g_emlrtRSI;
  c3_numColsPositions = (real_T)c3_b_position_size[1];
  c3_b5 = (c3_b_position_size[1] == 0);
  if (!c3_b5) {
    c3_b_st.site = &c3_l_emlrtRSI;
    c3_b_condition = (c3_numColsPositions != 4.0);
    if (c3_b_condition) {
      c3_f_y = NULL;
      sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                    false);
      c3_g_y = NULL;
      sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                    false);
      sf_mex_call(&c3_b_st, &c3_b_emlrtMCI, "error", 0U, 2U, 14, c3_f_y, 14,
                  sf_mex_call(&c3_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c3_b_st, NULL, "message", 1U, 1U, 14, c3_g_y)));
    }
  }

  c3_st.site = &c3_h_emlrtRSI;
  c3_b_st.site = &c3_m_emlrtRSI;
  c3_color_size[0] = 1;
  c3_color_size[1] = 3;
  for (c3_jcol = 0; c3_jcol < 3; c3_jcol++) {
    c3_b_jcol = c3_jcol;
    c3_iacol = c3_b_jcol;
    c3_ibmat = c3_b_jcol;
    for (c3_itilerow = 0; c3_itilerow < 1; c3_itilerow++) {
      c3_color_data[c3_ibmat] = c3_d_uv[c3_iacol];
    }
  }

  c3_st.site = &c3_i_emlrtRSI;
  c3_b_st.site = &c3_m_emlrtRSI;
  c3_textColor_size[0] = 1;
  c3_textColor_size[1] = 3;
  for (c3_c_jcol = 0; c3_c_jcol < 3; c3_c_jcol++) {
    c3_d_jcol = c3_c_jcol;
    c3_b_ibmat = c3_d_jcol;
    for (c3_b_itilerow = 0; c3_b_itilerow < 1; c3_b_itilerow++) {
      c3_textColor_data[c3_b_ibmat] = 0U;
    }
  }
}

static void c3_b_insertGlyphs(SFc3_vdynblksskidpadInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, uint8_T c3_imgIn[2764800], uint16_T c3_ucTextU16[10],
  c3_sS4wEAasIzogBF5n8Y5amaF c3_textLocationXY)
{
  static uint32_T c3_uv2[261] = { 0U, 0U, 0U, 56U, 56U, 74U, 86U, 158U, 224U,
    296U, 368U, 377U, 421U, 465U, 489U, 545U, 551U, 558U, 560U, 615U, 678U, 732U,
    786U, 840U, 903U, 957U, 1020U, 1074U, 1128U, 1191U, 1205U, 1223U, 1279U,
    1303U, 1359U, 1404U, 1494U, 1575U, 1629U, 1701U, 1773U, 1827U, 1872U, 1944U,
    2007U, 2025U, 2080U, 2143U, 2197U, 2278U, 2341U, 2422U, 2476U, 2586U, 2649U,
    2703U, 2775U, 2838U, 2910U, 3009U, 3081U, 3153U, 3216U, 3249U, 3304U, 3337U,
    3379U, 3385U, 3393U, 3442U, 3496U, 3538U, 3601U, 3643U, 3688U, 3751U, 3805U,
    3823U, 3867U, 3921U, 3939U, 4009U, 4051U, 4100U, 4154U, 4217U, 4245U, 4287U,
    4327U, 4369U, 4418U, 4488U, 4537U, 4600U, 4649U, 4693U, 4715U, 4759U, 6416U,
    6515U, 6722U, 6890U, 7390U, 7906U, 8394U, 8745U, 8675U, 8815U, 8955U, 8885U,
    9018U, 9165U, 9285U, 9225U, 9345U, 9405U, 9499U, 9459U, 9539U, 9589U, 9695U,
    9825U, 9755U, 9895U, 10035U, 9965U, 10263U, 10203U, 10323U, 10383U, 0U,
    5322U, 4791U, 4845U, 5049U, 0U, 5515U, 8621U, 5286U, 5119U, 0U, 5453U, 5115U,
    0U, 6623U, 8061U, 0U, 5337U, 0U, 0U, 4955U, 5461U, 0U, 0U, 0U, 0U, 0U, 5209U,
    5619U, 0U, 9095U, 10154U, 5939U, 4773U, 5255U, 0U, 0U, 0U, 0U, 5225U, 5639U,
    0U, 4773U, 5984U, 6308U, 7798U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 10098U, 0U,
    10587U, 0U, 0U, 4899U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 6200U, 6962U,
    6092U, 7034U, 6818U, 7148U, 7196U, 7256U, 7100U, 7582U, 7690U, 0U, 7474U,
    8226U, 8310U, 8142U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 5583U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 5027U, 7300U, 9625U, 8471U, 10437U, 8567U, 10521U, 0U, 8005U,
    5595U, 5393U, 5423U, 5759U, 5669U, 5849U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 5279U, 5316U, 5581U };

  static int16_T c3_b_iv[261] = { 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1,
    0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1,
    0, 1, 1, -2, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0,
    2, 0, 1, 0, 0, 0, 0, 0, 1, 1, -1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 2,
    2, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, -1, 0, -1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  static int16_T c3_iv1[261] = { 8, 0, 0, 0, 9, 9, 9, 10, 9, 9, 9, 9, 9, 9, 7, 1,
    4, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 7, 7, 7, 5, 7, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 0,
    10, 7, 9, 7, 9, 7, 9, 7, 9, 9, 9, 9, 9, 7, 7, 7, 7, 7, 7, 7, 8, 7, 7, 7, 7,
    7, 7, 9, 9, 9, 5, 11, 12, 9, 12, 12, 11, 11, 10, 10, 10, 9, 10, 11, 7, 10,
    10, 10, 9, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 10, 10, 10, 9, 0, 9, 9, 9,
    9, 0, 9, 9, 9, 9, 0, 10, 9, 0, 9, 9, 0, 7, 0, 0, 9, 7, 0, 0, 0, 0, 0, 9, 9,
    0, 7, 7, 7, 7, 5, 0, 0, 0, 0, 6, 6, 0, 0, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 9, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 11, 12, 12, 12, 11,
    12, 12, 12, 0, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 9, 10, 12, 10, 9, 9, 0, 7, 9, 9, 9, 9, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 10, 4 };

  static uint16_T c3_d_uv[261] = { 7U, 0U, 0U, 0U, 2U, 4U, 8U, 6U, 8U, 8U, 3U,
    4U, 4U, 6U, 8U, 2U, 7U, 2U, 5U, 7U, 6U, 6U, 6U, 7U, 6U, 7U, 6U, 6U, 7U, 2U,
    2U, 8U, 8U, 8U, 5U, 10U, 9U, 6U, 8U, 8U, 6U, 5U, 8U, 7U, 2U, 5U, 7U, 6U, 9U,
    7U, 9U, 6U, 10U, 7U, 6U, 8U, 7U, 8U, 11U, 8U, 8U, 7U, 3U, 5U, 3U, 7U, 6U, 4U,
    7U, 6U, 6U, 7U, 6U, 5U, 7U, 6U, 2U, 4U, 6U, 2U, 10U, 6U, 7U, 6U, 7U, 4U, 6U,
    5U, 6U, 7U, 10U, 7U, 7U, 7U, 4U, 2U, 4U, 7U, 9U, 9U, 8U, 6U, 7U, 9U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 6U, 6U, 6U, 6U, 6U, 4U, 4U, 5U, 4U, 6U, 7U, 7U, 7U, 7U,
    7U, 6U, 6U, 6U, 6U, 0U, 5U, 6U, 6U, 6U, 0U, 6U, 6U, 6U, 10U, 0U, 4U, 4U, 0U,
    11U, 9U, 0U, 8U, 0U, 0U, 8U, 6U, 0U, 0U, 0U, 0U, 0U, 4U, 5U, 0U, 10U, 7U, 5U,
    2U, 8U, 0U, 0U, 0U, 0U, 6U, 6U, 0U, 0U, 9U, 9U, 9U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 8U, 0U, 7U, 0U, 0U, 8U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 9U, 6U,
    9U, 6U, 6U, 4U, 5U, 4U, 4U, 9U, 9U, 0U, 9U, 7U, 7U, 7U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 4U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 2U, 10U, 7U, 8U, 7U, 6U, 6U,
    0U, 8U, 4U, 5U, 5U, 10U, 10U, 10U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 7U, 6U, 2U };

  static uint16_T c3_uv1[261] = { 8U, 0U, 0U, 0U, 9U, 3U, 9U, 11U, 9U, 9U, 3U,
    11U, 11U, 4U, 7U, 3U, 1U, 1U, 11U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    7U, 9U, 7U, 3U, 7U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 11U, 9U, 9U,
    9U, 9U, 9U, 9U, 11U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 11U, 11U, 11U, 6U,
    1U, 2U, 7U, 9U, 7U, 9U, 7U, 9U, 9U, 9U, 9U, 11U, 9U, 9U, 7U, 7U, 7U, 9U, 9U,
    7U, 7U, 8U, 7U, 7U, 7U, 7U, 9U, 7U, 11U, 11U, 11U, 2U, 11U, 12U, 12U, 12U,
    12U, 11U, 11U, 10U, 10U, 10U, 9U, 10U, 11U, 10U, 10U, 10U, 10U, 9U, 10U, 10U,
    10U, 9U, 10U, 10U, 10U, 10U, 9U, 10U, 10U, 10U, 10U, 9U, 0U, 3U, 9U, 9U, 11U,
    0U, 11U, 9U, 5U, 9U, 0U, 2U, 1U, 0U, 9U, 9U, 0U, 7U, 0U, 0U, 9U, 9U, 0U, 0U,
    0U, 0U, 0U, 4U, 4U, 0U, 7U, 7U, 9U, 9U, 3U, 0U, 0U, 0U, 0U, 5U, 5U, 0U, 0U,
    12U, 12U, 12U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 7U, 0U, 11U, 0U, 0U, 7U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 12U, 12U, 12U, 11U, 12U, 12U, 12U, 11U, 12U,
    12U, 12U, 0U, 12U, 12U, 12U, 12U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 3U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 11U, 9U, 10U, 12U, 12U, 9U, 11U, 0U, 7U, 6U, 6U, 6U,
    9U, 9U, 9U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 1U, 1U };

  static char_T c3_cv2[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  static char_T c3_b_cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm',
    'p', 't', 'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

  static char_T c3_b_cv[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  static uint8_T c3_uv3[10664] = { 60U, 96U, 96U, 96U, 96U, 96U, 60U, 96U, 0U,
    0U, 0U, 0U, 0U, 96U, 96U, 0U, 0U, 0U, 0U, 0U, 96U, 96U, 0U, 0U, 0U, 0U, 0U,
    96U, 96U, 0U, 0U, 0U, 0U, 0U, 96U, 96U, 0U, 0U, 0U, 0U, 0U, 96U, 96U, 0U, 0U,
    0U, 0U, 0U, 96U, 108U, 96U, 96U, 96U, 96U, 96U, 108U, 176U, 120U, 176U, 119U,
    172U, 115U, 165U, 108U, 158U, 101U, 151U, 94U, 144U, 87U, 0U, 0U, 176U, 120U,
    83U, 201U, 79U, 205U, 71U, 189U, 67U, 193U, 58U, 177U, 54U, 181U, 0U, 0U, 0U,
    185U, 6U, 117U, 75U, 0U, 0U, 0U, 3U, 187U, 0U, 172U, 20U, 0U, 0U, 0U, 48U,
    143U, 0U, 192U, 0U, 0U, 74U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 109U, 0U, 0U, 172U, 19U, 110U, 79U,
    0U, 0U, 214U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 225U, 0U, 0U, 69U, 123U, 3U, 187U, 0U, 0U, 0U, 0U, 125U, 67U,
    49U, 143U, 0U, 0U, 0U, 0U, 178U, 13U, 104U, 87U, 0U, 0U, 0U, 0U, 0U, 108U,
    40U, 0U, 0U, 3U, 155U, 245U, 230U, 104U, 0U, 89U, 202U, 130U, 73U, 164U, 7U,
    109U, 164U, 108U, 40U, 0U, 0U, 26U, 231U, 195U, 40U, 0U, 0U, 0U, 38U, 207U,
    190U, 29U, 0U, 0U, 0U, 108U, 163U, 223U, 7U, 0U, 0U, 108U, 40U, 230U, 38U,
    145U, 76U, 117U, 107U, 230U, 7U, 42U, 181U, 246U, 221U, 67U, 0U, 0U, 0U,
    108U, 40U, 0U, 0U, 80U, 234U, 221U, 50U, 0U, 0U, 106U, 126U, 211U, 40U, 81U,
    171U, 0U, 50U, 179U, 2U, 212U, 39U, 90U, 170U, 15U, 194U, 21U, 0U, 83U, 235U,
    222U, 52U, 170U, 60U, 0U, 0U, 0U, 0U, 0U, 114U, 117U, 0U, 0U, 0U, 0U, 0U,
    57U, 173U, 48U, 219U, 236U, 86U, 0U, 19U, 194U, 17U, 166U, 89U, 38U, 218U,
    1U, 176U, 53U, 0U, 167U, 92U, 45U, 220U, 123U, 109U, 0U, 0U, 49U, 221U, 236U,
    88U, 0U, 0U, 83U, 227U, 235U, 93U, 0U, 0U, 0U, 1U, 240U, 84U, 72U, 238U, 0U,
    0U, 0U, 0U, 230U, 69U, 73U, 208U, 0U, 0U, 0U, 3U, 171U, 218U, 208U, 42U, 0U,
    0U, 12U, 199U, 146U, 230U, 87U, 0U, 91U, 198U, 107U, 179U, 0U, 86U, 229U,
    17U, 111U, 162U, 129U, 183U, 0U, 0U, 172U, 181U, 177U, 80U, 55U, 252U, 110U,
    13U, 41U, 240U, 215U, 1U, 0U, 81U, 209U, 247U, 228U, 160U, 247U, 101U, 77U,
    MAX_uint8_T, 10U, 53U, 241U, 0U, 28U, 216U, 0U, 0U, 0U, 48U, 94U, 0U, 19U,
    216U, 35U, 0U, 150U, 115U, 0U, 6U, 239U, 26U, 0U, 43U, 240U, 0U, 0U, 65U,
    228U, 0U, 0U, 43U, 240U, 0U, 0U, 6U, 239U, 25U, 0U, 0U, 150U, 113U, 0U, 0U,
    19U, 216U, 35U, 0U, 0U, 48U, 94U, 107U, 34U, 0U, 0U, 51U, 209U, 8U, 0U, 0U,
    142U, 122U, 0U, 0U, 53U, 219U, 0U, 0U, 9U, MAX_uint8_T, 17U, 0U, 0U, 252U,
    40U, 0U, 9U, MAX_uint8_T, 17U, 0U, 52U, 219U, 0U, 0U, 140U, 122U, 0U, 50U,
    209U, 8U, 0U, 107U, 34U, 0U, 0U, 0U, 0U, 124U, 69U, 0U, 0U, 58U, 208U, 141U,
    142U, 217U, 9U, 0U, 19U, 131U, 142U, 2U, 0U, 0U, 123U, 57U, 109U, 70U, 0U,
    0U, 0U, 0U, 168U, 52U, 0U, 0U, 0U, 0U, 0U, 0U, 168U, 52U, 0U, 0U, 0U, 0U, 0U,
    0U, 168U, 52U, 0U, 0U, 0U, 180U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 60U, 0U, 0U, 0U, 168U, 52U, 0U, 0U,
    0U, 0U, 0U, 0U, 168U, 52U, 0U, 0U, 0U, 0U, 0U, 0U, 168U, 52U, 0U, 0U, 0U,
    212U, 160U, 105U, 147U, 186U, 51U, 32U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 20U, 212U, 160U, 0U, 0U, 0U, 220U,
    10U, 0U, 0U, 45U, 186U, 0U, 0U, 0U, 118U, 113U, 0U, 0U, 0U, 191U, 41U, 0U,
    0U, 13U, 218U, 0U, 0U, 0U, 80U, 151U, 0U, 0U, 0U, 153U, 78U, 0U, 0U, 0U,
    219U, 12U, 0U, 0U, 42U, 189U, 0U, 0U, 0U, 115U, 116U, 0U, 0U, 0U, 188U, 44U,
    0U, 0U, 0U, 0U, 6U, 155U, 244U, 222U, 79U, 0U, 0U, 130U, 192U, 23U, 68U,
    239U, 29U, 4U, 235U, 65U, 0U, 0U, 165U, 134U, 31U, MAX_uint8_T, 18U, 0U, 0U,
    119U, 182U, 53U, MAX_uint8_T, 4U, 0U, 0U, 105U, 204U, 31U, MAX_uint8_T, 18U,
    0U, 0U, 120U, 181U, 3U, 234U, 64U, 0U, 0U, 168U, 133U, 0U, 128U, 190U, 23U,
    70U, 240U, 29U, 0U, 6U, 156U, 245U, 223U, 79U, 0U, 1U, 60U, 149U, 157U, 0U,
    0U, 40U, 178U, 186U, 180U, 0U, 0U, 0U, 0U, 116U, 180U, 0U, 0U, 0U, 0U, 116U,
    180U, 0U, 0U, 0U, 0U, 116U, 180U, 0U, 0U, 0U, 0U, 116U, 180U, 0U, 0U, 0U, 0U,
    116U, 180U, 0U, 0U, 0U, 0U, 116U, 180U, 0U, 0U, 48U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 112U, 200U, MAX_uint8_T, 251U, 208U,
    65U, 0U, 0U, 0U, 8U, 120U, 240U, 10U, 0U, 0U, 0U, 18U, MAX_uint8_T, 42U, 0U,
    0U, 0U, 81U, 237U, 9U, 0U, 0U, 35U, 224U, 76U, 0U, 0U, 43U, 220U, 73U, 0U,
    0U, 30U, 226U, 64U, 0U, 0U, 0U, 187U, 148U, 0U, 0U, 0U, 0U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 40U, 168U, MAX_uint8_T,
    249U, 209U, 67U, 0U, 0U, 0U, 8U, 133U, 221U, 0U, 0U, 0U, 0U, 59U, 234U, 0U,
    0U, 4U, 38U, 183U, 111U, 0U, 0U, 252U, MAX_uint8_T, 183U, 26U, 0U, 0U, 3U,
    28U, 139U, 231U, 14U, 0U, 0U, 0U, 5U, 253U, 60U, 0U, 0U, 11U, 122U, 244U,
    20U, 200U, MAX_uint8_T, 246U, 202U, 67U, 0U, 0U, 0U, 0U, 9U, 211U, 156U, 0U,
    0U, 0U, 0U, 158U, 188U, 156U, 0U, 0U, 0U, 96U, 153U, 104U, 156U, 0U, 0U, 44U,
    200U, 9U, 104U, 156U, 0U, 12U, 205U, 41U, 0U, 104U, 156U, 0U, 97U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 196U, 0U,
    0U, 0U, 0U, 124U, 156U, 0U, 0U, 0U, 0U, 0U, 124U, 156U, 0U, 0U, 0U, 0U, 0U,
    124U, 156U, 0U, 100U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 0U,
    100U, 160U, 0U, 0U, 0U, 0U, 100U, 160U, 0U, 0U, 0U, 0U, 100U, 253U, 224U,
    147U, 16U, 0U, 0U, 8U, 49U, 194U, 180U, 0U, 0U, 0U, 0U, 43U, MAX_uint8_T,
    16U, 0U, 0U, 0U, 35U, MAX_uint8_T, 25U, 0U, 0U, 18U, 167U, 204U, 0U, 140U,
    MAX_uint8_T, 236U, 173U, 30U, 0U, 0U, 0U, 117U, 225U, 254U, MAX_uint8_T, 72U,
    0U, 100U, 215U, 48U, 2U, 0U, 0U, 0U, 219U, 80U, 0U, 0U, 0U, 0U, 17U,
    MAX_uint8_T, 117U, 226U, 237U, 144U, 3U, 43U, MAX_uint8_T, 169U, 20U, 45U,
    229U, 107U, 29U, MAX_uint8_T, 40U, 0U, 0U, 133U, 173U, 3U, 241U, 63U, 0U, 0U,
    129U, 158U, 0U, 140U, 195U, 27U, 39U, 224U, 69U, 0U, 10U, 162U, 244U, 224U,
    102U, 0U, 180U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 224U, 0U,
    0U, 0U, 0U, 136U, 145U, 0U, 0U, 0U, 36U, 225U, 15U, 0U, 0U, 0U, 180U, 94U,
    0U, 0U, 0U, 74U, 213U, 2U, 0U, 0U, 4U, 216U, 85U, 0U, 0U, 0U, 101U, 228U, 3U,
    0U, 0U, 0U, 208U, 134U, 0U, 0U, 0U, 21U, MAX_uint8_T, 67U, 0U, 0U, 0U, 1U,
    137U, 233U, 241U, 163U, 8U, 89U, 197U, 22U, 27U, 206U, 105U, 114U, 176U, 0U,
    0U, 171U, 86U, 18U, 216U, 174U, 121U, 159U, 2U, 12U, 179U, 191U, 252U, 125U,
    1U, 161U, 128U, 0U, 58U, 227U, 127U, 236U, 62U, 0U, 0U, 103U, 203U, 194U,
    171U, 20U, 26U, 187U, 149U, 32U, 180U, 242U, 234U, 154U, 12U, 0U, 13U, 160U,
    239U, 226U, 94U, 0U, 0U, 159U, 154U, 14U, 71U, 245U, 45U, 2U, 246U, 31U, 0U,
    0U, 160U, 148U, 7U, 252U, 37U, 0U, 0U, 137U, 187U, 0U, 185U, 162U, 15U, 53U,
    229U, 196U, 0U, 26U, 184U, 245U, 188U, 164U, 165U, 0U, 0U, 0U, 0U, 0U, 196U,
    101U, 0U, 0U, 0U, 15U, 121U, 221U, 6U, 0U, 164U, MAX_uint8_T, 246U, 181U,
    34U, 0U, 176U, 120U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 176U, 120U,
    176U, 120U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 176U, 119U, 96U, 104U,
    145U, 26U, 0U, 0U, 0U, 0U, 0U, 36U, 160U, 56U, 0U, 0U, 0U, 34U, 158U, 210U,
    87U, 1U, 0U, 32U, 156U, 212U, 91U, 2U, 0U, 0U, 63U, 245U, 180U, 6U, 0U, 0U,
    0U, 0U, 0U, 32U, 157U, 212U, 91U, 2U, 0U, 0U, 0U, 0U, 0U, 34U, 159U, 211U,
    90U, 2U, 0U, 0U, 0U, 0U, 0U, 36U, 161U, 56U, 180U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 60U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 180U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 60U, 144U, 102U, 5U, 0U, 0U, 0U, 0U, 0U, 25U, 146U,
    215U, 99U, 4U, 0U, 0U, 0U, 0U, 0U, 27U, 149U, 215U, 97U, 4U, 0U, 0U, 0U, 0U,
    0U, 59U, 243U, 185U, 8U, 0U, 0U, 28U, 149U, 215U, 98U, 4U, 0U, 27U, 148U,
    216U, 100U, 4U, 0U, 0U, 0U, 145U, 103U, 5U, 0U, 0U, 0U, 0U, 0U, 200U,
    MAX_uint8_T, 245U, 188U, 34U, 0U, 0U, 16U, 174U, 179U, 0U, 0U, 0U, 128U,
    193U, 0U, 0U, 21U, 232U, 83U, 0U, 0U, 179U, 107U, 0U, 0U, 67U, 201U, 0U, 0U,
    0U, 125U, 162U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 136U, 160U, 0U, 0U, 0U, 0U,
    0U, 77U, 186U, 240U, 244U, 185U, 50U, 0U, 0U, 2U, 155U, 178U, 61U, 10U, 22U,
    89U, 217U, 48U, 0U, 125U, 124U, 3U, 143U, 240U, MAX_uint8_T, 111U, 43U, 173U,
    19U, 171U, 0U, 131U, 117U, 13U, 165U, 55U, 0U, 175U, 87U, 81U, 10U, 197U, 0U,
    43U, 238U, 6U, 9U, 167U, 110U, 65U, 54U, 189U, 44U, 185U, 201U, 20U, 164U,
    75U, 73U, 143U, 22U, 230U, 208U, 51U, 233U, 220U, 97U, 0U, 2U, 197U, 138U,
    35U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 12U, 138U, 221U, 253U, MAX_uint8_T, 77U, 0U,
    0U, 0U, 0U, 0U, 0U, 166U, 236U, 6U, 0U, 0U, 0U, 0U, 0U, 16U, 243U, 246U, 83U,
    0U, 0U, 0U, 0U, 0U, 106U, 187U, 171U, 179U, 0U, 0U, 0U, 0U, 0U, 204U, 101U,
    85U, 251U, 23U, 0U, 0U, 0U, 46U, 251U, 20U, 10U, 244U, 115U, 0U, 0U, 0U,
    145U, 186U, 0U, 0U, 167U, 211U, 0U, 0U, 6U, 236U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 51U, 0U, 85U, 235U, 10U, 0U, 0U, 4U,
    224U, 147U, 0U, 183U, 124U, 0U, 0U, 0U, 0U, 108U, 236U, 6U, 224U,
    MAX_uint8_T, 250U, 211U, 74U, 0U, 224U, 88U, 21U, 154U, 239U, 1U, 224U, 88U,
    0U, 66U, 249U, 4U, 224U, 89U, 32U, 184U, 137U, 0U, 224U, MAX_uint8_T,
    MAX_uint8_T, 192U, 16U, 0U, 224U, 89U, 32U, 157U, 220U, 14U, 224U, 88U, 0U,
    2U, 244U, 88U, 224U, 88U, 9U, 81U, MAX_uint8_T, 65U, 224U, MAX_uint8_T, 254U,
    229U, 128U, 0U, 0U, 0U, 98U, 207U, 248U, MAX_uint8_T, MAX_uint8_T, 160U, 0U,
    125U, 240U, 93U, 18U, 0U, 0U, 0U, 19U, 248U, 99U, 0U, 0U, 0U, 0U, 0U, 77U,
    MAX_uint8_T, 13U, 0U, 0U, 0U, 0U, 0U, 96U, 244U, 0U, 0U, 0U, 0U, 0U, 0U, 78U,
    MAX_uint8_T, 15U, 0U, 0U, 0U, 0U, 0U, 21U, 250U, 108U, 0U, 0U, 0U, 0U, 0U,
    0U, 135U, 244U, 104U, 23U, 0U, 0U, 0U, 0U, 1U, 107U, 211U, 249U, MAX_uint8_T,
    MAX_uint8_T, 164U, 224U, MAX_uint8_T, MAX_uint8_T, 247U, 215U, 119U, 2U, 0U,
    224U, 88U, 2U, 19U, 87U, 239U, 135U, 0U, 224U, 88U, 0U, 0U, 0U, 98U, 247U,
    21U, 224U, 88U, 0U, 0U, 0U, 11U, MAX_uint8_T, 68U, 224U, 88U, 0U, 0U, 0U, 0U,
    244U, 89U, 224U, 88U, 0U, 0U, 0U, 15U, MAX_uint8_T, 65U, 224U, 88U, 0U, 0U,
    0U, 102U, 240U, 10U, 224U, 88U, 0U, 23U, 94U, 240U, 106U, 0U, 224U,
    MAX_uint8_T, MAX_uint8_T, 246U, 201U, 86U, 0U, 0U, 224U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 248U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U,
    0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 96U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U,
    224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 56U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 248U, 224U,
    88U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 224U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 100U, 224U, 88U, 0U, 0U, 0U, 224U,
    88U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 0U, 100U,
    208U, 248U, MAX_uint8_T, MAX_uint8_T, 160U, 0U, 128U, 240U, 93U, 18U, 0U, 0U,
    0U, 19U, 248U, 99U, 0U, 0U, 0U, 0U, 0U, 77U, MAX_uint8_T, 13U, 0U, 0U, 0U,
    0U, 0U, 96U, 244U, 0U, 0U, 0U, 0U, 0U, 0U, 78U, MAX_uint8_T, 15U, 0U, 0U, 0U,
    152U, 164U, 21U, 250U, 106U, 0U, 0U, 0U, 152U, 164U, 0U, 138U, 243U, 104U,
    24U, 17U, 171U, 164U, 0U, 1U, 108U, 210U, 248U, 242U, 206U, 101U, 224U, 88U,
    0U, 0U, 0U, 136U, 180U, 224U, 88U, 0U, 0U, 0U, 136U, 180U, 224U, 88U, 0U, 0U,
    0U, 136U, 180U, 224U, 88U, 0U, 0U, 0U, 136U, 180U, 224U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 180U, 224U, 88U, 0U, 0U,
    0U, 136U, 180U, 224U, 88U, 0U, 0U, 0U, 136U, 180U, 224U, 88U, 0U, 0U, 0U,
    136U, 180U, 224U, 88U, 0U, 0U, 0U, 136U, 180U, 228U, 88U, 228U, 88U, 228U,
    88U, 228U, 88U, 228U, 88U, 228U, 88U, 228U, 88U, 228U, 88U, 228U, 88U, 0U,
    0U, 0U, 148U, 168U, 0U, 0U, 0U, 148U, 168U, 0U, 0U, 0U, 148U, 168U, 0U, 0U,
    0U, 148U, 168U, 0U, 0U, 0U, 148U, 168U, 0U, 0U, 0U, 148U, 168U, 0U, 0U, 0U,
    148U, 168U, 0U, 0U, 0U, 148U, 168U, 0U, 0U, 0U, 156U, 151U, 0U, 0U, 20U,
    218U, 94U, 20U, MAX_uint8_T, 236U, 147U, 3U, 224U, 72U, 0U, 0U, 157U, 158U,
    0U, 224U, 72U, 0U, 104U, 204U, 8U, 0U, 224U, 72U, 56U, 229U, 30U, 0U, 0U,
    224U, 95U, 225U, 67U, 0U, 0U, 0U, 224U, 204U, 215U, 7U, 0U, 0U, 0U, 224U,
    82U, 205U, 165U, 0U, 0U, 0U, 224U, 72U, 27U, 230U, 127U, 0U, 0U, 224U, 72U,
    0U, 54U, 246U, 90U, 0U, 224U, 72U, 0U, 0U, 91U, 247U, 58U, 224U, 88U, 0U, 0U,
    0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U,
    0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U,
    0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 64U, 224U, 245U, 12U, 0U, 0U, 0U, 124U,
    MAX_uint8_T, 56U, 224U, 247U, 94U, 0U, 0U, 0U, 216U, 249U, 56U, 224U, 171U,
    187U, 0U, 0U, 58U, 189U, 236U, 56U, 224U, 78U, 252U, 27U, 0U, 153U, 93U,
    236U, 56U, 224U, 44U, 197U, 117U, 8U, 227U, 11U, 236U, 56U, 224U, 44U, 104U,
    209U, 88U, 158U, 0U, 236U, 56U, 224U, 44U, 18U, 249U, 217U, 63U, 0U, 236U,
    56U, 224U, 44U, 0U, 174U, 222U, 1U, 0U, 236U, 56U, 224U, 44U, 0U, 0U, 0U, 0U,
    0U, 236U, 56U, 224U, 163U, 0U, 0U, 0U, 80U, 192U, 224U, MAX_uint8_T, 68U, 0U,
    0U, 80U, 192U, 224U, 183U, 220U, 8U, 0U, 80U, 192U, 224U, 54U, 223U, 133U,
    0U, 80U, 192U, 224U, 44U, 73U, 250U, 43U, 80U, 192U, 224U, 44U, 0U, 168U,
    196U, 81U, 192U, 224U, 44U, 0U, 23U, 239U, 183U, 192U, 224U, 44U, 0U, 0U,
    102U, MAX_uint8_T, 192U, 224U, 44U, 0U, 0U, 1U, 195U, 192U, 0U, 0U, 101U,
    213U, 249U, 231U, 148U, 14U, 0U, 0U, 122U, 235U, 80U, 14U, 45U, 195U, 200U,
    5U, 17U, 247U, 91U, 0U, 0U, 0U, 21U, 244U, 92U, 76U, MAX_uint8_T, 11U, 0U,
    0U, 0U, 0U, 183U, 159U, 96U, 243U, 0U, 0U, 0U, 0U, 0U, 160U, 179U, 76U,
    MAX_uint8_T, 12U, 0U, 0U, 0U, 0U, 184U, 159U, 17U, 246U, 94U, 0U, 0U, 0U,
    21U, 245U, 91U, 0U, 122U, 236U, 78U, 13U, 46U, 196U, 200U, 5U, 0U, 0U, 103U,
    215U, 250U, 230U, 148U, 14U, 0U, 224U, MAX_uint8_T, 252U, 229U, 141U, 1U,
    224U, 88U, 8U, 73U, 253U, 75U, 224U, 88U, 0U, 0U, 239U, 89U, 224U, 88U, 20U,
    129U, 239U, 26U, 224U, MAX_uint8_T, 236U, 184U, 52U, 0U, 224U, 88U, 0U, 0U,
    0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U,
    0U, 0U, 0U, 0U, 0U, 101U, 213U, 249U, 231U, 148U, 14U, 0U, 0U, 0U, 122U,
    235U, 80U, 14U, 45U, 195U, 197U, 4U, 0U, 17U, 247U, 91U, 0U, 0U, 0U, 21U,
    244U, 90U, 0U, 76U, MAX_uint8_T, 11U, 0U, 0U, 0U, 0U, 183U, 158U, 0U, 96U,
    243U, 0U, 0U, 0U, 0U, 0U, 160U, 178U, 0U, 76U, MAX_uint8_T, 12U, 0U, 0U, 0U,
    0U, 184U, 157U, 0U, 16U, 245U, 94U, 0U, 0U, 0U, 21U, 244U, 89U, 0U, 0U, 118U,
    236U, 78U, 13U, 46U, 196U, 197U, 5U, 0U, 0U, 0U, 103U, 217U, 250U, 250U,
    215U, 15U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 25U, 187U, 212U, 98U, 15U, 0U, 0U, 0U,
    0U, 0U, 0U, 1U, 87U, 208U, 57U, 224U, MAX_uint8_T, 254U, 231U, 123U, 0U, 0U,
    224U, 88U, 9U, 91U, MAX_uint8_T, 49U, 0U, 224U, 88U, 0U, 4U, 251U, 70U, 0U,
    224U, 88U, 22U, 138U, 225U, 10U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, 214U,
    29U, 0U, 0U, 224U, 88U, 55U, 248U, 47U, 0U, 0U, 224U, 88U, 0U, 152U, 205U,
    4U, 0U, 224U, 88U, 0U, 16U, 232U, 122U, 0U, 224U, 88U, 0U, 0U, 91U, 248U,
    42U, 0U, 101U, 225U, MAX_uint8_T, MAX_uint8_T, 84U, 45U, 242U, 53U, 1U, 0U,
    0U, 78U, 233U, 9U, 0U, 0U, 0U, 11U, 216U, 206U, 55U, 0U, 0U, 0U, 18U, 161U,
    253U, 148U, 5U, 0U, 0U, 0U, 62U, 233U, 143U, 0U, 0U, 0U, 0U, 116U, 208U, 0U,
    0U, 0U, 22U, 187U, 151U, 104U, MAX_uint8_T, MAX_uint8_T, 232U, 153U, 12U,
    228U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 124U, 0U, 0U, 0U, 208U, 104U, 0U, 0U, 0U, 0U, 0U, 0U, 208U,
    104U, 0U, 0U, 0U, 0U, 0U, 0U, 208U, 104U, 0U, 0U, 0U, 0U, 0U, 0U, 208U, 104U,
    0U, 0U, 0U, 0U, 0U, 0U, 208U, 104U, 0U, 0U, 0U, 0U, 0U, 0U, 208U, 104U, 0U,
    0U, 0U, 0U, 0U, 0U, 208U, 104U, 0U, 0U, 0U, 0U, 0U, 0U, 208U, 104U, 0U, 0U,
    0U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U,
    72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U,
    0U, 0U, 208U, 68U, 240U, 75U, 0U, 0U, 0U, 210U, 64U, 214U, 105U, 0U, 0U, 1U,
    235U, 39U, 137U, 216U, 43U, 11U, 110U, 221U, 4U, 12U, 150U, 229U, 243U, 197U,
    51U, 0U, 154U, 157U, 0U, 0U, 0U, 0U, 117U, 158U, 61U, 241U, 9U, 0U, 0U, 0U,
    206U, 69U, 1U, 223U, 87U, 0U, 0U, 40U, 231U, 3U, 0U, 131U, 180U, 0U, 0U,
    129U, 145U, 0U, 0U, 38U, 250U, 21U, 0U, 218U, 55U, 0U, 0U, 0U, 201U, 109U,
    52U, 221U, 0U, 0U, 0U, 0U, 108U, 202U, 142U, 132U, 0U, 0U, 0U, 0U, 20U, 250U,
    240U, 42U, 0U, 0U, 0U, 0U, 0U, 178U, 208U, 0U, 0U, 0U, 221U, 83U, 0U, 0U,
    130U, 231U, 0U, 0U, 0U, 226U, 29U, 157U, 146U, 0U, 0U, 188U, MAX_uint8_T,
    31U, 0U, 39U, 215U, 0U, 93U, 209U, 0U, 3U, 227U, 213U, 87U, 0U, 108U, 146U,
    0U, 30U, 254U, 18U, 49U, 183U, 156U, 143U, 0U, 177U, 76U, 0U, 0U, 222U, 79U,
    108U, 125U, 100U, 199U, 4U, 236U, 12U, 0U, 0U, 159U, 142U, 166U, 67U, 44U,
    248U, 66U, 194U, 0U, 0U, 0U, 95U, 205U, 221U, 12U, 2U, 241U, 183U, 124U, 0U,
    0U, 0U, 31U, 254U, 206U, 0U, 0U, 188U, MAX_uint8_T, 55U, 0U, 0U, 0U, 0U,
    224U, 149U, 0U, 0U, 132U, 239U, 3U, 0U, 0U, 118U, 235U, 19U, 0U, 0U, 91U,
    203U, 3U, 5U, 212U, 157U, 0U, 20U, 230U, 48U, 0U, 0U, 62U, 253U, 60U, 165U,
    136U, 0U, 0U, 0U, 0U, 162U, 231U, 220U, 9U, 0U, 0U, 0U, 0U, 48U, MAX_uint8_T,
    135U, 0U, 0U, 0U, 0U, 0U, 174U, 204U, 243U, 28U, 0U, 0U, 0U, 80U, 214U, 9U,
    201U, 172U, 0U, 0U, 14U, 227U, 59U, 0U, 49U, 252U, 73U, 0U, 151U, 149U, 0U,
    0U, 0U, 143U, 220U, 8U, 159U, 199U, 1U, 0U, 0U, 39U, 231U, 22U, 24U, 242U,
    92U, 0U, 0U, 190U, 102U, 0U, 0U, 120U, 228U, 11U, 96U, 198U, 1U, 0U, 0U, 7U,
    221U, 150U, 231U, 46U, 0U, 0U, 0U, 0U, 81U, MAX_uint8_T, 139U, 0U, 0U, 0U,
    0U, 0U, 0U, MAX_uint8_T, 56U, 0U, 0U, 0U, 0U, 0U, 0U, MAX_uint8_T, 56U, 0U,
    0U, 0U, 0U, 0U, 0U, MAX_uint8_T, 56U, 0U, 0U, 0U, 0U, 0U, 0U, MAX_uint8_T,
    56U, 0U, 0U, 0U, 40U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 176U, 0U, 0U, 0U, 0U, 38U, 246U, 90U, 0U, 0U, 0U, 2U, 197U,
    176U, 0U, 0U, 0U, 0U, 114U, 237U, 24U, 0U, 0U, 0U, 37U, 246U, 91U, 0U, 0U,
    0U, 2U, 196U, 177U, 0U, 0U, 0U, 0U, 113U, 238U, 25U, 0U, 0U, 0U, 36U, 246U,
    93U, 0U, 0U, 0U, 0U, 112U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 176U, 216U, MAX_uint8_T, 120U, 216U, 44U, 0U, 216U,
    44U, 0U, 216U, 44U, 0U, 216U, 44U, 0U, 216U, 44U, 0U, 216U, 44U, 0U, 216U,
    44U, 0U, 216U, 44U, 0U, 216U, 44U, 0U, 216U, MAX_uint8_T, 120U, 184U, 47U,
    0U, 0U, 0U, 111U, 120U, 0U, 0U, 0U, 38U, 193U, 0U, 0U, 0U, 0U, 217U, 14U, 0U,
    0U, 0U, 149U, 82U, 0U, 0U, 0U, 76U, 155U, 0U, 0U, 0U, 10U, 220U, 0U, 0U, 0U,
    0U, 186U, 44U, 0U, 0U, 0U, 114U, 117U, 0U, 0U, 0U, 41U, 190U, 0U, 0U, 0U, 0U,
    218U, 13U, 143U, MAX_uint8_T, 191U, 0U, 67U, 191U, 0U, 67U, 191U, 0U, 67U,
    191U, 0U, 67U, 191U, 0U, 67U, 191U, 0U, 67U, 191U, 0U, 67U, 191U, 0U, 67U,
    191U, 0U, 67U, 191U, 143U, MAX_uint8_T, 191U, 0U, 0U, 0U, 110U, 25U, 0U, 0U,
    0U, 0U, 17U, 235U, 151U, 0U, 0U, 0U, 0U, 137U, 115U, 208U, 36U, 0U, 0U, 26U,
    215U, 7U, 81U, 167U, 0U, 0U, 153U, 96U, 0U, 0U, 198U, 48U, 36U, 208U, 2U, 0U,
    0U, 64U, 183U, 128U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    124U, 64U, 225U, 23U, 0U, 0U, 77U, 175U, 0U, 0U, 60U, 200U, 244U, 183U, 9U,
    0U, 0U, 149U, 44U, 23U, 229U, 87U, 0U, 0U, 0U, 0U, 0U, 188U, 107U, 0U, 0U,
    91U, 205U, 242U, MAX_uint8_T, 108U, 0U, 52U, 242U, 73U, 6U, 188U, 108U, 0U,
    84U, 226U, 27U, 47U, 221U, 137U, 0U, 8U, 182U, 241U, 166U, 92U, 235U, 60U,
    216U, 80U, 0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 0U, 216U, 113U, 200U, 243U,
    173U, 14U, 216U, 196U, 45U, 21U, 204U, 137U, 216U, 80U, 0U, 0U, 107U, 207U,
    216U, 80U, 0U, 0U, 90U, 222U, 216U, 125U, 0U, 0U, 119U, 191U, 216U, 246U,
    62U, 34U, 220U, 98U, 216U, 115U, 211U, 244U, 147U, 2U, 0U, 33U, 180U, 240U,
    MAX_uint8_T, 128U, 3U, 212U, 180U, 23U, 0U, 0U, 53U, MAX_uint8_T, 32U, 0U,
    0U, 0U, 78U, 251U, 0U, 0U, 0U, 0U, 46U, MAX_uint8_T, 33U, 0U, 0U, 0U, 0U,
    198U, 183U, 26U, 0U, 0U, 0U, 25U, 178U, 245U, MAX_uint8_T, 148U, 0U, 0U, 0U,
    0U, 0U, 196U, 104U, 0U, 0U, 0U, 0U, 0U, 196U, 104U, 0U, 47U, 208U, 241U,
    154U, 202U, 104U, 1U, 212U, 130U, 15U, 82U, 239U, 104U, 49U, 249U, 8U, 0U,
    0U, 196U, 104U, 79U, 229U, 0U, 0U, 0U, 196U, 104U, 64U, 243U, 2U, 0U, 0U,
    196U, 104U, 12U, 238U, 105U, 11U, 107U, 242U, 104U, 0U, 73U, 221U, 241U,
    130U, 196U, 104U, 0U, 35U, 194U, 241U, 167U, 9U, 2U, 211U, 108U, 15U, 183U,
    115U, 52U, 244U, 2U, 0U, 93U, 186U, 78U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 211U, 47U, 241U, 4U, 0U, 0U, 0U, 0U, 196U, 152U,
    21U, 0U, 0U, 0U, 22U, 170U, 239U, MAX_uint8_T, 208U, 0U, 57U, 218U, 253U,
    196U, 0U, 153U, 160U, 2U, 0U, 136U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    32U, 0U, 160U, 136U, 0U, 0U, 0U, 160U, 136U, 0U, 0U, 0U, 160U, 136U, 0U, 0U,
    0U, 160U, 136U, 0U, 0U, 0U, 160U, 136U, 0U, 0U, 0U, 160U, 136U, 0U, 0U, 0U,
    42U, 204U, 241U, 154U, 202U, 104U, 1U, 208U, 147U, 16U, 76U, 238U, 104U, 49U,
    251U, 14U, 0U, 0U, 196U, 104U, 79U, 230U, 0U, 0U, 0U, 196U, 104U, 61U, 243U,
    2U, 0U, 0U, 196U, 103U, 9U, 234U, 104U, 11U, 105U, 242U, 97U, 0U, 66U, 219U,
    242U, 136U, 203U, 79U, 0U, 0U, 0U, 7U, 77U, 242U, 22U, 0U, 194U, MAX_uint8_T,
    247U, 206U, 71U, 0U, 216U, 80U, 0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 0U,
    216U, 103U, 184U, 245U, 171U, 2U, 216U, 222U, 66U, 21U, 239U, 67U, 216U, 95U,
    0U, 0U, 206U, 91U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U, 204U,
    92U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U,
    0U, 0U, 216U, 80U, 216U, 80U, 216U, 80U, 216U, 80U, 216U, 80U, 216U, 80U,
    216U, 80U, 0U, 0U, 168U, 128U, 0U, 0U, 0U, 0U, 0U, 0U, 168U, 128U, 0U, 0U,
    168U, 128U, 0U, 0U, 168U, 128U, 0U, 0U, 168U, 128U, 0U, 0U, 168U, 128U, 0U,
    0U, 168U, 128U, 0U, 0U, 170U, 124U, 0U, 10U, 211U, 88U, 232U, 248U, 176U, 7U,
    216U, 80U, 0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 0U, 216U, 80U, 0U, 98U,
    208U, 10U, 216U, 80U, 53U, 230U, 34U, 0U, 216U, 102U, 225U, 72U, 0U, 0U,
    216U, 203U, 224U, 12U, 0U, 0U, 216U, 85U, 192U, 176U, 1U, 0U, 216U, 80U, 19U,
    221U, 135U, 0U, 216U, 80U, 0U, 42U, 240U, 93U, 216U, 80U, 216U, 80U, 216U,
    80U, 216U, 80U, 216U, 80U, 216U, 80U, 216U, 80U, 216U, 80U, 216U, 80U, 216U,
    117U, 198U, 245U, 128U, 14U, 184U, 243U, 133U, 0U, 216U, 245U, 80U, 36U,
    251U, 163U, 62U, 61U, 254U, 13U, 216U, 124U, 0U, 0U, 240U, 100U, 0U, 12U,
    MAX_uint8_T, 31U, 216U, 80U, 0U, 0U, 240U, 56U, 0U, 12U, MAX_uint8_T, 32U,
    216U, 80U, 0U, 0U, 240U, 56U, 0U, 12U, MAX_uint8_T, 32U, 216U, 80U, 0U, 0U,
    240U, 56U, 0U, 12U, MAX_uint8_T, 32U, 216U, 80U, 0U, 0U, 240U, 56U, 0U, 12U,
    MAX_uint8_T, 32U, 216U, 103U, 184U, 245U, 171U, 2U, 216U, 222U, 66U, 21U,
    239U, 67U, 216U, 95U, 0U, 0U, 206U, 91U, 216U, 80U, 0U, 0U, 204U, 92U, 216U,
    80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U,
    204U, 92U, 0U, 35U, 186U, 242U, 216U, 91U, 0U, 3U, 211U, 136U, 14U, 62U,
    242U, 55U, 52U, 249U, 8U, 0U, 0U, 161U, 148U, 79U, 230U, 0U, 0U, 0U, 135U,
    174U, 51U, 248U, 7U, 0U, 0U, 163U, 146U, 2U, 210U, 134U, 13U, 64U, 243U, 53U,
    0U, 33U, 187U, 243U, 215U, 88U, 0U, 216U, 113U, 200U, 243U, 173U, 14U, 216U,
    196U, 45U, 21U, 204U, 137U, 216U, 80U, 0U, 0U, 107U, 207U, 216U, 80U, 0U, 0U,
    90U, 222U, 216U, 104U, 0U, 0U, 119U, 191U, 216U, 209U, 53U, 34U, 220U, 98U,
    216U, 99U, 198U, 244U, 147U, 2U, 216U, 80U, 0U, 0U, 0U, 0U, 216U, 80U, 0U,
    0U, 0U, 0U, 0U, 47U, 208U, 241U, 154U, 202U, 104U, 1U, 212U, 130U, 15U, 82U,
    239U, 104U, 49U, 249U, 8U, 0U, 0U, 196U, 104U, 79U, 229U, 0U, 0U, 0U, 196U,
    104U, 64U, 243U, 2U, 0U, 0U, 196U, 104U, 12U, 238U, 105U, 11U, 107U, 242U,
    104U, 0U, 73U, 221U, 241U, 130U, 196U, 104U, 0U, 0U, 0U, 0U, 0U, 196U, 104U,
    0U, 0U, 0U, 0U, 0U, 196U, 104U, 216U, 115U, 206U, 170U, 216U, 209U, 43U, 0U,
    216U, 87U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U,
    216U, 80U, 0U, 0U, 0U, 98U, 230U, MAX_uint8_T, 184U, 0U, 2U, 246U, 59U, 0U,
    0U, 0U, 0U, 226U, 157U, 20U, 0U, 0U, 0U, 46U, 198U, 244U, 107U, 0U, 0U, 0U,
    0U, 88U, 254U, 28U, 0U, 0U, 0U, 56U, 251U, 23U, 20U, MAX_uint8_T,
    MAX_uint8_T, 228U, 98U, 0U, 0U, 191U, 90U, 0U, 0U, 152U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 4U, 0U, 204U, 92U, 0U, 0U, 0U, 204U, 92U, 0U, 0U,
    0U, 204U, 92U, 0U, 0U, 0U, 203U, 93U, 0U, 0U, 0U, 183U, 154U, 4U, 0U, 0U,
    61U, 226U, 251U, 0U, 236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U,
    72U, 236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U, 235U, 61U,
    0U, 4U, 230U, 72U, 212U, 112U, 21U, 162U, 246U, 72U, 80U, 234U, 227U, 88U,
    220U, 72U, 185U, 109U, 0U, 0U, 30U, 237U, 6U, 99U, 194U, 0U, 0U, 118U, 153U,
    0U, 18U, 248U, 25U, 0U, 208U, 61U, 0U, 0U, 182U, 107U, 40U, 224U, 1U, 0U, 0U,
    96U, 191U, 130U, 133U, 0U, 0U, 0U, 16U, 246U, 228U, 41U, 0U, 0U, 0U, 0U,
    179U, 205U, 0U, 0U, 0U, 203U, 83U, 0U, 12U, 250U, 94U, 0U, 5U, 236U, 12U,
    137U, 147U, 0U, 77U, 234U, 155U, 0U, 66U, 185U, 0U, 71U, 211U, 0U, 147U,
    115U, 216U, 0U, 140U, 109U, 0U, 10U, 248U, 20U, 210U, 11U, 233U, 22U, 213U,
    33U, 0U, 0U, 194U, 113U, 189U, 0U, 173U, 112U, 212U, 0U, 0U, 0U, 128U, 234U,
    120U, 0U, 110U, 234U, 137U, 0U, 0U, 0U, 61U, MAX_uint8_T, 50U, 0U, 47U,
    MAX_uint8_T, 61U, 0U, 0U, 30U, 240U, 76U, 0U, 3U, 205U, 79U, 0U, 95U, 232U,
    20U, 113U, 177U, 0U, 0U, 0U, 173U, 188U, 232U, 29U, 0U, 0U, 0U, 61U,
    MAX_uint8_T, 149U, 0U, 0U, 0U, 3U, 202U, 154U, 242U, 33U, 0U, 0U, 123U, 171U,
    0U, 155U, 195U, 2U, 44U, 228U, 22U, 0U, 12U, 220U, 119U, 187U, 131U, 0U, 0U,
    23U, 240U, 13U, 97U, 220U, 0U, 0U, 114U, 158U, 0U, 14U, 247U, 53U, 0U, 208U,
    59U, 0U, 0U, 172U, 142U, 45U, 216U, 0U, 0U, 0U, 82U, 229U, 142U, 117U, 0U,
    0U, 0U, 7U, 240U, 244U, 23U, 0U, 0U, 0U, 0U, 157U, 175U, 0U, 0U, 0U, 0U, 0U,
    179U, 76U, 0U, 0U, 0U, 0U, 54U, 229U, 3U, 0U, 0U, 0U, 24U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 20U, 0U, 0U, 0U, 2U,
    186U, 174U, 0U, 0U, 0U, 0U, 135U, 215U, 13U, 0U, 0U, 0U, 80U, 241U, 41U, 0U,
    0U, 0U, 39U, 241U, 83U, 0U, 0U, 0U, 12U, 214U, 136U, 0U, 0U, 0U, 0U, 72U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 40U, 0U,
    84U, 223U, 27U, 0U, 235U, 47U, 0U, 0U, 230U, 35U, 0U, 0U, 189U, 61U, 0U, 14U,
    205U, 23U, 0U, 220U, 155U, 0U, 0U, 14U, 204U, 23U, 0U, 0U, 190U, 61U, 0U, 0U,
    230U, 35U, 0U, 0U, 235U, 47U, 0U, 0U, 86U, 224U, 27U, 48U, 172U, 48U, 172U,
    48U, 172U, 48U, 172U, 48U, 172U, 48U, 172U, 48U, 172U, 48U, 172U, 48U, 172U,
    48U, 172U, 48U, 172U, 50U, 216U, 66U, 0U, 0U, 72U, 210U, 0U, 0U, 59U, 205U,
    0U, 0U, 85U, 164U, 0U, 0U, 43U, 190U, 9U, 0U, 0U, 179U, 195U, 0U, 42U, 189U,
    9U, 0U, 85U, 165U, 0U, 0U, 59U, 205U, 0U, 0U, 71U, 210U, 0U, 51U, 217U, 68U,
    0U, 6U, 189U, 242U, 170U, 66U, 27U, 222U, 79U, 168U, 21U, 111U, 206U, 244U,
    110U, 176U, 120U, 0U, 0U, 144U, 87U, 151U, 94U, 158U, 101U, 165U, 108U, 172U,
    115U, 176U, 119U, 176U, 120U, 0U, 0U, 28U, 120U, 0U, 0U, 0U, 102U, 223U,
    MAX_uint8_T, MAX_uint8_T, 32U, 75U, 236U, 80U, 120U, 0U, 0U, 170U, 150U, 28U,
    120U, 0U, 0U, 195U, 125U, 28U, 120U, 0U, 0U, 165U, 158U, 28U, 120U, 0U, 0U,
    65U, 246U, 102U, 120U, 0U, 0U, 0U, 97U, 224U, MAX_uint8_T, MAX_uint8_T, 32U,
    0U, 0U, 28U, 120U, 0U, 0U, 0U, 0U, 114U, 234U, MAX_uint8_T, 80U, 0U, 33U,
    243U, 34U, 0U, 0U, 0U, 76U, 213U, 0U, 0U, 0U, 0U, 84U, 212U, 0U, 0U, 0U, 96U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 24U, 0U, 0U, 84U, 211U, 0U, 0U, 0U,
    0U, 93U, 190U, 0U, 0U, 0U, 18U, 192U, 76U, 0U, 0U, 0U, 140U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 104U, 52U, 117U, 0U, 0U, 0U, 11U,
    160U, 0U, 0U, 165U, 174U, 242U, 220U, 191U, 67U, 0U, 0U, 139U, 147U, 14U,
    44U, 216U, 37U, 0U, 0U, 197U, 29U, 0U, 0U, 134U, 89U, 0U, 0U, 139U, 147U,
    14U, 42U, 215U, 37U, 0U, 0U, 165U, 174U, 242U, 221U, 191U, 67U, 0U, 52U,
    117U, 0U, 0U, 0U, 11U, 160U, 0U, 53U, 246U, 47U, 0U, 0U, 45U, 209U, 12U, 0U,
    132U, 208U, 5U, 10U, 207U, 49U, 0U, 0U, 5U, 207U, 131U, 155U, 111U, 0U, 0U,
    0U, 0U, 46U, 246U, 180U, 0U, 0U, 0U, 0U, 140U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 20U, 0U, 0U, 0U, 0U, 208U, 88U, 0U, 0U, 0U, 0U,
    140U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 20U, 0U, 0U, 0U,
    0U, 208U, 88U, 0U, 0U, 0U, 0U, 0U, 0U, 208U, 88U, 0U, 0U, 0U, 48U, 172U, 48U,
    172U, 48U, 172U, 48U, 172U, 0U, 0U, 0U, 0U, 0U, 0U, 48U, 172U, 48U, 172U,
    48U, 172U, 48U, 172U, 9U, 156U, 235U, MAX_uint8_T, MAX_uint8_T, 32U, 125U,
    179U, 23U, 0U, 0U, 0U, 135U, 171U, 6U, 0U, 0U, 0U, 18U, 237U, 227U, 109U, 6U,
    0U, 115U, 119U, 42U, 163U, 206U, 12U, 156U, 117U, 0U, 0U, 187U, 82U, 43U,
    226U, 128U, 17U, 198U, 36U, 0U, 18U, 135U, 232U, 184U, 0U, 0U, 0U, 0U, 20U,
    212U, 76U, 0U, 0U, 1U, 32U, 209U, 84U, 180U, MAX_uint8_T, 253U, 226U, 130U,
    1U, 252U, 8U, 168U, 88U, 0U, 0U, 45U, 174U, 239U, 246U, 199U, 79U, 0U, 0U,
    0U, 65U, 213U, 86U, 16U, 8U, 61U, 189U, 120U, 0U, 9U, 199U, 22U, 73U, 216U,
    253U, 204U, 2U, 176U, 50U, 75U, 106U, 12U, 227U, 60U, 2U, 0U, 0U, 38U, 141U,
    102U, 66U, 45U, 180U, 0U, 0U, 0U, 0U, 3U, 167U, 74U, 106U, 12U, 224U, 59U,
    3U, 0U, 0U, 48U, 141U, 8U, 199U, 22U, 71U, 216U, 254U, 204U, 3U, 186U, 51U,
    0U, 65U, 213U, 84U, 14U, 9U, 59U, 187U, 124U, 0U, 0U, 0U, 46U, 177U, 241U,
    246U, 198U, 81U, 0U, 0U, 156U, MAX_uint8_T, 233U, 56U, 0U, 2U, 159U, 111U,
    145U, 239U, MAX_uint8_T, 121U, 183U, 237U, 165U, 227U, 0U, 0U, 126U, 72U,
    57U, 141U, 0U, 107U, 164U, 45U, 206U, 21U, 32U, 241U, 16U, 204U, 85U, 0U, 0U,
    107U, 164U, 45U, 206U, 21U, 0U, 0U, 126U, 73U, 57U, 142U, 180U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 60U, 0U, 0U,
    0U, 0U, 0U, 0U, 160U, 60U, 0U, 0U, 0U, 0U, 0U, 0U, 160U, 60U, 32U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 20U, 8U,
    154U, 239U, 221U, 84U, 0U, 132U, 109U, 12U, 35U, 180U, 39U, 152U, 64U, 254U,
    167U, 61U, 91U, 133U, 170U, MAX_uint8_T, 184U, 178U, 39U, 9U, 157U, 240U,
    221U, 86U, 0U, 128U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    124U, 0U, 149U, 244U, 186U, 11U, 18U, 201U, 27U, 160U, 73U, 0U, 149U, 245U,
    186U, 11U, 0U, 0U, 0U, 168U, 52U, 0U, 0U, 0U, 0U, 0U, 0U, 168U, 52U, 0U, 0U,
    0U, 180U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 60U, 0U, 0U, 0U, 168U, 52U, 0U, 0U, 0U, 0U, 0U, 0U, 168U, 52U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 180U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 60U, 0U, MAX_uint8_T,
    250U, 167U, 2U, 0U, 0U, 16U, 221U, 36U, 0U, 0U, 23U, 212U, 5U, 0U, 9U, 188U,
    60U, 0U, 2U, 173U, 82U, 0U, 0U, 32U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    40U, 0U, MAX_uint8_T, 249U, 160U, 0U, 0U, 0U, 44U, 215U, 0U, 0U, 152U, 253U,
    94U, 0U, 0U, 1U, 38U, 225U, 12U, 0U, 0U, 29U, 227U, 19U, 20U, MAX_uint8_T,
    244U, 131U, 0U, 0U, 163U, 151U, 0U, 85U, 166U, 2U, 0U, 216U, 80U, 0U, 0U,
    204U, 92U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U, 204U, 92U, 216U,
    80U, 0U, 0U, 204U, 92U, 216U, 81U, 0U, 0U, 216U, 92U, 216U, 144U, 13U, 139U,
    245U, 92U, 216U, 231U, 244U, 122U, 204U, 92U, 216U, 80U, 0U, 0U, 0U, 0U,
    216U, 80U, 0U, 0U, 0U, 0U, 62U, 214U, 249U, MAX_uint8_T, MAX_uint8_T, 8U,
    174U, MAX_uint8_T, MAX_uint8_T, 116U, 176U, 8U, 145U, MAX_uint8_T,
    MAX_uint8_T, 116U, 176U, 8U, 18U, 169U, 243U, 116U, 176U, 8U, 0U, 0U, 72U,
    116U, 176U, 8U, 0U, 0U, 72U, 116U, 176U, 8U, 0U, 0U, 72U, 116U, 176U, 8U, 0U,
    0U, 72U, 116U, 176U, 8U, 0U, 0U, 72U, 116U, 176U, 8U, 0U, 0U, 72U, 116U,
    176U, 8U, 0U, 0U, 72U, 116U, 176U, 8U, 212U, 160U, 0U, 156U, 162U, 0U, 0U,
    18U, 226U, 0U, 4U, MAX_uint8_T, 161U, 0U, 45U, 170U, 42U, 0U, 192U, 235U,
    44U, 0U, 0U, 176U, 44U, 0U, 0U, 176U, 44U, 0U, 0U, 176U, 44U, 0U, 216U,
    MAX_uint8_T, MAX_uint8_T, 88U, 0U, 141U, 241U, 222U, 66U, 48U, 222U, 26U,
    76U, 208U, 48U, 221U, 17U, 76U, 208U, 0U, 144U, 243U, 222U, 68U, 81U, 117U,
    17U, 173U, 7U, 0U, 1U, 171U, 99U, 94U, 174U, 3U, 0U, 21U, 242U, 27U, 189U,
    100U, 1U, 171U, 100U, 94U, 174U, 3U, 81U, 117U, 17U, 174U, 7U, 0U, 19U, 133U,
    106U, 0U, 0U, 0U, 38U, 165U, 0U, 0U, 133U, 222U, 120U, 0U, 0U, 5U, 178U, 20U,
    0U, 0U, 0U, 104U, 120U, 0U, 0U, 132U, 71U, 0U, 0U, 0U, 0U, 104U, 120U, 0U,
    61U, 141U, 1U, 201U, 80U, 0U, 0U, 104U, 120U, 15U, 180U, 8U, 97U, 210U, 80U,
    0U, 0U, 104U, 120U, 157U, 46U, 14U, 171U, 124U, 80U, 0U, 0U, 0U, 90U, 112U,
    0U, 138U, 49U, 124U, 80U, 0U, 0U, 31U, 171U, 1U, 0U, 219U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 8U, 2U, 175U, 26U, 0U, 0U, 0U, 0U, 124U, 80U, 0U,
    19U, 133U, 106U, 0U, 0U, 0U, 103U, 100U, 0U, 0U, 133U, 222U, 120U, 0U, 0U,
    38U, 165U, 0U, 0U, 0U, 0U, 104U, 120U, 0U, 5U, 178U, 20U, 0U, 0U, 0U, 0U,
    104U, 120U, 0U, 134U, 106U, MAX_uint8_T, 246U, 134U, 0U, 0U, 104U, 120U, 62U,
    140U, 0U, 0U, 28U, 243U, 1U, 0U, 104U, 136U, 180U, 7U, 0U, 0U, 60U, 184U, 0U,
    0U, 0U, 158U, 44U, 0U, 0U, 24U, 205U, 28U, 0U, 0U, 92U, 111U, 0U, 0U, 9U,
    191U, 59U, 0U, 0U, 32U, 170U, 1U, 0U, 0U, 68U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 4U, 88U, MAX_uint8_T, 237U, 84U, 0U, 0U, 0U, 134U, 70U, 0U, 0U,
    3U, 124U, 131U, 0U, 0U, 62U, 140U, 0U, 0U, 0U, 240U, 229U, 30U, 0U, 16U,
    180U, 7U, 0U, 0U, 0U, 5U, 101U, 171U, 0U, 158U, 46U, 201U, 80U, 0U, 0U, 1U,
    88U, 186U, 92U, 111U, 97U, 210U, 80U, 0U, 108U, MAX_uint8_T, 226U, 95U, 170U,
    15U, 171U, 124U, 80U, 0U, 0U, 0U, 3U, 175U, 25U, 138U, 49U, 124U, 80U, 0U,
    0U, 0U, 124U, 80U, 0U, 219U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 8U, 0U,
    53U, 149U, 0U, 0U, 0U, 0U, 124U, 80U, 0U, 0U, 0U, 140U, 156U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 142U, 145U, 0U, 0U, 0U, 181U, 87U, 0U, 0U, 90U, 195U, 1U, 0U,
    67U, 236U, 29U, 0U, 0U, 177U, 144U, 0U, 0U, 0U, 164U, 185U, 18U, 0U, 0U, 28U,
    184U, 244U, MAX_uint8_T, 220U, 0U, 0U, 74U, 222U, 17U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 87U, 166U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 166U, 236U, 6U, 0U, 0U, 0U, 0U, 0U, 16U, 243U, 246U, 83U, 0U, 0U, 0U,
    0U, 0U, 106U, 187U, 171U, 179U, 0U, 0U, 0U, 0U, 0U, 204U, 101U, 85U, 251U,
    23U, 0U, 0U, 0U, 46U, 251U, 20U, 10U, 244U, 115U, 0U, 0U, 0U, 145U, 186U, 0U,
    0U, 167U, 211U, 0U, 0U, 6U, 236U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 51U, 0U, 85U, 235U, 10U, 0U, 0U, 4U, 224U, 147U,
    0U, 183U, 124U, 0U, 0U, 0U, 0U, 108U, 236U, 6U, 0U, 0U, 0U, 0U, 170U, 143U,
    0U, 0U, 0U, 0U, 0U, 0U, 94U, 158U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 166U, 236U, 6U, 0U, 0U, 0U, 0U, 0U, 16U, 243U, 246U,
    83U, 0U, 0U, 0U, 0U, 0U, 106U, 187U, 171U, 179U, 0U, 0U, 0U, 0U, 0U, 204U,
    101U, 85U, 251U, 23U, 0U, 0U, 0U, 46U, 251U, 20U, 10U, 244U, 115U, 0U, 0U,
    0U, 145U, 186U, 0U, 0U, 167U, 211U, 0U, 0U, 6U, 236U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 51U, 0U, 85U, 235U, 10U,
    0U, 0U, 4U, 224U, 147U, 0U, 183U, 124U, 0U, 0U, 0U, 0U, 108U, 236U, 6U, 0U,
    0U, 6U, 206U, 229U, 45U, 0U, 0U, 0U, 0U, 0U, 138U, 109U, 45U, 193U, 7U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 166U, 236U, 6U, 0U, 0U,
    0U, 0U, 0U, 16U, 243U, 246U, 83U, 0U, 0U, 0U, 0U, 0U, 106U, 187U, 171U, 179U,
    0U, 0U, 0U, 0U, 0U, 204U, 101U, 85U, 251U, 23U, 0U, 0U, 0U, 46U, 251U, 20U,
    10U, 244U, 115U, 0U, 0U, 0U, 145U, 186U, 0U, 0U, 167U, 211U, 0U, 0U, 6U,
    236U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 51U,
    0U, 85U, 235U, 10U, 0U, 0U, 4U, 224U, 147U, 0U, 183U, 124U, 0U, 0U, 0U, 0U,
    108U, 236U, 6U, 0U, 0U, 114U, 232U, 70U, 194U, 6U, 0U, 0U, 0U, 0U, 190U, 44U,
    206U, 173U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 166U,
    236U, 6U, 0U, 0U, 0U, 0U, 0U, 16U, 243U, 246U, 83U, 0U, 0U, 0U, 0U, 0U, 106U,
    187U, 171U, 179U, 0U, 0U, 0U, 0U, 0U, 204U, 101U, 85U, 251U, 23U, 0U, 0U, 0U,
    46U, 251U, 20U, 10U, 244U, 115U, 0U, 0U, 0U, 145U, 186U, 0U, 0U, 167U, 211U,
    0U, 0U, 6U, 236U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 51U, 0U, 85U, 235U, 10U, 0U, 0U, 4U, 224U, 147U, 0U, 183U, 124U,
    0U, 0U, 0U, 0U, 108U, 236U, 6U, 0U, 0U, 140U, 120U, 56U, 200U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 166U, 236U, 6U, 0U, 0U, 0U,
    0U, 0U, 16U, 243U, 246U, 83U, 0U, 0U, 0U, 0U, 0U, 106U, 187U, 171U, 179U, 0U,
    0U, 0U, 0U, 0U, 204U, 101U, 85U, 251U, 23U, 0U, 0U, 0U, 46U, 251U, 20U, 10U,
    244U, 115U, 0U, 0U, 0U, 145U, 186U, 0U, 0U, 167U, 211U, 0U, 0U, 6U, 236U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 51U, 0U,
    85U, 235U, 10U, 0U, 0U, 4U, 224U, 147U, 0U, 183U, 124U, 0U, 0U, 0U, 0U, 108U,
    236U, 6U, 0U, 0U, 3U, 187U, 227U, 38U, 0U, 0U, 0U, 0U, 0U, 34U, 143U, 69U,
    113U, 0U, 0U, 0U, 0U, 0U, 3U, 187U, 228U, 39U, 0U, 0U, 0U, 0U, 0U, 0U, 166U,
    236U, 6U, 0U, 0U, 0U, 0U, 0U, 16U, 243U, 246U, 83U, 0U, 0U, 0U, 0U, 0U, 106U,
    187U, 171U, 179U, 0U, 0U, 0U, 0U, 0U, 204U, 101U, 85U, 251U, 23U, 0U, 0U, 0U,
    46U, 251U, 20U, 10U, 244U, 115U, 0U, 0U, 0U, 145U, 186U, 0U, 0U, 167U, 211U,
    0U, 0U, 6U, 236U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 51U, 0U, 85U, 235U, 10U, 0U, 0U, 4U, 224U, 147U, 0U, 183U, 124U,
    0U, 0U, 0U, 0U, 108U, 236U, 6U, 0U, 0U, 0U, 0U, 37U, 250U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 84U, 0U, 0U, 0U, 0U, 176U, 233U, 180U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 63U, 228U, 143U, 180U, 0U, 0U, 0U, 0U, 0U, 0U,
    1U, 204U, 107U, 136U, 180U, 0U, 0U, 0U, 0U, 0U, 0U, 94U, 228U, 7U, 136U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 188U, 0U, 0U, 10U, 227U, 107U, 0U,
    136U, 180U, 0U, 0U, 0U, 0U, 0U, 125U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 180U, 0U, 0U, 0U, 0U, 24U, 243U, 74U, 0U, 0U, 136U, 180U, 0U,
    0U, 0U, 0U, 156U, 149U, 0U, 0U, 0U, 136U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 152U, 0U, 0U, 98U, 207U, 248U, MAX_uint8_T,
    MAX_uint8_T, 160U, 0U, 125U, 240U, 93U, 18U, 0U, 0U, 0U, 19U, 248U, 99U, 0U,
    0U, 0U, 0U, 0U, 77U, MAX_uint8_T, 13U, 0U, 0U, 0U, 0U, 0U, 96U, 244U, 0U, 0U,
    0U, 0U, 0U, 0U, 78U, MAX_uint8_T, 15U, 0U, 0U, 0U, 0U, 0U, 21U, 250U, 108U,
    0U, 0U, 0U, 0U, 0U, 0U, 135U, 244U, 104U, 23U, 0U, 0U, 0U, 0U, 1U, 107U,
    211U, 249U, MAX_uint8_T, MAX_uint8_T, 164U, 0U, 0U, 0U, 0U, 193U, 124U, 0U,
    0U, 0U, 0U, 0U, 0U, 36U, 208U, 0U, 0U, 0U, 0U, 0U, 44U, 253U, 123U, 0U, 0U,
    9U, 194U, 109U, 0U, 0U, 0U, 0U, 14U, 196U, 42U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 248U, 0U, 224U, 88U, 0U, 0U,
    0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 96U, 0U, 224U, 88U, 0U, 0U, 0U, 0U,
    224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 56U, 0U, 0U, 71U, 218U, 24U, 0U, 0U,
    19U, 202U, 31U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 248U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U,
    0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 96U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U,
    224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 56U, 0U, 99U, 235U, 153U, 0U, 0U, 34U, 196U, 18U, 167U, 78U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 248U,
    0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U,
    0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 96U, 0U, 224U, 88U, 0U,
    0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 56U, 0U, MAX_uint8_T, 4U,
    172U, 84U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 248U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U,
    224U, 88U, 0U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 96U,
    0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U,
    0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 56U, 3U,
    173U, 137U, 0U, 0U, 6U, 183U, 64U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 88U, 0U, 0U,
    228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U,
    228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 35U,
    228U, 50U, 3U, 189U, 61U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 88U, 0U, 0U, 228U,
    88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U,
    88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 67U,
    233U, 184U, 1U, 17U, 199U, 29U, 137U, 109U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U,
    88U, 0U, 0U, 0U, 228U, 88U, 0U, 0U, 0U, 228U, 88U, 0U, 0U, 0U, 228U, 88U, 0U,
    0U, 0U, 228U, 88U, 0U, 0U, 0U, 228U, 88U, 0U, 0U, 0U, 228U, 88U, 0U, 0U, 0U,
    228U, 88U, 0U, 0U, 0U, 228U, 88U, 0U, 240U, 20U, 156U, 100U, 0U, 0U, 0U, 0U,
    0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U,
    0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U, 0U, 228U, 88U, 0U,
    0U, 228U, 88U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, 247U, 215U, 119U,
    2U, 0U, 0U, 0U, 224U, 88U, 2U, 19U, 87U, 239U, 135U, 0U, 0U, 0U, 224U, 88U,
    0U, 0U, 0U, 98U, 247U, 21U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 11U, MAX_uint8_T,
    68U, 48U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 76U, 0U, 0U,
    244U, 89U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 15U, MAX_uint8_T, 65U, 0U, 0U,
    224U, 88U, 0U, 0U, 0U, 102U, 240U, 10U, 0U, 0U, 224U, 88U, 0U, 23U, 93U,
    240U, 106U, 0U, 0U, 0U, 224U, MAX_uint8_T, MAX_uint8_T, 246U, 201U, 86U, 0U,
    0U, 0U, 21U, 228U, 158U, 88U, 121U, 0U, 0U, 82U, 122U, 125U, 238U, 46U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 224U, 163U, 0U, 0U, 0U, 80U, 192U, 224U,
    MAX_uint8_T, 68U, 0U, 0U, 80U, 192U, 224U, 183U, 220U, 8U, 0U, 80U, 192U,
    224U, 54U, 223U, 133U, 0U, 80U, 192U, 224U, 44U, 73U, 250U, 43U, 80U, 192U,
    224U, 44U, 0U, 168U, 196U, 81U, 192U, 224U, 44U, 0U, 23U, 239U, 183U, 192U,
    224U, 44U, 0U, 0U, 102U, MAX_uint8_T, 192U, 224U, 44U, 0U, 0U, 1U, 195U,
    192U, 0U, 0U, 6U, 185U, 121U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 10U, 191U, 51U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 101U, 213U, 249U, 231U,
    148U, 14U, 0U, 0U, 122U, 235U, 80U, 14U, 45U, 195U, 200U, 5U, 17U, 247U, 91U,
    0U, 0U, 0U, 21U, 244U, 92U, 76U, MAX_uint8_T, 11U, 0U, 0U, 0U, 0U, 183U,
    159U, 96U, 243U, 0U, 0U, 0U, 0U, 0U, 160U, 179U, 76U, MAX_uint8_T, 12U, 0U,
    0U, 0U, 0U, 184U, 159U, 17U, 246U, 94U, 0U, 0U, 0U, 21U, 245U, 91U, 0U, 122U,
    236U, 78U, 13U, 46U, 196U, 200U, 5U, 0U, 0U, 103U, 215U, 250U, 230U, 148U,
    14U, 0U, 0U, 0U, 0U, 0U, 45U, 227U, 40U, 0U, 0U, 0U, 0U, 0U, 7U, 196U, 50U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 101U, 213U, 249U,
    231U, 148U, 14U, 0U, 0U, 122U, 235U, 80U, 14U, 45U, 195U, 200U, 5U, 17U,
    247U, 91U, 0U, 0U, 0U, 21U, 244U, 92U, 76U, MAX_uint8_T, 11U, 0U, 0U, 0U, 0U,
    183U, 159U, 96U, 243U, 0U, 0U, 0U, 0U, 0U, 160U, 179U, 76U, MAX_uint8_T, 12U,
    0U, 0U, 0U, 0U, 184U, 159U, 17U, 246U, 94U, 0U, 0U, 0U, 21U, 245U, 91U, 0U,
    122U, 236U, 78U, 13U, 46U, 196U, 200U, 5U, 0U, 0U, 103U, 215U, 250U, 230U,
    148U, 14U, 0U, 0U, 0U, 0U, 82U, 235U, 169U, 0U, 0U, 0U, 0U, 0U, 25U, 199U,
    22U, 152U, 93U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 101U,
    213U, 249U, 231U, 148U, 14U, 0U, 0U, 122U, 235U, 80U, 14U, 45U, 195U, 200U,
    5U, 17U, 247U, 91U, 0U, 0U, 0U, 21U, 244U, 92U, 76U, MAX_uint8_T, 11U, 0U,
    0U, 0U, 0U, 183U, 159U, 96U, 243U, 0U, 0U, 0U, 0U, 0U, 160U, 179U, 76U,
    MAX_uint8_T, 12U, 0U, 0U, 0U, 0U, 184U, 159U, 17U, 246U, 94U, 0U, 0U, 0U,
    21U, 245U, 91U, 0U, 122U, 236U, 78U, 13U, 46U, 196U, 200U, 5U, 0U, 0U, 103U,
    215U, 250U, 230U, 148U, 14U, 0U, 0U, 0U, 8U, 218U, 175U, 69U, 145U, 0U, 0U,
    0U, 0U, 58U, 144U, 106U, 239U, 65U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 101U, 213U, 249U, 231U, 148U, 14U, 0U, 0U, 122U, 235U, 80U, 14U,
    45U, 195U, 200U, 5U, 17U, 247U, 91U, 0U, 0U, 0U, 21U, 244U, 92U, 76U,
    MAX_uint8_T, 11U, 0U, 0U, 0U, 0U, 183U, 159U, 96U, 243U, 0U, 0U, 0U, 0U, 0U,
    160U, 179U, 76U, MAX_uint8_T, 12U, 0U, 0U, 0U, 0U, 184U, 159U, 17U, 246U,
    94U, 0U, 0U, 0U, 21U, 245U, 91U, 0U, 122U, 236U, 78U, 13U, 46U, 196U, 200U,
    5U, 0U, 0U, 103U, 215U, 250U, 230U, 148U, 14U, 0U, 0U, 0U, 0U, MAX_uint8_T,
    4U, 172U, 84U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 101U,
    213U, 249U, 231U, 148U, 14U, 0U, 0U, 122U, 235U, 80U, 14U, 45U, 195U, 200U,
    5U, 17U, 247U, 91U, 0U, 0U, 0U, 21U, 244U, 92U, 76U, MAX_uint8_T, 11U, 0U,
    0U, 0U, 0U, 183U, 159U, 96U, 243U, 0U, 0U, 0U, 0U, 0U, 160U, 179U, 76U,
    MAX_uint8_T, 12U, 0U, 0U, 0U, 0U, 184U, 159U, 17U, 246U, 94U, 0U, 0U, 0U,
    21U, 245U, 91U, 0U, 122U, 236U, 78U, 13U, 46U, 196U, 200U, 5U, 0U, 0U, 103U,
    215U, 250U, 230U, 148U, 14U, 0U, 109U, 107U, 0U, 0U, 0U, 17U, 183U, 13U, 7U,
    184U, 106U, 0U, 17U, 201U, 78U, 0U, 0U, 10U, 193U, 118U, 203U, 88U, 0U, 0U,
    0U, 0U, 28U, 249U, 160U, 0U, 0U, 0U, 0U, 10U, 193U, 118U, 204U, 88U, 0U, 0U,
    6U, 184U, 106U, 0U, 18U, 201U, 77U, 0U, 108U, 107U, 0U, 0U, 0U, 18U, 183U,
    13U, 0U, 0U, 102U, 213U, 248U, 225U, 140U, 187U, 71U, 0U, 122U, 235U, 79U,
    13U, 43U, 216U, 219U, 4U, 17U, 247U, 91U, 0U, 0U, 69U, 188U, 244U, 91U, 76U,
    MAX_uint8_T, 11U, 0U, 32U, 206U, 20U, 180U, 158U, 95U, 242U, 0U, 9U, 198U,
    51U, 0U, 159U, 179U, 75U, MAX_uint8_T, 10U, 163U, 96U, 0U, 0U, 184U, 159U,
    16U, 246U, 183U, 149U, 0U, 0U, 21U, 245U, 91U, 0U, 137U, 253U, 82U, 12U, 45U,
    195U, 200U, 5U, 17U, 206U, 114U, 208U, 246U, 233U, 150U, 15U, 0U, 0U, 56U,
    227U, 29U, 0U, 0U, 0U, 0U, 0U, 68U, 183U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U,
    72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U,
    0U, 0U, 208U, 68U, 240U, 75U, 0U, 0U, 0U, 210U, 64U, 214U, 105U, 0U, 0U, 1U,
    235U, 39U, 137U, 216U, 43U, 11U, 110U, 221U, 4U, 12U, 150U, 229U, 243U, 197U,
    51U, 0U, 0U, 0U, 0U, 147U, 165U, 2U, 0U, 0U, 0U, 70U, 178U, 4U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U,
    0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U,
    68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 240U, 75U, 0U, 0U, 0U, 210U, 64U,
    214U, 105U, 0U, 0U, 1U, 235U, 39U, 137U, 216U, 43U, 11U, 110U, 221U, 4U, 12U,
    150U, 229U, 243U, 197U, 51U, 0U, 0U, 2U, 191U, 232U, 60U, 0U, 0U, 0U, 118U,
    129U, 34U, 198U, 14U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 244U, 72U, 0U, 0U, 0U,
    208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U,
    68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U,
    240U, 75U, 0U, 0U, 0U, 210U, 64U, 214U, 105U, 0U, 0U, 1U, 235U, 39U, 137U,
    216U, 43U, 11U, 110U, 221U, 4U, 12U, 150U, 229U, 243U, 197U, 51U, 0U, 0U,
    132U, 128U, 48U, 208U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 244U, 72U, 0U, 0U,
    0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U,
    68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U, 244U, 72U, 0U, 0U, 0U, 208U, 68U,
    240U, 75U, 0U, 0U, 0U, 210U, 64U, 214U, 105U, 0U, 0U, 1U, 235U, 39U, 137U,
    216U, 43U, 11U, 110U, 221U, 4U, 12U, 150U, 229U, 243U, 197U, 51U, 0U, 0U, 0U,
    0U, 30U, 227U, 55U, 0U, 0U, 0U, 0U, 2U, 184U, 67U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 159U, 199U, 1U, 0U, 0U, 39U, 231U, 22U, 24U, 242U, 92U,
    0U, 0U, 190U, 102U, 0U, 0U, 120U, 228U, 11U, 96U, 198U, 1U, 0U, 0U, 7U, 221U,
    150U, 231U, 46U, 0U, 0U, 0U, 0U, 81U, MAX_uint8_T, 139U, 0U, 0U, 0U, 0U, 0U,
    0U, MAX_uint8_T, 56U, 0U, 0U, 0U, 0U, 0U, 0U, MAX_uint8_T, 56U, 0U, 0U, 0U,
    0U, 0U, 0U, MAX_uint8_T, 56U, 0U, 0U, 0U, 0U, 0U, 0U, MAX_uint8_T, 56U, 0U,
    0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U,
    MAX_uint8_T, 252U, 229U, 141U, 1U, 224U, 88U, 8U, 73U, 253U, 75U, 224U, 88U,
    0U, 0U, 238U, 89U, 224U, 88U, 16U, 126U, 239U, 26U, 224U, MAX_uint8_T, 236U,
    184U, 52U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 224U, 88U, 0U, 0U, 0U, 0U, 60U,
    219U, 246U, 185U, 17U, 0U, 182U, 133U, 20U, 218U, 96U, 0U, 212U, 80U, 12U,
    229U, 39U, 0U, 216U, 80U, 136U, 140U, 0U, 0U, 216U, 80U, 172U, 105U, 0U, 0U,
    216U, 80U, 20U, 165U, 142U, 11U, 216U, 80U, 0U, 0U, 122U, 164U, 216U, 80U,
    0U, 1U, 121U, 193U, 216U, 80U, 224U, MAX_uint8_T, 220U, 62U, 0U, 36U, 226U,
    50U, 0U, 0U, 0U, 0U, 0U, 45U, 197U, 9U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 60U, 200U, 244U, 183U, 9U, 0U, 0U, 149U, 44U, 23U, 229U, 87U, 0U, 0U, 0U,
    0U, 0U, 188U, 107U, 0U, 0U, 91U, 205U, 242U, MAX_uint8_T, 108U, 0U, 52U,
    242U, 73U, 6U, 188U, 108U, 0U, 84U, 226U, 27U, 47U, 221U, 137U, 0U, 8U, 182U,
    241U, 166U, 92U, 235U, 60U, 0U, 0U, 0U, 115U, 191U, 8U, 0U, 0U, 0U, 45U,
    195U, 13U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 60U, 200U, 244U, 183U, 9U,
    0U, 0U, 149U, 44U, 23U, 229U, 87U, 0U, 0U, 0U, 0U, 0U, 188U, 107U, 0U, 0U,
    91U, 205U, 242U, MAX_uint8_T, 108U, 0U, 52U, 242U, 73U, 6U, 188U, 108U, 0U,
    84U, 226U, 27U, 47U, 221U, 137U, 0U, 8U, 182U, 241U, 166U, 92U, 235U, 60U,
    0U, 0U, 166U, 235U, 85U, 0U, 0U, 0U, 89U, 156U, 21U, 198U, 27U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 60U, 200U, 244U, 183U, 9U, 0U, 0U, 149U, 44U, 23U,
    229U, 87U, 0U, 0U, 0U, 0U, 0U, 188U, 107U, 0U, 0U, 91U, 205U, 242U,
    MAX_uint8_T, 108U, 0U, 52U, 242U, 73U, 6U, 188U, 108U, 0U, 84U, 226U, 27U,
    47U, 221U, 137U, 0U, 8U, 182U, 241U, 166U, 92U, 235U, 60U, 0U, 67U, 239U,
    107U, 145U, 57U, 0U, 0U, 146U, 69U, 174U, 217U, 7U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 60U, 200U, 244U, 183U, 9U, 0U, 0U, 149U, 44U, 23U, 229U, 87U, 0U,
    0U, 0U, 0U, 0U, 188U, 107U, 0U, 0U, 91U, 205U, 242U, MAX_uint8_T, 108U, 0U,
    52U, 242U, 73U, 6U, 188U, 108U, 0U, 84U, 226U, 27U, 47U, 221U, 137U, 0U, 8U,
    182U, 241U, 166U, 92U, 235U, 60U, 0U, 88U, 172U, 4U, 252U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 60U, 200U, 244U, 183U, 9U, 0U, 0U, 149U, 44U, 23U,
    229U, 87U, 0U, 0U, 0U, 0U, 0U, 188U, 107U, 0U, 0U, 91U, 205U, 242U,
    MAX_uint8_T, 108U, 0U, 52U, 242U, 73U, 6U, 188U, 108U, 0U, 84U, 226U, 27U,
    47U, 221U, 137U, 0U, 8U, 182U, 241U, 166U, 92U, 235U, 60U, 0U, 0U, 148U,
    238U, 69U, 0U, 0U, 0U, 0U, 172U, 39U, 148U, 0U, 0U, 0U, 0U, 148U, 239U, 71U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 60U, 200U, 244U, 183U, 9U, 0U, 0U,
    149U, 44U, 23U, 229U, 87U, 0U, 0U, 0U, 0U, 0U, 188U, 107U, 0U, 0U, 91U, 205U,
    242U, MAX_uint8_T, 108U, 0U, 52U, 242U, 73U, 6U, 188U, 108U, 0U, 84U, 226U,
    27U, 47U, 221U, 137U, 0U, 8U, 182U, 241U, 166U, 92U, 235U, 60U, 0U, 60U,
    200U, 240U, 163U, 116U, 232U, 220U, 70U, 0U, 0U, 149U, 44U, 23U, 229U, 226U,
    31U, 71U, 233U, 4U, 0U, 0U, 0U, 0U, 188U, 141U, 0U, 0U, 232U, 56U, 0U, 91U,
    205U, 242U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    80U, 52U, 242U, 73U, 6U, 188U, 136U, 0U, 0U, 0U, 0U, 84U, 226U, 27U, 54U,
    201U, 238U, 64U, 5U, 0U, 0U, 8U, 182U, 246U, 176U, 21U, 115U, 229U,
    MAX_uint8_T, MAX_uint8_T, 92U, 0U, 33U, 180U, 240U, MAX_uint8_T, 128U, 3U,
    212U, 180U, 23U, 0U, 0U, 53U, MAX_uint8_T, 32U, 0U, 0U, 0U, 78U, 251U, 0U,
    0U, 0U, 0U, 46U, MAX_uint8_T, 33U, 0U, 0U, 0U, 0U, 198U, 183U, 26U, 0U, 0U,
    0U, 25U, 178U, 245U, MAX_uint8_T, 148U, 0U, 0U, 1U, 199U, 117U, 0U, 0U, 0U,
    0U, 43U, 202U, 0U, 0U, 0U, 52U, 252U, 115U, 0U, 0U, 41U, 227U, 45U, 0U, 0U,
    0U, 0U, 51U, 195U, 7U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 35U, 194U, 241U, 167U,
    9U, 2U, 211U, 108U, 15U, 183U, 115U, 52U, 244U, 2U, 0U, 93U, 186U, 78U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 211U, 47U, 241U, 4U, 0U,
    0U, 0U, 0U, 196U, 152U, 21U, 0U, 0U, 0U, 22U, 170U, 239U, MAX_uint8_T, 208U,
    0U, 0U, 0U, 123U, 185U, 6U, 0U, 0U, 51U, 191U, 10U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 35U, 194U, 241U, 167U, 9U, 2U, 211U, 108U, 15U, 183U, 115U, 52U,
    244U, 2U, 0U, 93U, 186U, 78U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 211U, 47U, 241U, 4U, 0U, 0U, 0U, 0U, 196U, 152U, 21U, 0U, 0U,
    0U, 22U, 170U, 239U, MAX_uint8_T, 208U, 0U, 0U, 147U, 235U, 105U, 0U, 0U,
    70U, 173U, 16U, 193U, 39U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 35U, 194U, 241U, 167U,
    9U, 2U, 211U, 108U, 15U, 183U, 115U, 52U, 244U, 2U, 0U, 93U, 186U, 78U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 211U, 47U, 241U, 4U, 0U,
    0U, 0U, 0U, 196U, 152U, 21U, 0U, 0U, 0U, 22U, 170U, 239U, MAX_uint8_T, 208U,
    0U, 52U, 208U, 0U, 224U, 32U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 35U, 194U, 241U,
    167U, 9U, 2U, 211U, 108U, 15U, 183U, 115U, 52U, 244U, 2U, 0U, 93U, 186U, 78U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 211U, 47U, 241U, 4U, 0U,
    0U, 0U, 0U, 196U, 152U, 21U, 0U, 0U, 0U, 22U, 170U, 239U, MAX_uint8_T, 208U,
    3U, 173U, 137U, 0U, 0U, 6U, 183U, 64U, 0U, 0U, 0U, 0U, 0U, 0U, 216U, 80U, 0U,
    0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U,
    0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 35U, 228U, 50U, 3U, 189U, 61U, 0U, 0U,
    0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U,
    216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U,
    67U, 233U, 184U, 1U, 17U, 199U, 29U, 137U, 109U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    216U, 80U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 216U,
    80U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 216U, 80U, 0U,
    240U, 20U, 156U, 100U, 0U, 0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U,
    0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U, 0U, 216U, 80U, 0U,
    0U, 216U, 80U, 0U, 0U, 1U, 5U, 139U, 56U, 0U, 0U, 90U, 227U, 251U, 226U, 21U,
    0U, 0U, 0U, 86U, 114U, 105U, 219U, 25U, 0U, 0U, 36U, 190U, 243U, 248U, 190U,
    0U, 3U, 214U, 144U, 15U, 70U, 250U, 54U, 57U, 250U, 10U, 0U, 0U, 181U, 117U,
    83U, 231U, 0U, 0U, 0U, 159U, 139U, 54U, 251U, 12U, 0U, 0U, 194U, 109U, 2U,
    210U, 147U, 15U, 89U, 243U, 24U, 0U, 33U, 187U, 242U, 208U, 63U, 0U, 0U,
    168U, 211U, 45U, 192U, 0U, 2U, 198U, 64U, 229U, 119U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 216U, 103U, 184U, 245U, 171U, 2U, 216U, 222U, 66U, 21U, 239U, 67U, 216U,
    95U, 0U, 0U, 206U, 91U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U,
    204U, 92U, 216U, 80U, 0U, 0U, 204U, 92U, 216U, 80U, 0U, 0U, 204U, 92U, 0U,
    5U, 182U, 125U, 0U, 0U, 0U, 0U, 0U, 9U, 189U, 54U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 35U, 186U, 242U, 216U, 91U, 0U, 3U, 211U, 136U, 14U, 62U,
    242U, 55U, 52U, 249U, 8U, 0U, 0U, 161U, 148U, 79U, 230U, 0U, 0U, 0U, 135U,
    174U, 51U, 248U, 7U, 0U, 0U, 163U, 146U, 2U, 210U, 134U, 13U, 64U, 243U, 53U,
    0U, 33U, 187U, 243U, 215U, 88U, 0U, 0U, 0U, 0U, 42U, 228U, 43U, 0U, 0U, 0U,
    6U, 194U, 53U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 35U, 186U, 242U, 216U,
    91U, 0U, 3U, 211U, 136U, 14U, 62U, 242U, 55U, 52U, 249U, 8U, 0U, 0U, 161U,
    148U, 79U, 230U, 0U, 0U, 0U, 135U, 174U, 51U, 248U, 7U, 0U, 0U, 163U, 146U,
    2U, 210U, 134U, 13U, 64U, 243U, 53U, 0U, 33U, 187U, 243U, 215U, 88U, 0U, 0U,
    0U, 78U, 234U, 173U, 0U, 0U, 0U, 23U, 199U, 24U, 149U, 97U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 35U, 186U, 242U, 216U, 91U, 0U, 3U, 211U, 136U, 14U, 62U,
    242U, 55U, 52U, 249U, 8U, 0U, 0U, 161U, 148U, 79U, 230U, 0U, 0U, 0U, 135U,
    174U, 51U, 248U, 7U, 0U, 0U, 163U, 146U, 2U, 210U, 134U, 13U, 64U, 243U, 53U,
    0U, 33U, 187U, 243U, 215U, 88U, 0U, 0U, 7U, 216U, 178U, 66U, 149U, 0U, 0U,
    54U, 148U, 103U, 239U, 68U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 35U, 186U,
    242U, 216U, 91U, 0U, 3U, 211U, 136U, 14U, 62U, 242U, 55U, 52U, 249U, 8U, 0U,
    0U, 161U, 148U, 79U, 230U, 0U, 0U, 0U, 135U, 174U, 51U, 248U, 7U, 0U, 0U,
    163U, 146U, 2U, 210U, 134U, 13U, 64U, 243U, 53U, 0U, 33U, 187U, 243U, 215U,
    88U, 0U, 0U, 0U, 252U, 8U, 168U, 88U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    35U, 186U, 242U, 216U, 91U, 0U, 3U, 211U, 136U, 14U, 62U, 242U, 55U, 52U,
    249U, 8U, 0U, 0U, 161U, 148U, 79U, 230U, 0U, 0U, 0U, 135U, 174U, 51U, 248U,
    7U, 0U, 0U, 163U, 146U, 2U, 210U, 134U, 13U, 64U, 243U, 53U, 0U, 33U, 187U,
    243U, 215U, 88U, 0U, 0U, 0U, 0U, 244U, 128U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 180U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 60U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 244U, 128U, 0U, 0U,
    0U, 0U, 33U, 185U, 242U, 221U, 179U, 89U, 2U, 210U, 135U, 14U, 114U,
    MAX_uint8_T, 53U, 51U, 248U, 7U, 21U, 188U, 185U, 147U, 79U, 229U, 2U, 176U,
    43U, 137U, 175U, 54U, 249U, 141U, 90U, 0U, 161U, 147U, 2U, 213U, 201U, 12U,
    62U, 242U, 55U, 20U, 191U, 190U, 245U, 217U, 91U, 0U, 5U, 182U, 125U, 0U, 0U,
    0U, 0U, 9U, 189U, 54U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 60U, 0U, 0U,
    220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U, 236U,
    60U, 0U, 0U, 220U, 72U, 235U, 61U, 0U, 4U, 230U, 72U, 212U, 112U, 21U, 162U,
    246U, 72U, 80U, 234U, 227U, 88U, 220U, 72U, 0U, 0U, 42U, 228U, 43U, 0U, 0U,
    6U, 194U, 53U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 60U, 0U, 0U, 220U, 72U,
    236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U,
    0U, 220U, 72U, 235U, 61U, 0U, 4U, 230U, 72U, 212U, 112U, 21U, 162U, 246U,
    72U, 80U, 234U, 227U, 88U, 220U, 72U, 0U, 78U, 234U, 173U, 0U, 0U, 23U, 199U,
    24U, 149U, 97U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 60U, 0U, 0U, 220U, 72U,
    236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U,
    0U, 220U, 72U, 235U, 61U, 0U, 4U, 230U, 72U, 212U, 112U, 21U, 162U, 246U,
    72U, 80U, 234U, 227U, 88U, 220U, 72U, 0U, 252U, 8U, 168U, 88U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U,
    236U, 60U, 0U, 0U, 220U, 72U, 236U, 60U, 0U, 0U, 220U, 72U, 235U, 61U, 0U,
    4U, 230U, 72U, 212U, 112U, 21U, 162U, 246U, 72U, 80U, 234U, 227U, 88U, 220U,
    72U, 0U, 0U, 0U, 166U, 147U, 0U, 0U, 0U, 0U, 89U, 162U, 1U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 187U, 131U, 0U, 0U, 23U, 240U, 13U, 97U, 220U, 0U, 0U,
    114U, 158U, 0U, 14U, 247U, 53U, 0U, 208U, 59U, 0U, 0U, 172U, 142U, 45U, 216U,
    0U, 0U, 0U, 82U, 229U, 142U, 117U, 0U, 0U, 0U, 7U, 240U, 244U, 23U, 0U, 0U,
    0U, 0U, 157U, 175U, 0U, 0U, 0U, 0U, 0U, 179U, 76U, 0U, 0U, 0U, 0U, 54U, 229U,
    3U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 0U, 216U,
    90U, 179U, 242U, 173U, 14U, 216U, 196U, 66U, 22U, 206U, 137U, 216U, 105U, 0U,
    0U, 108U, 207U, 216U, 80U, 0U, 0U, 90U, 222U, 216U, 104U, 0U, 0U, 120U, 191U,
    216U, 209U, 53U, 34U, 220U, 98U, 216U, 99U, 198U, 244U, 147U, 2U, 216U, 80U,
    0U, 0U, 0U, 0U, 216U, 80U, 0U, 0U, 0U, 0U, 0U, 116U, 144U, 32U, 224U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 187U, 131U, 0U, 0U, 23U, 240U, 13U, 97U, 220U,
    0U, 0U, 114U, 158U, 0U, 14U, 247U, 53U, 0U, 208U, 59U, 0U, 0U, 172U, 142U,
    45U, 216U, 0U, 0U, 0U, 82U, 229U, 142U, 117U, 0U, 0U, 0U, 7U, 240U, 244U,
    23U, 0U, 0U, 0U, 0U, 157U, 175U, 0U, 0U, 0U, 0U, 0U, 179U, 76U, 0U, 0U, 0U,
    0U, 54U, 229U, 3U, 0U, 0U, 0U };

  c3_s8H4KoO8du63pRuYvYBfk9F c3_glIdx;
  c3_sC4L2hrC7PgynGo8pWyYGeE c3_imgIdx;
  emlrtStack c3_b_st;
  emlrtStack c3_st;
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_g_y = NULL;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_b_i;
  real_T c3_b_idx;
  real_T c3_b_k;
  real_T c3_cg;
  real_T c3_n;
  real_T c3_rg;
  int32_T c3_b_thisGlyphBitmap_size[2];
  int32_T c3_c_thisGlyphBitmap[2];
  int32_T c3_c_thisGlyphBitmap_size[2];
  int32_T c3_num[2];
  int32_T c3_sz[2];
  int32_T c3_thisGlyphBitmap_size[2];
  int32_T c3_thisGlyphCut_u8_size[2];
  int32_T c3_b_endC_gl;
  int32_T c3_b_endC_im;
  int32_T c3_b_endR_gl;
  int32_T c3_b_endR_im;
  int32_T c3_b_loop_ub;
  int32_T c3_b_n;
  int32_T c3_b_q0;
  int32_T c3_b_q1;
  int32_T c3_b_qY;
  int32_T c3_b_saturatedUnaryMinus;
  int32_T c3_b_startC_gl;
  int32_T c3_b_startC_im;
  int32_T c3_b_startR_gl;
  int32_T c3_b_startR_im;
  int32_T c3_b_thisGlyphBitmap;
  int32_T c3_b_varargin_1;
  int32_T c3_b_varargin_2;
  int32_T c3_c;
  int32_T c3_c_i;
  int32_T c3_c_loop_ub;
  int32_T c3_c_q0;
  int32_T c3_c_q1;
  int32_T c3_c_qY;
  int32_T c3_c_varargin_1;
  int32_T c3_d_loop_ub;
  int32_T c3_d_q0;
  int32_T c3_d_q1;
  int32_T c3_d_qY;
  int32_T c3_e_loop_ub;
  int32_T c3_e_q0;
  int32_T c3_e_q1;
  int32_T c3_e_qY;
  int32_T c3_endC_gl;
  int32_T c3_endC_im;
  int32_T c3_endR_gl;
  int32_T c3_endR_im;
  int32_T c3_f_loop_ub;
  int32_T c3_f_q0;
  int32_T c3_f_q1;
  int32_T c3_f_qY;
  int32_T c3_g_loop_ub;
  int32_T c3_g_q0;
  int32_T c3_g_q1;
  int32_T c3_g_qY;
  int32_T c3_h_loop_ub;
  int32_T c3_h_q0;
  int32_T c3_h_q1;
  int32_T c3_h_qY;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_i15;
  int32_T c3_i16;
  int32_T c3_i17;
  int32_T c3_i18;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_i_q0;
  int32_T c3_i_q1;
  int32_T c3_i_qY;
  int32_T c3_idx;
  int32_T c3_j_q0;
  int32_T c3_j_q1;
  int32_T c3_j_qY;
  int32_T c3_k;
  int32_T c3_k_q0;
  int32_T c3_k_q1;
  int32_T c3_k_qY;
  int32_T c3_l_q0;
  int32_T c3_l_q1;
  int32_T c3_l_qY;
  int32_T c3_loop_ub;
  int32_T c3_m_q0;
  int32_T c3_m_q1;
  int32_T c3_m_qY;
  int32_T c3_maxdimlen;
  int32_T c3_n_q0;
  int32_T c3_n_q1;
  int32_T c3_n_qY;
  int32_T c3_nx;
  int32_T c3_o_q0;
  int32_T c3_o_q1;
  int32_T c3_o_qY;
  int32_T c3_penX;
  int32_T c3_penY;
  int32_T c3_q0;
  int32_T c3_q1;
  int32_T c3_qY;
  int32_T c3_r;
  int32_T c3_result;
  int32_T c3_saturatedUnaryMinus;
  int32_T c3_startC_gl;
  int32_T c3_startC_im;
  int32_T c3_startR_gl;
  int32_T c3_startR_im;
  int32_T c3_thisGlyphBitmap;
  int32_T c3_varargin_2;
  int32_T c3_xx;
  int32_T c3_yy;
  uint32_T c3_bitmapEndIdx_1b;
  uint32_T c3_bitmapStartIdx_1b;
  uint32_T c3_p_q0;
  uint32_T c3_p_qY;
  uint32_T c3_q_q0;
  uint32_T c3_q_qY;
  uint32_T c3_r_q0;
  uint32_T c3_r_qY;
  uint32_T c3_s_q0;
  uint32_T c3_s_qY;
  uint32_T c3_u;
  uint32_T c3_u1;
  uint32_T c3_u2;
  uint32_T c3_u3;
  uint16_T c3_varargin_1[2];
  uint16_T c3_a;
  uint16_T c3_b_x;
  uint16_T c3_c_x;
  uint16_T c3_d_x;
  uint16_T c3_e_x;
  uint16_T c3_thisCharcode;
  uint16_T c3_thisCharcode_1b;
  uint16_T c3_thisGlyphH;
  uint16_T c3_thisGlyphIdx;
  uint16_T c3_thisGlyphIdx_1b;
  uint16_T c3_thisGlyphW;
  uint16_T c3_tmp1;
  uint16_T c3_tmp3;
  uint16_T c3_u4;
  uint16_T c3_x;
  uint8_T c3_thisGlyphBitmap_data[10664];
  uint8_T c3_b_thisGlyphBitmap_data[144];
  uint8_T c3_c_thisGlyphBitmap_data[144];
  uint8_T c3_thisGlyphCut_u8_data[132];
  uint8_T c3_glyphVal;
  boolean_T c3_b;
  boolean_T c3_b1;
  boolean_T c3_b2;
  boolean_T c3_glyphExists;
  boolean_T c3_noOverlap;
  (void)chartInstance;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_penX = c3_textLocationXY.x;
  c3_q0 = c3_textLocationXY.y;
  c3_q1 = 12;
  if ((c3_q1 < 0) && (c3_q0 < MIN_int32_T - c3_q1)) {
    c3_qY = MIN_int32_T;
  } else if ((c3_q1 > 0) && (c3_q0 > MAX_int32_T - c3_q1)) {
    c3_qY = MAX_int32_T;
  } else {
    c3_qY = c3_q0 + c3_q1;
  }

  c3_penY = c3_qY;
  for (c3_i = 0; c3_i < 10; c3_i++) {
    c3_b_i = (real_T)c3_i + 1.0;
    c3_thisCharcode = c3_ucTextU16[(int32_T)c3_b_i - 1];
    c3_u = (uint32_T)c3_thisCharcode + 1U;
    if (c3_u > 65535U) {
      c3_u = 65535U;
    }

    c3_thisCharcode_1b = (uint16_T)c3_u;
    c3_thisGlyphIdx = c3_uv[c3_thisCharcode_1b - 1];
    c3_u1 = (uint32_T)c3_thisGlyphIdx + 1U;
    if (c3_u1 > 65535U) {
      c3_u1 = 65535U;
    }

    c3_thisGlyphIdx_1b = (uint16_T)c3_u1;
    c3_glyphExists = ((real_T)c3_thisGlyphIdx != 0.0);
    if (!c3_glyphExists) {
      c3_b_q0 = c3_penX;
      c3_b_q1 = 4;
      if ((c3_b_q1 < 0) && (c3_b_q0 < MIN_int32_T - c3_b_q1)) {
        c3_b_qY = MIN_int32_T;
      } else if ((c3_b_q1 > 0) && (c3_b_q0 > MAX_int32_T - c3_b_q1)) {
        c3_b_qY = MAX_int32_T;
      } else {
        c3_b_qY = c3_b_q0 + c3_b_q1;
      }

      c3_penX = c3_b_qY;
    } else {
      c3_thisGlyphW = c3_d_uv[c3_thisGlyphIdx_1b - 1];
      c3_thisGlyphH = c3_uv1[c3_thisGlyphIdx_1b - 1];
      c3_c_q0 = c3_penX;
      c3_c_q1 = c3_b_iv[c3_thisGlyphIdx_1b - 1];
      if ((c3_c_q0 < 0) && (c3_c_q1 < MIN_int32_T - c3_c_q0)) {
        c3_c_qY = MIN_int32_T;
      } else if ((c3_c_q0 > 0) && (c3_c_q1 > MAX_int32_T - c3_c_q0)) {
        c3_c_qY = MAX_int32_T;
      } else {
        c3_c_qY = c3_c_q0 + c3_c_q1;
      }

      c3_xx = c3_c_qY;
      c3_d_q0 = c3_penY;
      c3_d_q1 = c3_iv1[c3_thisGlyphIdx_1b - 1];
      if ((c3_d_q0 >= 0) && (c3_d_q1 < c3_d_q0 - MAX_int32_T)) {
        c3_d_qY = MAX_int32_T;
      } else if ((c3_d_q0 < 0) && (c3_d_q1 > c3_d_q0 - MIN_int32_T)) {
        c3_d_qY = MIN_int32_T;
      } else {
        c3_d_qY = c3_d_q0 - c3_d_q1;
      }

      c3_yy = c3_d_qY;
      c3_startR_im = c3_yy;
      c3_e_q0 = c3_yy;
      c3_e_q1 = c3_thisGlyphH;
      if (c3_e_q0 > MAX_int32_T - c3_e_q1) {
        c3_e_qY = MAX_int32_T;
      } else {
        c3_e_qY = c3_e_q0 + c3_e_q1;
      }

      c3_f_q0 = c3_e_qY;
      c3_f_q1 = 1;
      if ((c3_f_q1 < 0) && (c3_f_q0 > c3_f_q1 + MAX_int32_T)) {
        c3_f_qY = MAX_int32_T;
      } else if ((c3_f_q1 > 0) && (c3_f_q0 < c3_f_q1 + MIN_int32_T)) {
        c3_f_qY = MIN_int32_T;
      } else {
        c3_f_qY = c3_f_q0 - c3_f_q1;
      }

      c3_endR_im = c3_f_qY;
      c3_startC_im = c3_xx;
      c3_g_q0 = c3_xx;
      c3_g_q1 = c3_thisGlyphW;
      if (c3_g_q0 > MAX_int32_T - c3_g_q1) {
        c3_g_qY = MAX_int32_T;
      } else {
        c3_g_qY = c3_g_q0 + c3_g_q1;
      }

      c3_h_q0 = c3_g_qY;
      c3_h_q1 = 1;
      if ((c3_h_q1 < 0) && (c3_h_q0 > c3_h_q1 + MAX_int32_T)) {
        c3_h_qY = MAX_int32_T;
      } else if ((c3_h_q1 > 0) && (c3_h_q0 < c3_h_q1 + MIN_int32_T)) {
        c3_h_qY = MIN_int32_T;
      } else {
        c3_h_qY = c3_h_q0 - c3_h_q1;
      }

      c3_endC_im = c3_h_qY;
      if ((c3_yy > 720) || (c3_endR_im < 1) || (c3_xx > 1280) || (c3_endC_im < 1))
      {
        c3_noOverlap = true;
      } else {
        c3_noOverlap = false;
      }

      if (!c3_noOverlap) {
        c3_startR_gl = 1;
        c3_startC_gl = 1;
        c3_endR_gl = c3_thisGlyphH;
        c3_endC_gl = c3_thisGlyphW;
        if ((real_T)c3_yy < 1.0) {
          c3_c_i = c3_yy;
          if (c3_c_i <= MIN_int32_T) {
            c3_saturatedUnaryMinus = MAX_int32_T;
          } else {
            c3_saturatedUnaryMinus = -c3_c_i;
          }

          c3_l_q0 = c3_saturatedUnaryMinus;
          c3_k_q1 = 2;
          if ((c3_k_q1 < 0) && (c3_l_q0 < MIN_int32_T - c3_k_q1)) {
            c3_k_qY = MIN_int32_T;
          } else if ((c3_k_q1 > 0) && (c3_l_q0 > MAX_int32_T - c3_k_q1)) {
            c3_k_qY = MAX_int32_T;
          } else {
            c3_k_qY = c3_l_q0 + c3_k_q1;
          }

          c3_startR_gl = c3_k_qY;
          c3_startR_im = 1;
        }

        if (c3_endR_im > 720) {
          c3_j_q0 = c3_thisGlyphH;
          c3_k_q0 = c3_endR_im;
          c3_j_q1 = 720;
          if ((c3_j_q1 < 0) && (c3_k_q0 > c3_j_q1 + MAX_int32_T)) {
            c3_j_qY = MAX_int32_T;
          } else if ((c3_j_q1 > 0) && (c3_k_q0 < c3_j_q1 + MIN_int32_T)) {
            c3_j_qY = MIN_int32_T;
          } else {
            c3_j_qY = c3_k_q0 - c3_j_q1;
          }

          c3_m_q1 = c3_j_qY;
          if (c3_m_q1 < c3_j_q0 - MAX_int32_T) {
            c3_m_qY = MAX_int32_T;
          } else {
            c3_m_qY = c3_j_q0 - c3_m_q1;
          }

          c3_endR_gl = c3_m_qY;
          c3_endR_im = 720;
        }

        if ((real_T)c3_xx < 1.0) {
          c3_i1 = c3_xx;
          if (c3_i1 <= MIN_int32_T) {
            c3_b_saturatedUnaryMinus = MAX_int32_T;
          } else {
            c3_b_saturatedUnaryMinus = -c3_i1;
          }

          c3_o_q0 = c3_b_saturatedUnaryMinus;
          c3_n_q1 = 2;
          if ((c3_n_q1 < 0) && (c3_o_q0 < MIN_int32_T - c3_n_q1)) {
            c3_n_qY = MIN_int32_T;
          } else if ((c3_n_q1 > 0) && (c3_o_q0 > MAX_int32_T - c3_n_q1)) {
            c3_n_qY = MAX_int32_T;
          } else {
            c3_n_qY = c3_o_q0 + c3_n_q1;
          }

          c3_startC_gl = c3_n_qY;
          c3_startC_im = 1;
        }

        if (c3_endC_im > 1280) {
          c3_m_q0 = c3_thisGlyphW;
          c3_n_q0 = c3_endC_im;
          c3_l_q1 = 1280;
          if ((c3_l_q1 < 0) && (c3_n_q0 > c3_l_q1 + MAX_int32_T)) {
            c3_l_qY = MAX_int32_T;
          } else if ((c3_l_q1 > 0) && (c3_n_q0 < c3_l_q1 + MIN_int32_T)) {
            c3_l_qY = MIN_int32_T;
          } else {
            c3_l_qY = c3_n_q0 - c3_l_q1;
          }

          c3_o_q1 = c3_l_qY;
          if (c3_o_q1 < c3_m_q0 - MAX_int32_T) {
            c3_o_qY = MAX_int32_T;
          } else {
            c3_o_qY = c3_m_q0 - c3_o_q1;
          }

          c3_endC_gl = c3_o_qY;
          c3_endC_im = 1280;
        }

        c3_imgIdx.startR_im = c3_startR_im;
        c3_imgIdx.startC_im = c3_startC_im;
        c3_imgIdx.endR_im = c3_endR_im;
        c3_imgIdx.endC_im = c3_endC_im;
        c3_glIdx.startR_gl = c3_startR_gl;
        c3_glIdx.startC_gl = c3_startC_gl;
        c3_glIdx.endR_gl = c3_endR_gl;
        c3_glIdx.endC_gl = c3_endC_gl;
        c3_p_q0 = c3_uv2[c3_thisGlyphIdx_1b - 1];
        c3_p_qY = c3_p_q0 + 1U;
        if (c3_p_qY < c3_p_q0) {
          c3_p_qY = MAX_uint32_T;
        }

        c3_bitmapStartIdx_1b = c3_p_qY;
        c3_q_q0 = c3_bitmapStartIdx_1b;
        c3_u2 = (uint32_T)c3_thisGlyphW * (uint32_T)c3_thisGlyphH;
        if (c3_u2 > 65535U) {
          c3_u2 = 65535U;
        }

        c3_q_qY = c3_q_q0 + (uint32_T)(uint16_T)c3_u2;
        if (c3_q_qY < c3_q_q0) {
          c3_q_qY = MAX_uint32_T;
        }

        c3_r_q0 = c3_q_qY;
        c3_r_qY = c3_r_q0 - 1U;
        if (c3_r_qY > c3_r_q0) {
          c3_r_qY = 0U;
        }

        c3_bitmapEndIdx_1b = c3_r_qY;
        c3_b = (c3_bitmapStartIdx_1b > c3_bitmapEndIdx_1b);
        if (c3_b) {
          c3_i2 = 0;
          c3_i3 = -1;
        } else {
          c3_i2 = (int32_T)c3_bitmapStartIdx_1b - 1;
          if (((int32_T)c3_bitmapEndIdx_1b < 1) || ((int32_T)c3_bitmapEndIdx_1b >
               10664)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)c3_bitmapEndIdx_1b, 1, 10664,
              &c3_i_emlrtBCI, (emlrtConstCTX)c3_sp);
          }

          c3_i3 = (int32_T)c3_bitmapEndIdx_1b - 1;
        }

        c3_thisGlyphBitmap_size[1] = (c3_i3 - c3_i2) + 1;
        c3_loop_ub = c3_i3 - c3_i2;
        for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
          c3_thisGlyphBitmap_data[c3_i4] = c3_uv3[c3_i2 + c3_i4];
        }

        c3_varargin_1[0] = c3_thisGlyphW;
        c3_varargin_1[1] = c3_thisGlyphH;
        c3_st.site = &c3_nc_emlrtRSI;
        c3_nx = c3_thisGlyphBitmap_size[1];
        c3_b_st.site = &c3_oc_emlrtRSI;
        c3_n = 1.0;
        for (c3_k = 0; c3_k < 2; c3_k++) {
          c3_b_k = (real_T)c3_k + 1.0;
          if ((real_T)c3_varargin_1[(int32_T)c3_b_k - 1] <= 0.0) {
            c3_n = 0.0;
          } else {
            c3_n *= (real_T)c3_varargin_1[(int32_T)c3_b_k - 1];
          }
        }

        if (!(c3_n <= 2.147483647E+9)) {
          c3_y = NULL;
          sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1,
            21), false);
          c3_b_y = NULL;
          sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2,
            1, 21), false);
          sf_mex_call(&c3_b_st, &c3_n_emlrtMCI, "error", 0U, 2U, 14, c3_y, 14,
                      sf_mex_call(&c3_b_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c3_b_st, NULL, "message", 1U, 1U, 14, c3_b_y)));
        }

        for (c3_i5 = 0; c3_i5 < 2; c3_i5++) {
          c3_num[c3_i5] = c3_varargin_1[c3_i5];
        }

        c3_sz[0] = c3_num[0];
        c3_sz[1] = c3_num[1];
        c3_b_n = 1;
        if (c3_thisGlyphBitmap_size[1] > 1) {
          c3_b_n = c3_thisGlyphBitmap_size[1];
        }

        c3_maxdimlen = muIntScalarMax_sint32(c3_nx, c3_b_n);
        if (c3_sz[0] > c3_maxdimlen) {
          c3_c_y = NULL;
          sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c3_e_y = NULL;
          sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c3_st, &c3_l_emlrtMCI, "error", 0U, 2U, 14, c3_c_y, 14,
                      sf_mex_call(&c3_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c3_st, NULL, "message", 1U, 1U, 14, c3_e_y)));
        }

        if (c3_sz[1] > c3_maxdimlen) {
          c3_d_y = NULL;
          sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c3_f_y = NULL;
          sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c3_st, &c3_l_emlrtMCI, "error", 0U, 2U, 14, c3_d_y, 14,
                      sf_mex_call(&c3_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c3_st, NULL, "message", 1U, 1U, 14, c3_f_y)));
        }

        c3_b_varargin_1 = c3_sz[0];
        c3_varargin_2 = c3_sz[1];
        c3_c_varargin_1 = c3_b_varargin_1;
        c3_b_varargin_2 = c3_varargin_2;
        c3_result = c3_c_varargin_1 * c3_b_varargin_2;
        if (c3_result != c3_nx) {
          c3_g_y = NULL;
          sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1,
            40), false);
          c3_h_y = NULL;
          sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1,
            40), false);
          sf_mex_call(&c3_st, &c3_m_emlrtMCI, "error", 0U, 2U, 14, c3_g_y, 14,
                      sf_mex_call(&c3_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c3_st, NULL, "message", 1U, 1U, 14, c3_h_y)));
        }

        c3_b_thisGlyphBitmap_size[0] = c3_varargin_1[0];
        c3_b_thisGlyphBitmap_size[1] = c3_varargin_1[1];
        c3_b_loop_ub = c3_varargin_1[0] * c3_varargin_1[1] - 1;
        for (c3_i6 = 0; c3_i6 <= c3_b_loop_ub; c3_i6++) {
          c3_b_thisGlyphBitmap_data[c3_i6] = c3_thisGlyphBitmap_data[c3_i6];
        }

        c3_thisGlyphBitmap = c3_b_thisGlyphBitmap_size[1];
        c3_b_thisGlyphBitmap = c3_b_thisGlyphBitmap_size[0];
        c3_c_thisGlyphBitmap_size[0] = c3_b_thisGlyphBitmap_size[1];
        c3_c_loop_ub = c3_b_thisGlyphBitmap_size[0] - 1;
        for (c3_i7 = 0; c3_i7 <= c3_c_loop_ub; c3_i7++) {
          c3_d_loop_ub = c3_b_thisGlyphBitmap_size[1] - 1;
          for (c3_i8 = 0; c3_i8 <= c3_d_loop_ub; c3_i8++) {
            c3_c_thisGlyphBitmap_data[c3_i8 + c3_c_thisGlyphBitmap_size[0] *
              c3_i7] = c3_b_thisGlyphBitmap_data[c3_i7 +
              c3_b_thisGlyphBitmap_size[0] * c3_i8];
          }
        }

        c3_c_thisGlyphBitmap[0] = c3_thisGlyphBitmap;
        c3_c_thisGlyphBitmap[1] = c3_b_thisGlyphBitmap;
        c3_b_thisGlyphBitmap_size[0] = c3_c_thisGlyphBitmap[0];
        c3_b_thisGlyphBitmap_size[1] = c3_c_thisGlyphBitmap[1];
        c3_e_loop_ub = c3_c_thisGlyphBitmap[0] * c3_c_thisGlyphBitmap[1] - 1;
        for (c3_i9 = 0; c3_i9 <= c3_e_loop_ub; c3_i9++) {
          c3_b_thisGlyphBitmap_data[c3_i9] = c3_c_thisGlyphBitmap_data[c3_i9];
        }

        c3_st.site = &c3_mc_emlrtRSI;
        c3_thisGlyphCut_u8_size[0] = c3_b_thisGlyphBitmap_size[0];
        c3_thisGlyphCut_u8_size[1] = c3_b_thisGlyphBitmap_size[1];
        c3_f_loop_ub = c3_b_thisGlyphBitmap_size[0] * c3_b_thisGlyphBitmap_size
          [1] - 1;
        for (c3_i10 = 0; c3_i10 <= c3_f_loop_ub; c3_i10++) {
          c3_thisGlyphCut_u8_data[c3_i10] = c3_b_thisGlyphBitmap_data[c3_i10];
        }

        c3_b_startR_im = c3_imgIdx.startR_im;
        c3_b_startC_im = c3_imgIdx.startC_im;
        c3_b_endR_im = c3_imgIdx.endR_im;
        c3_b_endC_im = c3_imgIdx.endC_im;
        c3_b_startR_gl = c3_glIdx.startR_gl;
        c3_b_startC_gl = c3_glIdx.startC_gl;
        c3_b_endR_gl = c3_glIdx.endR_gl;
        c3_b_endC_gl = c3_glIdx.endC_gl;
        c3_b1 = (c3_b_startR_gl > c3_b_endR_gl);
        if (c3_b1) {
          c3_i11 = 0;
          c3_i12 = -1;
        } else {
          if ((c3_b_startR_gl < 1) || (c3_b_startR_gl > c3_thisGlyphCut_u8_size
               [0])) {
            emlrtDynamicBoundsCheckR2012b(c3_b_startR_gl, 1,
              c3_thisGlyphCut_u8_size[0], &c3_h_emlrtBCI, &c3_st);
          }

          c3_i11 = c3_b_startR_gl - 1;
          if ((c3_b_endR_gl < 1) || (c3_b_endR_gl > c3_thisGlyphCut_u8_size[0]))
          {
            emlrtDynamicBoundsCheckR2012b(c3_b_endR_gl, 1,
              c3_thisGlyphCut_u8_size[0], &c3_g_emlrtBCI, &c3_st);
          }

          c3_i12 = c3_b_endR_gl - 1;
        }

        c3_b2 = (c3_b_startC_gl > c3_b_endC_gl);
        if (c3_b2) {
          c3_i13 = 0;
          c3_i14 = -1;
        } else {
          if ((c3_b_startC_gl < 1) || (c3_b_startC_gl > c3_thisGlyphCut_u8_size
               [1])) {
            emlrtDynamicBoundsCheckR2012b(c3_b_startC_gl, 1,
              c3_thisGlyphCut_u8_size[1], &c3_f_emlrtBCI, &c3_st);
          }

          c3_i13 = c3_b_startC_gl - 1;
          if ((c3_b_endC_gl < 1) || (c3_b_endC_gl > c3_thisGlyphCut_u8_size[1]))
          {
            emlrtDynamicBoundsCheckR2012b(c3_b_endC_gl, 1,
              c3_thisGlyphCut_u8_size[1], &c3_e_emlrtBCI, &c3_st);
          }

          c3_i14 = c3_b_endC_gl - 1;
        }

        c3_g_loop_ub = c3_i14 - c3_i13;
        for (c3_i15 = 0; c3_i15 <= c3_g_loop_ub; c3_i15++) {
          c3_h_loop_ub = c3_i12 - c3_i11;
          for (c3_i16 = 0; c3_i16 <= c3_h_loop_ub; c3_i16++) {
            c3_thisGlyphCut_u8_data[c3_i16 + ((c3_i12 - c3_i11) + 1) * c3_i15] =
              c3_thisGlyphCut_u8_data[(c3_i11 + c3_i16) +
              c3_thisGlyphCut_u8_size[0] * (c3_i13 + c3_i15)];
          }
        }

        c3_thisGlyphCut_u8_size[0] = (c3_i12 - c3_i11) + 1;
        c3_thisGlyphCut_u8_size[1] = (c3_i14 - c3_i13) + 1;
        for (c3_idx = 0; c3_idx < 3; c3_idx++) {
          c3_b_idx = (real_T)c3_idx + 1.0;
          c3_cg = 1.0;
          for (c3_c = c3_b_startC_im; c3_c <= c3_b_endC_im; c3_c++) {
            c3_rg = 1.0;
            for (c3_r = c3_b_startR_im; c3_r <= c3_b_endR_im; c3_r++) {
              c3_i17 = (int32_T)c3_rg;
              if ((c3_i17 < 1) || (c3_i17 > c3_thisGlyphCut_u8_size[0])) {
                emlrtDynamicBoundsCheckR2012b(c3_i17, 1,
                  c3_thisGlyphCut_u8_size[0], &c3_j_emlrtBCI, &c3_st);
              }

              c3_i18 = (int32_T)c3_cg;
              if ((c3_i18 < 1) || (c3_i18 > c3_thisGlyphCut_u8_size[1])) {
                emlrtDynamicBoundsCheckR2012b(c3_i18, 1,
                  c3_thisGlyphCut_u8_size[1], &c3_k_emlrtBCI, &c3_st);
              }

              c3_glyphVal = c3_thisGlyphCut_u8_data[(c3_i17 +
                c3_thisGlyphCut_u8_size[0] * (c3_i18 - 1)) - 1];
              if (c3_glyphVal == 255) {
                c3_imgIn[((c3_r + 720 * (c3_c - 1)) + 921600 * ((int32_T)
                           c3_b_idx - 1)) - 1] = 0U;
              } else if (c3_glyphVal != 0) {
                c3_s_q0 = 255U;
                c3_s_qY = c3_s_q0 - (uint32_T)c3_glyphVal;
                if (c3_s_qY > c3_s_q0) {
                  c3_s_qY = 0U;
                }

                c3_u3 = c3_s_qY;
                if (c3_u3 > 65535U) {
                  c3_u3 = 65535U;
                }

                c3_tmp1 = (uint16_T)((uint32_T)c3_imgIn[((c3_r + 720 * (c3_c - 1))
                  + 921600 * ((int32_T)c3_b_idx - 1)) - 1] * (uint32_T)(uint16_T)
                                     c3_u3);
                c3_x = c3_tmp1;
                c3_b_x = c3_x;
                c3_c_x = c3_b_x;
                c3_a = c3_c_x;
                c3_d_x = c3_a;
                c3_e_x = c3_d_x;
                c3_tmp3 = (uint16_T)((uint32_T)c3_e_x / 255U);
                c3_e_x = (uint16_T)((uint32_T)c3_e_x - (uint32_T)(uint16_T)
                                    ((uint32_T)c3_tmp3 * 255U));
                if ((c3_e_x > 0) && (c3_e_x >= 128)) {
                  c3_tmp3 = (uint16_T)((uint32_T)c3_tmp3 + 1U);
                }

                c3_u4 = c3_tmp3;
                if (c3_u4 > 255) {
                  c3_u4 = 255U;
                }

                c3_imgIn[((c3_r + 720 * (c3_c - 1)) + 921600 * ((int32_T)
                           c3_b_idx - 1)) - 1] = (uint8_T)c3_u4;
              }

              c3_rg++;
            }

            c3_cg++;
          }
        }
      }

      c3_i_q0 = c3_penX;
      c3_i_q1 = c3_iv[c3_thisGlyphIdx_1b - 1];
      if ((c3_i_q0 < 0) && (c3_i_q1 < MIN_int32_T - c3_i_q0)) {
        c3_i_qY = MIN_int32_T;
      } else if ((c3_i_q0 > 0) && (c3_i_q1 > MAX_int32_T - c3_i_q0)) {
        c3_i_qY = MAX_int32_T;
      } else {
        c3_i_qY = c3_i_q0 + c3_i_q1;
      }

      c3_penX = c3_i_qY;
    }
  }
}

static void c3_e_validateAndParseInputs(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, uint8_T c3_b_I[2764800], char_T
  c3_text[10], uint8_T c3_varargin_6_data[], uint8_T c3_varargin_8_data[],
  int32_T c3_varargin_14, int32_T c3_varargin_16, uint8_T c3_c_RGB[2764800],
  c3_cell_wrap_0 c3_outText[1], uint8_T c3_textColor_data[], int32_T
  c3_textColor_size[2], uint8_T c3_boxColor_data[], int32_T c3_boxColor_size[2],
  int32_T *c3_shapeWidth, int32_T *c3_shapeHeight)
{
  static real_T c3_dv[2] = { 0.0, 3.0 };

  static char_T c3_b_cv[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'T', 'e', 'x', 't', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o',
    'r', 't', 'e', 'd', 'E', 's', 'c', 'a', 'p', 'e', 'C', 'h', 'a', 'r' };

  static char_T c3_cv2[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'T', 'e', 'x', 't', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o',
    'r', 't', 'e', 'd', 'E', 's', 'c', 'a', 'p', 'e', 'C', 'h', 'a', 'r' };

  static char_T c3_cv4[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'T', 'e', 'x', 't', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o',
    'r', 't', 'e', 'd', 'E', 's', 'c', 'a', 'p', 'e', 'C', 'h', 'a', 'r' };

  static char_T c3_cv6[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'T', 'e', 'x', 't', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o',
    'r', 't', 'e', 'd', 'E', 's', 'c', 'a', 'p', 'e', 'C', 'h', 'a', 'r' };

  static char_T c3_cv10[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 's',
    'e', 'r', 't', 'T', 'e', 'x', 't', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'S', 'i', 'z', 'e' };

  static char_T c3_cv8[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 's',
    'e', 'r', 't', 'T', 'e', 'x', 't', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'S', 'i', 'z', 'e' };

  static char_T c3_cv11[12] = { 'T', 'e', 'x', 't', 'B', 'o', 'x', 'C', 'o', 'l',
    'o', 'r' };

  static char_T c3_cv9[9] = { 'F', 'o', 'n', 't', 'C', 'o', 'l', 'o', 'r' };

  static char_T c3_b_cv1[2] = { '\\', 'b' };

  static char_T c3_cv3[2] = { '\\', 'f' };

  static char_T c3_cv5[2] = { '\\', 'r' };

  static char_T c3_cv7[2] = { '\\', 't' };

  c3_cell_wrap_0 c3_r;
  emlrtStack c3_b_st;
  emlrtStack c3_c_st;
  emlrtStack c3_d_st;
  emlrtStack c3_e_st;
  emlrtStack c3_st;
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_g_y = NULL;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  const mxArray *c3_j_y = NULL;
  const mxArray *c3_k_y = NULL;
  const mxArray *c3_l_y = NULL;
  const mxArray *c3_m_y = NULL;
  const mxArray *c3_n_y = NULL;
  const mxArray *c3_o_y = NULL;
  const mxArray *c3_p_y = NULL;
  const mxArray *c3_q_y = NULL;
  const mxArray *c3_r_y = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_b_k;
  real_T c3_d;
  real_T c3_d1;
  real_T c3_d_k;
  int32_T c3_ii_size[2];
  int32_T c3_tmp_size[2];
  int32_T c3_a;
  int32_T c3_b_a;
  int32_T c3_b_iacol;
  int32_T c3_b_ibmat;
  int32_T c3_b_jcol;
  int32_T c3_b_shapeDim;
  int32_T c3_b_shapeHeight;
  int32_T c3_b_shapeWidth;
  int32_T c3_b_varargin_14;
  int32_T c3_b_varargin_16;
  int32_T c3_c_jcol;
  int32_T c3_c_k;
  int32_T c3_c_varargin_14;
  int32_T c3_d_jcol;
  int32_T c3_d_varargin_14;
  int32_T c3_e_k;
  int32_T c3_e_varargin_14;
  int32_T c3_f_k;
  int32_T c3_f_varargin_14;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_iacol;
  int32_T c3_ibmat;
  int32_T c3_jcol;
  int32_T c3_k;
  int32_T c3_shapeDim;
  boolean_T c3_b;
  boolean_T c3_b1;
  boolean_T c3_b2;
  boolean_T c3_b3;
  boolean_T c3_b_condition;
  boolean_T c3_b_p;
  boolean_T c3_c_condition;
  boolean_T c3_c_p;
  boolean_T c3_condition;
  boolean_T c3_d_condition;
  boolean_T c3_d_p;
  boolean_T c3_hasEscapeChar_b;
  boolean_T c3_hasEscapeChar_f;
  boolean_T c3_hasEscapeChar_r;
  boolean_T c3_hasEscapeChar_t;
  boolean_T c3_p;
  (void)chartInstance;
  c3_dv[0U] = rtNaN;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_c_st.prev = &c3_b_st;
  c3_c_st.tls = c3_b_st.tls;
  c3_d_st.prev = &c3_c_st;
  c3_d_st.tls = c3_c_st.tls;
  c3_e_st.prev = &c3_d_st;
  c3_e_st.tls = c3_d_st.tls;
  for (c3_i = 0; c3_i < 2764800; c3_i++) {
    c3_c_RGB[c3_i] = c3_b_I[c3_i];
  }

  c3_st.site = &c3_pb_emlrtRSI;
  c3_b_st.site = &c3_sb_emlrtRSI;
  c3_ii_size[1] = 0;
  c3_tmp_size[1] = c3_ii_size[1];
  c3_b = (c3_tmp_size[1] == 0);
  c3_hasEscapeChar_b = !c3_b;
  c3_c_st.site = &c3_tb_emlrtRSI;
  c3_condition = c3_hasEscapeChar_b;
  if (c3_condition) {
    c3_y = NULL;
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_c_y = NULL;
    sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    sf_mex_call(&c3_c_st, &c3_i_emlrtMCI, "error", 0U, 2U, 14, c3_y, 14,
                sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_c_st, NULL, "message", 1U, 2U, 14, c3_b_y, 14, c3_c_y)));
  }

  c3_ii_size[1] = 0;
  c3_tmp_size[1] = c3_ii_size[1];
  c3_b1 = (c3_tmp_size[1] == 0);
  c3_hasEscapeChar_f = !c3_b1;
  c3_c_st.site = &c3_ub_emlrtRSI;
  c3_b_condition = c3_hasEscapeChar_f;
  if (c3_b_condition) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    sf_mex_call(&c3_c_st, &c3_i_emlrtMCI, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_c_st, NULL, "message", 1U, 2U, 14, c3_e_y, 14, c3_f_y)));
  }

  c3_ii_size[1] = 0;
  c3_tmp_size[1] = c3_ii_size[1];
  c3_b2 = (c3_tmp_size[1] == 0);
  c3_hasEscapeChar_r = !c3_b2;
  c3_c_st.site = &c3_vb_emlrtRSI;
  c3_c_condition = c3_hasEscapeChar_r;
  if (c3_c_condition) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_cv5, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    sf_mex_call(&c3_c_st, &c3_i_emlrtMCI, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_c_st, NULL, "message", 1U, 2U, 14, c3_h_y, 14, c3_i_y)));
  }

  c3_ii_size[1] = 0;
  c3_tmp_size[1] = c3_ii_size[1];
  c3_b3 = (c3_tmp_size[1] == 0);
  c3_hasEscapeChar_t = !c3_b3;
  c3_c_st.site = &c3_wb_emlrtRSI;
  c3_d_condition = c3_hasEscapeChar_t;
  if (c3_d_condition) {
    c3_j_y = NULL;
    sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_k_y = NULL;
    sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_l_y = NULL;
    sf_mex_assign(&c3_l_y, sf_mex_create("y", c3_cv7, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    sf_mex_call(&c3_c_st, &c3_i_emlrtMCI, "error", 0U, 2U, 14, c3_j_y, 14,
                sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_c_st, NULL, "message", 1U, 2U, 14, c3_k_y, 14, c3_l_y)));
  }

  for (c3_i1 = 0; c3_i1 < 10; c3_i1++) {
    c3_r.f1[c3_i1] = c3_text[c3_i1];
  }

  c3_outText[0] = c3_r;
  c3_st.site = &c3_qb_emlrtRSI;
  c3_b_varargin_14 = c3_varargin_14;
  c3_b_varargin_16 = c3_varargin_16;
  c3_b_st.site = &c3_xb_emlrtRSI;
  c3_c_st.site = &c3_ac_emlrtRSI;
  c3_d_st.site = &c3_v_emlrtRSI;
  c3_e_st.site = &c3_j_emlrtRSI;
  c3_p = true;
  for (c3_k = 0; c3_k < 2; c3_k++) {
    c3_b_k = (real_T)c3_k + 1.0;
    if (c3_p) {
      if (c3_dv[(int32_T)c3_b_k - 1] != c3_dv[(int32_T)c3_b_k - 1]) {
        c3_b_p = true;
      } else {
        c3_d = (real_T)(1 + (((int32_T)c3_b_k - 1) << 1));
        if (c3_dv[(int32_T)c3_b_k - 1] == c3_d) {
          c3_b_p = true;
        } else {
          c3_b_p = false;
        }
      }
    } else {
      c3_b_p = false;
    }

    c3_p = c3_b_p;
  }

  if (!c3_p) {
    c3_m_y = NULL;
    sf_mex_assign(&c3_m_y, sf_mex_create("y", c3_cv8, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c3_n_y = NULL;
    sf_mex_assign(&c3_n_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c3_o_y = NULL;
    sf_mex_assign(&c3_o_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c3_e_st, &c3_e_emlrtMCI, "error", 0U, 2U, 14, c3_m_y, 14,
                sf_mex_call(&c3_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_e_st, NULL, "message", 1U, 2U, 14, c3_n_y, 14, c3_o_y)));
  }

  c3_b_st.site = &c3_yb_emlrtRSI;
  c3_c_st.site = &c3_ac_emlrtRSI;
  c3_d_st.site = &c3_v_emlrtRSI;
  c3_e_st.site = &c3_j_emlrtRSI;
  c3_c_p = true;
  for (c3_c_k = 0; c3_c_k < 2; c3_c_k++) {
    c3_d_k = (real_T)c3_c_k + 1.0;
    if (c3_c_p) {
      if (c3_dv[(int32_T)c3_d_k - 1] != c3_dv[(int32_T)c3_d_k - 1]) {
        c3_d_p = true;
      } else {
        c3_d1 = (real_T)(1 + (((int32_T)c3_d_k - 1) << 1));
        if (c3_dv[(int32_T)c3_d_k - 1] == c3_d1) {
          c3_d_p = true;
        } else {
          c3_d_p = false;
        }
      }
    } else {
      c3_d_p = false;
    }

    c3_c_p = c3_d_p;
  }

  if (!c3_c_p) {
    c3_p_y = NULL;
    sf_mex_assign(&c3_p_y, sf_mex_create("y", c3_cv10, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c3_q_y = NULL;
    sf_mex_assign(&c3_q_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c3_r_y = NULL;
    sf_mex_assign(&c3_r_y, sf_mex_create("y", c3_cv11, 10, 0U, 1U, 0U, 2, 1, 12),
                  false);
    sf_mex_call(&c3_e_st, &c3_e_emlrtMCI, "error", 0U, 2U, 14, c3_p_y, 14,
                sf_mex_call(&c3_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c3_e_st, NULL, "message", 1U, 2U, 14, c3_q_y, 14, c3_r_y)));
  }

  c3_c_varargin_14 = c3_b_varargin_14;
  c3_d_varargin_14 = c3_c_varargin_14;
  c3_b_shapeWidth = c3_d_varargin_14;
  c3_e_varargin_14 = c3_b_varargin_16;
  c3_f_varargin_14 = c3_e_varargin_14;
  c3_b_shapeHeight = c3_f_varargin_14;
  c3_st.site = &c3_rb_emlrtRSI;
  c3_b_st.site = &c3_cc_emlrtRSI;
  c3_b_st.site = &c3_bc_emlrtRSI;
  c3_textColor_size[0] = 1;
  c3_textColor_size[1] = 3;
  for (c3_jcol = 0; c3_jcol < 3; c3_jcol++) {
    c3_b_jcol = c3_jcol;
    c3_iacol = c3_b_jcol;
    c3_ibmat = c3_b_jcol;
    for (c3_e_k = 0; c3_e_k < 1; c3_e_k++) {
      c3_textColor_data[c3_ibmat] = c3_varargin_6_data[c3_iacol];
    }
  }

  c3_boxColor_size[0] = 1;
  c3_boxColor_size[1] = 3;
  for (c3_c_jcol = 0; c3_c_jcol < 3; c3_c_jcol++) {
    c3_d_jcol = c3_c_jcol;
    c3_b_iacol = c3_d_jcol;
    c3_b_ibmat = c3_d_jcol;
    for (c3_f_k = 0; c3_f_k < 1; c3_f_k++) {
      c3_boxColor_data[c3_b_ibmat] = c3_varargin_8_data[c3_b_iacol];
    }
  }

  c3_shapeDim = c3_b_shapeWidth;
  c3_a = c3_shapeDim;
  *c3_shapeWidth = c3_a;
  c3_b_shapeDim = c3_b_shapeHeight;
  c3_b_a = c3_b_shapeDim;
  *c3_shapeHeight = c3_b_a;
}

static c3_sS4wEAasIzogBF5n8Y5amaF c3_b_insertTextBox
  (SFc3_vdynblksskidpadInstanceStruct *chartInstance, const emlrtStack *c3_sp,
   uint8_T c3_c_RGB[2764800], int32_T c3_position[2], uint16_T c3_ucTextU16[10],
   uint8_T c3_boxColor[3], int32_T c3_shapeWidth, int32_T c3_shapeHeight)
{
  c3_sS4wEAasIzogBF5n8Y5amaF c3_textLocationXY;
  emlrtStack c3_b_st;
  emlrtStack c3_c_st;
  emlrtStack c3_st;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_l_y = NULL;
  const mxArray *c3_m_y = NULL;
  const mxArray *c3_n_y = NULL;
  const mxArray *c3_o_y = NULL;
  real_T c3_idxNewlineChar_data[10];
  real_T c3_a;
  real_T c3_b;
  real_T c3_b_y;
  real_T c3_c_a;
  real_T c3_c_i;
  real_T c3_d;
  real_T c3_d1;
  real_T c3_d10;
  real_T c3_d11;
  real_T c3_d12;
  real_T c3_d2;
  real_T c3_d3;
  real_T c3_d4;
  real_T c3_d5;
  real_T c3_d6;
  real_T c3_d7;
  real_T c3_d8;
  real_T c3_d9;
  real_T c3_d_a;
  real_T c3_e_a;
  real_T c3_endIdx;
  real_T c3_lenEndSegment;
  real_T c3_lenFirstSegment;
  real_T c3_lenThisSegment;
  real_T c3_numLines;
  real_T c3_numMissingGlyph;
  real_T c3_startIdx;
  real_T c3_tmp1;
  real_T c3_tmp2;
  int32_T c3_ii_data[10];
  int32_T c3_b_varargin_1[3];
  int32_T c3_b_tmp_size[2];
  int32_T c3_c_tmp_size[2];
  int32_T c3_endSegment_size[2];
  int32_T c3_firstSegment_size[2];
  int32_T c3_idxNewlineChar_size[2];
  int32_T c3_ii_size[2];
  int32_T c3_thisGlyphIdxs_size[2];
  int32_T c3_tmp_size[2];
  int32_T c3_x_size[2];
  int32_T c3_adjBorder;
  int32_T c3_b_a;
  int32_T c3_b_i;
  int32_T c3_b_ix;
  int32_T c3_b_k;
  int32_T c3_b_lenEndSegment;
  int32_T c3_b_lenFirstSegment;
  int32_T c3_b_lenThisSegment;
  int32_T c3_b_loop_ub;
  int32_T c3_b_nz;
  int32_T c3_b_q0;
  int32_T c3_b_q1;
  int32_T c3_b_qY;
  int32_T c3_b_shapeHeight;
  int32_T c3_b_shapeWidth;
  int32_T c3_b_tbHeight;
  int32_T c3_b_tbTopLeftX;
  int32_T c3_b_tbTopLeftY;
  int32_T c3_b_tbWidth;
  int32_T c3_b_vlen;
  int32_T c3_b_xoffset;
  int32_T c3_bbox_x1;
  int32_T c3_bbox_x2;
  int32_T c3_bbox_y1;
  int32_T c3_bbox_y2;
  int32_T c3_c;
  int32_T c3_c_b;
  int32_T c3_c_ix;
  int32_T c3_c_k;
  int32_T c3_c_loop_ub;
  int32_T c3_c_nz;
  int32_T c3_c_q0;
  int32_T c3_c_q1;
  int32_T c3_c_qY;
  int32_T c3_c_shapeHeight;
  int32_T c3_c_shapeWidth;
  int32_T c3_c_tbHeight;
  int32_T c3_c_tbWidth;
  int32_T c3_c_vlen;
  int32_T c3_c_x;
  int32_T c3_c_xoffset;
  int32_T c3_c_y;
  int32_T c3_d_b;
  int32_T c3_d_i;
  int32_T c3_d_ix;
  int32_T c3_d_k;
  int32_T c3_d_loop_ub;
  int32_T c3_d_nz;
  int32_T c3_d_q0;
  int32_T c3_d_q1;
  int32_T c3_d_qY;
  int32_T c3_d_shapeWidth;
  int32_T c3_d_tbHeight;
  int32_T c3_d_tbWidth;
  int32_T c3_d_vlen;
  int32_T c3_d_x;
  int32_T c3_d_xoffset;
  int32_T c3_d_y;
  int32_T c3_e_b;
  int32_T c3_e_i;
  int32_T c3_e_k;
  int32_T c3_e_loop_ub;
  int32_T c3_e_q0;
  int32_T c3_e_q1;
  int32_T c3_e_qY;
  int32_T c3_e_vlen;
  int32_T c3_e_x;
  int32_T c3_e_y;
  int32_T c3_endC;
  int32_T c3_endR;
  int32_T c3_f_b;
  int32_T c3_f_loop_ub;
  int32_T c3_f_q0;
  int32_T c3_f_q1;
  int32_T c3_f_qY;
  int32_T c3_f_vlen;
  int32_T c3_f_x;
  int32_T c3_g_b;
  int32_T c3_g_loop_ub;
  int32_T c3_g_q0;
  int32_T c3_g_q1;
  int32_T c3_g_qY;
  int32_T c3_g_x;
  int32_T c3_g_y;
  int32_T c3_h_loop_ub;
  int32_T c3_h_q0;
  int32_T c3_h_q1;
  int32_T c3_h_qY;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_i15;
  int32_T c3_i16;
  int32_T c3_i17;
  int32_T c3_i18;
  int32_T c3_i19;
  int32_T c3_i2;
  int32_T c3_i20;
  int32_T c3_i21;
  int32_T c3_i22;
  int32_T c3_i23;
  int32_T c3_i24;
  int32_T c3_i25;
  int32_T c3_i26;
  int32_T c3_i27;
  int32_T c3_i28;
  int32_T c3_i29;
  int32_T c3_i3;
  int32_T c3_i30;
  int32_T c3_i31;
  int32_T c3_i32;
  int32_T c3_i33;
  int32_T c3_i34;
  int32_T c3_i35;
  int32_T c3_i36;
  int32_T c3_i37;
  int32_T c3_i38;
  int32_T c3_i39;
  int32_T c3_i4;
  int32_T c3_i40;
  int32_T c3_i41;
  int32_T c3_i42;
  int32_T c3_i43;
  int32_T c3_i44;
  int32_T c3_i45;
  int32_T c3_i46;
  int32_T c3_i47;
  int32_T c3_i48;
  int32_T c3_i49;
  int32_T c3_i5;
  int32_T c3_i50;
  int32_T c3_i51;
  int32_T c3_i52;
  int32_T c3_i53;
  int32_T c3_i54;
  int32_T c3_i55;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_i_loop_ub;
  int32_T c3_i_q0;
  int32_T c3_i_q1;
  int32_T c3_i_qY;
  int32_T c3_i_y;
  int32_T c3_ix;
  int32_T c3_j_loop_ub;
  int32_T c3_j_q0;
  int32_T c3_j_q1;
  int32_T c3_j_qY;
  int32_T c3_j_y;
  int32_T c3_k;
  int32_T c3_k_loop_ub;
  int32_T c3_k_q0;
  int32_T c3_k_q1;
  int32_T c3_k_qY;
  int32_T c3_k_y;
  int32_T c3_l_loop_ub;
  int32_T c3_l_q0;
  int32_T c3_l_q1;
  int32_T c3_l_qY;
  int32_T c3_loop_ub;
  int32_T c3_m_loop_ub;
  int32_T c3_m_q0;
  int32_T c3_m_q1;
  int32_T c3_m_qY;
  int32_T c3_maxLen;
  int32_T c3_n_loop_ub;
  int32_T c3_n_q0;
  int32_T c3_n_q1;
  int32_T c3_n_qY;
  int32_T c3_nz;
  int32_T c3_o_loop_ub;
  int32_T c3_o_q0;
  int32_T c3_o_q1;
  int32_T c3_o_qY;
  int32_T c3_p_loop_ub;
  int32_T c3_p_q0;
  int32_T c3_p_q1;
  int32_T c3_p_qY;
  int32_T c3_p_y;
  int32_T c3_q0;
  int32_T c3_q1;
  int32_T c3_qY;
  int32_T c3_q_loop_ub;
  int32_T c3_q_q0;
  int32_T c3_q_q1;
  int32_T c3_q_qY;
  int32_T c3_q_y;
  int32_T c3_r;
  int32_T c3_r_loop_ub;
  int32_T c3_r_q0;
  int32_T c3_r_q1;
  int32_T c3_r_qY;
  int32_T c3_s_loop_ub;
  int32_T c3_s_q0;
  int32_T c3_s_q1;
  int32_T c3_s_qY;
  int32_T c3_startC;
  int32_T c3_startR;
  int32_T c3_t_q0;
  int32_T c3_t_q1;
  int32_T c3_t_qY;
  int32_T c3_tbHeight;
  int32_T c3_tbLocationX;
  int32_T c3_tbLocationY;
  int32_T c3_tbTopLeftX;
  int32_T c3_tbTopLeftY;
  int32_T c3_tbWidth;
  int32_T c3_textBoxRightBorder;
  int32_T c3_u_q0;
  int32_T c3_u_q1;
  int32_T c3_u_qY;
  int32_T c3_v_q0;
  int32_T c3_v_q1;
  int32_T c3_v_qY;
  int32_T c3_varargin_1;
  int32_T c3_varargin_2;
  int32_T c3_vlen;
  int32_T c3_w_q0;
  int32_T c3_w_q1;
  int32_T c3_w_qY;
  int32_T c3_x_q0;
  int32_T c3_x_q1;
  int32_T c3_x_qY;
  int32_T c3_xoffset;
  int32_T c3_y;
  int32_T c3_y_q0;
  int32_T c3_y_q1;
  int32_T c3_y_qY;
  uint32_T c3_u;
  uint32_T c3_u1;
  uint32_T c3_u2;
  uint32_T c3_u3;
  uint32_T c3_u4;
  uint32_T c3_u5;
  uint32_T c3_u6;
  uint32_T c3_u7;
  uint32_T c3_u8;
  int16_T c3_b_tmp_data[10];
  int16_T c3_x[10];
  int16_T c3_c_tmp_data[9];
  int16_T c3_tmp_data[9];
  uint16_T c3_endSegment_data[10];
  uint16_T c3_thisCharcodes_1b[10];
  uint16_T c3_thisGlyphIdxs[10];
  uint16_T c3_thisGlyphIdxs_data[10];
  uint16_T c3_firstSegment_data[9];
  uint8_T c3_tmp11;
  uint8_T c3_tmp22;
  boolean_T c3_b_x[10];
  boolean_T c3_x_data[10];
  boolean_T c3_b1;
  boolean_T c3_b10;
  boolean_T c3_b11;
  boolean_T c3_b12;
  boolean_T c3_b2;
  boolean_T c3_b3;
  boolean_T c3_b4;
  boolean_T c3_b5;
  boolean_T c3_b6;
  boolean_T c3_b7;
  boolean_T c3_b8;
  boolean_T c3_b9;
  boolean_T c3_b_b;
  boolean_T c3_b_hasOverlap;
  boolean_T c3_hasOverlap;
  boolean_T c3_noOverlap;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_c_st.prev = &c3_b_st;
  c3_c_st.tls = c3_b_st.tls;
  c3_st.site = &c3_dc_emlrtRSI;
  c3_b_shapeWidth = c3_shapeWidth;
  c3_ii_size[1] = 0;
  c3_idxNewlineChar_size[1] = c3_ii_size[1];
  c3_loop_ub = c3_ii_size[1] - 1;
  for (c3_i = 0; c3_i <= c3_loop_ub; c3_i++) {
    c3_idxNewlineChar_data[c3_i] = (real_T)c3_ii_data[c3_i];
  }

  c3_numLines = (real_T)c3_idxNewlineChar_size[1] + 1.0;
  c3_b = c3_numLines - 1.0;
  c3_d = muDoubleScalarRound(14.0 * c3_b);
  if (c3_d < 2.147483648E+9) {
    if (c3_d >= -2.147483648E+9) {
      c3_i1 = (int32_T)c3_d;
    } else {
      c3_i1 = MIN_int32_T;
    }
  } else if (c3_d >= 2.147483648E+9) {
    c3_i1 = MAX_int32_T;
  } else {
    c3_i1 = 0;
  }

  c3_y = c3_i1;
  c3_q0 = 15;
  c3_q1 = c3_y;
  if ((c3_q0 < 0) && (c3_q1 < MIN_int32_T - c3_q0)) {
    c3_qY = MIN_int32_T;
  } else if ((c3_q0 > 0) && (c3_q1 > MAX_int32_T - c3_q0)) {
    c3_qY = MAX_int32_T;
  } else {
    c3_qY = c3_q0 + c3_q1;
  }

  c3_tbHeight = c3_qY;
  c3_b_b = (c3_idxNewlineChar_size[1] == 0);
  if (c3_b_b) {
    for (c3_i3 = 0; c3_i3 < 10; c3_i3++) {
      c3_u = (uint32_T)c3_ucTextU16[c3_i3] + 1U;
      if (c3_u > 65535U) {
        c3_u = 65535U;
      }

      c3_thisCharcodes_1b[c3_i3] = (uint16_T)c3_u;
    }

    for (c3_i4 = 0; c3_i4 < 10; c3_i4++) {
      c3_thisGlyphIdxs[c3_i4] = c3_uv[c3_thisCharcodes_1b[c3_i4] - 1];
    }

    for (c3_i5 = 0; c3_i5 < 10; c3_i5++) {
      c3_u1 = (uint32_T)c3_thisGlyphIdxs[c3_i5] + 1U;
      if (c3_u1 > 65535U) {
        c3_u1 = 65535U;
      }

      c3_thisGlyphIdxs[c3_i5] = (uint16_T)c3_u1;
    }

    for (c3_i8 = 0; c3_i8 < 10; c3_i8++) {
      c3_x[c3_i8] = c3_iv[c3_thisGlyphIdxs[c3_i8] - 1];
    }

    c3_b_y = c3_sumColumnB(chartInstance, c3_x);
    c3_d2 = muDoubleScalarRound(c3_b_y);
    if (c3_d2 < 2.147483648E+9) {
      if (c3_d2 >= -2.147483648E+9) {
        c3_i10 = (int32_T)c3_d2;
      } else {
        c3_i10 = MIN_int32_T;
      }
    } else if (c3_d2 >= 2.147483648E+9) {
      c3_i10 = MAX_int32_T;
    } else {
      c3_i10 = 0;
    }

    c3_tbWidth = c3_i10;
    for (c3_i12 = 0; c3_i12 < 10; c3_i12++) {
      c3_b_x[c3_i12] = ((real_T)c3_uv[c3_thisCharcodes_1b[c3_i12] - 1] == 0.0);
    }

    c3_nz = (int32_T)c3_b_x[0];
    for (c3_k = 0; c3_k < 9; c3_k++) {
      c3_xoffset = c3_k;
      c3_ix = c3_xoffset;
      c3_c_b = (int32_T)c3_b_x[c3_ix + 1];
      c3_nz += (c3_c_b != 0);
    }

    c3_numMissingGlyph = (real_T)c3_nz;
    c3_a = c3_numMissingGlyph;
    c3_d3 = muDoubleScalarRound(c3_a * 4.0);
    if (c3_d3 < 2.147483648E+9) {
      if (c3_d3 >= -2.147483648E+9) {
        c3_i17 = (int32_T)c3_d3;
      } else {
        c3_i17 = MIN_int32_T;
      }
    } else if (c3_d3 >= 2.147483648E+9) {
      c3_i17 = MAX_int32_T;
    } else {
      c3_i17 = 0;
    }

    c3_c_y = c3_i17;
    c3_b_q0 = c3_tbWidth;
    c3_b_q1 = c3_c_y;
    if ((c3_b_q0 < 0) && (c3_b_q1 < MIN_int32_T - c3_b_q0)) {
      c3_b_qY = MIN_int32_T;
    } else if ((c3_b_q0 > 0) && (c3_b_q1 > MAX_int32_T - c3_b_q0)) {
      c3_b_qY = MAX_int32_T;
    } else {
      c3_b_qY = c3_b_q0 + c3_b_q1;
    }

    c3_tbWidth = c3_b_qY;
  } else {
    c3_i2 = 1;
    if ((c3_i2 < 1) || (c3_i2 > c3_idxNewlineChar_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c3_i2, 1, c3_idxNewlineChar_size[1],
        &c3_p_emlrtBCI, &c3_st);
    }

    c3_d1 = c3_idxNewlineChar_data[0] - 1.0;
    c3_b1 = (c3_d1 < 1.0);
    if (c3_b1) {
      c3_i7 = -1;
    } else {
      c3_i6 = (int32_T)c3_d1;
      if ((c3_i6 < 1) || (c3_i6 > 10)) {
        emlrtDynamicBoundsCheckR2012b(c3_i6, 1, 10, &c3_o_emlrtBCI, &c3_st);
      }

      c3_i7 = c3_i6 - 1;
    }

    c3_firstSegment_size[1] = c3_i7 + 1;
    c3_b_loop_ub = c3_i7;
    for (c3_i9 = 0; c3_i9 <= c3_b_loop_ub; c3_i9++) {
      c3_firstSegment_data[c3_i9] = c3_ucTextU16[c3_i9];
    }

    c3_endSegment_size[1] = c3_firstSegment_size[1];
    c3_c_loop_ub = c3_firstSegment_size[1] - 1;
    for (c3_i11 = 0; c3_i11 <= c3_c_loop_ub; c3_i11++) {
      c3_u2 = (uint32_T)c3_firstSegment_data[c3_i11] + 1U;
      if (c3_u2 > 65535U) {
        c3_u2 = 65535U;
      }

      c3_endSegment_data[c3_i11] = (uint16_T)c3_u2;
    }

    c3_thisGlyphIdxs_size[1] = c3_endSegment_size[1];
    c3_d_loop_ub = c3_endSegment_size[1] - 1;
    for (c3_i13 = 0; c3_i13 <= c3_d_loop_ub; c3_i13++) {
      c3_thisGlyphIdxs_data[c3_i13] = c3_uv[c3_endSegment_data[c3_i13] - 1];
    }

    c3_i14 = c3_thisGlyphIdxs_size[1];
    c3_i15 = c3_i14;
    c3_e_loop_ub = c3_i15 - 1;
    for (c3_i16 = 0; c3_i16 <= c3_e_loop_ub; c3_i16++) {
      c3_u3 = (uint32_T)c3_thisGlyphIdxs_data[c3_i16] + 1U;
      if (c3_u3 > 65535U) {
        c3_u3 = 65535U;
      }

      c3_thisGlyphIdxs_data[c3_i16] = (uint16_T)c3_u3;
    }

    c3_tmp_size[0] = 1;
    c3_tmp_size[1] = c3_thisGlyphIdxs_size[1];
    c3_f_loop_ub = c3_thisGlyphIdxs_size[1] - 1;
    for (c3_i18 = 0; c3_i18 <= c3_f_loop_ub; c3_i18++) {
      c3_tmp_data[c3_i18] = c3_iv[c3_thisGlyphIdxs_data[c3_i18] - 1];
    }

    c3_b_st.site = &c3_ec_emlrtRSI;
    c3_lenFirstSegment = c3_sum(chartInstance, &c3_b_st, c3_tmp_data,
      c3_tmp_size);
    c3_b_st.site = &c3_fc_emlrtRSI;
    c3_x_size[1] = c3_endSegment_size[1];
    c3_g_loop_ub = c3_endSegment_size[1] - 1;
    for (c3_i19 = 0; c3_i19 <= c3_g_loop_ub; c3_i19++) {
      c3_x_data[c3_i19] = ((real_T)c3_uv[c3_endSegment_data[c3_i19] - 1] == 0.0);
    }

    c3_c_st.site = &c3_lc_emlrtRSI;
    c3_b2 = (c3_x_size[1] == 1);
    if (c3_b2 || ((real_T)c3_x_size[1] != 1.0)) {
      c3_b3 = true;
    } else {
      c3_b3 = false;
    }

    if (!c3_b3) {
      c3_f_y = NULL;
      sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c3_h_y = NULL;
      sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(&c3_c_st, &c3_k_emlrtMCI, "error", 0U, 2U, 14, c3_f_y, 14,
                  sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c3_c_st, NULL, "message", 1U, 1U, 14, c3_h_y)));
    }

    c3_vlen = c3_x_size[1];
    c3_b4 = (c3_x_size[1] == 0);
    if (c3_b4 || (c3_vlen == 0)) {
      c3_b_nz = 0;
    } else {
      c3_b_vlen = c3_vlen;
      c3_b_nz = (int32_T)c3_x_data[0];
      for (c3_b_k = 2; c3_b_k <= c3_b_vlen; c3_b_k++) {
        c3_b_xoffset = c3_b_k;
        c3_b_ix = c3_b_xoffset - 1;
        c3_e_b = (int32_T)c3_x_data[c3_b_ix];
        c3_b_nz += (c3_e_b != 0);
      }
    }

    c3_numMissingGlyph = (real_T)c3_b_nz;
    c3_c_a = c3_numMissingGlyph;
    c3_d4 = muDoubleScalarRound(c3_c_a * 4.0);
    if (c3_d4 < 2.147483648E+9) {
      if (c3_d4 >= -2.147483648E+9) {
        c3_i20 = (int32_T)c3_d4;
      } else {
        c3_i20 = MIN_int32_T;
      }
    } else if (c3_d4 >= 2.147483648E+9) {
      c3_i20 = MAX_int32_T;
    } else {
      c3_i20 = 0;
    }

    c3_k_y = c3_i20;
    c3_d5 = muDoubleScalarRound(c3_lenFirstSegment + (real_T)c3_k_y);
    if (c3_d5 < 2.147483648E+9) {
      if (c3_d5 >= -2.147483648E+9) {
        c3_i21 = (int32_T)c3_d5;
      } else {
        c3_i21 = MIN_int32_T;
      }
    } else if (c3_d5 >= 2.147483648E+9) {
      c3_i21 = MAX_int32_T;
    } else {
      c3_i21 = 0;
    }

    c3_b_lenFirstSegment = c3_i21;
    c3_maxLen = 0;
    c3_d6 = (real_T)c3_idxNewlineChar_size[1] - 1.0;
    c3_i22 = (int32_T)(c3_d6 - 1.0) - 1;
    for (c3_b_i = 0; c3_b_i <= c3_i22; c3_b_i++) {
      c3_c_i = (real_T)c3_b_i + 2.0;
      c3_i24 = (int32_T)c3_c_i;
      if ((c3_i24 < 1) || (c3_i24 > c3_idxNewlineChar_size[1])) {
        emlrtDynamicBoundsCheckR2012b(c3_i24, 1, c3_idxNewlineChar_size[1],
          &c3_r_emlrtBCI, &c3_st);
      }

      c3_startIdx = c3_idxNewlineChar_data[c3_i24 - 1] + 1.0;
      c3_i25 = (int32_T)(c3_c_i + 1.0);
      if ((c3_i25 < 1) || (c3_i25 > c3_idxNewlineChar_size[1])) {
        emlrtDynamicBoundsCheckR2012b(c3_i25, 1, c3_idxNewlineChar_size[1],
          &c3_s_emlrtBCI, &c3_st);
      }

      c3_endIdx = c3_idxNewlineChar_data[c3_i25 - 1] - 1.0;
      c3_b6 = (c3_startIdx > c3_endIdx);
      if (c3_b6) {
        c3_i31 = 0;
        c3_i32 = -1;
      } else {
        c3_i30 = (int32_T)c3_startIdx;
        if ((c3_i30 < 1) || (c3_i30 > 10)) {
          emlrtDynamicBoundsCheckR2012b(c3_i30, 1, 10, &c3_n_emlrtBCI, &c3_st);
        }

        c3_i31 = c3_i30 - 1;
        c3_i35 = (int32_T)c3_endIdx;
        if ((c3_i35 < 1) || (c3_i35 > 10)) {
          emlrtDynamicBoundsCheckR2012b(c3_i35, 1, 10, &c3_m_emlrtBCI, &c3_st);
        }

        c3_i32 = c3_i35 - 1;
      }

      c3_firstSegment_size[1] = (c3_i32 - c3_i31) + 1;
      c3_j_loop_ub = c3_i32 - c3_i31;
      for (c3_i37 = 0; c3_i37 <= c3_j_loop_ub; c3_i37++) {
        c3_firstSegment_data[c3_i37] = c3_ucTextU16[c3_i31 + c3_i37];
      }

      c3_endSegment_size[1] = c3_firstSegment_size[1];
      c3_l_loop_ub = c3_firstSegment_size[1] - 1;
      for (c3_i39 = 0; c3_i39 <= c3_l_loop_ub; c3_i39++) {
        c3_u5 = (uint32_T)c3_firstSegment_data[c3_i39] + 1U;
        if (c3_u5 > 65535U) {
          c3_u5 = 65535U;
        }

        c3_endSegment_data[c3_i39] = (uint16_T)c3_u5;
      }

      c3_thisGlyphIdxs_size[1] = c3_endSegment_size[1];
      c3_m_loop_ub = c3_endSegment_size[1] - 1;
      for (c3_i42 = 0; c3_i42 <= c3_m_loop_ub; c3_i42++) {
        c3_thisGlyphIdxs_data[c3_i42] = c3_uv[c3_endSegment_data[c3_i42] - 1];
      }

      c3_i44 = c3_thisGlyphIdxs_size[1];
      c3_i45 = c3_i44;
      c3_o_loop_ub = c3_i45 - 1;
      for (c3_i46 = 0; c3_i46 <= c3_o_loop_ub; c3_i46++) {
        c3_u7 = (uint32_T)c3_thisGlyphIdxs_data[c3_i46] + 1U;
        if (c3_u7 > 65535U) {
          c3_u7 = 65535U;
        }

        c3_thisGlyphIdxs_data[c3_i46] = (uint16_T)c3_u7;
      }

      c3_c_tmp_size[0] = 1;
      c3_c_tmp_size[1] = c3_thisGlyphIdxs_size[1];
      c3_q_loop_ub = c3_thisGlyphIdxs_size[1] - 1;
      for (c3_i48 = 0; c3_i48 <= c3_q_loop_ub; c3_i48++) {
        c3_c_tmp_data[c3_i48] = c3_iv[c3_thisGlyphIdxs_data[c3_i48] - 1];
      }

      c3_b_st.site = &c3_gc_emlrtRSI;
      c3_lenThisSegment = c3_sum(chartInstance, &c3_b_st, c3_c_tmp_data,
        c3_c_tmp_size);
      c3_b_st.site = &c3_hc_emlrtRSI;
      c3_x_size[1] = c3_endSegment_size[1];
      c3_s_loop_ub = c3_endSegment_size[1] - 1;
      for (c3_i50 = 0; c3_i50 <= c3_s_loop_ub; c3_i50++) {
        c3_x_data[c3_i50] = ((real_T)c3_uv[c3_endSegment_data[c3_i50] - 1] ==
                             0.0);
      }

      c3_c_st.site = &c3_lc_emlrtRSI;
      c3_b9 = (c3_x_size[1] == 1);
      if (c3_b9 || ((real_T)c3_x_size[1] != 1.0)) {
        c3_b10 = true;
      } else {
        c3_b10 = false;
      }

      if (!c3_b10) {
        c3_n_y = NULL;
        sf_mex_assign(&c3_n_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1,
          36), false);
        c3_o_y = NULL;
        sf_mex_assign(&c3_o_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1,
          36), false);
        sf_mex_call(&c3_c_st, &c3_k_emlrtMCI, "error", 0U, 2U, 14, c3_n_y, 14,
                    sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c3_c_st, NULL, "message", 1U, 1U, 14, c3_o_y)));
      }

      c3_e_vlen = c3_x_size[1];
      c3_b12 = (c3_x_size[1] == 0);
      if (c3_b12 || (c3_e_vlen == 0)) {
        c3_d_nz = 0;
      } else {
        c3_f_vlen = c3_e_vlen;
        c3_d_nz = (int32_T)c3_x_data[0];
        for (c3_d_k = 2; c3_d_k <= c3_f_vlen; c3_d_k++) {
          c3_d_xoffset = c3_d_k;
          c3_d_ix = c3_d_xoffset - 1;
          c3_g_b = (int32_T)c3_x_data[c3_d_ix];
          c3_d_nz += (c3_g_b != 0);
        }
      }

      c3_numMissingGlyph = (real_T)c3_d_nz;
      c3_e_a = c3_numMissingGlyph;
      c3_d10 = muDoubleScalarRound(c3_e_a * 4.0);
      if (c3_d10 < 2.147483648E+9) {
        if (c3_d10 >= -2.147483648E+9) {
          c3_i53 = (int32_T)c3_d10;
        } else {
          c3_i53 = MIN_int32_T;
        }
      } else if (c3_d10 >= 2.147483648E+9) {
        c3_i53 = MAX_int32_T;
      } else {
        c3_i53 = 0;
      }

      c3_q_y = c3_i53;
      c3_d12 = muDoubleScalarRound(c3_lenThisSegment + (real_T)c3_q_y);
      if (c3_d12 < 2.147483648E+9) {
        if (c3_d12 >= -2.147483648E+9) {
          c3_i55 = (int32_T)c3_d12;
        } else {
          c3_i55 = MIN_int32_T;
        }
      } else if (c3_d12 >= 2.147483648E+9) {
        c3_i55 = MAX_int32_T;
      } else {
        c3_i55 = 0;
      }

      c3_b_lenThisSegment = c3_i55;
      if (c3_b_lenThisSegment > c3_maxLen) {
        c3_maxLen = c3_b_lenThisSegment;
      }
    }

    c3_i23 = c3_idxNewlineChar_size[1];
    if ((c3_i23 < 1) || (c3_i23 > c3_idxNewlineChar_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c3_i23, 1, c3_idxNewlineChar_size[1],
        &c3_q_emlrtBCI, &c3_st);
    }

    c3_d7 = c3_idxNewlineChar_data[c3_i23 - 1] + 1.0;
    c3_b5 = (c3_d7 > 10.0);
    if (c3_b5) {
      c3_i27 = 0;
      c3_i28 = -1;
    } else {
      c3_i26 = (int32_T)c3_d7;
      if ((c3_i26 < 1) || (c3_i26 > 10)) {
        emlrtDynamicBoundsCheckR2012b(c3_i26, 1, 10, &c3_l_emlrtBCI, &c3_st);
      }

      c3_i27 = c3_i26 - 1;
      c3_i28 = 9;
    }

    c3_endSegment_size[1] = (c3_i28 - c3_i27) + 1;
    c3_h_loop_ub = c3_i28 - c3_i27;
    for (c3_i29 = 0; c3_i29 <= c3_h_loop_ub; c3_i29++) {
      c3_endSegment_data[c3_i29] = c3_ucTextU16[c3_i27 + c3_i29];
    }

    c3_i33 = c3_endSegment_size[1];
    c3_i34 = c3_i33;
    c3_i_loop_ub = c3_i34 - 1;
    for (c3_i36 = 0; c3_i36 <= c3_i_loop_ub; c3_i36++) {
      c3_u4 = (uint32_T)c3_endSegment_data[c3_i36] + 1U;
      if (c3_u4 > 65535U) {
        c3_u4 = 65535U;
      }

      c3_endSegment_data[c3_i36] = (uint16_T)c3_u4;
    }

    c3_thisGlyphIdxs_size[1] = c3_endSegment_size[1];
    c3_k_loop_ub = c3_endSegment_size[1] - 1;
    for (c3_i38 = 0; c3_i38 <= c3_k_loop_ub; c3_i38++) {
      c3_thisGlyphIdxs_data[c3_i38] = c3_uv[c3_endSegment_data[c3_i38] - 1];
    }

    c3_i40 = c3_thisGlyphIdxs_size[1];
    c3_i41 = c3_i40;
    c3_n_loop_ub = c3_i41 - 1;
    for (c3_i43 = 0; c3_i43 <= c3_n_loop_ub; c3_i43++) {
      c3_u6 = (uint32_T)c3_thisGlyphIdxs_data[c3_i43] + 1U;
      if (c3_u6 > 65535U) {
        c3_u6 = 65535U;
      }

      c3_thisGlyphIdxs_data[c3_i43] = (uint16_T)c3_u6;
    }

    c3_b_tmp_size[0] = 1;
    c3_b_tmp_size[1] = c3_thisGlyphIdxs_size[1];
    c3_p_loop_ub = c3_thisGlyphIdxs_size[1] - 1;
    for (c3_i47 = 0; c3_i47 <= c3_p_loop_ub; c3_i47++) {
      c3_b_tmp_data[c3_i47] = c3_iv[c3_thisGlyphIdxs_data[c3_i47] - 1];
    }

    c3_b_st.site = &c3_ic_emlrtRSI;
    c3_lenEndSegment = c3_sum(chartInstance, &c3_b_st, c3_b_tmp_data,
      c3_b_tmp_size);
    c3_b_st.site = &c3_jc_emlrtRSI;
    c3_x_size[1] = c3_endSegment_size[1];
    c3_r_loop_ub = c3_endSegment_size[1] - 1;
    for (c3_i49 = 0; c3_i49 <= c3_r_loop_ub; c3_i49++) {
      c3_x_data[c3_i49] = ((real_T)c3_uv[c3_endSegment_data[c3_i49] - 1] == 0.0);
    }

    c3_c_st.site = &c3_lc_emlrtRSI;
    c3_b7 = (c3_x_size[1] == 1);
    if (c3_b7 || ((real_T)c3_x_size[1] != 1.0)) {
      c3_b8 = true;
    } else {
      c3_b8 = false;
    }

    if (!c3_b8) {
      c3_l_y = NULL;
      sf_mex_assign(&c3_l_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c3_m_y = NULL;
      sf_mex_assign(&c3_m_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(&c3_c_st, &c3_k_emlrtMCI, "error", 0U, 2U, 14, c3_l_y, 14,
                  sf_mex_call(&c3_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c3_c_st, NULL, "message", 1U, 1U, 14, c3_m_y)));
    }

    c3_c_vlen = c3_x_size[1];
    c3_b11 = (c3_x_size[1] == 0);
    if (c3_b11 || (c3_c_vlen == 0)) {
      c3_c_nz = 0;
    } else {
      c3_d_vlen = c3_c_vlen;
      c3_c_nz = (int32_T)c3_x_data[0];
      for (c3_c_k = 2; c3_c_k <= c3_d_vlen; c3_c_k++) {
        c3_c_xoffset = c3_c_k;
        c3_c_ix = c3_c_xoffset - 1;
        c3_f_b = (int32_T)c3_x_data[c3_c_ix];
        c3_c_nz += (c3_f_b != 0);
      }
    }

    c3_numMissingGlyph = (real_T)c3_c_nz;
    c3_d_a = c3_numMissingGlyph;
    c3_d8 = muDoubleScalarRound(c3_d_a * 4.0);
    if (c3_d8 < 2.147483648E+9) {
      if (c3_d8 >= -2.147483648E+9) {
        c3_i51 = (int32_T)c3_d8;
      } else {
        c3_i51 = MIN_int32_T;
      }
    } else if (c3_d8 >= 2.147483648E+9) {
      c3_i51 = MAX_int32_T;
    } else {
      c3_i51 = 0;
    }

    c3_p_y = c3_i51;
    c3_d11 = muDoubleScalarRound(c3_lenEndSegment + (real_T)c3_p_y);
    if (c3_d11 < 2.147483648E+9) {
      if (c3_d11 >= -2.147483648E+9) {
        c3_i54 = (int32_T)c3_d11;
      } else {
        c3_i54 = MIN_int32_T;
      }
    } else if (c3_d11 >= 2.147483648E+9) {
      c3_i54 = MAX_int32_T;
    } else {
      c3_i54 = 0;
    }

    c3_b_lenEndSegment = c3_i54;
    c3_b_varargin_1[0] = c3_b_lenFirstSegment;
    c3_b_varargin_1[1] = c3_maxLen;
    c3_b_varargin_1[2] = c3_b_lenEndSegment;
    c3_maxLen = c3_b_varargin_1[0];
    for (c3_e_k = 0; c3_e_k < 2; c3_e_k++) {
      if (c3_maxLen < c3_b_varargin_1[c3_e_k + 1]) {
        c3_maxLen = c3_b_varargin_1[c3_e_k + 1];
      }
    }

    c3_tbWidth = c3_maxLen;
  }

  c3_varargin_1 = c3_tbWidth;
  c3_varargin_2 = c3_b_shapeWidth;
  c3_c_x = c3_varargin_1;
  c3_d_y = c3_varargin_2;
  c3_d_x = c3_c_x;
  c3_e_y = c3_d_y;
  c3_e_x = c3_d_x;
  c3_g_y = c3_e_y;
  c3_b_a = c3_e_x;
  c3_d_b = c3_g_y;
  c3_f_x = c3_b_a;
  c3_i_y = c3_d_b;
  c3_g_x = c3_f_x;
  c3_j_y = c3_i_y;
  c3_tbWidth = muIntScalarMax_sint32(c3_g_x, c3_j_y);
  c3_b_tbWidth = c3_tbWidth;
  if (c3_tbWidth > c3_shapeWidth) {
    c3_c_q0 = c3_tbWidth;
    c3_c_q1 = 8;
    if ((c3_c_q1 < 0) && (c3_c_q0 < MIN_int32_T - c3_c_q1)) {
      c3_c_qY = MIN_int32_T;
    } else if ((c3_c_q1 > 0) && (c3_c_q0 > MAX_int32_T - c3_c_q1)) {
      c3_c_qY = MAX_int32_T;
    } else {
      c3_c_qY = c3_c_q0 + c3_c_q1;
    }

    c3_b_tbWidth = c3_c_qY;
  }

  c3_d_q0 = c3_tbHeight;
  c3_d_q1 = 8;
  if ((c3_d_q1 < 0) && (c3_d_q0 < MIN_int32_T - c3_d_q1)) {
    c3_d_qY = MIN_int32_T;
  } else if ((c3_d_q1 > 0) && (c3_d_q0 > MAX_int32_T - c3_d_q1)) {
    c3_d_qY = MAX_int32_T;
  } else {
    c3_d_qY = c3_d_q0 + c3_d_q1;
  }

  c3_b_tbHeight = c3_d_qY;
  c3_c_tbWidth = c3_b_tbWidth;
  c3_c_tbHeight = c3_b_tbHeight;
  c3_c_shapeWidth = c3_shapeWidth;
  c3_b_shapeHeight = c3_shapeHeight;
  c3_tbLocationX = c3_position[0];
  c3_tbLocationY = c3_position[1];
  c3_e_q0 = c3_tbLocationY;
  c3_e_q1 = c3_c_tbHeight;
  if ((c3_e_q0 >= 0) && (c3_e_q1 < c3_e_q0 - MAX_int32_T)) {
    c3_e_qY = MAX_int32_T;
  } else if ((c3_e_q0 < 0) && (c3_e_q1 > c3_e_q0 - MIN_int32_T)) {
    c3_e_qY = MIN_int32_T;
  } else {
    c3_e_qY = c3_e_q0 - c3_e_q1;
  }

  c3_f_q0 = c3_e_qY;
  c3_f_q1 = 1;
  if ((c3_f_q1 < 0) && (c3_f_q0 < MIN_int32_T - c3_f_q1)) {
    c3_f_qY = MIN_int32_T;
  } else if ((c3_f_q1 > 0) && (c3_f_q0 > MAX_int32_T - c3_f_q1)) {
    c3_f_qY = MAX_int32_T;
  } else {
    c3_f_qY = c3_f_q0 + c3_f_q1;
  }

  c3_tbTopLeftY = c3_f_qY;
  c3_tbTopLeftX = c3_tbLocationX;
  if (((real_T)c3_c_shapeWidth > 0.0) && ((real_T)c3_b_shapeHeight > 0.0)) {
    c3_bbox_x1 = c3_tbLocationX;
    c3_g_q0 = c3_tbTopLeftY;
    c3_g_q1 = c3_c_tbHeight;
    if ((c3_g_q0 < 0) && (c3_g_q1 < MIN_int32_T - c3_g_q0)) {
      c3_g_qY = MIN_int32_T;
    } else if ((c3_g_q0 > 0) && (c3_g_q1 > MAX_int32_T - c3_g_q0)) {
      c3_g_qY = MAX_int32_T;
    } else {
      c3_g_qY = c3_g_q0 + c3_g_q1;
    }

    c3_bbox_y1 = c3_g_qY;
    c3_d_shapeWidth = c3_c_shapeWidth;
    c3_c_shapeHeight = c3_b_shapeHeight;
    c3_i_q0 = c3_bbox_x1;
    c3_i_q1 = c3_d_shapeWidth;
    if ((c3_i_q0 < 0) && (c3_i_q1 < MIN_int32_T - c3_i_q0)) {
      c3_i_qY = MIN_int32_T;
    } else if ((c3_i_q0 > 0) && (c3_i_q1 > MAX_int32_T - c3_i_q0)) {
      c3_i_qY = MAX_int32_T;
    } else {
      c3_i_qY = c3_i_q0 + c3_i_q1;
    }

    c3_k_q0 = c3_i_qY;
    c3_k_q1 = 1;
    if ((c3_k_q1 < 0) && (c3_k_q0 > c3_k_q1 + MAX_int32_T)) {
      c3_k_qY = MAX_int32_T;
    } else if ((c3_k_q1 > 0) && (c3_k_q0 < c3_k_q1 + MIN_int32_T)) {
      c3_k_qY = MIN_int32_T;
    } else {
      c3_k_qY = c3_k_q0 - c3_k_q1;
    }

    c3_bbox_x2 = c3_k_qY;
    c3_m_q0 = c3_bbox_y1;
    c3_m_q1 = c3_c_shapeHeight;
    if ((c3_m_q0 < 0) && (c3_m_q1 < MIN_int32_T - c3_m_q0)) {
      c3_m_qY = MIN_int32_T;
    } else if ((c3_m_q0 > 0) && (c3_m_q1 > MAX_int32_T - c3_m_q0)) {
      c3_m_qY = MAX_int32_T;
    } else {
      c3_m_qY = c3_m_q0 + c3_m_q1;
    }

    c3_o_q0 = c3_m_qY;
    c3_o_q1 = 1;
    if ((c3_o_q1 < 0) && (c3_o_q0 > c3_o_q1 + MAX_int32_T)) {
      c3_o_qY = MAX_int32_T;
    } else if ((c3_o_q1 > 0) && (c3_o_q0 < c3_o_q1 + MIN_int32_T)) {
      c3_o_qY = MIN_int32_T;
    } else {
      c3_o_qY = c3_o_q0 - c3_o_q1;
    }

    c3_bbox_y2 = c3_o_qY;
    if (((real_T)c3_bbox_x1 <= 1280.0) && ((real_T)c3_bbox_x2 >= 1.0) &&
        ((real_T)c3_bbox_y1 <= 720.0) && ((real_T)c3_bbox_y2 >= 1.0)) {
      c3_hasOverlap = true;
    } else {
      c3_hasOverlap = false;
    }

    c3_b_hasOverlap = c3_hasOverlap;
    if (c3_b_hasOverlap) {
      if ((real_T)c3_tbTopLeftY < 1.0) {
        c3_q_q0 = c3_tbTopLeftY;
        c3_q_q1 = c3_c_tbHeight;
        if ((c3_q_q0 < 0) && (c3_q_q1 < MIN_int32_T - c3_q_q0)) {
          c3_q_qY = MIN_int32_T;
        } else if ((c3_q_q0 > 0) && (c3_q_q1 > MAX_int32_T - c3_q_q0)) {
          c3_q_qY = MAX_int32_T;
        } else {
          c3_q_qY = c3_q_q0 + c3_q_q1;
        }

        c3_t_q0 = c3_q_qY;
        c3_t_q1 = c3_b_shapeHeight;
        if ((c3_t_q0 < 0) && (c3_t_q1 < MIN_int32_T - c3_t_q0)) {
          c3_t_qY = MIN_int32_T;
        } else if ((c3_t_q0 > 0) && (c3_t_q1 > MAX_int32_T - c3_t_q0)) {
          c3_t_qY = MAX_int32_T;
        } else {
          c3_t_qY = c3_t_q0 + c3_t_q1;
        }

        if ((real_T)c3_t_qY >= 1.0) {
          c3_u_q0 = c3_tbLocationY;
          c3_u_q1 = c3_b_shapeHeight;
          if ((c3_u_q0 < 0) && (c3_u_q1 < MIN_int32_T - c3_u_q0)) {
            c3_u_qY = MIN_int32_T;
          } else if ((c3_u_q0 > 0) && (c3_u_q1 > MAX_int32_T - c3_u_q0)) {
            c3_u_qY = MAX_int32_T;
          } else {
            c3_u_qY = c3_u_q0 + c3_u_q1;
          }

          c3_w_q0 = c3_u_qY;
          c3_w_q1 = 1;
          if ((c3_w_q1 < 0) && (c3_w_q0 < MIN_int32_T - c3_w_q1)) {
            c3_w_qY = MIN_int32_T;
          } else if ((c3_w_q1 > 0) && (c3_w_q0 > MAX_int32_T - c3_w_q1)) {
            c3_w_qY = MAX_int32_T;
          } else {
            c3_w_qY = c3_w_q0 + c3_w_q1;
          }

          c3_tbTopLeftY = c3_w_qY;
        }
      }

      c3_r_q0 = c3_tbLocationX;
      c3_r_q1 = c3_c_tbWidth;
      if ((c3_r_q0 < 0) && (c3_r_q1 < MIN_int32_T - c3_r_q0)) {
        c3_r_qY = MIN_int32_T;
      } else if ((c3_r_q0 > 0) && (c3_r_q1 > MAX_int32_T - c3_r_q0)) {
        c3_r_qY = MAX_int32_T;
      } else {
        c3_r_qY = c3_r_q0 + c3_r_q1;
      }

      c3_textBoxRightBorder = c3_r_qY;
      c3_d9 = muDoubleScalarRound((real_T)c3_textBoxRightBorder - 1280.0);
      if (c3_d9 < 2.147483648E+9) {
        if (c3_d9 >= -2.147483648E+9) {
          c3_i52 = (int32_T)c3_d9;
        } else {
          c3_i52 = MIN_int32_T;
        }
      } else if (c3_d9 >= 2.147483648E+9) {
        c3_i52 = MAX_int32_T;
      } else {
        c3_i52 = 0;
      }

      c3_adjBorder = c3_i52;
      if (((real_T)c3_adjBorder > 0.0) && ((real_T)c3_tbLocationX <= 1280.0)) {
        c3_v_q0 = c3_tbLocationX;
        c3_v_q1 = c3_adjBorder;
        if ((c3_v_q0 >= 0) && (c3_v_q1 < c3_v_q0 - MAX_int32_T)) {
          c3_v_qY = MAX_int32_T;
        } else if ((c3_v_q0 < 0) && (c3_v_q1 > c3_v_q0 - MIN_int32_T)) {
          c3_v_qY = MIN_int32_T;
        } else {
          c3_v_qY = c3_v_q0 - c3_v_q1;
        }

        c3_y_q0 = c3_v_qY;
        c3_y_q1 = 1;
        if ((c3_y_q1 < 0) && (c3_y_q0 < MIN_int32_T - c3_y_q1)) {
          c3_y_qY = MIN_int32_T;
        } else if ((c3_y_q1 > 0) && (c3_y_q0 > MAX_int32_T - c3_y_q1)) {
          c3_y_qY = MAX_int32_T;
        } else {
          c3_y_qY = c3_y_q0 + c3_y_q1;
        }

        c3_tbTopLeftX = c3_y_qY;
      }

      if ((real_T)c3_tbTopLeftX < 1.0) {
        c3_x_q0 = c3_tbLocationX;
        c3_x_q1 = c3_c_shapeWidth;
        if ((c3_x_q0 < 0) && (c3_x_q1 < MIN_int32_T - c3_x_q0)) {
          c3_x_qY = MIN_int32_T;
        } else if ((c3_x_q0 > 0) && (c3_x_q1 > MAX_int32_T - c3_x_q0)) {
          c3_x_qY = MAX_int32_T;
        } else {
          c3_x_qY = c3_x_q0 + c3_x_q1;
        }

        if ((real_T)c3_x_qY >= 1.0) {
          c3_tbTopLeftX = 1;
        }
      }
    } else {
      c3_tbTopLeftY = -32767;
      c3_tbTopLeftX = -32767;
    }
  }

  c3_b_tbTopLeftX = c3_tbTopLeftX;
  c3_b_tbTopLeftY = c3_tbTopLeftY;
  c3_d_tbWidth = c3_b_tbWidth;
  c3_d_tbHeight = c3_b_tbHeight;
  c3_startR = c3_b_tbTopLeftY;
  c3_h_q0 = c3_b_tbTopLeftY;
  c3_h_q1 = c3_d_tbHeight;
  if ((c3_h_q0 < 0) && (c3_h_q1 < MIN_int32_T - c3_h_q0)) {
    c3_h_qY = MIN_int32_T;
  } else if ((c3_h_q0 > 0) && (c3_h_q1 > MAX_int32_T - c3_h_q0)) {
    c3_h_qY = MAX_int32_T;
  } else {
    c3_h_qY = c3_h_q0 + c3_h_q1;
  }

  c3_j_q0 = c3_h_qY;
  c3_j_q1 = 1;
  if ((c3_j_q1 < 0) && (c3_j_q0 > c3_j_q1 + MAX_int32_T)) {
    c3_j_qY = MAX_int32_T;
  } else if ((c3_j_q1 > 0) && (c3_j_q0 < c3_j_q1 + MIN_int32_T)) {
    c3_j_qY = MIN_int32_T;
  } else {
    c3_j_qY = c3_j_q0 - c3_j_q1;
  }

  c3_endR = c3_j_qY;
  c3_startC = c3_b_tbTopLeftX;
  c3_l_q0 = c3_b_tbTopLeftX;
  c3_l_q1 = c3_d_tbWidth;
  if ((c3_l_q0 < 0) && (c3_l_q1 < MIN_int32_T - c3_l_q0)) {
    c3_l_qY = MIN_int32_T;
  } else if ((c3_l_q0 > 0) && (c3_l_q1 > MAX_int32_T - c3_l_q0)) {
    c3_l_qY = MAX_int32_T;
  } else {
    c3_l_qY = c3_l_q0 + c3_l_q1;
  }

  c3_n_q0 = c3_l_qY;
  c3_n_q1 = 1;
  if ((c3_n_q1 < 0) && (c3_n_q0 > c3_n_q1 + MAX_int32_T)) {
    c3_n_qY = MAX_int32_T;
  } else if ((c3_n_q1 > 0) && (c3_n_q0 < c3_n_q1 + MIN_int32_T)) {
    c3_n_qY = MIN_int32_T;
  } else {
    c3_n_qY = c3_n_q0 - c3_n_q1;
  }

  c3_endC = c3_n_qY;
  if ((c3_b_tbTopLeftY > 720) || (c3_endR < 1) || (c3_b_tbTopLeftX > 1280) ||
      (c3_endC < 1)) {
    c3_noOverlap = true;
  } else {
    c3_noOverlap = false;
  }

  if (!c3_noOverlap) {
    if (c3_b_tbTopLeftY < 1) {
      c3_startR = 1;
    }

    if (c3_endR > 720) {
      c3_endR = 720;
    }

    if (c3_b_tbTopLeftX < 1) {
      c3_startC = 1;
    }

    if (c3_endC > 1280) {
      c3_endC = 1280;
    }

    for (c3_d_i = 0; c3_d_i < 3; c3_d_i++) {
      c3_e_i = c3_d_i;
      for (c3_c = c3_startC; c3_c <= c3_endC; c3_c++) {
        for (c3_r = c3_startR; c3_r <= c3_endR; c3_r++) {
          c3_tmp1 = 0.6 * (real_T)c3_boxColor[c3_e_i] + 0.5;
          c3_tmp2 = 0.4 * (real_T)c3_c_RGB[((c3_r + 720 * (c3_c - 1)) + 921600 *
            c3_e_i) - 1] + 0.5;
          c3_tmp11 = (uint8_T)c3_tmp1;
          c3_tmp22 = (uint8_T)c3_tmp2;
          c3_u8 = (uint32_T)c3_tmp11 + (uint32_T)c3_tmp22;
          if (c3_u8 > 255U) {
            c3_u8 = 255U;
          }

          c3_c_RGB[((c3_r + 720 * (c3_c - 1)) + 921600 * c3_e_i) - 1] = (uint8_T)
            c3_u8;
        }
      }
    }
  }

  c3_p_q0 = c3_tbTopLeftX;
  c3_p_q1 = 4;
  if ((c3_p_q1 < 0) && (c3_p_q0 < MIN_int32_T - c3_p_q1)) {
    c3_p_qY = MIN_int32_T;
  } else if ((c3_p_q1 > 0) && (c3_p_q0 > MAX_int32_T - c3_p_q1)) {
    c3_p_qY = MAX_int32_T;
  } else {
    c3_p_qY = c3_p_q0 + c3_p_q1;
  }

  c3_textLocationXY.x = c3_p_qY;
  c3_s_q0 = c3_tbTopLeftY;
  c3_s_q1 = 4;
  if ((c3_s_q1 < 0) && (c3_s_q0 < MIN_int32_T - c3_s_q1)) {
    c3_s_qY = MIN_int32_T;
  } else if ((c3_s_q1 > 0) && (c3_s_q0 > MAX_int32_T - c3_s_q1)) {
    c3_s_qY = MAX_int32_T;
  } else {
    c3_s_qY = c3_s_q0 + c3_s_q1;
  }

  c3_textLocationXY.y = c3_s_qY;
  return c3_textLocationXY;
}

static void init_dsm_address_info(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_vdynblksskidpadInstanceStruct
  *chartInstance)
{
  chartInstance->c3_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_bboxes_data = (real_T (*)[2000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_bboxes_sizes = (int32_T (*)[2])
    ssGetCurrentInputPortDimensions_wrapper(chartInstance->S, 0);
  chartInstance->c3_labels_data = (c3_yolov2ConeDetector_labels (*)[500])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c3_labels_sizes = (int32_T (*)[2])
    ssGetCurrentInputPortDimensions_wrapper(chartInstance->S, 1);
  chartInstance->c3_outImg = (uint8_T (*)[2764800])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_c_img = (uint8_T (*)[2764800])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_vdynblksskidpad_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2626996256U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4288481970U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3854685336U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2467575725U);
}

mxArray *sf_c3_vdynblksskidpad_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "vision.internal.buildable.insertShapeBuildable"));
  return(mxcell3p);
}

mxArray *sf_c3_vdynblksskidpad_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("initialiseDrawbaseShape");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_vdynblksskidpad_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_vdynblksskidpad(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0izig62fBop8NSb8AlJ9fWuKZmw4NH2g4ke8OBQfK9E"
    "PsDyDgDxk0f4D4mcXxicklmWWp8cnG8WUplXlJOdnFxdmZKQWJKfD4BwIAuG8cLw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_vdynblksskidpad_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sIAeHFaidV82lnYRwK4LlaC";
}

static void sf_opaque_initialize_c3_vdynblksskidpad(void *chartInstanceVar)
{
  initialize_params_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
  initialize_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c3_vdynblksskidpad(void *chartInstanceVar)
{
  enable_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c3_vdynblksskidpad(void *chartInstanceVar)
{
  disable_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c3_vdynblksskidpad(void *chartInstanceVar)
{
  sf_gateway_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_vdynblksskidpad(SimStruct* S)
{
  return get_sim_state_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_vdynblksskidpad(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c3_vdynblksskidpad(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_vdynblksskidpadInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_vdynblksskidpad_optimization_info();
    }

    mdl_cleanup_runtime_resources_c3_vdynblksskidpad
      ((SFc3_vdynblksskidpadInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c3_vdynblksskidpad(void *chartInstanceVar)
{
  mdl_start_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc3_vdynblksskidpadInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c3_vdynblksskidpad(void *chartInstanceVar)
{
  mdl_terminate_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_vdynblksskidpad(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc3_vdynblksskidpad((SFc3_vdynblksskidpadInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_vdynblksskidpad_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWM1vG0UUX7shoqhEFUKCQyTKjUulklKpUhEk9Qe1SIhVO0FwicY7z96RZ2e282HHnPiTOHC",
    "GKzeunOEf4MgN3qzXjrsx9oxdRNuV1uvZ3d/83nvzvmajSuskwmMPz4fvR9EuXt/EsxpNjzeKcW",
    "XhnN7fiT4txr+8FUWxpDAA0bH9PruMwg5h0zZRJNVR+CFICk9BS24Nk6Il+tIfy0QfFIgYJ8ikM",
    "kG8mqWWMzFsWhE7Zv11wuKkk0jL6WOckNBTwSf/xptZ00bGOlMQmyYANYmSdpA0ORmstoIy41oC",
    "8VDbNNhWGkzHZk5VfWK5YRmHxiXELaENQSvoNfp2DDFQM5dhRnb66s4MLdOMMyL8bZ0Q3YEMvcP",
    "AWUbx99QatJ4nL/L1mCBGKkZ4I+W1hChfbJujnCfo1jzYziY1dejZwYCJgbOusikI1B/9xMNW/Z",
    "ocgSIDOBVhvLHTrnGZL/DcLz2xhqVwTtRRjH6ggYbFIDqw7hBcWujiNEFYEKTHoaW7io1wjULzR",
    "suF0kZ5w6ZTT9IbYXPexghXVW/I24xFjXCuw7BdmR3DCHjOXyeGbICd8geAtWa0K9E7XOQGRr8V",
    "7JmFAluTgjJ/rxyVUHmR+AoTvgecpS4MgKKZ56LPJ1oXR1YbmdYw9OvHx55817EtYUD1SQze+Vo",
    "RpgEFzv0qkJcy7QIJ0Wglk2vpPcM0BjeCRrpvRX0s1RBtHFoYrmzlIiEMDXQAdTCQJ7kGevc54d",
    "ZT5lRjVnbucaYxy4bxItbFz0bgmMQJUFcDGYcTzLM4ge8Sa1c+j1DbETOTOuhYscw3kiwmdCx+z",
    "krdSQZnYijkWDSVTDtFF7PCrwAwaxAlsJQ9xlKqJk0U3k9qBc+6eXYPbRicnYnhpOd84wsQWA2d",
    "rq56kxijqiGw3USBtsF22HfYjgjNtMEWcNLIY4DmffCT6KoP3lnSB7+z0AffLsbx/YsRnYgeH2o",
    "9ZDQjRQl1891bmO+WR1/tg4uu4a74ZtePFvCVJbzRwrXMd7P6/Ps3SnxVvFOpVHLc4QLu7RLPTg",
    "m3W9js51+/v/uHUH8/evDjTx/2Gr+v469c46/k/x3uh2rYvmWvGO/PeqZ5hh5dS2I+/vBeyR/cW",
    "LeO4EmTMHr+8ICLb56Ov/zkmJPadH3WyFstyTu7f8f1aRjAeT5QcYsW+x83Jnbal+f7uAV5d9fY",
    "4+aCP0XRn59vh3/3sIxfZq/dkr3cWFrTSgfP++/mctw53A4/5W+v0WO/pMd+3r9fEJel4WJ5Rtj",
    "zjLdV/h6Ke1X4Xnc5X6R+PnXkxoa4yn9Yt14kblv9Quvjq/7+vRX5LCq9f/sl1mNVHg3pk142vX",
    "6LwvqYD4rxZ/M9ei1hnC7ZJRSPsZHvL3v6mvj3X4H2m/VtDWe/4sPot/ePBOET3BZMt13F7bZy3",
    "+TmjxQQvXzv9X/Uk9n1cE2/cqsU3248ZoLKsb778cGDg23q0z+r1gsO",
    ""
  };

  static char newstr [1481] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_vdynblksskidpad(SimStruct *S)
{
  const char* newstr = sf_c3_vdynblksskidpad_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(763416511U));
  ssSetChecksum1(S,(4285689571U));
  ssSetChecksum2(S,(3199481147U));
  ssSetChecksum3(S,(3796197921U));
}

static void mdlRTW_c3_vdynblksskidpad(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c3_vdynblksskidpad(SimStruct *S)
{
  SFc3_vdynblksskidpadInstanceStruct *chartInstance;
  chartInstance = (SFc3_vdynblksskidpadInstanceStruct *)utMalloc(sizeof
    (SFc3_vdynblksskidpadInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_vdynblksskidpadInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_vdynblksskidpad;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_vdynblksskidpad;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c3_vdynblksskidpad;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c3_vdynblksskidpad;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c3_vdynblksskidpad;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_vdynblksskidpad;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_vdynblksskidpad;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_vdynblksskidpad;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_vdynblksskidpad;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_vdynblksskidpad;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_vdynblksskidpad;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_vdynblksskidpad;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c3_vdynblksskidpad(chartInstance);
}

void c3_vdynblksskidpad_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c3_vdynblksskidpad(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_vdynblksskidpad(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_vdynblksskidpad(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_vdynblksskidpad_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
