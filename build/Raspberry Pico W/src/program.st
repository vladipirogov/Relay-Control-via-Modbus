PROGRAM main
  VAR
    BTN_ON_1_TMP : BOOL;
    BTN_ON_2_TMP : BOOL;
    BTN_OFF_1_TMP : BOOL;
    BTN_OFF_2_TMP : BOOL;
    TON0 : TON;
    TON0_TMP_ON : BOOL;
    TON1 : TON;
    TON1_TMP_ON : BOOL;
    TON2 : TON;
    TON2_TMP_ON : BOOL;
    TON3_TMP_ON : BOOL;
    CYCLE_RUN : BOOL;
    CYCLE_RUN_SET : BOOL;
    CMD_1 : BOOL;
    CMD_2 : BOOL;
    CMD_3 : BOOL;
    CMD_4 : BOOL;
    TON3 : TON;
    TON4 : TON;
  END_VAR
  VAR
    BTN_ON_1 AT %IX0.3 : BOOL;
    BTN_ON_2 AT %IX0.5 : BOOL;
    K1 AT %QX0.0 : BOOL;
    K2 AT %QX0.1 : BOOL;
    BTN_OFF_1 AT %IX0.4 : BOOL;
    BTN_OFF_2 AT %IX0.6 : BOOL;
    CMD_WORD AT %MW0 : WORD;
    CYRCLE_STATE AT %MW1 : WORD := 0;
  END_VAR
  VAR
    _TMP_EQ3776762_ENO : BOOL;
    _TMP_EQ3776762_OUT : BOOL;
    _TMP_EQ3354236_ENO : BOOL;
    _TMP_EQ3354236_OUT : BOOL;
    _TMP_EQ5859957_ENO : BOOL;
    _TMP_EQ5859957_OUT : BOOL;
    _TMP_EQ5545463_ENO : BOOL;
    _TMP_EQ5545463_OUT : BOOL;
    _TMP_EQ5719792_ENO : BOOL;
    _TMP_EQ5719792_OUT : BOOL;
    _TMP_MOVE2461384_ENO : BOOL;
    _TMP_MOVE2461384_OUT : WORD;
    _TMP_MOVE1997433_ENO : BOOL;
    _TMP_MOVE1997433_OUT : WORD;
    _TMP_MOVE3435397_ENO : BOOL;
    _TMP_MOVE3435397_OUT : WORD;
    _TMP_MOVE8007104_ENO : BOOL;
    _TMP_MOVE8007104_OUT : WORD;
    _TMP_MOVE656876_ENO : BOOL;
    _TMP_MOVE656876_OUT : WORD;
    _TMP_MOVE4683258_ENO : BOOL;
    _TMP_MOVE4683258_OUT : WORD;
    _TMP_MOVE6517896_ENO : BOOL;
    _TMP_MOVE6517896_OUT : WORD;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
  END_VAR

  _TMP_EQ3776762_OUT := EQ(EN := TRUE, IN1 := CMD_WORD, IN2 := 1, ENO => _TMP_EQ3776762_ENO);
  _TMP_EQ3354236_OUT := EQ(EN := _TMP_EQ3776762_ENO, IN1 := CMD_WORD, IN2 := 2, ENO => _TMP_EQ3354236_ENO);
  IF _TMP_EQ3776762_ENO THEN
      CMD_1 := _TMP_EQ3776762_OUT;
  END_IF;
  IF _TMP_EQ3354236_ENO THEN
      CMD_2 := _TMP_EQ3354236_OUT;
  END_IF;
  _TMP_EQ5859957_OUT := EQ(EN := TRUE, IN1 := CMD_WORD, IN2 := 3, ENO => _TMP_EQ5859957_ENO);
  _TMP_EQ5545463_OUT := EQ(EN := _TMP_EQ5859957_ENO, IN1 := CMD_WORD, IN2 := 4, ENO => _TMP_EQ5545463_ENO);
  IF _TMP_EQ5859957_ENO THEN
      CMD_3 := _TMP_EQ5859957_OUT;
  END_IF;
  IF _TMP_EQ5545463_ENO THEN
      CMD_4 := _TMP_EQ5545463_OUT;
  END_IF;
  _TMP_EQ5719792_OUT := EQ(EN := TRUE, IN1 := CMD_WORD, IN2 := 5, ENO => _TMP_EQ5719792_ENO);
  IF _TMP_EQ5719792_ENO THEN
      CYCLE_RUN := _TMP_EQ5719792_OUT;
  END_IF;
  _TMP_MOVE2461384_OUT := MOVE(EN := TRUE, IN := 0, ENO => _TMP_MOVE2461384_ENO);
  IF _TMP_MOVE2461384_ENO THEN
      CMD_WORD := _TMP_MOVE2461384_OUT;
  END_IF;
  _TMP_MOVE1997433_OUT := MOVE(EN := CYCLE_RUN, IN := 1, ENO => _TMP_MOVE1997433_ENO);
  IF CYCLE_RUN THEN
    CYCLE_RUN_SET := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE1997433_ENO THEN
      CYRCLE_STATE := _TMP_MOVE1997433_OUT;
  END_IF;
  TON0(IN := CYCLE_RUN_SET, PT := T#2s);
  _TMP_MOVE3435397_OUT := MOVE(EN := TON0.Q, IN := 2, ENO => _TMP_MOVE3435397_ENO);
  TON0_TMP_ON := _TMP_MOVE3435397_ENO;
  IF _TMP_MOVE3435397_ENO THEN
      CYRCLE_STATE := _TMP_MOVE3435397_OUT;
  END_IF;
  TON1(IN := TON0_TMP_ON, PT := T#2s);
  _TMP_MOVE8007104_OUT := MOVE(EN := TON1.Q, IN := 3, ENO => _TMP_MOVE8007104_ENO);
  TON1_TMP_ON := _TMP_MOVE8007104_ENO;
  IF _TMP_MOVE8007104_ENO THEN
      CYRCLE_STATE := _TMP_MOVE8007104_OUT;
  END_IF;
  TON2(IN := TON1_TMP_ON, PT := T#2s);
  _TMP_MOVE656876_OUT := MOVE(EN := TON2.Q, IN := 4, ENO => _TMP_MOVE656876_ENO);
  TON2_TMP_ON := _TMP_MOVE656876_ENO;
  IF _TMP_MOVE656876_ENO THEN
      CYRCLE_STATE := _TMP_MOVE656876_OUT;
  END_IF;
  TON3(IN := TON2_TMP_ON, PT := T#2s);
  _TMP_MOVE4683258_OUT := MOVE(EN := TON3.Q, IN := 5, ENO => _TMP_MOVE4683258_ENO);
  TON3_TMP_ON := _TMP_MOVE4683258_ENO;
  IF _TMP_MOVE4683258_ENO THEN
      CYRCLE_STATE := _TMP_MOVE4683258_OUT;
  END_IF;
  TON4(IN := TON3_TMP_ON, PT := T#2s);
  _TMP_MOVE6517896_OUT := MOVE(EN := TON4.Q, IN := 0, ENO => _TMP_MOVE6517896_ENO);
  IF _TMP_MOVE6517896_ENO THEN
    CYCLE_RUN_SET := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE6517896_ENO THEN
      CYRCLE_STATE := _TMP_MOVE6517896_OUT;
  END_IF;
  BTN_ON_1_TMP := CMD_1 OR TON0_TMP_ON;
  BTN_OFF_1 := CMD_3 OR TON1_TMP_ON;
  BTN_ON_2_TMP := CMD_2 OR TON2_TMP_ON;
  BTN_OFF_2 := CMD_4 OR TON3_TMP_ON;
  R_TRIG1(CLK := BTN_ON_1);
  R_TRIG2(CLK := BTN_ON_1_TMP);
  K1 := NOT(BTN_OFF_1_TMP) AND NOT(BTN_OFF_1) AND (K1 OR R_TRIG1.Q OR R_TRIG2.Q);
  R_TRIG3(CLK := BTN_ON_2);
  R_TRIG4(CLK := BTN_ON_2_TMP);
  K2 := NOT(BTN_OFF_2_TMP) AND NOT(BTN_OFF_2) AND (K2 OR R_TRIG3.Q OR R_TRIG4.Q);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 1);
    PROGRAM instance0 WITH task0 : main;
  END_RESOURCE
END_CONFIGURATION

(*DBG:char md5[] = "ab7ed9817961e97a46022e96f4f2a06e";*)
(*DBG:/**)
(*DBG: * This file is part of OpenPLC Runtime*)
(*DBG: **)
(*DBG: * Copyright (C) 2023 Autonomy, GP Orcullo*)
(*DBG: * Based on the work by GP Orcullo on Beremiz for uC*)
(*DBG: **)
(*DBG: * This program is free software; you can redistribute it and/or*)
(*DBG: * modify it under the terms of the GNU General Public License*)
(*DBG: * as published by the Free Software Foundation; either version 2*)
(*DBG: * of the License, or (at your option) any later version.*)
(*DBG: **)
(*DBG: * This program is distributed in the hope that it will be useful,*)
(*DBG: * but WITHOUT ANY WARRANTY; without even the implied warranty of*)
(*DBG: * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*)
(*DBG: * GNU General Public License for more details.*)
(*DBG: **)
(*DBG: * You should have received a copy of the GNU General Public License*)
(*DBG: * along with this program; If not, see <http://www.gnu.org/licenses/>.*)
(*DBG: **)
(*DBG: */*)
(*DBG:*)
(*DBG:#include <stdbool.h>*)
(*DBG:*)
(*DBG:// Include defines.h first for Arduino builds to set USE_*_BLOCKS macros*)
(*DBG:// before iec_std_FB.h processes its conditional includes*)
(*DBG:#ifdef ARDUINO*)
(*DBG:#include "../examples/Baremetal/defines.h"*)
(*DBG:#endif*)
(*DBG:*)
(*DBG:#include "iec_types_all.h"*)
(*DBG:#include "POUS.h"*)
(*DBG:*)
(*DBG:#define SAME_ENDIANNESS      0*)
(*DBG:#define REVERSE_ENDIANNESS   1*)
(*DBG:*)
(*DBG:char plc_program_md5[] = "ab7ed9817961e97a46022e96f4f2a06e";*)
(*DBG:*)
(*DBG:uint8_t endianness;*)
(*DBG:*)
(*DBG:*)
(*DBG:extern MAIN RES0__INSTANCE0;*)
(*DBG:*)
(*DBG:static const struct {*)
(*DBG:    void *ptr;*)
(*DBG:    __IEC_types_enum type;*)
(*DBG:} debug_vars[] = {*)
(*DBG:    {&(RES0__INSTANCE0.BTN_ON_1_TMP), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_ON_2_TMP), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_OFF_1_TMP), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_OFF_2_TMP), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.PT), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.ET), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.STATE), SINT_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.PREV_IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.CURRENT_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0.START_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON0_TMP_ON), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.PT), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.ET), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.STATE), SINT_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.PREV_IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.CURRENT_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1.START_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON1_TMP_ON), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.PT), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.ET), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.STATE), SINT_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.PREV_IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.CURRENT_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2.START_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON2_TMP_ON), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3_TMP_ON), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CYCLE_RUN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CYCLE_RUN_SET), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CMD_1), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CMD_2), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CMD_3), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CMD_4), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.PT), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.ET), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.STATE), SINT_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.PREV_IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.CURRENT_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON3.START_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.PT), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.ET), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.STATE), SINT_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.PREV_IN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.CURRENT_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.TON4.START_TIME), TIME_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_ON_1), BOOL_P_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_ON_2), BOOL_P_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.K1), BOOL_O_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.K2), BOOL_O_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_OFF_1), BOOL_P_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.BTN_OFF_2), BOOL_P_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CMD_WORD), WORD_O_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.CYRCLE_STATE), WORD_O_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ3776762_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ3776762_OUT), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ3354236_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ3354236_OUT), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ5859957_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ5859957_OUT), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ5545463_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ5545463_OUT), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ5719792_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_EQ5719792_OUT), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE2461384_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE2461384_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE1997433_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE1997433_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE3435397_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE3435397_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE8007104_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE8007104_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE656876_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE656876_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE4683258_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE4683258_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE6517896_ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0._TMP_MOVE6517896_OUT), WORD_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG1.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG1.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG1.CLK), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG1.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG1.M), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG2.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG2.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG2.CLK), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG2.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG2.M), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG3.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG3.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG3.CLK), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG3.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG3.M), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG4.EN), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG4.ENO), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG4.CLK), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG4.Q), BOOL_ENUM},*)
(*DBG:    {&(RES0__INSTANCE0.R_TRIG4.M), BOOL_ENUM},*)
(*DBG:};*)
(*DBG:*)
(*DBG:#define VAR_COUNT               116*)
(*DBG:*)
(*DBG:uint16_t get_var_count(void)*)
(*DBG:{*)
(*DBG:    return VAR_COUNT;*)
(*DBG:}*)
(*DBG:*)
(*DBG:size_t get_var_size(size_t idx)*)
(*DBG:{*)
(*DBG:    if (idx >= VAR_COUNT)*)
(*DBG:    {*)
(*DBG:        return 0;*)
(*DBG:    }*)
(*DBG:    switch (debug_vars[idx].type) {*)
(*DBG:    case WORD_ENUM:*)
(*DBG:    case WORD_O_ENUM:*)
(*DBG:        return sizeof(WORD);*)
(*DBG:    case SINT_ENUM:*)
(*DBG:        return sizeof(SINT);*)
(*DBG:    case BOOL_ENUM:*)
(*DBG:    case BOOL_O_ENUM:*)
(*DBG:    case BOOL_P_ENUM:*)
(*DBG:        return sizeof(BOOL);*)
(*DBG:    case TIME_ENUM:*)
(*DBG:        return sizeof(TIME);*)
(*DBG:    default:*)
(*DBG:        return 0;*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)
(*DBG:void *get_var_addr(size_t idx)*)
(*DBG:{*)
(*DBG:    void *ptr = debug_vars[idx].ptr;*)
(*DBG:*)
(*DBG:    switch (debug_vars[idx].type) {*)
(*DBG:    case WORD_ENUM:*)
(*DBG:        return (void *)&((__IEC_WORD_t *) ptr)->value;*)
(*DBG:    case WORD_O_ENUM:*)
(*DBG:        return (void *)((((__IEC_WORD_p *) ptr)->flags & __IEC_FORCE_FLAG)*)
(*DBG:                        ? &(((__IEC_WORD_p *) ptr)->fvalue)*)
(*DBG:                        : ((__IEC_WORD_p *) ptr)->value);*)
(*DBG:    case SINT_ENUM:*)
(*DBG:        return (void *)&((__IEC_SINT_t *) ptr)->value;*)
(*DBG:    case BOOL_ENUM:*)
(*DBG:        return (void *)&((__IEC_BOOL_t *) ptr)->value;*)
(*DBG:    case BOOL_O_ENUM:*)
(*DBG:    case BOOL_P_ENUM:*)
(*DBG:        return (void *)((((__IEC_BOOL_p *) ptr)->flags & __IEC_FORCE_FLAG)*)
(*DBG:                        ? &(((__IEC_BOOL_p *) ptr)->fvalue)*)
(*DBG:                        : ((__IEC_BOOL_p *) ptr)->value);*)
(*DBG:    case TIME_ENUM:*)
(*DBG:        return (void *)&((__IEC_TIME_t *) ptr)->value;*)
(*DBG:    default:*)
(*DBG:        return 0;*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)
(*DBG:void force_var(size_t idx, bool forced, void *val)*)
(*DBG:{*)
(*DBG:    void *ptr = debug_vars[idx].ptr;*)
(*DBG:*)
(*DBG:    if (forced) {*)
(*DBG:        size_t var_size = get_var_size(idx);*)
(*DBG:        switch (debug_vars[idx].type) {*)
(*DBG:        case WORD_ENUM: {*)
(*DBG:            memcpy(&((__IEC_WORD_t *) ptr)->value, val, var_size);*)
(*DBG:            ((__IEC_WORD_t *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:    *)
(*DBG:        case WORD_O_ENUM: {*)
(*DBG:            memcpy((((__IEC_WORD_p *) ptr)->value), val, var_size);*)
(*DBG:            memcpy(&((__IEC_WORD_p *) ptr)->fvalue, val, var_size);*)
(*DBG:            ((__IEC_WORD_p *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:        case SINT_ENUM: {*)
(*DBG:            memcpy(&((__IEC_SINT_t *) ptr)->value, val, var_size);*)
(*DBG:            ((__IEC_SINT_t *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:    *)
(*DBG:        case BOOL_ENUM: {*)
(*DBG:            memcpy(&((__IEC_BOOL_t *) ptr)->value, val, var_size);*)
(*DBG:            ((__IEC_BOOL_t *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:    *)
(*DBG:        case BOOL_O_ENUM: {*)
(*DBG:            memcpy((((__IEC_BOOL_p *) ptr)->value), val, var_size);*)
(*DBG:            memcpy(&((__IEC_BOOL_p *) ptr)->fvalue, val, var_size);*)
(*DBG:            ((__IEC_BOOL_p *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:        case BOOL_P_ENUM: {*)
(*DBG:            memcpy(&((__IEC_BOOL_p *) ptr)->fvalue, val, var_size);*)
(*DBG:            ((__IEC_BOOL_p *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:        case TIME_ENUM: {*)
(*DBG:            memcpy(&((__IEC_TIME_t *) ptr)->value, val, var_size);*)
(*DBG:            ((__IEC_TIME_t *) ptr)->flags |= __IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:    *)
(*DBG:        default:*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:    } else {*)
(*DBG:        switch (debug_vars[idx].type) {*)
(*DBG:        case WORD_ENUM:*)
(*DBG:            ((__IEC_WORD_t *) ptr)->flags &= ~__IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        case WORD_O_ENUM:*)
(*DBG:            ((__IEC_WORD_p *) ptr)->flags &= ~__IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        case SINT_ENUM:*)
(*DBG:            ((__IEC_SINT_t *) ptr)->flags &= ~__IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        case BOOL_ENUM:*)
(*DBG:            ((__IEC_BOOL_t *) ptr)->flags &= ~__IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        case BOOL_O_ENUM:*)
(*DBG:        case BOOL_P_ENUM:*)
(*DBG:            ((__IEC_BOOL_p *) ptr)->flags &= ~__IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        case TIME_ENUM:*)
(*DBG:            ((__IEC_TIME_t *) ptr)->flags &= ~__IEC_FORCE_FLAG;*)
(*DBG:            break;*)
(*DBG:        default:*)
(*DBG:            break;*)
(*DBG:        }*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)
(*DBG:void swap_bytes(void *ptr, size_t size)*)
(*DBG:{*)
(*DBG:    uint8_t *bytePtr = (uint8_t *)ptr;*)
(*DBG:    size_t i;*)
(*DBG:    for (i = 0; i < size / 2; ++i)*)
(*DBG:    {*)
(*DBG:        uint8_t temp = bytePtr[i];*)
(*DBG:        bytePtr[i] = bytePtr[size - 1 - i];*)
(*DBG:        bytePtr[size - 1 - i] = temp;*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)
(*DBG:void trace_reset(void)*)
(*DBG:{*)
(*DBG:    for (size_t i=0; i < VAR_COUNT; i++)*)
(*DBG:    {*)
(*DBG:        force_var(i, false, 0);*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)
(*DBG:void set_trace(size_t idx, bool forced, void *val)*)
(*DBG:{*)
(*DBG:    if (idx >= 0 && idx < VAR_COUNT)*)
(*DBG:    {*)
(*DBG:        if (endianness == REVERSE_ENDIANNESS)*)
(*DBG:        {*)
(*DBG:            // Prevent swapping for STRING type*)
(*DBG:            if (debug_vars[idx].type == STRING_ENUM)*)
(*DBG:            {*)
(*DBG:                // Do nothing*)
(*DBG:                ;*)
(*DBG:            }*)
(*DBG:            else*)
(*DBG:            {*)
(*DBG:                swap_bytes(val, get_var_size(idx));*)
(*DBG:            }*)
(*DBG:        }*)
(*DBG:*)
(*DBG:        force_var(idx, forced, val);*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)
(*DBG:void set_endianness(uint8_t value)*)
(*DBG:{*)
(*DBG:    if (value == SAME_ENDIANNESS || value == REVERSE_ENDIANNESS)*)
(*DBG:    {*)
(*DBG:        endianness = value;*)
(*DBG:    }*)
(*DBG:}*)
(*DBG:*)