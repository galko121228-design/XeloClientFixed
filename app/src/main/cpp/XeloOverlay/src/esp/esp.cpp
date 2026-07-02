#include <jni.h>
#include <android/log.h>

#define LOG_TAG "XeloESP"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

static bool g_initialized = false;

void renderESP() {
    LOGI("ESP render called");
}

extern "C" {

JNIEXPORT jboolean JNICALL
Java_com_origin_launcher_Launcher_inbuilt_XeloOverlay_nativemod_EspMod_nativeInit(JNIEnv* env, jclass clazz) {
    if (g_initialized) {
        return JNI_TRUE;
    }

    LOGI("Initializing ESP mod...");
    g_initialized = true;
    LOGI("ESP mod initialized successfully");
    return JNI_TRUE;
}

JNIEXPORT void JNICALL
Java_com_origin_launcher_Launcher_inbuilt_XeloOverlay_nativemod_EspMod_nativeRender(JNIEnv* env, jclass clazz) {
    if (g_initialized) {
        renderESP();
    }
}

}
