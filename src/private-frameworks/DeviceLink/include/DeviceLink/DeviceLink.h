/*
 This file is part of Darling.

 Copyright (C) 2021 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _DeviceLink_H_
#define _DeviceLink_H_

void* CFPrintf(void);
void* DLConnect(void);
void* DLConnectToDeviceWithPort(void);
void* DLConnectToServiceOnDevice(void);
void* DLConnectToServiceOnDeviceWithOptions(void);
void* DLConnectionInfoCreateForEndpoint(void);
void* DLContentsOfDirectory(void);
void* DLCopyConnectedDeviceArray(void);
void* DLCopyFileAttributes(void);
void* DLCopyHomeDirPath(void);
void* DLCopyItem(void);
void* DLCopyTempDir(void);
void* DLCreateCStringFromCFString(void);
void* DLCreateCondition(void);
void* DLCreateDataFromString(void);
void* DLCreateDeviceLinkConnectionForComputer(void);
void* DLCreateDeviceLinkConnectionForDevice(void);
void* DLCreateDirectory(void);
void* DLCreateMutex(void);
void* DLCreatePropertyListFromFile(void);
void* DLCreateStringFromData(void);
void* DLCreateUUID(void);
void* DLDataCreateWithMallocedBytesNoCopy(void);
void* DLDeleteCondition(void);
void* DLDeleteDeviceLinkConnection(void);
void* DLDeleteMutex(void);
void* DLDeviceArrayCallbacks(void);
void* DLDeviceCopyAMDValue(void);
void* DLDeviceCreateDescription(void);
void* DLDeviceGetAMDevice(void);
void* DLDeviceGetEndpointForType(void);
void* DLDeviceGetEndpoints(void);
void* DLDeviceGetName(void);
void* DLDeviceGetUDID(void);
void* DLDeviceGetUID(void);
void* DLDeviceGetWithName(void);
void* DLDeviceGetWithUDID(void);
void* DLDeviceGetWithUID(void);
void* DLDeviceListenerCreate(void);
void* DLDeviceListenerCreateWithCallbacks(void);
void* DLDeviceListenerDestroy(void);
void* DLDeviceListenerSetAttachedCallback(void);
void* DLDeviceListenerSetContext(void);
void* DLDeviceListenerSetDetachedCallback(void);
void* DLDeviceListenerSetStoppedCallback(void);
void* DLDevicePair(void);
void* DLDeviceReady(void);
void* DLDeviceRelease(void);
void* DLDeviceRetain(void);
void* DLDeviceSetAMDValue(void);
void* DLDeviceSetName(void);
void* DLDeviceValidatePairing(void);
void* DLDeviceWaitForAttachedDevice(void);
void* DLDisconnect(void);
void* DLDownloadFile(void);
void* DLDownloadFiles(void);
void* DLEndpointCreateDescription(void);
void* DLEnsureDirectoryExists(void);
void* DLGetDeviceLinkConnectionContext(void);
void* DLGetDeviceLinkConnectionInfo(void);
void* DLGetFileSystemRepresentation(void);
void* DLGetFlockForFile(void);
void* DLGetFlockForFileWithCancel(void);
void* DLGetFreeDiskSpace(void);
void* DLGetListenerSocketFromLaunchd(void);
void* DLGetProcessName(void);
void* DLGetProgressPercentage(void);
void* DLGetProgressSize(void);
void* DLGetUniqueProcessName(void);
void* DLHandleSentFilePiece(void);
void* DLHandleSentFilePieceEncrypted(void);
void* DLIsBlock(void);
void* DLIsChar(void);
void* DLIsDir(void);
void* DLIsFIFO(void);
void* DLIsRegular(void);
void* DLIsSocket(void);
void* DLIsSymlink(void);
void* DLKillConnection(void);
void* DLListenerCopyErrorString(void);
void* DLListenerGetErrorString(void);
void* DLLock(void);
void* DLLoggingEnabled(void);
void* DLMemoryPoolAddObject(void);
void* DLMemoryPoolCreate(void);
void* DLMoveItem(void);
void* DLMoveItems(void);
void* DLOutputEnabled(void);
void* DLPing(void);
void* DLProcessMessage(void);
void* DLRegenerateUniqueProcessName(void);
void* DLReleaseArgsAndReturn(void);
void* DLReleaseFlockForFile(void);
void* DLRemoveItem(void);
void* DLRemoveItems(void);
void* DLRequestFile(void);
void* DLSendFile(void);
void* DLSetLogDirectoryName(void);
void* DLSetLogLevel(void);
void* DLSetOutputLevel(void);
void* DLSetProcessName(void);
void* DLSetProgress(void);
void* DLSetRootDirectory(void);
void* DLSetStatus(void);
void* DLShouldLog(void);
void* DLSignal(void);
void* DLStatusFromOSStatus(void);
void* DLStringByAppendingPathComponent(void);
void* DLStringByRemovingLastPathComponent(void);
void* DLThreadAddMessagePortToRunloop(void);
void* DLThreadCreateReceivePort(void);
void* DLThreadCreateSendPort(void);
void* DLThreadCreateThread(void);
void* DLThreadDeleteReceivePort(void);
void* DLThreadDeleteSendPort(void);
void* DLThreadRun(void);
void* DLThreadSendMessage(void);
void* DLThreadSendSyncMessage(void);
void* DLUnlock(void);
void* DLUploadFile(void);
void* DLUploadFiles(void);
void* DLWait(void);
void* DLWaitForConnection(void);
void* DLWaitForMessage(void);
void* DLWritePropertyListToFile(void);
void* DLWritePropertyListToFileWithFormat(void);
void* SetSocketLogCallback(void);
void* SocketAccept(void);
void* SocketConnect(void);
void* SocketConnectLocal(void);
void* SocketConnectLockdownService(void);
void* SocketCreateLocalServer(void);
void* SocketCreateServer(void);
void* SocketCreateServerWithSocket(void);
void* SocketDelete(void);
void* SocketRecv(void);
void* SocketSend(void);
void* SocketStreamHandlerRegisterCreator(void);
void* StreamHandlerAccept(void);
void* StreamHandlerClose(void);
void* StreamHandlerConnect(void);
void* StreamHandlerDeleteStreamHandler(void);
void* StreamHandlerForType(void);
void* StreamHandlerReceive(void);
void* StreamHandlerRegisterCreatorForType(void);
void* StreamHandlerSend(void);
void* _DLBulkOperationContextAddResult(void);
void* _DLBulkOperationContextCreateResult(void);
void* _DLBulkOperationContextDealloc(void);
void* _DLBulkOperationContextInit(void);
void* _DLBulkOperationContextMergeResults(void);
void* _DLBulkOperationContextMergeResultsCallback(void);
void* _DLBulkOperationContextSendStatusResponse(void);
void* _DLBulkOperationContextSetStatus(void);
void* _DLBulkOperationContextShouldContinue(void);
void* _DLBulkOperationContextUpdate(void);
void* _DLBulkOperationSendChunk(void);
void* _DLBulkOperationSendFinalChunk(void);
void* _DLCheckForDisconnect(void);
void* _DLContentsOfDirectoryOnComputerCallback(void);
void* _DLCopyFileOnComputer(void);
void* _DLCopyItemOnComputerCallback(void);
void* _DLCreateBulkOperationContextStatusResponseData(void);
void* _DLCreateDeviceLinkConnectionForComputer(void);
void* _DLCreateDeviceLinkConnectionForDevice(void);
void* _DLCreateItemAttributes(void);
void* _DLCreateStatusResponseData(void);
void* _DLDeviceCreateDescription(void);
void* _DLDeviceGetDeviceIdentifier(void);
void* _DLDownloadFileFromComputer(void);
void* _DLDownloadFileToDevice(void);
void* _DLEnumerateContentsOfDirectoryOnComputer(void);
void* _DLGetParameterAtIndex(void);
void* _DLGetParameterAtIndexWithDefaultValue(void);
void* _DLGetStatusResponseFromData(void);
void* _DLHandlerThreadReadMessage(void);
void* _DLHandlerThreadWriteMessage(void);
void* _DLLog(void);
void* _DLMoveItemsOnComputerCallback(void);
void* _DLOperationProgressContextInit(void);
void* _DLOperationProgressContextUpdate(void);
void* _DLProcessSyncMessageWithStatusResponse(void);
void* _DLProcessSyncMessageWithStatusResponseV(void);
void* _DLReceiveFileForBulkOperation(void);
void* _DLRemoveDirectory(void);
void* _DLRemoveItemOnComputerCallback(void);
void* _DLRemoveItemUsingOldProtocolCallback(void);
void* _DLRemoveItemsOnComputerCallback(void);
void* _DLRemoveItemsUsingOldProtocol(void);
void* _DLRemoveItemsUsingOldProtocolCallback(void);
void* _DLRequestRead(void);
void* _DLRequestWrite(void);
void* _DLRequestWriteV(void);
void* _DLResolveAndValidatePath(void);
void* _DLSendFileForBulkOperation(void);
void* _DLSingleFromMultiError(void);
void* _DLThreadSendMessage(void);
void* _DLUploadFileToComputer(void);
void* _DLUploadFilesFromDeviceCallback(void);
void* _DLWarnAboutUsingCopyHomeDirPathAndCallDLCopyHomeDirPath(void);
void* _RunLoopReadSourceCallback(void);
void* __DLCopyItemOnComputer(void);
void* __DLCreateDirectoryOnComputer(void);
void* _deviceWithBetterEndpoint(void);
void* copyHomeDirPath(void);
void* copyKeysAndValuesFromDictionary(void);
void* copyKeysAndValuesFromDictionaryNoRetain(void);
void* copyKeysFromDictionary(void);
void* copyKeysFromDictionaryNoRetain(void);
void* copyValuesFromDictionary(void);
void* copyValuesFromDictionaryNoRetain(void);
void* createDecryptedData(void);
void* createEncryptedData(void);
void* createFileAuthBlob(void);
void* createFileKeyFromAuthBlob(void);
void* createRandomBytes(void);
void* genericAcceptFailedCallback(void);
void* genericConnectionFailedCallback(void);
void* genericConnectionLostCallback(void);
void* genericConnectionMadeCallback(void);
void* genericDisconnectCallback(void);
void* genericIncomingConnectionCallback(void);
void* genericPingCallback(void);
void* genericProcessMessageCallback(void);
void* genericProgressCallback(void);
void* genericRequestFileCallback(void);
void* genericSendFileCallback(void);
void* printFileTransferStatus(void);

#endif
