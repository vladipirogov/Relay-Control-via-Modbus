void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->LOCALVAR,0,retain)
  __INIT_LOCATED(BOOL,__IX0_3,data__->IN_ON,retain)
  __INIT_LOCATED_VALUE(data__->IN_ON,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0,data__->OUT,retain)
  __INIT_LOCATED_VALUE(data__->OUT,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_4,data__->IN_OFF,retain)
  __INIT_LOCATED_VALUE(data__->IN_OFF,__BOOL_LITERAL(FALSE))
  R_TRIG_init__(&data__->R_TRIG1,retain);
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_LOCATED(data__->IN_ON,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_LOCATED(data__->,OUT,,(!(__GET_LOCATED(data__->IN_OFF,)) && (__GET_LOCATED(data__->OUT,) || __GET_VAR(data__->R_TRIG1.Q,))));

  goto __end;

__end:
  return;
} // MAIN_body__() 





