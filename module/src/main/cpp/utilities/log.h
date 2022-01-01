//
// Created by 泓清 on 2021/12/30.
//

#ifndef RIRU_MODULETEMPLATE_LOG_H
#define RIRU_MODULETEMPLATE_LOG_H

#include <android/log.h>

#define LOG_TAG "SSAGEHOOK"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

#endif //RIRU_MODULETEMPLATE_LOG_H
