/*
 * msc_host.h
 *
 *  Created on: Mar 8, 2013
 *      Author: hathach
 */

/*
 * Software License Agreement (BSD License)
 * Copyright (c) 2012, hathach (tinyusb.org)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 *
 * This file is part of the tiny usb stack.
 */

/** \file
 *  \brief TBD
 *
 *  \note TBD
 */

/** \ingroup TBD
 *  \defgroup TBD
 *  \brief TBD
 *
 *  @{
 */

#ifndef _TUSB_MSC_HOST_H_
#define _TUSB_MSC_HOST_H_

#ifdef __cplusplus
 extern "C" {
#endif

#include "common/common.h"
#include "host/usbh.h"
#include "hid.h"

//--------------------------------------------------------------------+
// APPLICATION API
//--------------------------------------------------------------------+

//--------------------------------------------------------------------+
// INTERNAL API
//--------------------------------------------------------------------+
#ifdef _TINY_USB_SOURCE_FILE_

void         msch_init(void) ATTR_WEAK;
tusb_error_t msch_open_subtask(uint8_t dev_addr, uint8_t const *descriptor, uint16_t *p_length) ATTR_WEAK ATTR_WARN_UNUSED_RESULT;
void msch_isr(pipe_handle_t pipe_hdl, tusb_bus_event_t event) ATTR_WEAK;
void msch_close(uint8_t dev_addr) ATTR_WEAK;
#endif

#ifdef __cplusplus
 }
#endif

#endif /* _TUSB_MSC_HOST_H_ */

/** @} */