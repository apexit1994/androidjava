#include <jni.h>
#include <string>
#include <math.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_calculateArea(
        JNIEnv* env,
        jobject self,
        jdouble radius) {

    jdouble area = M_PI * radius * radius;
    char output[40];
    sprintf(output, "The area is %f sqm", area);
    return env->NewStringUTF(output);
}
