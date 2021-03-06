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


#ifndef _SyncServices_H_
#define _SyncServices_H_

#import <Foundation/Foundation.h>

#import <SyncServices/manual.h>

#import <SyncServices/ISDChangeSource.h>
#import <SyncServices/ISyncAlertCallback.h>
#import <SyncServices/ISyncConflictPropertyType.h>
#import <SyncServices/ISyncFiltering.h>
#import <SyncServices/ISyncNameNumberProvider.h>
#import <SyncServices/ISyncServer.h>
#import <SyncServices/ISyncServerUIHandling.h>
#import <SyncServices/ISyncSessionCallback.h>
#import <SyncServices/MinglerSyncStateMutating.h>
#import <SyncServices/NSKeyedArchiverDelegate.h>
#import <SyncServices/NSKeyedUnarchiverDelegate.h>
#import <SyncServices/NSMachPortDelegate.h>
#import <SyncServices/NSPortDelegate.h>
#import <SyncServices/SchemaModificationCallbacks.h>
#import <SyncServices/ISDKeyedArchiverHelperToRemoveSyncStates.h>
#import <SyncServices/ISDAdminDatabase.h>
#import <SyncServices/DataMgrBasedNameNumberProvider.h>
#import <SyncServices/ISDDataManager.h>
#import <SyncServices/ISDSchema.h>
#import <SyncServices/ISDSchemaParser.h>
#import <SyncServices/ISDSyncPlan.h>
#import <SyncServices/ISDSyncParticipant.h>
#import <SyncServices/ISDEntityComponent.h>
#import <SyncServices/ISDException.h>
#import <SyncServices/ISDSyncManager.h>
#import <SyncServices/ISDSyncJob.h>
#import <SyncServices/ServerBasedNameNumberProvider.h>
#import <SyncServices/ISDServerFileLockerDelegate.h>
#import <SyncServices/ISDServer.h>
#import <SyncServices/ISDDisabledServer.h>
#import <SyncServices/SyncClientNameNumberProvider.h>
#import <SyncServices/ISyncConcreteManager.h>
#import <SyncServices/ISyncManager.h>
#import <SyncServices/RelationshipInformation.h>
#import <SyncServices/ISDChangeEnumerator.h>
#import <SyncServices/ISDFiltratorThingy.h>
#import <SyncServices/ISyncConcreteSession.h>
#import <SyncServices/ISDInstrumentedEnumerator.h>
#import <SyncServices/ISyncInstrumentedSession.h>
#import <SyncServices/ISyncSession.h>
#import <SyncServices/ISyncConcreteChange.h>
#import <SyncServices/ISyncChange.h>
#import <SyncServices/ISyncConjunctionFilter.h>
#import <SyncServices/ISyncFilter.h>
#import <SyncServices/ISyncSimplyIgnoreLocalsFilter.h>
#import <SyncServices/ISyncAlwaysAcceptFilter.h>
#import <SyncServices/ISyncTCCAccessOperation.h>
#import <SyncServices/ISDSaveSyncServicesDirectoryCopyHandler.h>
#import <SyncServices/ISyncConcreteClient.h>
#import <SyncServices/ISyncClient.h>
#import <SyncServices/ISyncConcreteRecordSnapshot.h>
#import <SyncServices/ISyncRecordSnapshot.h>
#import <SyncServices/ISDDataDatabase.h>
#import <SyncServices/ISDDatabase.h>
#import <SyncServices/ISDChange.h>
#import <SyncServices/ISDPropertyChange.h>
#import <SyncServices/ISDChangeStore.h>
#import <SyncServices/ISDRecord.h>
#import <SyncServices/ISDRecordStore.h>
#import <SyncServices/ISDChangeBuilder.h>
#import <SyncServices/ISDChangePusher.h>
#import <SyncServices/ISDChangePuller.h>
#import <SyncServices/ISDStructuredDelta.h>
#import <SyncServices/ISDPropertyValue.h>
#import <SyncServices/ISDConflict.h>
#import <SyncServices/ISDConflictChangeEnumerator.h>
#import <SyncServices/ISDConflictAddEnumerator.h>
#import <SyncServices/ISDConflictManager.h>
#import <SyncServices/ISDRecordIdMap.h>
#import <SyncServices/ISDRecordIdMapper.h>
#import <SyncServices/ISDDataObject.h>
#import <SyncServices/ISDSyncState.h>
#import <SyncServices/ISDClientState.h>
#import <SyncServices/ISDFileReference.h>
#import <SyncServices/ISDClient.h>
#import <SyncServices/ISDEntity.h>
#import <SyncServices/ISDProperty.h>
#import <SyncServices/ISDRelationship.h>
#import <SyncServices/ISDDataClass.h>
#import <SyncServices/ISyncPlan.h>
#import <SyncServices/ISDCallHistory.h>
#import <SyncServices/ISDPropertyConflict.h>
#import <SyncServices/ISyncFileLocker.h>
#import <SyncServices/ISDObjectGraphWrapper.h>
#import <SyncServices/ISDQuickDirtyCoder.h>
#import <SyncServices/ISyncSessionDriver.h>
#import <SyncServices/ISyncConcreteSessionDriver.h>
#import <SyncServices/ISyncConcreteRecordReference.h>
#import <SyncServices/ISyncRecordReference.h>
#import <SyncServices/ISDRecordIdMapDatabase.h>
#import <SyncServices/ISDPreNameNumberMapIdMapDatabase.h>
#import <SyncServices/ISDSqliteRecordIdMapper.h>
#import <SyncServices/IDMapping.h>
#import <SyncServices/ISDIdMapDatabase.h>
#import <SyncServices/ISyncRecordView.h>
#import <SyncServices/ISyncConcreteRecordView.h>
#import <SyncServices/ISyncRecordViewWithConflicts.h>
#import <SyncServices/ISyncRecordGraphNode.h>
#import <SyncServices/ISyncConcreteRecordGraphNode.h>
#import <SyncServices/ISyncRecordWithConflictGraphNode.h>
#import <SyncServices/ISDDataWrapper.h>
#import <SyncServices/ISDDataReference.h>
#import <SyncServices/ISDDigestMaker.h>
#import <SyncServices/ISDPersistentStoreSyncer.h>
#import <SyncServices/ISDFastCDSyncHelper.h>
#import <SyncServices/ISDSqliteChangeStoreDatabase.h>
#import <SyncServices/ISDSqliteChangeStore.h>
#import <SyncServices/PresetNameNumberProvider.h>
#import <SyncServices/ISDNameNumberProvider.h>
#import <SyncServices/DefaultNameNumberProvider.h>
#import <SyncServices/ISDNameNumberMapping.h>
#import <SyncServices/ISDDataDirectoryVersion.h>
#import <SyncServices/ISDGlobalId.h>

