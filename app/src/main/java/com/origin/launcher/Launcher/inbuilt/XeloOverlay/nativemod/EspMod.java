package com.origin.launcher.Launcher.inbuilt.XeloOverlay.nativemod;

public class EspMod {

    public static boolean init() {
        if (!InbuiltModsNative.loadLibrary()) {
            return false;
        }
        return nativeInit();
    }

    public static void render() {
        nativeRender();
    }

    public static native boolean nativeInit();
    public static native void nativeRender();
    public static native boolean nativeIsInitialized();
}
