
// Copyright (C) 2020-2021 Advanced Micro Devices, Inc. All rights reserved.

// Script-generated file -- do not edit

// rocBLAS internal API may change each release. The rocBLAS team strongly advises against its use.

#pragma once

#include "rocblas/internal/rocblas-types.h"


template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_axpy_template(rocblas_handle handle,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   rocblas_stride stride_alpha,
                                   const T*       x,
                                   rocblas_stride offset_x,
                                   rocblas_int    incx,
                                   rocblas_stride stride_x,
                                   T*             y,
                                   rocblas_stride offset_y,
                                   rocblas_int    incy,
                                   rocblas_stride stride_y,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_axpy_batched_template(rocblas_handle  handle,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           rocblas_stride  stride_alpha,
                                           const T* const* x,
                                           rocblas_stride  offset_x,
                                           rocblas_int     incx,
                                           rocblas_stride  stride_x,
                                           T* const*       y,
                                           rocblas_stride  offset_y,
                                           rocblas_int     incy,
                                           rocblas_stride  stride_y,
                                           rocblas_int     batch_count);

template <typename API_INT, int NB, typename Tex, typename Ta, typename Tx, typename Ty>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_axpy_launcher(rocblas_handle handle,
                                   API_INT        n,
                                   Ta             alpha,
                                   rocblas_stride stride_alpha,
                                   Tx             x,
                                   rocblas_stride offset_x,
                                   API_INT        incx,
                                   rocblas_stride stride_x,
                                   Ty             y,
                                   rocblas_stride offset_y,
                                   API_INT        incy,
                                   rocblas_stride stride_y,
                                   API_INT        batch_count);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dot_template(rocblas_handle __restrict__ handle,
                                  rocblas_int n,
                                  const T* __restrict__ x,
                                  rocblas_stride offsetx,
                                  rocblas_int    incx,
                                  rocblas_stride stridex,
                                  const T* __restrict__ y,
                                  rocblas_stride offsety,
                                  rocblas_int    incy,
                                  rocblas_stride stridey,
                                  rocblas_int    batch_count,
                                  T* __restrict__ results,
                                  Tex* __restrict__ workspace);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dotc_template(rocblas_handle __restrict__ handle,
                                   rocblas_int n,
                                   const T* __restrict__ x,
                                   rocblas_stride offsetx,
                                   rocblas_int    incx,
                                   rocblas_stride stridex,
                                   const T* __restrict__ y,
                                   rocblas_stride offsety,
                                   rocblas_int    incy,
                                   rocblas_stride stridey,
                                   rocblas_int    batch_count,
                                   T* __restrict__ results,
                                   Tex* __restrict__ workspace);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dot_batched_template(rocblas_handle __restrict__ handle,
                                          rocblas_int n,
                                          const T* const* __restrict__ x,
                                          rocblas_stride offsetx,
                                          rocblas_int    incx,
                                          rocblas_stride stridex,
                                          const T* const* __restrict__ y,
                                          rocblas_stride offsety,
                                          rocblas_int    incy,
                                          rocblas_stride stridey,
                                          rocblas_int    batch_count,
                                          T* __restrict__ results,
                                          Tex* __restrict__ workspace);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dotc_batched_template(rocblas_handle __restrict__ handle,
                                           rocblas_int n,
                                           const T* const* __restrict__ x,
                                           rocblas_stride offsetx,
                                           rocblas_int    incx,
                                           rocblas_stride stridex,
                                           const T* const* __restrict__ y,
                                           rocblas_stride offsety,
                                           rocblas_int    incy,
                                           rocblas_stride stridey,
                                           rocblas_int    batch_count,
                                           T* __restrict__ results,
                                           Tex* __restrict__ workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamax_template(rocblas_handle            handle,
                                    rocblas_int               n,
                                    const T*                  x,
                                    rocblas_stride            shiftx,
                                    rocblas_int               incx,
                                    rocblas_stride            stridex,
                                    rocblas_int               batch_count,
                                    rocblas_int*              result,
                                    rocblas_index_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamax_batched_template(rocblas_handle            handle,
                                            rocblas_int               n,
                                            const T* const*           x,
                                            rocblas_stride            shiftx,
                                            rocblas_int               incx,
                                            rocblas_stride            stridex,
                                            rocblas_int               batch_count,
                                            rocblas_int*              result,
                                            rocblas_index_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamin_template(rocblas_handle            handle,
                                    rocblas_int               n,
                                    const T*                  x,
                                    rocblas_stride            shiftx,
                                    rocblas_int               incx,
                                    rocblas_stride            stridex,
                                    rocblas_int               batch_count,
                                    rocblas_int*              result,
                                    rocblas_index_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamin_batched_template(rocblas_handle            handle,
                                            rocblas_int               n,
                                            const T* const*           x,
                                            rocblas_stride            shiftx,
                                            rocblas_int               incx,
                                            rocblas_stride            stridex,
                                            rocblas_int               batch_count,
                                            rocblas_int*              result,
                                            rocblas_index_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamax_template_64(rocblas_handle               handle,
                                       int64_t                      n,
                                       const T*                     x,
                                       rocblas_stride               shiftx,
                                       int64_t                      incx,
                                       rocblas_stride               stridex,
                                       int64_t                      batch_count,
                                       int64_t*                     result,
                                       rocblas_index_64_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamax_batched_template_64(rocblas_handle               handle,
                                               int64_t                      n,
                                               const T* const*              x,
                                               rocblas_stride               shiftx,
                                               int64_t                      incx,
                                               rocblas_stride               stridex,
                                               int64_t                      batch_count,
                                               int64_t*                     result,
                                               rocblas_index_64_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamin_template_64(rocblas_handle               handle,
                                       int64_t                      n,
                                       const T*                     x,
                                       rocblas_stride               shiftx,
                                       int64_t                      incx,
                                       rocblas_stride               stridex,
                                       int64_t                      batch_count,
                                       int64_t*                     result,
                                       rocblas_index_64_value_t<S>* workspace);

template <typename T, typename S>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_iamin_batched_template_64(rocblas_handle               handle,
                                               int64_t                      n,
                                               const T* const*              x,
                                               rocblas_stride               shiftx,
                                               int64_t                      incx,
                                               rocblas_stride               stridex,
                                               int64_t                      batch_count,
                                               int64_t*                     result,
                                               rocblas_index_64_value_t<S>* workspace);

template <typename T, typename Ta>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_scal_template(rocblas_handle handle,
                                   rocblas_int    n,
                                   const Ta*      alpha,
                                   rocblas_stride stride_alpha,
                                   T*             x,
                                   rocblas_stride offset_x,
                                   rocblas_int    incx,
                                   rocblas_stride stride_x,
                                   rocblas_int    batch_count);

template <typename T, typename Ta>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_scal_batched_template(rocblas_handle handle,
                                           rocblas_int    n,
                                           const Ta*      alpha,
                                           rocblas_stride stride_alpha,
                                           T* const*      x,
                                           rocblas_stride offset_x,
                                           rocblas_int    incx,
                                           rocblas_stride stride_x,
                                           rocblas_int    batch_count);

template <typename API_INT, int NB, typename T, typename Tex, typename Ta, typename Tx>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_scal_launcher(rocblas_handle handle,
                                   API_INT        n,
                                   const Ta*      alpha,
                                   rocblas_stride stride_alpha,
                                   Tx             x,
                                   rocblas_stride offset_x,
                                   API_INT        incx,
                                   rocblas_stride stride_x,
                                   API_INT        batch_count);

template <typename To>
ROCBLAS_INTERNAL_DEPRECATION size_t rocblas_internal_gemv_kernel_workspace_size(
    rocblas_operation transA, rocblas_int m, rocblas_int n, rocblas_int batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemv_template(rocblas_handle    handle,
                                   rocblas_operation transA,
                                   rocblas_int       m,
                                   rocblas_int       n,
                                   const T*          alpha,
                                   rocblas_stride    stride_alpha,
                                   const T*          A,
                                   rocblas_stride    offseta,
                                   rocblas_int       lda,
                                   rocblas_stride    strideA,
                                   const T*          x,
                                   rocblas_stride    offsetx,
                                   rocblas_int       incx,
                                   rocblas_stride    stridex,
                                   const T*          beta,
                                   rocblas_stride    stride_beta,
                                   T*                y,
                                   rocblas_stride    offsety,
                                   rocblas_int       incy,
                                   rocblas_stride    stridey,
                                   rocblas_int       batch_count,
                                   T*                workspace = nullptr);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemv_batched_template(rocblas_handle    handle,
                                           rocblas_operation transA,
                                           rocblas_int       m,
                                           rocblas_int       n,
                                           const T*          alpha,
                                           rocblas_stride    stride_alpha,
                                           const T* const*   A,
                                           rocblas_stride    offseta,
                                           rocblas_int       lda,
                                           rocblas_stride    strideA,
                                           const T* const*   x,
                                           rocblas_stride    offsetx,
                                           rocblas_int       incx,
                                           rocblas_stride    stridex,
                                           const T*          beta,
                                           rocblas_stride    stride_beta,
                                           T* const*         y,
                                           rocblas_stride    offsety,
                                           rocblas_int       incy,
                                           rocblas_stride    stridey,
                                           rocblas_int       batch_count,
                                           T*                workspace = nullptr);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_ger_template(rocblas_handle handle,
                                  rocblas_int    m,
                                  rocblas_int    n,
                                  const T*       alpha,
                                  rocblas_stride stride_alpha,
                                  const T*       x,
                                  rocblas_stride offsetx,
                                  rocblas_int    incx,
                                  rocblas_stride stridex,
                                  const T*       y,
                                  rocblas_stride offsety,
                                  rocblas_int    incy,
                                  rocblas_stride stridey,
                                  T*             A,
                                  rocblas_stride offsetA,
                                  rocblas_int    lda,
                                  rocblas_stride strideA,
                                  rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gerc_template(rocblas_handle handle,
                                   rocblas_int    m,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   rocblas_stride stride_alpha,
                                   const T*       x,
                                   rocblas_stride offsetx,
                                   rocblas_int    incx,
                                   rocblas_stride stridex,
                                   const T*       y,
                                   rocblas_stride offsety,
                                   rocblas_int    incy,
                                   rocblas_stride stridey,
                                   T*             A,
                                   rocblas_stride offsetA,
                                   rocblas_int    lda,
                                   rocblas_stride strideA,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_ger_batched_template(rocblas_handle  handle,
                                          rocblas_int     m,
                                          rocblas_int     n,
                                          const T*        alpha,
                                          rocblas_stride  stride_alpha,
                                          const T* const* x,
                                          rocblas_stride  offsetx,
                                          rocblas_int     incx,
                                          rocblas_stride  stridex,
                                          const T* const* y,
                                          rocblas_stride  offsety,
                                          rocblas_int     incy,
                                          rocblas_stride  stridey,
                                          T* const*       A,
                                          rocblas_stride  offsetA,
                                          rocblas_int     lda,
                                          rocblas_stride  strideA,
                                          rocblas_int     batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gerc_batched_template(rocblas_handle  handle,
                                           rocblas_int     m,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           rocblas_stride  stride_alpha,
                                           const T* const* x,
                                           rocblas_stride  offsetx,
                                           rocblas_int     incx,
                                           rocblas_stride  stridex,
                                           const T* const* y,
                                           rocblas_stride  offsety,
                                           rocblas_int     incy,
                                           rocblas_stride  stridey,
                                           T* const*       A,
                                           rocblas_stride  offsetA,
                                           rocblas_int     lda,
                                           rocblas_stride  strideA,
                                           rocblas_int     batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_ger_template(rocblas_handle handle,
                                  rocblas_int    m,
                                  rocblas_int    n,
                                  const T*       alpha,
                                  rocblas_stride stride_alpha,
                                  const T*       x,
                                  rocblas_stride offsetx,
                                  rocblas_int    incx,
                                  rocblas_stride stridex,
                                  const T*       y,
                                  rocblas_stride offsety,
                                  rocblas_int    incy,
                                  rocblas_stride stridey,
                                  T*             A,
                                  rocblas_stride offsetA,
                                  rocblas_int    lda,
                                  rocblas_stride strideA,
                                  rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gerc_template(rocblas_handle handle,
                                   rocblas_int    m,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   rocblas_stride stride_alpha,
                                   const T*       x,
                                   rocblas_stride offsetx,
                                   rocblas_int    incx,
                                   rocblas_stride stridex,
                                   const T*       y,
                                   rocblas_stride offsety,
                                   rocblas_int    incy,
                                   rocblas_stride stridey,
                                   T*             A,
                                   rocblas_stride offsetA,
                                   rocblas_int    lda,
                                   rocblas_stride strideA,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_ger_batched_template(rocblas_handle  handle,
                                          rocblas_int     m,
                                          rocblas_int     n,
                                          const T*        alpha,
                                          rocblas_stride  stride_alpha,
                                          const T* const* x,
                                          rocblas_stride  offsetx,
                                          rocblas_int     incx,
                                          rocblas_stride  stridex,
                                          const T* const* y,
                                          rocblas_stride  offsety,
                                          rocblas_int     incy,
                                          rocblas_stride  stridey,
                                          T* const*       A,
                                          rocblas_stride  offsetA,
                                          rocblas_int     lda,
                                          rocblas_stride  strideA,
                                          rocblas_int     batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gerc_batched_template(rocblas_handle  handle,
                                           rocblas_int     m,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           rocblas_stride  stride_alpha,
                                           const T* const* x,
                                           rocblas_stride  offsetx,
                                           rocblas_int     incx,
                                           rocblas_stride  stridex,
                                           const T* const* y,
                                           rocblas_stride  offsety,
                                           rocblas_int     incy,
                                           rocblas_stride  stridey,
                                           T* const*       A,
                                           rocblas_stride  offsetA,
                                           rocblas_int     lda,
                                           rocblas_stride  strideA,
                                           rocblas_int     batch_count);

template <typename To>
ROCBLAS_INTERNAL_DEPRECATION size_t
    rocblas_internal_hemv_symv_kernel_workspace_size(rocblas_int n, rocblas_int batch_count = 1);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_symv_template(rocblas_handle handle,
                                   rocblas_fill   uplo,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   rocblas_stride stride_alpha,
                                   const T*       A,
                                   rocblas_stride offseta,
                                   rocblas_int    lda,
                                   rocblas_stride strideA,
                                   const T*       x,
                                   rocblas_stride offsetx,
                                   rocblas_int    incx,
                                   rocblas_stride stridex,
                                   const T*       beta,
                                   rocblas_stride stride_beta,
                                   T*             y,
                                   rocblas_stride offsety,
                                   rocblas_int    incy,
                                   rocblas_stride stridey,
                                   rocblas_int    batch_count,
                                   T*             workspace);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_symv_batched_template(rocblas_handle  handle,
                                           rocblas_fill    uplo,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           rocblas_stride  stride_alpha,
                                           const T* const* A,
                                           rocblas_stride  offseta,
                                           rocblas_int     lda,
                                           rocblas_stride  strideA,
                                           const T* const* x,
                                           rocblas_stride  offsetx,
                                           rocblas_int     incx,
                                           rocblas_stride  stridex,
                                           const T*        beta,
                                           rocblas_stride  stride_beta,
                                           T* const*       y,
                                           rocblas_stride  offsety,
                                           rocblas_int     incy,
                                           rocblas_stride  stridey,
                                           rocblas_int     batch_count,
                                           T*              workspace);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_hemv_template(rocblas_handle handle,
                                   rocblas_fill   uplo,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   rocblas_stride stride_alpha,
                                   const T*       A,
                                   rocblas_stride offseta,
                                   rocblas_int    lda,
                                   rocblas_stride strideA,
                                   const T*       x,
                                   rocblas_stride offsetx,
                                   rocblas_int    incx,
                                   rocblas_stride stridex,
                                   const T*       beta,
                                   rocblas_stride stride_beta,
                                   T*             y,
                                   rocblas_stride offsety,
                                   rocblas_int    incy,
                                   rocblas_stride stridey,
                                   rocblas_int    batch_count,
                                   T*             workspace);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_hemv_batched_template(rocblas_handle  handle,
                                           rocblas_fill    uplo,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           rocblas_stride  stride_alpha,
                                           const T* const* A,
                                           rocblas_stride  offseta,
                                           rocblas_int     lda,
                                           rocblas_stride  strideA,
                                           const T* const* x,
                                           rocblas_stride  offsetx,
                                           rocblas_int     incx,
                                           rocblas_stride  stridex,
                                           const T*        beta,
                                           rocblas_stride  stride_beta,
                                           T* const*       y,
                                           rocblas_stride  offsety,
                                           rocblas_int     incy,
                                           rocblas_stride  stridey,
                                           rocblas_int     batch_count,
                                           T*              workspace);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2_template(rocblas_handle handle,
                                   rocblas_fill   uplo,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   const T*       x,
                                   rocblas_stride offset_x,
                                   rocblas_int    incx,
                                   rocblas_stride stride_x,
                                   const T*       y,
                                   rocblas_stride offset_y,
                                   rocblas_int    incy,
                                   rocblas_stride stride_y,
                                   T*             A,
                                   rocblas_int    lda,
                                   rocblas_stride offset_A,
                                   rocblas_stride stride_A,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2_batched_template(rocblas_handle  handle,
                                           rocblas_fill    uplo,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           const T* const* x,
                                           rocblas_stride  offset_x,
                                           rocblas_int     incx,
                                           rocblas_stride  stride_x,
                                           const T* const* y,
                                           rocblas_stride  offset_y,
                                           rocblas_int     incy,
                                           rocblas_stride  stride_y,
                                           T* const*       A,
                                           rocblas_int     lda,
                                           rocblas_stride  offset_A,
                                           rocblas_stride  stride_A,
                                           rocblas_int     batch_count);

template <typename T, typename U, typename V, typename W>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr_template(rocblas_handle handle,
                                  rocblas_fill   uplo,
                                  rocblas_int    n,
                                  U              alpha,
                                  rocblas_stride stride_alpha,
                                  V              x,
                                  rocblas_stride offset_x,
                                  int64_t        incx,
                                  rocblas_stride stride_x,
                                  W              A,
                                  rocblas_stride offset_A,
                                  int64_t        lda,
                                  rocblas_stride stride_A,
                                  rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2_template(rocblas_handle handle,
                                   rocblas_fill   uplo,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   const T*       x,
                                   rocblas_stride offset_x,
                                   rocblas_int    incx,
                                   rocblas_stride stride_x,
                                   const T*       y,
                                   rocblas_stride offset_y,
                                   rocblas_int    incy,
                                   rocblas_stride stride_y,
                                   T*             A,
                                   rocblas_int    lda,
                                   rocblas_stride offset_A,
                                   rocblas_stride stride_A,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2_batched_template(rocblas_handle  handle,
                                           rocblas_fill    uplo,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           const T* const* x,
                                           rocblas_stride  offset_x,
                                           rocblas_int     incx,
                                           rocblas_stride  stride_x,
                                           const T* const* y,
                                           rocblas_stride  offset_y,
                                           rocblas_int     incy,
                                           rocblas_stride  stride_y,
                                           T* const*       A,
                                           rocblas_int     lda,
                                           rocblas_stride  offset_A,
                                           rocblas_stride  stride_A,
                                           rocblas_int     batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmv_template(rocblas_handle    handle,
                                   rocblas_fill      uplo,
                                   rocblas_operation transA,
                                   rocblas_diagonal  diag,
                                   rocblas_int       n,
                                   const T*          A,
                                   rocblas_stride    offset_A,
                                   rocblas_int       lda,
                                   rocblas_stride    stride_A,
                                   T*                x,
                                   rocblas_stride    offset_x,
                                   rocblas_int       incx,
                                   rocblas_stride    stride_x,
                                   T*                workspace,
                                   rocblas_stride    stride_w,
                                   rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmv_batched_template(rocblas_handle    handle,
                                           rocblas_fill      uplo,
                                           rocblas_operation transA,
                                           rocblas_diagonal  diag,
                                           rocblas_int       n,
                                           const T* const*   A,
                                           rocblas_stride    offset_A,
                                           rocblas_int       lda,
                                           rocblas_stride    stride_A,
                                           T* const*         x,
                                           rocblas_stride    offset_x,
                                           rocblas_int       incx,
                                           rocblas_stride    stride_x,
                                           T*                workspace,
                                           rocblas_stride    stride_w,
                                           rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsv_template(rocblas_handle    handle,
                                   rocblas_fill      uplo,
                                   rocblas_operation transA,
                                   rocblas_diagonal  diag,
                                   rocblas_int       n,
                                   const T*          dA,
                                   rocblas_stride    offset_A,
                                   rocblas_int       lda,
                                   rocblas_stride    stride_A,
                                   T*                dx,
                                   rocblas_stride    offset_x,
                                   rocblas_int       incx,
                                   rocblas_stride    stride_x,
                                   rocblas_int       batch_count,
                                   rocblas_int*      w_completed_sec);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsv_batched_template(rocblas_handle    handle,
                                           rocblas_fill      uplo,
                                           rocblas_operation transA,
                                           rocblas_diagonal  diag,
                                           rocblas_int       n,
                                           const T* const*   dA,
                                           rocblas_stride    offset_A,
                                           rocblas_int       lda,
                                           rocblas_stride    stride_A,
                                           T* const*         dx,
                                           rocblas_stride    offset_x,
                                           rocblas_int       incx,
                                           rocblas_stride    stride_x,
                                           rocblas_int       batch_count,
                                           rocblas_int*      w_completed_sec);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemm_template(rocblas_handle    handle,
                                   rocblas_operation trans_a,
                                   rocblas_operation trans_b,
                                   rocblas_int       m,
                                   rocblas_int       n,
                                   rocblas_int       k,
                                   const T*          alpha,
                                   const T*          A,
                                   rocblas_stride    offset_a,
                                   rocblas_int       lda,
                                   rocblas_stride    stride_a,
                                   const T*          B,
                                   rocblas_stride    offset_b,
                                   rocblas_int       ldb,
                                   rocblas_stride    stride_b,
                                   const T*          beta,
                                   T*                C,
                                   rocblas_stride    offset_c,
                                   rocblas_int       ldc,
                                   rocblas_stride    stride_c,
                                   rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemm_batched_template(rocblas_handle    handle,
                                           rocblas_operation trans_a,
                                           rocblas_operation trans_b,
                                           rocblas_int       m,
                                           rocblas_int       n,
                                           rocblas_int       k,
                                           const T*          alpha,
                                           const T* const*   A,
                                           rocblas_stride    offset_a,
                                           rocblas_int       lda,
                                           rocblas_stride    stride_a,
                                           const T* const*   B,
                                           rocblas_stride    offset_b,
                                           rocblas_int       ldb,
                                           rocblas_stride    stride_b,
                                           const T*          beta,
                                           T* const*         C,
                                           rocblas_stride    offset_c,
                                           rocblas_int       ldc,
                                           rocblas_stride    stride_c,
                                           rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_symm_template(rocblas_handle handle,
                                   rocblas_side   side,
                                   rocblas_fill   uplo,
                                   rocblas_int    m,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   const T*       A,
                                   rocblas_stride offsetA,
                                   rocblas_int    lda,
                                   rocblas_stride strideA,
                                   const T*       B,
                                   rocblas_stride offsetB,
                                   rocblas_int    ldb,
                                   rocblas_stride strideB,
                                   const T*       beta,
                                   T*             C,
                                   rocblas_stride offsetC,
                                   rocblas_int    ldc,
                                   rocblas_stride strideC,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_symm_batched_template(rocblas_handle  handle,
                                           rocblas_side    side,
                                           rocblas_fill    uplo,
                                           rocblas_int     m,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           const T* const* A,
                                           rocblas_stride  offsetA,
                                           rocblas_int     lda,
                                           rocblas_stride  strideA,
                                           const T* const* B,
                                           rocblas_stride  offsetB,
                                           rocblas_int     ldb,
                                           rocblas_stride  strideB,
                                           const T*        beta,
                                           T* const*       C,
                                           rocblas_stride  offsetC,
                                           rocblas_int     ldc,
                                           rocblas_stride  strideC,
                                           rocblas_int     batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_hemm_template(rocblas_handle handle,
                                   rocblas_side   side,
                                   rocblas_fill   uplo,
                                   rocblas_int    m,
                                   rocblas_int    n,
                                   const T*       alpha,
                                   const T*       A,
                                   rocblas_stride offsetA,
                                   rocblas_int    lda,
                                   rocblas_stride strideA,
                                   const T*       B,
                                   rocblas_stride offsetB,
                                   rocblas_int    ldb,
                                   rocblas_stride strideB,
                                   const T*       beta,
                                   T*             C,
                                   rocblas_stride offsetC,
                                   rocblas_int    ldc,
                                   rocblas_stride strideC,
                                   rocblas_int    batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_hemm_batched_template(rocblas_handle  handle,
                                           rocblas_side    side,
                                           rocblas_fill    uplo,
                                           rocblas_int     m,
                                           rocblas_int     n,
                                           const T*        alpha,
                                           const T* const* A,
                                           rocblas_stride  offsetA,
                                           rocblas_int     lda,
                                           rocblas_stride  strideA,
                                           const T* const* B,
                                           rocblas_stride  offsetB,
                                           rocblas_int     ldb,
                                           rocblas_stride  strideB,
                                           const T*        beta,
                                           T* const*       C,
                                           rocblas_stride  offsetC,
                                           rocblas_int     ldc,
                                           rocblas_stride  strideC,
                                           rocblas_int     batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2k_template(rocblas_handle    handle,
                                    rocblas_fill      uplo,
                                    rocblas_operation trans,
                                    rocblas_int       n,
                                    rocblas_int       k,
                                    const T*          alpha,
                                    const T*          dA_in,
                                    rocblas_stride    offset_a,
                                    rocblas_int       lda,
                                    rocblas_stride    stride_a,
                                    const T*          dB_in,
                                    rocblas_stride    offset_b,
                                    rocblas_int       ldb,
                                    rocblas_stride    stride_b,
                                    const T*          beta,
                                    T*                dC_in,
                                    rocblas_stride    offset_c,
                                    rocblas_int       ldc,
                                    rocblas_stride    stride_c,
                                    rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2k_batched_template(rocblas_handle    handle,
                                            rocblas_fill      uplo,
                                            rocblas_operation trans,
                                            rocblas_int       n,
                                            rocblas_int       k,
                                            const T*          alpha,
                                            const T* const*   dA_in,
                                            rocblas_stride    offset_a,
                                            rocblas_int       lda,
                                            rocblas_stride    stride_a,
                                            const T* const*   dB_in,
                                            rocblas_stride    offset_b,
                                            rocblas_int       ldb,
                                            rocblas_stride    stride_b,
                                            const T*          beta,
                                            T* const*         dC_in,
                                            rocblas_stride    offset_c,
                                            rocblas_int       ldc,
                                            rocblas_stride    stride_c,
                                            rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2k_template_64(rocblas_handle    handle,
                                       rocblas_fill      uplo,
                                       rocblas_operation trans,
                                       int64_t           n_64,
                                       int64_t           k_64,
                                       const T*          alpha,
                                       const T*          A,
                                       rocblas_stride    offset_A,
                                       int64_t           lda_64,
                                       rocblas_stride    stride_A,
                                       const T*          B,
                                       rocblas_stride    offset_B,
                                       int64_t           ldb_64,
                                       rocblas_stride    stride_B,
                                       const T*          beta,
                                       T*                C,
                                       rocblas_stride    offset_C,
                                       int64_t           ldc_64,
                                       rocblas_stride    stride_C,
                                       int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2k_batched_template_64(rocblas_handle    handle,
                                               rocblas_fill      uplo,
                                               rocblas_operation trans,
                                               int64_t           n_64,
                                               int64_t           k_64,
                                               const T*          alpha,
                                               const T* const*   A,
                                               rocblas_stride    offset_A,
                                               int64_t           lda_64,
                                               rocblas_stride    stride_A,
                                               const T* const*   B,
                                               rocblas_stride    offset_B,
                                               int64_t           ldb_64,
                                               rocblas_stride    stride_B,
                                               const T*          beta,
                                               T* const*         C,
                                               rocblas_stride    offset_C,
                                               int64_t           ldc_64,
                                               rocblas_stride    stride_C,
                                               int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2k_template(rocblas_handle    handle,
                                    rocblas_fill      uplo,
                                    rocblas_operation trans,
                                    rocblas_int       n,
                                    rocblas_int       k,
                                    const T*          alpha,
                                    const T*          dA_in,
                                    rocblas_stride    offset_a,
                                    rocblas_int       lda,
                                    rocblas_stride    stride_a,
                                    const T*          dB_in,
                                    rocblas_stride    offset_b,
                                    rocblas_int       ldb,
                                    rocblas_stride    stride_b,
                                    const real_t<T>*  beta,
                                    T*                dC_in,
                                    rocblas_stride    offset_c,
                                    rocblas_int       ldc,
                                    rocblas_stride    stride_c,
                                    rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2k_batched_template(rocblas_handle    handle,
                                            rocblas_fill      uplo,
                                            rocblas_operation trans,
                                            rocblas_int       n,
                                            rocblas_int       k,
                                            const T*          alpha,
                                            const T* const*   dA_in,
                                            rocblas_stride    offset_a,
                                            rocblas_int       lda,
                                            rocblas_stride    stride_a,
                                            const T* const*   dB_in,
                                            rocblas_stride    offset_b,
                                            rocblas_int       ldb,
                                            rocblas_stride    stride_b,
                                            const real_t<T>*  beta,
                                            T* const*         dC_in,
                                            rocblas_stride    offset_c,
                                            rocblas_int       ldc,
                                            rocblas_stride    stride_c,
                                            rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2k_template_64(rocblas_handle    handle,
                                       rocblas_fill      uplo,
                                       rocblas_operation trans,
                                       int64_t           n_64,
                                       int64_t           k_64,
                                       const T*          alpha,
                                       const T*          A,
                                       rocblas_stride    offset_A,
                                       int64_t           lda_64,
                                       rocblas_stride    stride_A,
                                       const T*          B,
                                       rocblas_stride    offset_b,
                                       int64_t           ldb_64,
                                       rocblas_stride    stride_B,
                                       const real_t<T>*  beta,
                                       T*                C,
                                       rocblas_stride    offset_c,
                                       int64_t           ldc_64,
                                       rocblas_stride    stride_C,
                                       int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2k_batched_template_64(rocblas_handle    handle,
                                               rocblas_fill      uplo,
                                               rocblas_operation trans,
                                               int64_t           n_64,
                                               int64_t           k_64,
                                               const T*          alpha,
                                               const T* const*   A,
                                               rocblas_stride    offset_A,
                                               int64_t           lda_64,
                                               rocblas_stride    stride_A,
                                               const T* const*   B,
                                               rocblas_stride    offset_b,
                                               int64_t           ldb_64,
                                               rocblas_stride    stride_B,
                                               const real_t<T>*  beta,
                                               T* const*         C,
                                               rocblas_stride    offset_c,
                                               int64_t           ldc_64,
                                               rocblas_stride    stride_C,
                                               int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrk_template(rocblas_handle    handle,
                                   rocblas_fill      uplo,
                                   rocblas_operation transA,
                                   rocblas_int       n,
                                   rocblas_int       k,
                                   const T*          alpha,
                                   const T*          A,
                                   rocblas_stride    offsetA,
                                   rocblas_int       lda,
                                   rocblas_stride    strideA,
                                   const T*          beta,
                                   T*                C,
                                   rocblas_stride    offsetC,
                                   rocblas_int       ldc,
                                   rocblas_stride    strideC,
                                   rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrk_batched_template(rocblas_handle    handle,
                                           rocblas_fill      uplo,
                                           rocblas_operation transA,
                                           rocblas_int       n,
                                           rocblas_int       k,
                                           const T*          alpha,
                                           const T* const*   A,
                                           rocblas_stride    offsetA,
                                           rocblas_int       lda,
                                           rocblas_stride    strideA,
                                           const T*          beta,
                                           T* const*         C,
                                           rocblas_stride    offsetC,
                                           rocblas_int       ldc,
                                           rocblas_stride    strideC,
                                           rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herk_template(rocblas_handle    handle,
                                   rocblas_fill      uplo,
                                   rocblas_operation transA,
                                   rocblas_int       n,
                                   rocblas_int       k,
                                   const real_t<T>*  alpha,
                                   const T*          A,
                                   rocblas_stride    offsetA,
                                   rocblas_int       lda,
                                   rocblas_stride    strideA,
                                   const real_t<T>*  beta,
                                   T*                C,
                                   rocblas_stride    offsetC,
                                   rocblas_int       ldc,
                                   rocblas_stride    strideC,
                                   rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herk_batched_template(rocblas_handle    handle,
                                           rocblas_fill      uplo,
                                           rocblas_operation transA,
                                           rocblas_int       n,
                                           rocblas_int       k,
                                           const real_t<T>*  alpha,
                                           const T* const*   A,
                                           rocblas_stride    offsetA,
                                           rocblas_int       lda,
                                           rocblas_stride    strideA,
                                           const real_t<T>*  beta,
                                           T* const*         C,
                                           rocblas_stride    offsetC,
                                           rocblas_int       ldc,
                                           rocblas_stride    strideC,
                                           rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrkx_template(rocblas_handle    handle,
                                    rocblas_fill      uplo,
                                    rocblas_operation trans,
                                    rocblas_int       n,
                                    rocblas_int       k,
                                    const T*          alpha,
                                    const T*          A,
                                    rocblas_stride    offset_a,
                                    rocblas_int       lda,
                                    rocblas_stride    stride_a,
                                    const T*          B,
                                    rocblas_stride    offset_b,
                                    rocblas_int       ldb,
                                    rocblas_stride    stride_b,
                                    const T*          beta,
                                    T*                C,
                                    rocblas_stride    offset_c,
                                    rocblas_int       ldc,
                                    rocblas_stride    stride_c,
                                    rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrkx_batched_template(rocblas_handle    handle,
                                            rocblas_fill      uplo,
                                            rocblas_operation trans,
                                            rocblas_int       n,
                                            rocblas_int       k,
                                            const T*          alpha,
                                            const T* const*   A,
                                            rocblas_stride    offset_a,
                                            rocblas_int       lda,
                                            rocblas_stride    stride_a,
                                            const T* const*   B,
                                            rocblas_stride    offset_b,
                                            rocblas_int       ldb,
                                            rocblas_stride    stride_b,
                                            const T*          beta,
                                            T* const*         C,
                                            rocblas_stride    offset_c,
                                            rocblas_int       ldc,
                                            rocblas_stride    stride_c,
                                            rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herkx_template(rocblas_handle    handle,
                                    rocblas_fill      uplo,
                                    rocblas_operation trans,
                                    rocblas_int       n,
                                    rocblas_int       k,
                                    const T*          alpha,
                                    const T*          A,
                                    rocblas_stride    offset_a,
                                    rocblas_int       lda,
                                    rocblas_stride    stride_a,
                                    const T*          B,
                                    rocblas_stride    offset_b,
                                    rocblas_int       ldb,
                                    rocblas_stride    stride_b,
                                    const real_t<T>*  beta,
                                    T*                C,
                                    rocblas_stride    offset_c,
                                    rocblas_int       ldc,
                                    rocblas_stride    stride_c,
                                    rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herkx_batched_template(rocblas_handle    handle,
                                            rocblas_fill      uplo,
                                            rocblas_operation trans,
                                            rocblas_int       n,
                                            rocblas_int       k,
                                            const T*          alpha,
                                            const T* const*   A,
                                            rocblas_stride    offset_a,
                                            rocblas_int       lda,
                                            rocblas_stride    stride_a,
                                            const T* const*   B,
                                            rocblas_stride    offset_b,
                                            rocblas_int       ldb,
                                            rocblas_stride    stride_b,
                                            const real_t<T>*  beta,
                                            T* const*         C,
                                            rocblas_stride    offset_c,
                                            rocblas_int       ldc,
                                            rocblas_stride    stride_c,
                                            rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmm_template(rocblas_handle    handle,
                                   rocblas_side      side,
                                   rocblas_fill      uplo,
                                   rocblas_operation trans_a,
                                   rocblas_diagonal  diag,
                                   rocblas_int       m,
                                   rocblas_int       n,
                                   const T*          alpha,
                                   rocblas_stride    stride_alpha,
                                   const T*          dA,
                                   rocblas_stride    offset_a,
                                   rocblas_int       lda,
                                   rocblas_stride    stride_a,
                                   const T*          dB,
                                   rocblas_stride    offset_b,
                                   rocblas_int       ldb,
                                   rocblas_stride    stride_b,
                                   T*                dC,
                                   rocblas_stride    offset_c,
                                   rocblas_int       lddc,
                                   rocblas_stride    stride_c,
                                   rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmm_batched_template(rocblas_handle    handle,
                                           rocblas_side      side,
                                           rocblas_fill      uplo,
                                           rocblas_operation trans_a,
                                           rocblas_diagonal  diag,
                                           rocblas_int       m,
                                           rocblas_int       n,
                                           const T*          alpha,
                                           rocblas_stride    stride_alpha,
                                           const T* const*   dA,
                                           rocblas_stride    offset_a,
                                           rocblas_int       lda,
                                           rocblas_stride    stride_a,
                                           const T* const*   dB,
                                           rocblas_stride    offset_b,
                                           rocblas_int       ldb,
                                           rocblas_stride    stride_b,
                                           T* const*         dC,
                                           rocblas_stride    offset_c,
                                           rocblas_int       lddc,
                                           rocblas_stride    stride_c,
                                           rocblas_int       batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_workspace_size(rocblas_side      side,
                                         rocblas_operation transA,
                                         rocblas_int       m,
                                         rocblas_int       n,
                                         rocblas_int       batch_count,
                                         rocblas_int       supplied_invA_size,
                                         size_t*           w_x_tmp_size,
                                         size_t*           w_x_tmp_arr_size,
                                         size_t*           w_invA_size,
                                         size_t*           w_invA_arr_size,
                                         size_t*           w_x_tmp_size_backup);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_batched_workspace_size(rocblas_side      side,
                                                 rocblas_operation transA,
                                                 rocblas_int       m,
                                                 rocblas_int       n,
                                                 rocblas_int       batch_count,
                                                 rocblas_int       supplied_invA_size,
                                                 size_t*           w_x_tmp_size,
                                                 size_t*           w_x_tmp_arr_size,
                                                 size_t*           w_invA_size,
                                                 size_t*           w_invA_arr_size,
                                                 size_t*           w_x_tmp_size_backup);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_template(rocblas_handle    handle,
                                   rocblas_side      side,
                                   rocblas_fill      uplo,
                                   rocblas_operation transA,
                                   rocblas_diagonal  diag,
                                   rocblas_int       m,
                                   rocblas_int       n,
                                   const T*          alpha,
                                   const T*          A,
                                   rocblas_stride    offset_A,
                                   rocblas_int       lda,
                                   rocblas_stride    stride_A,
                                   T*                B,
                                   rocblas_stride    offset_B,
                                   rocblas_int       ldb,
                                   rocblas_stride    stride_B,
                                   rocblas_int       batch_count,
                                   bool              optimal_mem,
                                   void*             w_x_temp,
                                   void*             w_x_temparr,
                                   void*             invA               = nullptr,
                                   void*             invAarr            = nullptr,
                                   const T*          supplied_invA      = nullptr,
                                   rocblas_int       supplied_invA_size = 0,
                                   rocblas_stride    offset_invA        = 0,
                                   rocblas_stride    stride_invA        = 0);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_batched_template(rocblas_handle    handle,
                                           rocblas_side      side,
                                           rocblas_fill      uplo,
                                           rocblas_operation transA,
                                           rocblas_diagonal  diag,
                                           rocblas_int       m,
                                           rocblas_int       n,
                                           const T*          alpha,
                                           const T* const*   A,
                                           rocblas_stride    offset_A,
                                           rocblas_int       lda,
                                           rocblas_stride    stride_A,
                                           T* const*         B,
                                           rocblas_stride    offset_B,
                                           rocblas_int       ldb,
                                           rocblas_stride    stride_B,
                                           rocblas_int       batch_count,
                                           bool              optimal_mem,
                                           void*             w_x_temp,
                                           void*             w_x_temparr,
                                           void*             invA               = nullptr,
                                           void*             invAarr            = nullptr,
                                           const T* const*   supplied_invA      = nullptr,
                                           rocblas_int       supplied_invA_size = 0,
                                           rocblas_stride    offset_invA        = 0,
                                           rocblas_stride    stride_invA        = 0);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trtri_template(rocblas_handle   handle,
                                    rocblas_fill     uplo,
                                    rocblas_diagonal diag,
                                    rocblas_int      n,
                                    const T*         A,
                                    rocblas_stride   offset_A,
                                    rocblas_int      lda,
                                    rocblas_stride   stride_A,
                                    rocblas_stride   sub_stride_A,
                                    T*               invA,
                                    rocblas_stride   offset_invA,
                                    rocblas_int      ldinvA,
                                    rocblas_stride   stride_invA,
                                    rocblas_stride   sub_stride_invA,
                                    rocblas_int      batch_count,
                                    rocblas_int      sub_batch_count,
                                    T*               w_C_tmp);

ROCBLAS_INTERNAL_DEPRECATION size_t
    rocblas_internal_trtri_temp_elements(rocblas_int n, rocblas_int batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trtri_batched_template(rocblas_handle   handle,
                                            rocblas_fill     uplo,
                                            rocblas_diagonal diag,
                                            rocblas_int      n,
                                            const T* const*  A,
                                            rocblas_stride   offset_A,
                                            rocblas_int      lda,
                                            rocblas_stride   stride_A,
                                            rocblas_stride   sub_stride_A,
                                            T* const*        invA,
                                            rocblas_stride   offset_invA,
                                            rocblas_int      ldinvA,
                                            rocblas_stride   stride_invA,
                                            rocblas_stride   sub_stride_invA,
                                            rocblas_int      batch_count,
                                            rocblas_int      sub_batch_count,
                                            T* const*        w_C_tmp);

ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_set_data_ptr(rocblas_handle handle, std::shared_ptr<void>& data_ptr);

ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_get_data_ptr(rocblas_handle handle, std::shared_ptr<void>& data_ptr);

ROCBLAS_INTERNAL_DEPRECATION const hipDeviceProp_t*
                                       rocblas_internal_get_device_prop(rocblas_handle handle);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_axpy_template_64(rocblas_handle handle,
                                      int64_t        n,
                                      const T*       alpha,
                                      rocblas_stride stride_alpha,
                                      const T*       x,
                                      rocblas_stride offset_x,
                                      int64_t        incx,
                                      rocblas_stride stride_x,
                                      T*             y,
                                      rocblas_stride offset_y,
                                      int64_t        incy,
                                      rocblas_stride stride_y,
                                      int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_axpy_batched_template_64(rocblas_handle  handle,
                                              int64_t         n,
                                              const T*        alpha,
                                              rocblas_stride  stride_alpha,
                                              const T* const* x,
                                              rocblas_stride  offset_x,
                                              int64_t         incx,
                                              rocblas_stride  stride_x,
                                              T* const*       y,
                                              rocblas_stride  offset_y,
                                              int64_t         incy,
                                              rocblas_stride  stride_y,
                                              int64_t         batch_count);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dot_template_64(rocblas_handle __restrict__ handle,
                                     int64_t n,
                                     const T* __restrict__ x,
                                     rocblas_stride offsetx,
                                     int64_t        incx,
                                     rocblas_stride stridex,
                                     const T* __restrict__ y,
                                     rocblas_stride offsety,
                                     int64_t        incy,
                                     rocblas_stride stridey,
                                     int64_t        batch_count,
                                     T* __restrict__ results,
                                     Tex* __restrict__ workspace);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dotc_template_64(rocblas_handle __restrict__ handle,
                                      int64_t n,
                                      const T* __restrict__ x,
                                      rocblas_stride offsetx,
                                      int64_t        incx,
                                      rocblas_stride stridex,
                                      const T* __restrict__ y,
                                      rocblas_stride offsety,
                                      int64_t        incy,
                                      rocblas_stride stridey,
                                      int64_t        batch_count,
                                      T* __restrict__ results,
                                      Tex* __restrict__ workspace);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dot_batched_template_64(rocblas_handle __restrict__ handle,
                                             int64_t n,
                                             const T* const* __restrict__ x,
                                             rocblas_stride offsetx,
                                             int64_t        incx,
                                             rocblas_stride stridex,
                                             const T* const* __restrict__ y,
                                             rocblas_stride offsety,
                                             int64_t        incy,
                                             rocblas_stride stridey,
                                             int64_t        batch_count,
                                             T* __restrict__ results,
                                             Tex* __restrict__ workspace);

template <typename T, typename Tex>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_dotc_batched_template_64(rocblas_handle __restrict__ handle,
                                              int64_t n,
                                              const T* const* __restrict__ x,
                                              rocblas_stride offsetx,
                                              int64_t        incx,
                                              rocblas_stride stridex,
                                              const T* const* __restrict__ y,
                                              rocblas_stride offsety,
                                              int64_t        incy,
                                              rocblas_stride stridey,
                                              int64_t        batch_count,
                                              T* __restrict__ results,
                                              Tex* __restrict__ workspace);

template <typename T, typename Ta>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_scal_template_64(rocblas_handle handle,
                                      int64_t        n,
                                      const Ta*      alpha,
                                      rocblas_stride stride_alpha,
                                      T*             x,
                                      rocblas_stride offset_x,
                                      int64_t        incx,
                                      rocblas_stride stride_x,
                                      int64_t        batch_count);

template <typename T, typename Ta>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_scal_batched_template_64(rocblas_handle handle,
                                              int64_t        n,
                                              const Ta*      alpha,
                                              rocblas_stride stride_alpha,
                                              T* const*      x,
                                              rocblas_stride offset_x,
                                              int64_t        incx,
                                              rocblas_stride stride_x,
                                              int64_t        batch_count);

template <typename To>
ROCBLAS_INTERNAL_DEPRECATION size_t rocblas_internal_gemv_kernel_workspace_size_64(
    rocblas_operation transA, int64_t m_64, int64_t n_64, int64_t batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemv_template_64(rocblas_handle    handle,
                                      rocblas_operation transA,
                                      int64_t           m,
                                      int64_t           n,
                                      const T*          alpha,
                                      rocblas_stride    stride_alpha,
                                      const T*          A,
                                      rocblas_stride    offseta,
                                      int64_t           lda,
                                      rocblas_stride    strideA,
                                      const T*          x,
                                      rocblas_stride    offsetx,
                                      int64_t           incx,
                                      rocblas_stride    stridex,
                                      const T*          beta,
                                      rocblas_stride    stride_beta,
                                      T*                y,
                                      rocblas_stride    offsety,
                                      int64_t           incy,
                                      rocblas_stride    stridey,
                                      int64_t           batch_count,
                                      T*                workspace = nullptr);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemv_batched_template_64(rocblas_handle    handle,
                                              rocblas_operation transA,
                                              int64_t           m,
                                              int64_t           n,
                                              const T*          alpha,
                                              rocblas_stride    stride_alpha,
                                              const T* const*   A,
                                              rocblas_stride    offseta,
                                              int64_t           lda,
                                              rocblas_stride    strideA,
                                              const T* const*   x,
                                              rocblas_stride    offsetx,
                                              int64_t           incx,
                                              rocblas_stride    stridex,
                                              const T*          beta,
                                              rocblas_stride    stride_beta,
                                              T* const*         y,
                                              rocblas_stride    offsety,
                                              int64_t           incy,
                                              rocblas_stride    stridey,
                                              int64_t           batch_count,
                                              T*                workspace = nullptr);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_ger_template_64(rocblas_handle handle,
                                     int64_t        m,
                                     int64_t        n,
                                     const T*       alpha,
                                     rocblas_stride stride_alpha,
                                     const T*       x,
                                     rocblas_stride offsetx,
                                     int64_t        incx,
                                     rocblas_stride stridex,
                                     const T*       y,
                                     rocblas_stride offsety,
                                     int64_t        incy,
                                     rocblas_stride stridey,
                                     T*             A,
                                     rocblas_stride offsetA,
                                     int64_t        lda,
                                     rocblas_stride strideA,
                                     int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gerc_template_64(rocblas_handle handle,
                                      int64_t        m,
                                      int64_t        n,
                                      const T*       alpha,
                                      rocblas_stride stride_alpha,
                                      const T*       x,
                                      rocblas_stride offsetx,
                                      int64_t        incx,
                                      rocblas_stride stridex,
                                      const T*       y,
                                      rocblas_stride offsety,
                                      int64_t        incy,
                                      rocblas_stride stridey,
                                      T*             A,
                                      rocblas_stride offsetA,
                                      int64_t        lda,
                                      rocblas_stride strideA,
                                      int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_ger_batched_template_64(rocblas_handle  handle,
                                             int64_t         m,
                                             int64_t         n,
                                             const T*        alpha,
                                             rocblas_stride  stride_alpha,
                                             const T* const* x,
                                             rocblas_stride  offsetx,
                                             int64_t         incx,
                                             rocblas_stride  stridex,
                                             const T* const* y,
                                             rocblas_stride  offsety,
                                             int64_t         incy,
                                             rocblas_stride  stridey,
                                             T* const*       A,
                                             rocblas_stride  offsetA,
                                             int64_t         lda,
                                             rocblas_stride  strideA,
                                             int64_t         batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gerc_batched_template_64(rocblas_handle  handle,
                                              int64_t         m,
                                              int64_t         n,
                                              const T*        alpha,
                                              rocblas_stride  stride_alpha,
                                              const T* const* x,
                                              rocblas_stride  offsetx,
                                              int64_t         incx,
                                              rocblas_stride  stridex,
                                              const T* const* y,
                                              rocblas_stride  offsety,
                                              int64_t         incy,
                                              rocblas_stride  stridey,
                                              T* const*       A,
                                              rocblas_stride  offsetA,
                                              int64_t         lda,
                                              rocblas_stride  strideA,
                                              int64_t         batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2_template_64(rocblas_handle handle,
                                      rocblas_fill   uplo,
                                      int64_t        n,
                                      const T*       alpha,
                                      const T*       x,
                                      rocblas_stride offset_x,
                                      int64_t        incx,
                                      rocblas_stride stride_x,
                                      const T*       y,
                                      rocblas_stride offset_y,
                                      int64_t        incy,
                                      rocblas_stride stride_y,
                                      T*             A,
                                      int64_t        lda,
                                      rocblas_stride offset_A,
                                      rocblas_stride stride_A,
                                      int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2_batched_template_64(rocblas_handle  handle,
                                              rocblas_fill    uplo,
                                              int64_t         n,
                                              const T*        alpha,
                                              const T* const* x,
                                              rocblas_stride  offset_x,
                                              int64_t         incx,
                                              rocblas_stride  stride_x,
                                              const T* const* y,
                                              rocblas_stride  offset_y,
                                              int64_t         incy,
                                              rocblas_stride  stride_y,
                                              T* const*       A,
                                              int64_t         lda,
                                              rocblas_stride  offset_A,
                                              rocblas_stride  stride_A,
                                              int64_t         batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2_template_64(rocblas_handle handle,
                                      rocblas_fill   uplo,
                                      int64_t        n,
                                      const T*       alpha,
                                      const T*       x,
                                      rocblas_stride offset_x,
                                      int64_t        incx,
                                      rocblas_stride stride_x,
                                      const T*       y,
                                      rocblas_stride offset_y,
                                      int64_t        incy,
                                      rocblas_stride stride_y,
                                      T*             A,
                                      int64_t        lda,
                                      rocblas_stride offset_A,
                                      rocblas_stride stride_A,
                                      int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2_batched_template_64(rocblas_handle  handle,
                                              rocblas_fill    uplo,
                                              int64_t         n,
                                              const T*        alpha,
                                              const T* const* x,
                                              rocblas_stride  offset_x,
                                              int64_t         incx,
                                              rocblas_stride  stride_x,
                                              const T* const* y,
                                              rocblas_stride  offset_y,
                                              int64_t         incy,
                                              rocblas_stride  stride_y,
                                              T* const*       A,
                                              int64_t         lda,
                                              rocblas_stride  offset_A,
                                              rocblas_stride  stride_A,
                                              int64_t         batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmv_template_64(rocblas_handle    handle,
                                      rocblas_fill      uplo,
                                      rocblas_operation transA,
                                      rocblas_diagonal  diag,
                                      int64_t           n_64,
                                      const T*          A,
                                      rocblas_stride    offset_A,
                                      int64_t           lda,
                                      rocblas_stride    stride_A,
                                      T*                x,
                                      rocblas_stride    offset_x,
                                      int64_t           incx_64,
                                      rocblas_stride    stride_x,
                                      T*                workspace,
                                      rocblas_stride    stride_w,
                                      int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmv_batched_template_64(rocblas_handle    handle,
                                              rocblas_fill      uplo,
                                              rocblas_operation transA,
                                              rocblas_diagonal  diag,
                                              int64_t           n_64,
                                              const T* const*   A,
                                              rocblas_stride    offset_A,
                                              int64_t           lda,
                                              rocblas_stride    stride_A,
                                              T* const*         x,
                                              rocblas_stride    offset_x,
                                              int64_t           incx_64,
                                              rocblas_stride    stride_x,
                                              T*                workspace,
                                              rocblas_stride    stride_w,
                                              int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsv_template_64(rocblas_handle    handle,
                                      rocblas_fill      uplo,
                                      rocblas_operation transA,
                                      rocblas_diagonal  diag,
                                      int64_t           n_64,
                                      const T*          dA,
                                      rocblas_stride    offset_A,
                                      int64_t           lda_64,
                                      rocblas_stride    stride_A,
                                      T*                dx,
                                      rocblas_stride    offset_x,
                                      int64_t           incx_64,
                                      rocblas_stride    stride_x,
                                      int64_t           batch_count_64,
                                      rocblas_int*      w_completed_sec);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsv_batched_template_64(rocblas_handle    handle,
                                              rocblas_fill      uplo,
                                              rocblas_operation transA,
                                              rocblas_diagonal  diag,
                                              int64_t           n_64,
                                              const T* const*   dA,
                                              rocblas_stride    offset_A,
                                              int64_t           lda_64,
                                              rocblas_stride    stride_A,
                                              T* const*         dx,
                                              rocblas_stride    offset_x,
                                              int64_t           incx_64,
                                              rocblas_stride    stride_x,
                                              int64_t           batch_count_64,
                                              rocblas_int*      w_completed_sec);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemm_template_64(rocblas_handle    handle,
                                      rocblas_operation trans_a,
                                      rocblas_operation trans_b,
                                      int64_t           m,
                                      int64_t           n,
                                      int64_t           k,
                                      const T*          alpha,
                                      const T*          A,
                                      rocblas_stride    offset_a,
                                      int64_t           lda,
                                      rocblas_stride    stride_a,
                                      const T*          B,
                                      rocblas_stride    offset_b,
                                      int64_t           ldb,
                                      rocblas_stride    stride_b,
                                      const T*          beta,
                                      T*                C,
                                      rocblas_stride    offset_c,
                                      int64_t           ldc,
                                      rocblas_stride    stride_c,
                                      int64_t           batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_gemm_batched_template_64(rocblas_handle    handle,
                                              rocblas_operation trans_a,
                                              rocblas_operation trans_b,
                                              int64_t           m,
                                              int64_t           n,
                                              int64_t           k,
                                              const T*          alpha,
                                              const T* const*   A,
                                              rocblas_stride    offset_a,
                                              int64_t           lda,
                                              rocblas_stride    stride_a,
                                              const T* const*   B,
                                              rocblas_stride    offset_b,
                                              int64_t           ldb,
                                              rocblas_stride    stride_b,
                                              const T*          beta,
                                              T* const*         C,
                                              rocblas_stride    offset_c,
                                              int64_t           ldc,
                                              rocblas_stride    stride_c,
                                              int64_t           batch_count);

template <typename T_>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_symm_template_64(rocblas_handle handle,
                                      rocblas_side   side,
                                      rocblas_fill   uplo,
                                      int64_t        m_64,
                                      int64_t        n_64,
                                      const T_*      alpha,
                                      const T_*      A,
                                      rocblas_stride offsetA,
                                      int64_t        lda_64,
                                      rocblas_stride strideA,
                                      const T_*      B,
                                      rocblas_stride offsetB,
                                      int64_t        ldb_64,
                                      rocblas_stride strideB,
                                      const T_*      beta,
                                      T_*            C,
                                      rocblas_stride offsetC,
                                      int64_t        ldc_64,
                                      rocblas_stride strideC,
                                      int64_t        batch_count_64);

template <typename T_>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_symm_batched_template_64(rocblas_handle   handle,
                                              rocblas_side     side,
                                              rocblas_fill     uplo,
                                              int64_t          m_64,
                                              int64_t          n_64,
                                              const T_*        alpha,
                                              const T_* const* A,
                                              rocblas_stride   offsetA,
                                              int64_t          lda_64,
                                              rocblas_stride   strideA,
                                              const T_* const* B,
                                              rocblas_stride   offsetB,
                                              int64_t          ldb_64,
                                              rocblas_stride   strideB,
                                              const T_*        beta,
                                              T_* const*       C,
                                              rocblas_stride   offsetC,
                                              int64_t          ldc_64,
                                              rocblas_stride   strideC,
                                              int64_t          batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_hemm_template_64(rocblas_handle handle,
                                      rocblas_side   side,
                                      rocblas_fill   uplo,
                                      int64_t        m_64,
                                      int64_t        n_64,
                                      const T*       alpha,
                                      const T*       A,
                                      rocblas_stride offsetA,
                                      int64_t        lda_64,
                                      rocblas_stride strideA,
                                      const T*       B,
                                      rocblas_stride offsetB,
                                      int64_t        ldb_64,
                                      rocblas_stride strideB,
                                      const T*       beta,
                                      T*             C,
                                      rocblas_stride offsetC,
                                      int64_t        ldc_64,
                                      rocblas_stride strideC,
                                      int64_t        batch_count_64);

template <typename T_>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_hemm_batched_template_64(rocblas_handle   handle,
                                              rocblas_side     side,
                                              rocblas_fill     uplo,
                                              int64_t          m_64,
                                              int64_t          n_64,
                                              const T_*        alpha,
                                              const T_* const* A,
                                              rocblas_stride   offsetA,
                                              int64_t          lda_64,
                                              rocblas_stride   strideA,
                                              const T_* const* B,
                                              rocblas_stride   offsetB,
                                              int64_t          ldb_64,
                                              rocblas_stride   strideB,
                                              const T_*        beta,
                                              T_* const*       C,
                                              rocblas_stride   offsetC,
                                              int64_t          ldc_64,
                                              rocblas_stride   strideC,
                                              int64_t          batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2k_template_64(rocblas_handle    handle,
                                       rocblas_fill      uplo,
                                       rocblas_operation trans,
                                       int64_t           n_64,
                                       int64_t           k_64,
                                       const T*          alpha,
                                       const T*          A,
                                       rocblas_stride    offset_A,
                                       int64_t           lda_64,
                                       rocblas_stride    stride_A,
                                       const T*          B,
                                       rocblas_stride    offset_B,
                                       int64_t           ldb_64,
                                       rocblas_stride    stride_B,
                                       const T*          beta,
                                       T*                C,
                                       rocblas_stride    offset_C,
                                       int64_t           ldc_64,
                                       rocblas_stride    stride_C,
                                       int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syr2k_batched_template_64(rocblas_handle    handle,
                                               rocblas_fill      uplo,
                                               rocblas_operation trans,
                                               int64_t           n_64,
                                               int64_t           k_64,
                                               const T*          alpha,
                                               const T* const*   A,
                                               rocblas_stride    offset_A,
                                               int64_t           lda_64,
                                               rocblas_stride    stride_A,
                                               const T* const*   B,
                                               rocblas_stride    offset_B,
                                               int64_t           ldb_64,
                                               rocblas_stride    stride_B,
                                               const T*          beta,
                                               T* const*         C,
                                               rocblas_stride    offset_C,
                                               int64_t           ldc_64,
                                               rocblas_stride    stride_C,
                                               int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2k_template_64(rocblas_handle    handle,
                                       rocblas_fill      uplo,
                                       rocblas_operation trans,
                                       int64_t           n_64,
                                       int64_t           k_64,
                                       const T*          alpha,
                                       const T*          A,
                                       rocblas_stride    offset_A,
                                       int64_t           lda_64,
                                       rocblas_stride    stride_A,
                                       const T*          B,
                                       rocblas_stride    offset_b,
                                       int64_t           ldb_64,
                                       rocblas_stride    stride_B,
                                       const real_t<T>*  beta,
                                       T*                C,
                                       rocblas_stride    offset_c,
                                       int64_t           ldc_64,
                                       rocblas_stride    stride_C,
                                       int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_her2k_batched_template_64(rocblas_handle    handle,
                                               rocblas_fill      uplo,
                                               rocblas_operation trans,
                                               int64_t           n_64,
                                               int64_t           k_64,
                                               const T*          alpha,
                                               const T* const*   A,
                                               rocblas_stride    offset_A,
                                               int64_t           lda_64,
                                               rocblas_stride    stride_A,
                                               const T* const*   B,
                                               rocblas_stride    offset_b,
                                               int64_t           ldb_64,
                                               rocblas_stride    stride_B,
                                               const real_t<T>*  beta,
                                               T* const*         C,
                                               rocblas_stride    offset_c,
                                               int64_t           ldc_64,
                                               rocblas_stride    stride_C,
                                               int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrk_template_64(rocblas_handle    handle,
                                      rocblas_fill      uplo,
                                      rocblas_operation transA,
                                      int64_t           n_64,
                                      int64_t           k_64,
                                      const T*          alpha,
                                      const T*          A,
                                      rocblas_stride    offsetA,
                                      int64_t           lda_64,
                                      rocblas_stride    strideA,
                                      const T*          beta,
                                      T*                C,
                                      rocblas_stride    offsetC,
                                      int64_t           ldc_64,
                                      rocblas_stride    strideC,
                                      int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrk_batched_template_64(rocblas_handle    handle,
                                              rocblas_fill      uplo,
                                              rocblas_operation transA,
                                              int64_t           n_64,
                                              int64_t           k_64,
                                              const T*          alpha,
                                              const T* const*   A,
                                              rocblas_stride    offsetA,
                                              int64_t           lda_64,
                                              rocblas_stride    strideA,
                                              const T*          beta,
                                              T* const*         C,
                                              rocblas_stride    offsetC,
                                              int64_t           ldc_64,
                                              rocblas_stride    strideC,
                                              int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herk_template_64(rocblas_handle    handle,
                                      rocblas_fill      uplo,
                                      rocblas_operation transA,
                                      int64_t           n_64,
                                      int64_t           k_64,
                                      const real_t<T>*  alpha,
                                      const T*          A,
                                      rocblas_stride    offsetA,
                                      int64_t           lda_64,
                                      rocblas_stride    strideA,
                                      const real_t<T>*  beta,
                                      T*                C,
                                      rocblas_stride    offsetC,
                                      int64_t           ldc_64,
                                      rocblas_stride    strideC,
                                      int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herk_batched_template_64(rocblas_handle    handle,
                                              rocblas_fill      uplo,
                                              rocblas_operation transA,
                                              int64_t           n_64,
                                              int64_t           k_64,
                                              const real_t<T>*  alpha,
                                              const T* const*   A,
                                              rocblas_stride    offsetA,
                                              int64_t           lda_64,
                                              rocblas_stride    strideA,
                                              const real_t<T>*  beta,
                                              T* const*         C,
                                              rocblas_stride    offsetC,
                                              int64_t           ldc_64,
                                              rocblas_stride    strideC,
                                              int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrkx_template_64(rocblas_handle    handle,
                                       rocblas_fill      uplo,
                                       rocblas_operation trans,
                                       int64_t           n_64,
                                       int64_t           k_64,
                                       const T*          alpha,
                                       const T*          A,
                                       rocblas_stride    offset_A,
                                       int64_t           lda_64,
                                       rocblas_stride    stride_A,
                                       const T*          B,
                                       rocblas_stride    offset_B,
                                       int64_t           ldb_64,
                                       rocblas_stride    stride_B,
                                       const T*          beta,
                                       T*                C,
                                       rocblas_stride    offset_C,
                                       int64_t           ldc_64,
                                       rocblas_stride    stride_C,
                                       int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_syrkx_batched_template_64(rocblas_handle    handle,
                                               rocblas_fill      uplo,
                                               rocblas_operation trans,
                                               int64_t           n_64,
                                               int64_t           k_64,
                                               const T*          alpha,
                                               const T* const*   A,
                                               rocblas_stride    offset_A,
                                               int64_t           lda_64,
                                               rocblas_stride    stride_A,
                                               const T* const*   B,
                                               rocblas_stride    offset_B,
                                               int64_t           ldb_64,
                                               rocblas_stride    stride_B,
                                               const T*          beta,
                                               T* const*         C,
                                               rocblas_stride    offset_C,
                                               int64_t           ldc_64,
                                               rocblas_stride    stride_C,
                                               int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herkx_template_64(rocblas_handle    handle,
                                       rocblas_fill      uplo,
                                       rocblas_operation trans,
                                       int64_t           n_64,
                                       int64_t           k_64,
                                       const T*          alpha,
                                       const T*          A,
                                       rocblas_stride    offset_A,
                                       int64_t           lda_64,
                                       rocblas_stride    stride_A,
                                       const T*          B,
                                       rocblas_stride    offset_B,
                                       int64_t           ldb_64,
                                       rocblas_stride    stride_B,
                                       const real_t<T>*  beta,
                                       T*                C,
                                       rocblas_stride    offset_C,
                                       int64_t           ldc_64,
                                       rocblas_stride    stride_C,
                                       int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_herkx_batched_template_64(rocblas_handle    handle,
                                               rocblas_fill      uplo,
                                               rocblas_operation trans,
                                               int64_t           n_64,
                                               int64_t           k_64,
                                               const T*          alpha,
                                               const T* const*   A,
                                               rocblas_stride    offset_A,
                                               int64_t           lda_64,
                                               rocblas_stride    stride_A,
                                               const T* const*   B,
                                               rocblas_stride    offset_B,
                                               int64_t           ldb_64,
                                               rocblas_stride    stride_B,
                                               const real_t<T>*  beta,
                                               T* const*         C,
                                               rocblas_stride    offset_C,
                                               int64_t           ldc_64,
                                               rocblas_stride    stride_C,
                                               int64_t           batch_count_64);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmm_template_64(rocblas_handle    handle,
                                      rocblas_side      side,
                                      rocblas_fill      uplo,
                                      rocblas_operation trans_a,
                                      rocblas_diagonal  diag,
                                      int64_t           m_64,
                                      int64_t           n_64,
                                      const T*          alpha,
                                      rocblas_stride    stride_alpha,
                                      const T*          dA,
                                      rocblas_stride    offset_a,
                                      int64_t           lda_64,
                                      rocblas_stride    stride_a,
                                      const T*          dB,
                                      rocblas_stride    offset_b,
                                      int64_t           ldb_64,
                                      rocblas_stride    stride_b,
                                      T*                dC,
                                      rocblas_stride    offset_c,
                                      int64_t           ldc_64,
                                      rocblas_stride    stride_c,
                                      int64_t           batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trmm_batched_template_64(rocblas_handle    handle,
                                              rocblas_side      side,
                                              rocblas_fill      uplo,
                                              rocblas_operation trans_a,
                                              rocblas_diagonal  diag,
                                              int64_t           m_64,
                                              int64_t           n_64,
                                              const T*          alpha,
                                              rocblas_stride    stride_alpha,
                                              const T* const*   dA,
                                              rocblas_stride    offset_a,
                                              int64_t           lda_64,
                                              rocblas_stride    stride_a,
                                              const T* const*   dB,
                                              rocblas_stride    offset_b,
                                              int64_t           ldb_64,
                                              rocblas_stride    stride_b,
                                              T* const*         dC,
                                              rocblas_stride    offset_c,
                                              int64_t           ldc_64,
                                              rocblas_stride    stride_c,
                                              int64_t           batch_count);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_workspace_size_64(rocblas_side      side,
                                            rocblas_operation transA,
                                            int64_t           m_64,
                                            int64_t           n_64,
                                            int64_t           lda_64,
                                            int64_t           ldb_64,
                                            int64_t           batch_count_64,
                                            int64_t           supplied_invA_size,
                                            size_t*           w_x_tmp_size,
                                            size_t*           w_x_tmp_arr_size,
                                            size_t*           w_invA_size,
                                            size_t*           w_invA_arr_size,
                                            size_t*           w_x_tmp_size_backup);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_batched_workspace_size_64(rocblas_side      side,
                                                    rocblas_operation transA,
                                                    int64_t           m_64,
                                                    int64_t           n_64,
                                                    int64_t           lda_64,
                                                    int64_t           ldb_64,
                                                    int64_t           batch_count_64,
                                                    int64_t           supplied_invA_size,
                                                    size_t*           w_x_tmp_size,
                                                    size_t*           w_x_tmp_arr_size,
                                                    size_t*           w_invA_size,
                                                    size_t*           w_invA_arr_size,
                                                    size_t*           w_x_tmp_size_backup);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_workspace_max_size_64(rocblas_side side,
                                                int64_t      m,
                                                int64_t      n,
                                                int64_t      batch_count,
                                                size_t*      w_x_tmp_size,
                                                size_t*      w_invA_size,
                                                size_t*      w_x_tmp_size_backup);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_batched_workspace_max_size_64(rocblas_side side,
                                                        int64_t      m,
                                                        int64_t      n,
                                                        int64_t      batch_count,
                                                        size_t*      w_x_tmp_size,
                                                        size_t*      w_x_tmp_arr_size,
                                                        size_t*      w_invA_size,
                                                        size_t*      w_invA_arr_size,
                                                        size_t*      w_x_tmp_size_backup);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_template_64(rocblas_handle    handle,
                                      rocblas_side      side,
                                      rocblas_fill      uplo,
                                      rocblas_operation transA,
                                      rocblas_diagonal  diag,
                                      int64_t           m_64,
                                      int64_t           n_64,
                                      const T*          alpha,
                                      const T*          A,
                                      rocblas_stride    offset_A,
                                      int64_t           lda_64,
                                      rocblas_stride    stride_A,
                                      T*                B,
                                      rocblas_stride    offset_B,
                                      int64_t           ldb_64,
                                      rocblas_stride    stride_B,
                                      int64_t           batch_count_64,
                                      bool              optimal_mem,
                                      void*             w_x_temp,
                                      void*             w_x_temparr,
                                      void*             invA                  = nullptr,
                                      void*             invAarr               = nullptr,
                                      const T*          supplied_invA         = nullptr,
                                      int64_t           supplied_invA_size_64 = 0,
                                      rocblas_stride    offset_invA           = 0,
                                      rocblas_stride    stride_invA           = 0);

template <typename T>
ROCBLAS_INTERNAL_DEPRECATION rocblas_status
    rocblas_internal_trsm_batched_template_64(rocblas_handle    handle,
                                              rocblas_side      side,
                                              rocblas_fill      uplo,
                                              rocblas_operation transA,
                                              rocblas_diagonal  diag,
                                              int64_t           m_64,
                                              int64_t           n_64,
                                              const T*          alpha,
                                              const T* const*   A,
                                              rocblas_stride    offset_A,
                                              int64_t           lda_64,
                                              rocblas_stride    stride_A,
                                              T* const*         B,
                                              rocblas_stride    offset_B,
                                              int64_t           ldb_64,
                                              rocblas_stride    stride_B,
                                              int64_t           batch_count_64,
                                              bool              optimal_mem,
                                              void*             w_x_temp,
                                              void*             w_x_temparr,
                                              void*             invA                  = nullptr,
                                              void*             invAarr               = nullptr,
                                              const T* const*   supplied_invA         = nullptr,
                                              int64_t           supplied_invA_size_64 = 0,
                                              rocblas_stride    offset_invA           = 0,
                                              rocblas_stride    stride_invA           = 0);

