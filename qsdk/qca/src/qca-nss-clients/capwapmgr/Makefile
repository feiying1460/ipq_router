##########################################################################
# Copyright (c) 2014, The Linux Foundation. All rights reserved.
# Permission to use, copy, modify, and/or distribute this software for
# any purpose with or without fee is hereby granted, provided that the
# above copyright notice and this permission notice appear in all copies.
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
# OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
##########################################################################

ccflags-y := -I$(obj)/../exports -I$(obj)/..  -I$(obj)/nss_hal/include
ccflags-y += -DNSS_CLIENT_BUILD_ID="$(BUILD_ID)"

#
# If you want only one netdev for all the CAPWAP tunnels, then
# set NSS_CAPWAPMGR_ONE_NETDEV.
#     ccflags-y += -DNSS_CAPWAPMGR_ONE_NETDEV
#
# If you want one netdevice per-CAPWAP tunnel, then don't set
# NSS_CAPWAPMGR_ONE_NETDEV.
#
obj-m += qca-nss-capwapmgr.o
qca-nss-capwapmgr-objs := nss_capwapmgr.o
ccflags-y += -DNSS_CAPWAPMGR_ONE_NETDEV -DNSS_CAPWAPMGR_DEBUG_LEVEL=6

ccflags-y += $(NSS_CCFLAGS) -DNSS_DEBUG_LEVEL=0 -DNSS_PKT_STATS_ENABLED=0
