/* Copyright (c) Kyrylo Polezhaiev and contributors. All rights reserved.
   Released under the MIT license. See LICENSE file in the project root for full license information. */

#ifndef __LE_SEQUENTIAL_H__
#define __LE_SEQUENTIAL_H__

#include "lematrix.h"
#include "lemodel.h"

typedef struct LeSequential LeSequential;

LeSequential * le_sequential_new     (void);

LeMatrix *     le_sequential_predict (LeSequential *model,
                                      LeMatrix     *x);

void           le_sequential_free    (LeSequential *model);

#endif
