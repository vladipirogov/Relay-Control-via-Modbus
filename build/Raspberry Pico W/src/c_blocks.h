#ifndef C_BLOCKS_H
#define C_BLOCKS_H

//definition of external blocks - CAN_INTERFACE
typedef struct {
  IEC_INT *ID_FILTER;
  IEC_INT *ID_STATE;
  IEC_INT *STATE_PERIOD;
  IEC_INT *INPUT_ADDRESS;
  IEC_INT *NUM_OF_INPUT;
  IEC_INT *OUTPUT_ADDRESS;
  IEC_INT *NUM_OF_OUTPUT;
  IEC_BOOL *ERR;
} CAN_INTERFACE_VARS;
void can_interface_setup(CAN_INTERFACE_VARS *vars);
void can_interface_loop(CAN_INTERFACE_VARS *vars);

#endif // C_BLOCKS_H
