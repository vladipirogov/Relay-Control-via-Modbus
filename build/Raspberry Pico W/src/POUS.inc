#include "POUS.h"
#include "Config0.h"

void BOOL_ON_WORD_init__(BOOL_ON_WORD *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->B_IN0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_IN15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->WORD_OUT,0,retain)
}

// Code part
void BOOL_ON_WORD_body__(BOOL_ON_WORD *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,WORD_OUT,,0);
  if (__GET_VAR(data__->B_IN0,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x1));
  };
  if (__GET_VAR(data__->B_IN1,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x2));
  };
  if (__GET_VAR(data__->B_IN2,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x4));
  };
  if (__GET_VAR(data__->B_IN3,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x8));
  };
  if (__GET_VAR(data__->B_IN4,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x10));
  };
  if (__GET_VAR(data__->B_IN5,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x20));
  };
  if (__GET_VAR(data__->B_IN6,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x40));
  };
  if (__GET_VAR(data__->B_IN7,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x80));
  };
  if (__GET_VAR(data__->B_IN8,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x100));
  };
  if (__GET_VAR(data__->B_IN9,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x200));
  };
  if (__GET_VAR(data__->B_IN10,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x400));
  };
  if (__GET_VAR(data__->B_IN11,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x800));
  };
  if (__GET_VAR(data__->B_IN12,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x1000));
  };
  if (__GET_VAR(data__->B_IN13,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x2000));
  };
  if (__GET_VAR(data__->B_IN14,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x4000));
  };
  if (__GET_VAR(data__->B_IN15,)) {
    __SET_VAR(data__->,WORD_OUT,,(__GET_VAR(data__->WORD_OUT,) | 0x8000));
  };

  goto __end;

__end:
  return;
} // BOOL_ON_WORD_body__() 





void CAN_INTERFACE_init__(CAN_INTERFACE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ID_FILTER,300,retain)
  __INIT_VAR(data__->ID_STATE,310,retain)
  __INIT_VAR(data__->STATE_PERIOD,500,retain)
  __INIT_VAR(data__->INPUT_ADDRESS,0,retain)
  __INIT_VAR(data__->NUM_OF_INPUT,1,retain)
  __INIT_VAR(data__->OUTPUT_ADDRESS,2,retain)
  __INIT_VAR(data__->NUM_OF_OUTPUT,1,retain)
  __INIT_VAR(data__->ERR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HASBEENINITIALIZED,0,retain)
}

