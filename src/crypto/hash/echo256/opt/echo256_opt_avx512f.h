// Copyright (c) 2019 The Gulden developers
// Authored by: Malcolm MacLeod (mmacleod@gmx.com)
// Distributed under the GULDEN software license, see the accompanying file COPYING

// This file is a thin wrapper around the actual 'echo256_aesni_opt', along with various other similarly named files.
// The build system compiles each file with slightly different optimisation flags so that we have optimised implementations for a wide spread of processors.

#ifndef HASH_ECHO_256_AVX512F_H
#define HASH_ECHO_256_AVX512F_H
    #define echo256_opt_hashState   echo256_opt_avx512f_hashState
    #define echo256_opt_Init        echo256_opt_avx512f_Init
    #define echo256_opt_Update      echo256_opt_avx512f_Update
    #define echo256_opt_Final       echo256_opt_avx512f_Final
    #define echo256_opt_UpdateFinal echo256_opt_avx512f_UpdateFinal

    #define ECHO256_OPT_IMPL
    #include "../echo256_opt.h"
    #undef ECHO256_OPT_IMPL

    #undef echo256_opt_hashState
    #undef echo256_opt_Init
    #undef echo256_opt_Update
    #undef echo256_opt_Final
    #undef echo256_opt_UpdateFinal
#endif

