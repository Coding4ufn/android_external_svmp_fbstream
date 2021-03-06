/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */


#ifndef VP9_DECODER_VP9_DEQUANTIZE_H_
#define VP9_DECODER_VP9_DEQUANTIZE_H_

#include "vp9/common/vp9_blockd.h"


void vp9_dequant_idct_add_lossless_c(int16_t *input, const int16_t *dq,
                                     unsigned char *pred,
                                     unsigned char *output,
                                     int pitch, int stride, int eob);

void vp9_dequant_dc_idct_add_lossless_c(int16_t *input, const int16_t *dq,
                                        unsigned char *pred,
                                        unsigned char *output,
                                        int pitch, int stride, int dc);

void vp9_dequant_dc_idct_add_y_block_lossless_c(int16_t *q,
                                                const int16_t *dq,
                                                unsigned char *pre,
                                                unsigned char *dst,
                                                int stride,
                                                const int16_t *dc);

void vp9_dequant_idct_add_y_block_lossless_c(int16_t *q, const int16_t *dq,
                                             unsigned char *pre,
                                             unsigned char *dst,
                                             int stride,
                                             struct macroblockd *xd);

void vp9_dequant_idct_add_uv_block_lossless_c(int16_t *q, const int16_t *dq,
                                              unsigned char *pre,
                                              unsigned char *dst_u,
                                              unsigned char *dst_v,
                                              int stride,
                                              struct macroblockd *xd);

void vp9_ht_dequant_idct_add_c(TX_TYPE tx_type, int16_t *input, const int16_t *dq,
                                    unsigned char *pred, unsigned char *dest,
                                    int pitch, int stride, int eob);

void vp9_ht_dequant_idct_add_8x8_c(TX_TYPE tx_type, int16_t *input,
                                   const int16_t *dq, unsigned char *pred,
                                   unsigned char *dest, int pitch, int stride,
                                   int eob);

void vp9_ht_dequant_idct_add_16x16_c(TX_TYPE tx_type, int16_t *input,
                                     const int16_t *dq, unsigned char *pred,
                                     unsigned char *dest,
                                     int pitch, int stride, int eob);

void vp9_dequant_dc_idct_add_y_block_8x8_inplace_c(int16_t *q, const int16_t *dq,
                                                   unsigned char *dst,
                                                   int stride,
                                                   const int16_t *dc,
                                                   MACROBLOCKD *xd);

void vp9_dequant_idct_add_y_block_8x8_inplace_c(int16_t *q, const int16_t *dq,
                                                unsigned char *dst,
                                                int stride,
                                                MACROBLOCKD *xd);

void vp9_dequant_dc_idct_add_y_block_4x4_inplace_c(int16_t *q, const int16_t *dq,
                                                   unsigned char *dst,
                                                   int stride,
                                                   const int16_t *dc,
                                                   MACROBLOCKD *xd);

void vp9_dequant_idct_add_y_block_4x4_inplace_c(int16_t *q, const int16_t *dq,
                                                unsigned char *dst,
                                                int stride,
                                                MACROBLOCKD *xd);

void vp9_dequant_idct_add_uv_block_8x8_inplace_c(int16_t *q, const int16_t *dq,
                                                 unsigned char *dstu,
                                                 unsigned char *dstv,
                                                 int stride,
                                                 MACROBLOCKD *xd);

void vp9_dequant_idct_add_uv_block_4x4_inplace_c(int16_t *q, const int16_t *dq,
                                                 unsigned char *dstu,
                                                 unsigned char *dstv,
                                                 int stride,
                                                 MACROBLOCKD *xd);

#endif  // VP9_DECODER_VP9_DEQUANTIZE_H_