// Code part
void CAN_INTERFACE_body__(CAN_INTERFACE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

  CAN_INTERFACE_VARS vars;
  vars.ID_FILTER = &data__->ID_FILTER.value;
  vars.ID_STATE = &data__->ID_STATE.value;
  vars.STATE_PERIOD = &data__->STATE_PERIOD.value;
  vars.INPUT_ADDRESS = &data__->INPUT_ADDRESS.value;
  vars.NUM_OF_INPUT = &data__->NUM_OF_INPUT.value;
  vars.OUTPUT_ADDRESS = &data__->OUTPUT_ADDRESS.value;
  vars.NUM_OF_OUTPUT = &data__->NUM_OF_OUTPUT.value;
  vars.ERR = &data__->ERR.value;
  
  #undef GetFbVar
  #undef SetFbVar
;
  if ((__GET_VAR(data__->HASBEENINITIALIZED,) == __BOOL_LITERAL(FALSE))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

  can_interface_setup(&vars);
  
    #undef GetFbVar
    #undef SetFbVar
;
    __SET_VAR(data__->,HASBEENINITIALIZED,,__BOOL_LITERAL(TRUE));
  };
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

  can_interface_loop(&vars);
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // CAN_INTERFACE_body__() 





void WORD_ON_BOOL_init__(WORD_ON_BOOL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->WORD_IN,0,retain)
  __INIT_VAR(data__->B_OUT0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_OUT15,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void WORD_ON_BOOL_body__(WORD_ON_BOOL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,B_OUT0,,((__GET_VAR(data__->WORD_IN,) & 0x1) != 0));
  __SET_VAR(data__->,B_OUT1,,((__GET_VAR(data__->WORD_IN,) & 0x2) != 0));
  __SET_VAR(data__->,B_OUT2,,((__GET_VAR(data__->WORD_IN,) & 0x4) != 0));
  __SET_VAR(data__->,B_OUT3,,((__GET_VAR(data__->WORD_IN,) & 0x8) != 0));
  __SET_VAR(data__->,B_OUT4,,((__GET_VAR(data__->WORD_IN,) & 0x10) != 0));
  __SET_VAR(data__->,B_OUT5,,((__GET_VAR(data__->WORD_IN,) & 0x20) != 0));
  __SET_VAR(data__->,B_OUT6,,((__GET_VAR(data__->WORD_IN,) & 0x40) != 0));
  __SET_VAR(data__->,B_OUT7,,((__GET_VAR(data__->WORD_IN,) & 0x80) != 0));
  __SET_VAR(data__->,B_OUT8,,((__GET_VAR(data__->WORD_IN,) & 0x100) != 0));
  __SET_VAR(data__->,B_OUT9,,((__GET_VAR(data__->WORD_IN,) & 0x200) != 0));
  __SET_VAR(data__->,B_OUT10,,((__GET_VAR(data__->WORD_IN,) & 0x400) != 0));
  __SET_VAR(data__->,B_OUT11,,((__GET_VAR(data__->WORD_IN,) & 0x800) != 0));
  __SET_VAR(data__->,B_OUT12,,((__GET_VAR(data__->WORD_IN,) & 0x1000) != 0));
  __SET_VAR(data__->,B_OUT13,,((__GET_VAR(data__->WORD_IN,) & 0x2000) != 0));
  __SET_VAR(data__->,B_OUT14,,((__GET_VAR(data__->WORD_IN,) & 0x4000) != 0));
  __SET_VAR(data__->,B_OUT15,,((__GET_VAR(data__->WORD_IN,) & 0x8000) != 0));

  goto __end;

__end:
  return;
} // WORD_ON_BOOL_body__() 





static inline BOOL __MAIN_EQ__BOOL__WORD1(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ5689106_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ5689106_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __MAIN_EQ__BOOL__WORD2(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ5766092_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ5766092_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __MAIN_EQ__BOOL__WORD3(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ5859957_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ5859957_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __MAIN_EQ__BOOL__WORD4(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ5545463_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ5545463_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __MAIN_EQ__BOOL__WORD5(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ5719792_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ5719792_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD6(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE2461384_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE2461384_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD7(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE1997433_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE1997433_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD8(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE3435397_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE3435397_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD9(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE8007104_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE8007104_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD10(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE656876_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE656876_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD11(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE4683258_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE4683258_ENO,,__TMP_ENO);
  return __res;
}

static inline WORD __MAIN_MOVE__WORD__WORD12(BOOL EN,
  WORD IN,
  MAIN *data__)
{
  WORD __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE6517896_ENO,);
  __res = MOVE__WORD__WORD(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE6517896_ENO,,__TMP_ENO);
  return __res;
}

void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->CAN_ERR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->K1_CAN_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->K2_CAN_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->K1_CAN_OFF,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->K2_CAN_OFF,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_ON_1_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_ON_2_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_OFF_1_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_OFF_2_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TON0_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TON1_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TON2_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TON3_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CYCLE_RUN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CYCLE_RUN_SET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_4,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  CAN_INTERFACE_init__(&data__->CAN_INTERFACE0,retain);
  BOOL_ON_WORD_init__(&data__->BOOL_ON_WORD0,retain);
  __INIT_LOCATED(BOOL,__IX0_3,data__->BTN_ON_1,retain)
  __INIT_LOCATED_VALUE(data__->BTN_ON_1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_5,data__->BTN_ON_2,retain)
  __INIT_LOCATED_VALUE(data__->BTN_ON_2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0,data__->K1,retain)
  __INIT_LOCATED_VALUE(data__->K1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_1,data__->K2,retain)
  __INIT_LOCATED_VALUE(data__->K2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_4,data__->BTN_OFF_1,retain)
  __INIT_LOCATED_VALUE(data__->BTN_OFF_1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_6,data__->BTN_OFF_2,retain)
  __INIT_LOCATED_VALUE(data__->BTN_OFF_2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(WORD,__MW0,data__->CMD_WORD,retain)
  __INIT_LOCATED_VALUE(data__->CMD_WORD,0)
  __INIT_LOCATED(WORD,__MW1,data__->CYRCLE_STATE,retain)
  __INIT_LOCATED_VALUE(data__->CYRCLE_STATE,0)
  __INIT_LOCATED(WORD,__MW2,data__->CAN_STATE,retain)
  __INIT_LOCATED_VALUE(data__->CAN_STATE,0)
  __INIT_VAR(data__->_TMP_EQ5689106_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5689106_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5766092_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5766092_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5859957_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5859957_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5545463_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5545463_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5719792_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5719792_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE2461384_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE2461384_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE1997433_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE1997433_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE3435397_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE3435397_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE8007104_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE8007104_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE656876_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE656876_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE4683258_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE4683258_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE6517896_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE6517896_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  R_TRIG_init__(&data__->R_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG6,retain);
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->CAN_INTERFACE0.,EN,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->CAN_INTERFACE0.,ID_FILTER,,300);
  __SET_VAR(data__->CAN_INTERFACE0.,ID_STATE,,310);
  __SET_VAR(data__->CAN_INTERFACE0.,STATE_PERIOD,,500);
  __SET_VAR(data__->CAN_INTERFACE0.,INPUT_ADDRESS,,1);
  __SET_VAR(data__->CAN_INTERFACE0.,NUM_OF_INPUT,,2);
  __SET_VAR(data__->CAN_INTERFACE0.,OUTPUT_ADDRESS,,0);
  __SET_VAR(data__->CAN_INTERFACE0.,NUM_OF_OUTPUT,,1);
  CAN_INTERFACE_body__(&data__->CAN_INTERFACE0);
  if (__GET_VAR(data__->CAN_INTERFACE0.ENO,)) {
    __SET_VAR(data__->,CAN_ERR,,__GET_VAR(data__->CAN_INTERFACE0.ERR,));
  };
  __SET_VAR(data__->BOOL_ON_WORD0.,EN,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->BOOL_ON_WORD0.,B_IN0,,__GET_LOCATED(data__->K1,));
  __SET_VAR(data__->BOOL_ON_WORD0.,B_IN1,,__GET_LOCATED(data__->K2,));
  __SET_VAR(data__->BOOL_ON_WORD0.,B_IN2,,__GET_VAR(data__->CYCLE_RUN_SET,));
  __SET_VAR(data__->BOOL_ON_WORD0.,B_IN15,,__GET_VAR(data__->CYCLE_RUN,));
  BOOL_ON_WORD_body__(&data__->BOOL_ON_WORD0);
  if (__GET_VAR(data__->BOOL_ON_WORD0.ENO,)) {
    __SET_LOCATED(data__->,CAN_STATE,,__GET_VAR(data__->BOOL_ON_WORD0.WORD_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ5689106_OUT,,__MAIN_EQ__BOOL__WORD1(
    (BOOL)__BOOL_LITERAL(TRUE),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)1,
    data__));
  __SET_VAR(data__->,_TMP_EQ5766092_OUT,,__MAIN_EQ__BOOL__WORD2(
    (BOOL)__GET_VAR(data__->_TMP_EQ5689106_ENO,),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)2,
    data__));
  if (__GET_VAR(data__->_TMP_EQ5689106_ENO,)) {
    __SET_VAR(data__->,CMD_1,,__GET_VAR(data__->_TMP_EQ5689106_OUT,));
  };
  if (__GET_VAR(data__->_TMP_EQ5766092_ENO,)) {
    __SET_VAR(data__->,CMD_2,,__GET_VAR(data__->_TMP_EQ5766092_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ5859957_OUT,,__MAIN_EQ__BOOL__WORD3(
    (BOOL)__BOOL_LITERAL(TRUE),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)3,
    data__));
  __SET_VAR(data__->,_TMP_EQ5545463_OUT,,__MAIN_EQ__BOOL__WORD4(
    (BOOL)__GET_VAR(data__->_TMP_EQ5859957_ENO,),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)4,
    data__));
  if (__GET_VAR(data__->_TMP_EQ5859957_ENO,)) {
    __SET_VAR(data__->,CMD_3,,__GET_VAR(data__->_TMP_EQ5859957_OUT,));
  };
  if (__GET_VAR(data__->_TMP_EQ5545463_ENO,)) {
    __SET_VAR(data__->,CMD_4,,__GET_VAR(data__->_TMP_EQ5545463_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ5719792_OUT,,__MAIN_EQ__BOOL__WORD5(
    (BOOL)__BOOL_LITERAL(TRUE),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)5,
    data__));
  if (__GET_VAR(data__->_TMP_EQ5719792_ENO,)) {
    __SET_VAR(data__->,CYCLE_RUN,,__GET_VAR(data__->_TMP_EQ5719792_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE2461384_OUT,,__MAIN_MOVE__WORD__WORD6(
    (BOOL)__BOOL_LITERAL(TRUE),
    (WORD)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE2461384_ENO,)) {
    __SET_LOCATED(data__->,CMD_WORD,,__GET_VAR(data__->_TMP_MOVE2461384_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE1997433_OUT,,__MAIN_MOVE__WORD__WORD7(
    (BOOL)__GET_VAR(data__->CYCLE_RUN,),
    (WORD)1,
    data__));
  if (__GET_VAR(data__->CYCLE_RUN,)) {
    __SET_VAR(data__->,CYCLE_RUN_SET,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE1997433_ENO,)) {
    __SET_LOCATED(data__->,CYRCLE_STATE,,__GET_VAR(data__->_TMP_MOVE1997433_OUT,));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->CYCLE_RUN_SET,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,_TMP_MOVE3435397_OUT,,__MAIN_MOVE__WORD__WORD8(
    (BOOL)__GET_VAR(data__->TON0.Q,),
    (WORD)2,
    data__));
  __SET_VAR(data__->,TON0_TMP_ON,,__GET_VAR(data__->_TMP_MOVE3435397_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE3435397_ENO,)) {
    __SET_LOCATED(data__->,CYRCLE_STATE,,__GET_VAR(data__->_TMP_MOVE3435397_OUT,));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0_TMP_ON,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,_TMP_MOVE8007104_OUT,,__MAIN_MOVE__WORD__WORD9(
    (BOOL)__GET_VAR(data__->TON1.Q,),
    (WORD)3,
    data__));
  __SET_VAR(data__->,TON1_TMP_ON,,__GET_VAR(data__->_TMP_MOVE8007104_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE8007104_ENO,)) {
    __SET_LOCATED(data__->,CYRCLE_STATE,,__GET_VAR(data__->_TMP_MOVE8007104_OUT,));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TON1_TMP_ON,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,_TMP_MOVE656876_OUT,,__MAIN_MOVE__WORD__WORD10(
    (BOOL)__GET_VAR(data__->TON2.Q,),
    (WORD)4,
    data__));
  __SET_VAR(data__->,TON2_TMP_ON,,__GET_VAR(data__->_TMP_MOVE656876_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE656876_ENO,)) {
    __SET_LOCATED(data__->,CYRCLE_STATE,,__GET_VAR(data__->_TMP_MOVE656876_OUT,));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->TON2_TMP_ON,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->,_TMP_MOVE4683258_OUT,,__MAIN_MOVE__WORD__WORD11(
    (BOOL)__GET_VAR(data__->TON3.Q,),
    (WORD)5,
    data__));
  __SET_VAR(data__->,TON3_TMP_ON,,__GET_VAR(data__->_TMP_MOVE4683258_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE4683258_ENO,)) {
    __SET_LOCATED(data__->,CYRCLE_STATE,,__GET_VAR(data__->_TMP_MOVE4683258_OUT,));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->TON3_TMP_ON,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->,_TMP_MOVE6517896_OUT,,__MAIN_MOVE__WORD__WORD12(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (WORD)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE6517896_ENO,)) {
    __SET_VAR(data__->,CYCLE_RUN_SET,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE6517896_ENO,)) {
    __SET_LOCATED(data__->,CYRCLE_STATE,,__GET_VAR(data__->_TMP_MOVE6517896_OUT,));
  };
  __SET_VAR(data__->,BTN_ON_1_TMP,,(__GET_VAR(data__->CMD_1,) || __GET_VAR(data__->TON0_TMP_ON,)));
  __SET_LOCATED(data__->,BTN_OFF_1,,(__GET_VAR(data__->CMD_3,) || __GET_VAR(data__->TON1_TMP_ON,)));
  __SET_VAR(data__->,BTN_ON_2_TMP,,(__GET_VAR(data__->CMD_2,) || __GET_VAR(data__->TON2_TMP_ON,)));
  __SET_LOCATED(data__->,BTN_OFF_2,,(__GET_VAR(data__->CMD_4,) || __GET_VAR(data__->TON3_TMP_ON,)));
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_LOCATED(data__->BTN_ON_1,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->BTN_ON_1_TMP,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->K1_CAN_ON,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_LOCATED(data__->,K1,,(((!(__GET_VAR(data__->K1_CAN_OFF,)) && !(__GET_VAR(data__->BTN_OFF_1_TMP,))) && !(__GET_LOCATED(data__->BTN_OFF_1,))) && (((__GET_LOCATED(data__->K1,) || __GET_VAR(data__->R_TRIG1.Q,)) || __GET_VAR(data__->R_TRIG2.Q,)) || __GET_VAR(data__->R_TRIG3.Q,))));
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_LOCATED(data__->BTN_ON_2,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_VAR(data__->BTN_ON_2_TMP,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_VAR(data__->K2_CAN_ON,));
  R_TRIG_body__(&data__->R_TRIG6);
  __SET_LOCATED(data__->,K2,,(((!(__GET_VAR(data__->K2_CAN_OFF,)) && !(__GET_VAR(data__->BTN_OFF_2_TMP,))) && !(__GET_LOCATED(data__->BTN_OFF_2,))) && (((__GET_LOCATED(data__->K2,) || __GET_VAR(data__->R_TRIG4.Q,)) || __GET_VAR(data__->R_TRIG5.Q,)) || __GET_VAR(data__->R_TRIG6.Q,))));

  goto __end;

__end:
  return;
} // MAIN_body__() 





