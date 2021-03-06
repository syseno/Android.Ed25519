/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_dazoe_android_Ed25519 */

#ifndef _Included_com_github_dazoe_android_Ed25519
#define _Included_com_github_dazoe_android_Ed25519

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_github_dazoe_android_Ed25519
 * Method:    PrivateKeyFromSeedN
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_dazoe_android_Ed25519_ExpandPrivateKeyN
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_github_dazoe_android_Ed25519
 * Method:    SignN
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_dazoe_android_Ed25519_SignN
  (JNIEnv *, jclass, jbyteArray, jbyteArray);

/*
 * Class:     com_github_dazoe_android_Ed25519
 * Method:    VerifyN
 * Signature: ([B[B[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_dazoe_android_Ed25519_VerifyN
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif

JNIEnv *_env;


#endif
