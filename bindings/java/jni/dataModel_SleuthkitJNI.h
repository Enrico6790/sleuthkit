/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_sleuthkit_datamodel_SleuthkitJNI */

#ifndef _Included_org_sleuthkit_datamodel_SleuthkitJNI
#define _Included_org_sleuthkit_datamodel_SleuthkitJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    getVersionNat
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_getVersionNat
  (JNIEnv *, jclass);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    startVerboseLoggingNat
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_startVerboseLoggingNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    newCaseDbNat
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_newCaseDbNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    newCaseDbMultiNat
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_newCaseDbMultiNat
  (JNIEnv *, jclass, jstring, jstring, jstring, jstring, jint, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openCaseDbMultiNat
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openCaseDbMultiNat
  (JNIEnv *, jclass, jstring, jstring, jstring, jstring, jint, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openCaseDbNat
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openCaseDbNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeCaseDbNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeCaseDbNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbOpenNat
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbOpenNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbNewNat
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbNewNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbBeginTransactionNat
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbBeginTransactionNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbCommitTransactionNat
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbCommitTransactionNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbRollbackTransactionNat
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbRollbackTransactionNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbAddEntryNat
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbAddEntryNat
  (JNIEnv *, jclass, jstring, jstring, jstring, jstring, jstring, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbIsUpdateableNat
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbIsUpdateableNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbIsReindexableNat
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbIsReindexableNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbPathNat
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbPathNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbIndexPathNat
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbIndexPathNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbGetDisplayName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbGetDisplayName
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbCloseAll
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbCloseAll
  (JNIEnv *, jclass);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbCreateIndexNat
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbCreateIndexNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbIndexExistsNat
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbIndexExistsNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbIsIdxOnlyNat
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbIsIdxOnlyNat
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbLookup
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbLookup
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    hashDbLookupVerbose
 * Signature: (Ljava/lang/String;I)Lorg/sleuthkit/datamodel/HashHitInfo;
 */
JNIEXPORT jobject JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_hashDbLookupVerbose
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    initAddImgNat
 * Signature: (JLjava/lang/String;ZZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_initAddImgNat
  (JNIEnv *, jclass, jlong, jstring, jboolean, jboolean);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    runAddImgNat
 * Signature: (JLjava/lang/String;[Ljava/lang/String;ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_runAddImgNat
  (JNIEnv *, jclass, jlong, jstring, jobjectArray, jint, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    stopAddImgNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_stopAddImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    revertAddImgNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_revertAddImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    commitAddImgNat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_commitAddImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openImgNat
 * Signature: ([Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openImgNat
  (JNIEnv *, jclass, jobjectArray, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openVsNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openVsNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openVolNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openVolNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openFsNat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openFsNat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    openFileNat
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_openFileNat
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readImgNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readImgNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readVsNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readVsNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readVolNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readVolNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readFsNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readFsNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    readFileNat
 * Signature: (J[BJJ)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_readFileNat
  (JNIEnv *, jclass, jlong, jbyteArray, jlong, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    saveFileMetaDataTextNat
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_saveFileMetaDataTextNat
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeImgNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeImgNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeVsNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeVsNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeFsNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeFsNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    closeFileNat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_closeFileNat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    findDeviceSizeNat
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_findDeviceSizeNat
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_sleuthkit_datamodel_SleuthkitJNI
 * Method:    getCurDirNat
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sleuthkit_datamodel_SleuthkitJNI_getCurDirNat
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_sleuthkit_datamodel_SleuthkitJNI_CaseDbHandle */

#ifndef _Included_org_sleuthkit_datamodel_SleuthkitJNI_CaseDbHandle
#define _Included_org_sleuthkit_datamodel_SleuthkitJNI_CaseDbHandle
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_sleuthkit_datamodel_SleuthkitJNI_CaseDbHandle_AddImageProcess */

#ifndef _Included_org_sleuthkit_datamodel_SleuthkitJNI_CaseDbHandle_AddImageProcess
#define _Included_org_sleuthkit_datamodel_SleuthkitJNI_CaseDbHandle_AddImageProcess
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
