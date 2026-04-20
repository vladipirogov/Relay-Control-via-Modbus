#include "POUS.h"
#include "Config0.h"

static inline BOOL __MAIN_EQ__BOOL__WORD1(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ3776762_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ3776762_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __MAIN_EQ__BOOL__WORD2(BOOL EN,
  UINT __PARAM_COUNT,
  WORD IN1,
  WORD IN2,
  MAIN *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ3354236_ENO,);
  __res = EQ__BOOL__WORD(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ3354236_ENO,,__TMP_ENO);
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
  __INIT_VAR(data__->BTN_ON_1_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_ON_2_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_OFF_1_TMP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BTN_OFF_2_TMP,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  __INIT_VAR(data__->TON0_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON1,retain);
  __INIT_VAR(data__->TON1_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON2,retain);
  __INIT_VAR(data__->TON2_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TON3_TMP_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CYCLE_RUN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CYCLE_RUN_SET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD_4,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
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
  __INIT_VAR(data__->_TMP_EQ3776762_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ3776762_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ3354236_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ3354236_OUT,__BOOL_LITERAL(FALSE),retain)
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
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_EQ3776762_OUT,,__MAIN_EQ__BOOL__WORD1(
    (BOOL)__BOOL_LITERAL(TRUE),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)1,
    data__));
  __SET_VAR(data__->,_TMP_EQ3354236_OUT,,__MAIN_EQ__BOOL__WORD2(
    (BOOL)__GET_VAR(data__->_TMP_EQ3776762_ENO,),
    (UINT)2,
    (WORD)__GET_LOCATED(data__->CMD_WORD,),
    (WORD)2,
    data__));
  if (__GET_VAR(data__->_TMP_EQ3776762_ENO,)) {
    __SET_VAR(data__->,CMD_1,,__GET_VAR(data__->_TMP_EQ3776762_OUT,));
  };
  if (__GET_VAR(data__->_TMP_EQ3354236_ENO,)) {
    __SET_VAR(data__->,CMD_2,,__GET_VAR(data__->_TMP_EQ3354236_OUT,));
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
  __SET_LOCATED(data__->,K1,,((!(__GET_VAR(data__->BTN_OFF_1_TMP,)) && !(__GET_LOCATED(data__->BTN_OFF_1,))) && ((__GET_LOCATED(data__->K1,) || __GET_VAR(data__->R_TRIG1.Q,)) || __GET_VAR(data__->R_TRIG2.Q,))));
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_LOCATED(data__->BTN_ON_2,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->BTN_ON_2_TMP,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_LOCATED(data__->,K2,,((!(__GET_VAR(data__->BTN_OFF_2_TMP,)) && !(__GET_LOCATED(data__->BTN_OFF_2,))) && ((__GET_LOCATED(data__->K2,) || __GET_VAR(data__->R_TRIG3.Q,)) || __GET_VAR(data__->R_TRIG4.Q,))));

  goto __end;

__end:
  return;
} // MAIN_body__() 





