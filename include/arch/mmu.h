/**
 * Copyright (c) 2018 The cxkernel Authors. All rights reserved.
 * Use of this source code is governed by a MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT
 *
 * @file   mmu.h
 * @author Kevin Dai \<kevindai02@outlook.com\>
 * @date   Created on December 31 2018, 12:46 PM
 */

#pragma once

#include "common.h"

#ifdef __cplusplus

namespace arch
{
    class Mmu
    {
    public:
        virtual void init();
        virtual void map_page(uint64_t virt, uint64_t phys, uint64_t flags);
    };
    Mmu& get_mmu(void);
}

#endif

__BEGIN_CDECLS

__END_CDECLS
