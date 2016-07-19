/*
  *
  * Copyright (C) 2015 Seungwoo Baek, Jimant technology,Inc.
  *
  * Licensed under the LGPL v3 see the file LICENSE in base directory.
  *
*/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include "encryption_JniKeyEncrypt.h"
#include <stdio.h>
#include "../../../core/keyManager/keyManager.h"
/* Header for class JniKeyEncrypt */

/*
 * Class:     JniKeyEncrypt
 * Method:    generateKeyEncryptKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_encryption_JniKeyEncrypt_generateKeyEncryptKey
  (JNIEnv * env, jobject obj, jstring key) {
	  const char * jstrKey = (*env)->GetStringUTFChars(env, key, 0);
      const char* kek = generateKeyEncryptKey(jstrKey);
      jstring jstrBuf = (*env)->NewStringUTF(env, kek);
      return jstrBuf;
  }

/*
 * Class:     JniKeyEncrypt
 * Method:    generateEncryptKey
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_encryption_JniKeyEncrypt_generateEncryptKey
  (JNIEnv * env, jobject obj, jstring key, jstring kek) {
	   const char * jstrKey = (*env)->GetStringUTFChars(env, key, 0);
       const char * jstrKek = (*env)->GetStringUTFChars(env, kek, 0);

       const char* encKey = generateEncryptKey(jstrKey, jstrKek);
       jstring jstrBuf = (*env)->NewStringUTF(env, encKey);
       return jstrBuf;
  }

/*
 * Class:     JniKeyEncrypt
 * Method:    regenerateEncryptKey
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_encryption_JniKeyEncrypt_regenerateEncryptKey
  (JNIEnv * env, jobject obj, jstring eck, jstring oldKey, jstring kek) {
	  const char * jstrEck = (*env)->GetStringUTFChars(env, eck, 0);
	  const char * jstrOldKey = (*env)->GetStringUTFChars(env, oldKey, 0);
	  const char * jstrKek = (*env)->GetStringUTFChars(env, kek, 0);

	  const char* remakeKek = regenerateEncryptKey(jstrEck, jstrOldKey, jstrKek);
      jstring jstrBuf = (*env)->NewStringUTF(env, remakeKek);
      return jstrBuf;
}