void* ISDArrayAsGlobalIds(void);
void* ISDAsGlobalId(void);
void* ISDCleanupExtraLogFiles(void);
void* ISDCleanupLogFiles(void);
void* ISDDefaultDoublePrecision(void);
void* ISDEnableAllFacilities(void);
void* ISDEnableFacility(void);
void* ISDGetHostUUIDString(void);
void* ISDInitializeLogging(void);
void* ISDIsAppleInternalUser(void);
void* ISDMessageTrace(void);
void* ISDRemoveOrMoveAside(void);
void* ISDRollLogsInDirectory(void);
void* ISDSetLogFileDirectory(void);
void* ISDStringFromSyncMode(void);
void* ISDSyncingWithOtherClients(void);
void* _ISDActiveClientCheckIntervalDefault(void);
void* _ISDAirbagAnimationInterval(void);
void* _ISDAirbagDataclassBlacklist(void);
void* _ISDAirbagIsEnabled(void);
void* _ISDAirbagMinimumRecordsInTruthForDataclass(void);
void* _ISDAirbagSetAnimationInterval(void);
void* _ISDAirbagSetEnabled(void);
void* _ISDAirbagSetThreshold(void);
void* _ISDAirbagThreshold(void);
void* _ISDAirbagTimeout(void);
void* _ISDAllocUUID(void);
void* _ISDAllocUUIDString(void);
void* _ISDAllowMultipleAppClients(void);
void* _ISDAllowUnresolvedReferences(void);
void* _ISDAlwaysShowAirbagIsEnabled(void);
void* _ISDAlwaysShowAirbagSetEnabled(void);
void* _ISDAreDataWrappersDisabled(void);
void* _ISDArrayOfDictionariesFromQueryCallback(void);
void* _ISDBackdoorListenerPort(void);
void* _ISDBrandString(void);
void* _ISDChangeSourceVacuumThreshold(void);
void* _ISDCleanStringForFileSystem(void);
void* _ISDCleanupCallHistory(void);
void* _ISDCleanupExtraBeehiveBackupFiles(void);
void* _ISDClientNameSymlinkPathForClient(void);
void* _ISDClientReceiveTimeout(void);
void* _ISDClientSendTimeout(void);
void* _ISDClientSyncAlertHandlerBootstrapName(void);
void* _ISDComputeClosureOfEntityNames(void);
void* _ISDComputeConservativeClosureOfEntityNames(void);
void* _ISDComputeFileSystemNodeSize(void);
void* _ISDConnectRetryCount(void);
void* _ISDConnectTimeout(void);
void* _ISDCopyUUIDAsData(void);
void* _ISDCopyUUIDAsString(void);
void* _ISDCreateUUID(void);
void* _ISDDataDirectoryPathForClient(void);
void* _ISDDataWrapperThresholdSize(void);
void* _ISDDatabaseAccessStatus(void);
void* _ISDDefaultDataDirectoryPath(void);
void* _ISDDefaultLogDirectoryPath(void);
void* _ISDDefaultSyncServicesDirectoryPath(void);
void* _ISDDefaultSyncServicesLogDirectoryPath(void);
void* _ISDDisableUIHelpers(void);
void* _ISDDisabledServer(void);
void* _ISDDomainString(void);
void* _ISDEnsureDirectoryPathExists(void);
void* _ISDEntityNamesToDataclassNames(void);
void* _ISDFileSystemSafeString(void);
void* _ISDFileSystemSafeStringUsingHash(void);
void* _ISDFileSystemSafeStringUsingHex(void);
void* _ISDGetToplevelDataDirectory(void);
void* _ISDGetTruthDatabaseDirectoryForSegmentNamed(void);
void* _ISDHexDataDirectoryPathForClient(void);
void* _ISDHomeDirectoryIsOnSharedNetworkDrive(void);
void* _ISDInitializeLogging(void);
void* _ISDIsContactSyncingAllowed(void);
void* _ISDIsDatabaseAtPathCorrupted(void);
void* _ISDIsSyncingEnabled(void);
void* _ISDLimitAlwaysShowAirbagDataclasses(void);
void* _ISDLog(void);
void* _ISDLogDirectoryPathForClient(void);
void* _ISDLogLevelToString(void);
void* _ISDLogSql(void);
void* _ISDMaxSessionCreationTime(void);
void* _ISDMessageTrace(void);
void* _ISDNewActiveClientCheckDate(void);
void* _ISDNewPurgeAndVacuumDate(void);
void* _ISDNumberOfBeehiveBackupFilesToKeep(void);
void* _ISDNumberOfLogFiles(void);
void* _ISDPotentialLogFileNames(void);
void* _ISDPruneFilePath(void);
void* _ISDPurgeAndVacuumIntervalDefault(void);
void* _ISDSPathForSQLiteDatabase(void);
void* _ISDSQLiteBlowOut(void);
void* _ISDSQLiteTraceSQL(void);
void* _ISDSQliteFullIOErrCorruptionHandler(void);
void* _ISDSaveClientDataBeforeMingler(void);
void* _ISDSaveDataDirectorySnapshot(void);
void* _ISDSaveDirectoryPathInDirectory(void);
void* _ISDSaveSyncServicesDirectoryForException(void);
void* _ISDServerBootstrapName(void);
void* _ISDServerPath(void);
void* _ISDSetActiveClientCheckIntervalDefault(void);
void* _ISDSetAllowUnresolvedReferences(void);
void* _ISDSetAreDataWrappersDisabled(void);
void* _ISDSetDisabledServer(void);
void* _ISDSetNumberOfLogFiles(void);
void* _ISDSetShouldCompressClientState(void);
void* _ISDSetShouldEnableBackdoorListener(void);
void* _ISDSetShouldEnableDebugMenu(void);
void* _ISDSetShouldEnableGrowlNotifications(void);
void* _ISDSetShouldExcludeSyncingPreferences(void);
void* _ISDSetShouldSaveAdditionalInfoWhenMingleFails(void);
void* _ISDSetShouldSaveCallHistory(void);
void* _ISDSetShouldSaveCallHistoryForEveryCall(void);
void* _ISDSetShouldSaveClientState(void);
void* _ISDSetShouldSavePushedChanges(void);
void* _ISDSetShouldUseSmartExceptionsInSyncServer(void);
void* _ISDSetShowAnchorMismatchDialog(void);
void* _ISDSetShowDetailOnLoad(void);
void* _ISDSetSyncingEnabled(void);
void* _ISDShouldCleanupAllCallHistory(void);
void* _ISDShouldCompressClientState(void);
void* _ISDShouldDisableUIHelpers(void);
void* _ISDShouldEnableBackdoorListener(void);
void* _ISDShouldEnableDebugMenu(void);
void* _ISDShouldEnableGrowlNotifications(void);
void* _ISDShouldExcludeSyncingPreferences(void);
void* _ISDShouldLog(void);
void* _ISDShouldLogEverything(void);
void* _ISDShouldLogKey(void);
void* _ISDShouldLogPersonalInfo(void);
void* _ISDShouldRequireLowercaseTypes(void);
void* _ISDShouldSaveAdditionalInfoWhenMingleFails(void);
void* _ISDShouldSaveCallHistory(void);
void* _ISDShouldSaveCallHistoryForEveryCall(void);
void* _ISDShouldSaveClientState(void);
void* _ISDShouldSavePushedChanges(void);
void* _ISDShouldUseSmartExceptionsInSyncServer(void);
void* _ISDShouldValidateClients(void);
void* _ISDShouldValidatePushedChangesAndRecords(void);
void* _ISDShouldValidateTypesInSchemas(void);
void* _ISDShowAnchorMismatchDialog(void);
void* _ISDShowDetailOnLoad(void);
void* _ISDSqliteCacheSize(void);
void* _ISDStringToLogLevel(void);
void* _ISDSyncAlertReceiveTimeout(void);
void* _ISDSyncAlertSendTimeout(void);
void* _ISDSyncDirectoryFileSystemSupportsHardLinks(void);
void* _ISDSyncUIDaemonReceiveTimeout(void);
void* _ISDSyncUIDaemonSendTimeout(void);
void* _ISDSyncingEntitiesAllowed(void);
void* _ISDSyncsAfterHysteresis(void);
void* _ISDUseExtendedFiltering(void);
void* _ISDVLog(void);
void* _ISD_UTNameNumberSetup(void);
void* _ISD_UTNameNumberTearDown(void);
void* _ISDfileIsLocked(void);
void* _ISyncAssertFailed(void);
void* _ISyncPreconditionFailed(void);
void* _ISyncPrivateInstance(void);
void* _WarnAboutUsingISyncDataClassImageKey(void);
void* __ISDDefaultSyncServicesDirectoryPath(void);
void* __ISDDefaultSyncServicesLogDirectoryPath(void);
void* __ISyncThouShallNotSubclass(void);
void* _dataclassNamesForEntities(void);
void* _executeSQL(void);
void* _executeStatement(void);
void* _insertIdReferences(void);
void* _isRunningInServer(void);
void* _setIsRunningInServer(void);
void* beginExclusiveTransaction(void);
void* beginImmediateTransaction(void);
void* beginTransaction(void);
void* checkin_mach_service(void);
void* commitTransaction(void);
void* conflictsCount(void);
void* createCalendarRequestPort(void);
void* databaseGotCorrupted(void);
void* databasePath(void);
void* getColumnDescriptionWithSql(void);
void* googleFound(void);
void* integrityResult(void);
void* isd_addRecordIdToArray(void);
void* isd_clientAsNumber(void);
void* isd_clientName(void);
void* isd_clientNumber(void);
void* isd_entityAsNumber(void);
void* isd_entityName(void);
void* isd_entityNumber(void);
void* isd_mapArray(void);
void* rollbackTransaction(void);
void* sqliteExecute(void);
void* sqliteExecuteWithCallback(void);
void* sqliteExecuteWithCallbackAndOptions(void);
void* syncServerPreference(void);

#endif
