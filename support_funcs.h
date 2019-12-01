#include "cuda.h"
#include "engine.h"
#define powf pow


__global__ void Onetime_init( Argument_Pointers *arg, Constant_Coeffs* coeffs);

__global__ void update_h_moi(Argument_Pointers* arg);

__global__ void Reset_states_horizontal(Argument_Pointers* arg, Constant_Coeffs* coeffs);


__global__ void Reset_states_vertical(Argument_Pointers* arg, Constant_Coeffs* coeffs);
