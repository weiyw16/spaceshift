/*
 * fd4t10s-damp-zjh.h
 *
 *  Created on: Mar 4, 2016
 *      Author: rice
 */

#ifndef SRC_MDLIB_FD4T10S_DAMP_ZJH_H_
#define SRC_MDLIB_FD4T10S_DAMP_ZJH_H_

void fd4t10s_damp_zjh_2d_vtrans(float *prev_wave, const float *curr_wave, const float *vel, float *u2, int nx, int nz, int nb, int freeSurface);
void fd4t10s_damp_zjh_2d_vtrans_test(float *prev_wave, const float *curr_wave, const float *vel, float *u2, int nx, int nz, int nb, int freeSurface);

#endif /* SRC_MDLIB_FD4T10S_DAMP_ZJH_H_ */