# Copyright (c) 2015-present, Facebook, Inc.
# All rights reserved.
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree. An additional grant
# of patent rights can be found in the PATENTS file in the same directory.

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := hellojni
LOCAL_SRC_FILES := \
    hello/Hello.cpp

LOCAL_EXPORT_LDLIBS := -lGLESv1_CM \
                       -lGLESv2 \
                       -lEGL \
                       -llog \
                       -landroid

LOCAL_CPPFLAGS := -Wno-extern-c-compat

LOCAL_EXPORT_CPPFLAGS := -Wno-extern-c-compat

include $(BUILD_SHARED_LIBRARY)
