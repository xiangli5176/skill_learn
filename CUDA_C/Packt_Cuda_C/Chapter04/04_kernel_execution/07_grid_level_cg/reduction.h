#ifndef _REDUCTION_H_
#define _REDUCTION_H_

// @reduction_loop_kernel.cu
int reduction_grid_sync(float *g_outPtr, float *g_inPtr, int size, int n_threads);

#endif // _REDUCTION_H_