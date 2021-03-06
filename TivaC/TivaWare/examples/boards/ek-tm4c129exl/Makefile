#******************************************************************************
#
# Makefile - Rules for building the ek-tm4c129exl examples.
#
# Copyright (c) 2012-2017 Texas Instruments Incorporated.  All rights reserved.
# Software License Agreement
# 
# Texas Instruments (TI) is supplying this software for use solely and
# exclusively on TI's microcontroller products. The software is owned by
# TI and/or its suppliers, and is protected under applicable copyright
# laws. You may not combine this software with "viral" open-source
# software in order to form a larger program.
# 
# THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
# NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
# NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
# CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
# DAMAGES, FOR ANY REASON WHATSOEVER.
# 
# This is part of revision 2.1.4.178 of the EK-TM4C129EXL Firmware Package.
#
#******************************************************************************

#
# A list of the directories containing the examples.
#
DIRS=aes_example         \
     aes128_cbc_decrypt  \
     aes128_cbc_encrypt  \
     aes128_ccm_decrypt  \
     aes128_ccm_encrypt  \
     aes128_cmac         \
     aes128_ecb_decrypt  \
     aes128_ecb_encrypt  \
     aes128_gcm_decrypt  \
     aes128_gcm_encrypt  \
     bitband             \
     blinky              \
     boot_demo1          \
     boot_demo2          \
     boot_serial         \
     crc32               \
     enet_io             \
     enet_lwip           \
     enet_uip            \
     enet_weather        \
     gpio_jtag           \
     hello               \
     hibernate           \
     interrupts          \
     mpu_fault           \
     project0            \
     sha1_hash           \
     sha1_hmac           \
     shamd5_hmac_example \
     sleep_modes         \
     tdes_cbc_decrypt    \
     tdes_cbc_encrypt    \
     timers              \
     uart_echo           \
     udma_demo           \
     usb_dev_bulk        \
     usb_dev_cserial     \
     usb_dev_keyboard    \
     usb_host_keyboard   \
     usb_host_mouse      \
     usb_host_msc        \
     usb_stick_demo      \
     usb_stick_update    \
     watchdog           

#
# The default rule, which causes the examples to be built.
#
all:
	@for i in ${DIRS};              \
	 do                             \
	     make -C $${i} || exit $$?; \
	 done

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${wildcard *~} __dummy__
	@-for i in ${DIRS};        \
	  do                       \
	      make -C $${i} clean; \
	  done
