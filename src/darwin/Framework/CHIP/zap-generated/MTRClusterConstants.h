/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <stdint.h>

#pragma mark - Clusters IDs

typedef NS_ENUM(uint32_t, MTRClusterIDType) {
    MTRClusterIdentifyID = 0x00000003,
    MTRClusterGroupsID = 0x00000004,
    MTRClusterScenesID = 0x00000005,
    MTRClusterOnOffID = 0x00000006,
    MTRClusterOnOffSwitchConfigurationID = 0x00000007,
    MTRClusterLevelControlID = 0x00000008,
    MTRClusterBinaryInputBasicID = 0x0000000F,
    MTRClusterPulseWidthModulationID = 0x0000001C,
    MTRClusterDescriptorID = 0x0000001D,
    MTRClusterBindingID = 0x0000001E,
    MTRClusterAccessControlID = 0x0000001F,
    MTRClusterActionsID = 0x00000025,
    MTRClusterBasicID = 0x00000028,
    MTRClusterOtaSoftwareUpdateProviderID = 0x00000029,
    MTRClusterOtaSoftwareUpdateRequestorID = 0x0000002A,
    MTRClusterLocalizationConfigurationID = 0x0000002B,
    MTRClusterTimeFormatLocalizationID = 0x0000002C,
    MTRClusterUnitLocalizationID = 0x0000002D,
    MTRClusterPowerSourceConfigurationID = 0x0000002E,
    MTRClusterPowerSourceID = 0x0000002F,
    MTRClusterGeneralCommissioningID = 0x00000030,
    MTRClusterNetworkCommissioningID = 0x00000031,
    MTRClusterDiagnosticLogsID = 0x00000032,
    MTRClusterGeneralDiagnosticsID = 0x00000033,
    MTRClusterSoftwareDiagnosticsID = 0x00000034,
    MTRClusterThreadNetworkDiagnosticsID = 0x00000035,
    MTRClusterWiFiNetworkDiagnosticsID = 0x00000036,
    MTRClusterEthernetNetworkDiagnosticsID = 0x00000037,
    MTRClusterTimeSynchronizationID = 0x00000038,
    MTRClusterBridgedDeviceBasicID = 0x00000039,
    MTRClusterSwitchID = 0x0000003B,
    MTRClusterAdministratorCommissioningID = 0x0000003C,
    MTRClusterOperationalCredentialsID = 0x0000003E,
    MTRClusterGroupKeyManagementID = 0x0000003F,
    MTRClusterFixedLabelID = 0x00000040,
    MTRClusterUserLabelID = 0x00000041,
    MTRClusterProxyConfigurationID = 0x00000042,
    MTRClusterProxyDiscoveryID = 0x00000043,
    MTRClusterProxyValidID = 0x00000044,
    MTRClusterBooleanStateID = 0x00000045,
    MTRClusterModeSelectID = 0x00000050,
    MTRClusterDoorLockID = 0x00000101,
    MTRClusterWindowCoveringID = 0x00000102,
    MTRClusterBarrierControlID = 0x00000103,
    MTRClusterPumpConfigurationAndControlID = 0x00000200,
    MTRClusterThermostatID = 0x00000201,
    MTRClusterFanControlID = 0x00000202,
    MTRClusterThermostatUserInterfaceConfigurationID = 0x00000204,
    MTRClusterColorControlID = 0x00000300,
    MTRClusterBallastConfigurationID = 0x00000301,
    MTRClusterIlluminanceMeasurementID = 0x00000400,
    MTRClusterTemperatureMeasurementID = 0x00000402,
    MTRClusterPressureMeasurementID = 0x00000403,
    MTRClusterFlowMeasurementID = 0x00000404,
    MTRClusterRelativeHumidityMeasurementID = 0x00000405,
    MTRClusterOccupancySensingID = 0x00000406,
    MTRClusterWakeOnLanID = 0x00000503,
    MTRClusterChannelID = 0x00000504,
    MTRClusterTargetNavigatorID = 0x00000505,
    MTRClusterMediaPlaybackID = 0x00000506,
    MTRClusterMediaInputID = 0x00000507,
    MTRClusterLowPowerID = 0x00000508,
    MTRClusterKeypadInputID = 0x00000509,
    MTRClusterContentLauncherID = 0x0000050A,
    MTRClusterAudioOutputID = 0x0000050B,
    MTRClusterApplicationLauncherID = 0x0000050C,
    MTRClusterApplicationBasicID = 0x0000050D,
    MTRClusterAccountLoginID = 0x0000050E,
    MTRClusterElectricalMeasurementID = 0x00000B04,
    MTRClusterUnitTestingID MTR_NEWLY_AVAILABLE = 0xFFF1FC05,
    MTRClusterTestClusterID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingID") = 0xFFF1FC05,
    MTRClusterFaultInjectionID = 0xFFF1FC06,
};

#pragma mark - Attributes IDs

typedef NS_ENUM(uint32_t, MTRClusterAttributeIDType) {
    // Global attributes
    MTRClusterGlobalAttributeGeneratedCommandListID = 0x0000FFF8,
    MTRClusterGlobalAttributeAcceptedCommandListID = 0x0000FFF9,
    MTRClusterGlobalAttributeAttributeListID = 0x0000FFFB,
    MTRClusterGlobalAttributeFeatureMapID = 0x0000FFFC,
    MTRClusterGlobalAttributeClusterRevisionID = 0x0000FFFD,

    // Cluster Identify attributes
    MTRClusterIdentifyAttributeIdentifyTimeID = 0x00000000,
    MTRClusterIdentifyAttributeIdentifyTypeID = 0x00000001,
    MTRClusterIdentifyAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterIdentifyAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterIdentifyAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterIdentifyAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterIdentifyAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Groups attributes
    MTRClusterGroupsAttributeNameSupportID = 0x00000000,
    MTRClusterGroupsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterGroupsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterGroupsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterGroupsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterGroupsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Scenes attributes
    MTRClusterScenesAttributeSceneCountID = 0x00000000,
    MTRClusterScenesAttributeCurrentSceneID = 0x00000001,
    MTRClusterScenesAttributeCurrentGroupID = 0x00000002,
    MTRClusterScenesAttributeSceneValidID = 0x00000003,
    MTRClusterScenesAttributeNameSupportID = 0x00000004,
    MTRClusterScenesAttributeLastConfiguredByID = 0x00000005,
    MTRClusterScenesAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterScenesAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterScenesAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterScenesAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterScenesAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster OnOff attributes
    MTRClusterOnOffAttributeOnOffID = 0x00000000,
    MTRClusterOnOffAttributeGlobalSceneControlID = 0x00004000,
    MTRClusterOnOffAttributeOnTimeID = 0x00004001,
    MTRClusterOnOffAttributeOffWaitTimeID = 0x00004002,
    MTRClusterOnOffAttributeStartUpOnOffID = 0x00004003,
    MTRClusterOnOffAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterOnOffAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterOnOffAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterOnOffAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterOnOffAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster OnOffSwitchConfiguration attributes
    MTRClusterOnOffSwitchConfigurationAttributeSwitchTypeID = 0x00000000,
    MTRClusterOnOffSwitchConfigurationAttributeSwitchActionsID = 0x00000010,
    MTRClusterOnOffSwitchConfigurationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterOnOffSwitchConfigurationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterOnOffSwitchConfigurationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterOnOffSwitchConfigurationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterOnOffSwitchConfigurationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster LevelControl attributes
    MTRClusterLevelControlAttributeCurrentLevelID = 0x00000000,
    MTRClusterLevelControlAttributeRemainingTimeID = 0x00000001,
    MTRClusterLevelControlAttributeMinLevelID = 0x00000002,
    MTRClusterLevelControlAttributeMaxLevelID = 0x00000003,
    MTRClusterLevelControlAttributeCurrentFrequencyID = 0x00000004,
    MTRClusterLevelControlAttributeMinFrequencyID = 0x00000005,
    MTRClusterLevelControlAttributeMaxFrequencyID = 0x00000006,
    MTRClusterLevelControlAttributeOptionsID = 0x0000000F,
    MTRClusterLevelControlAttributeOnOffTransitionTimeID = 0x00000010,
    MTRClusterLevelControlAttributeOnLevelID = 0x00000011,
    MTRClusterLevelControlAttributeOnTransitionTimeID = 0x00000012,
    MTRClusterLevelControlAttributeOffTransitionTimeID = 0x00000013,
    MTRClusterLevelControlAttributeDefaultMoveRateID = 0x00000014,
    MTRClusterLevelControlAttributeStartUpCurrentLevelID = 0x00004000,
    MTRClusterLevelControlAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterLevelControlAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterLevelControlAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterLevelControlAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterLevelControlAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster BinaryInputBasic attributes
    MTRClusterBinaryInputBasicAttributeActiveTextID = 0x00000004,
    MTRClusterBinaryInputBasicAttributeDescriptionID = 0x0000001C,
    MTRClusterBinaryInputBasicAttributeInactiveTextID = 0x0000002E,
    MTRClusterBinaryInputBasicAttributeOutOfServiceID = 0x00000051,
    MTRClusterBinaryInputBasicAttributePolarityID = 0x00000054,
    MTRClusterBinaryInputBasicAttributePresentValueID = 0x00000055,
    MTRClusterBinaryInputBasicAttributeReliabilityID = 0x00000067,
    MTRClusterBinaryInputBasicAttributeStatusFlagsID = 0x0000006F,
    MTRClusterBinaryInputBasicAttributeApplicationTypeID = 0x00000100,
    MTRClusterBinaryInputBasicAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBinaryInputBasicAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBinaryInputBasicAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBinaryInputBasicAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBinaryInputBasicAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster PulseWidthModulation attributes
    MTRClusterPulseWidthModulationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterPulseWidthModulationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterPulseWidthModulationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterPulseWidthModulationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterPulseWidthModulationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Descriptor attributes
    MTRClusterDescriptorAttributeDeviceTypeListID API_AVAILABLE(ios(16.2), macos(13.1), watchos(9.2), tvos(16.2)) = 0x00000000,
    MTRClusterDescriptorAttributeDeviceListID = 0x00000000,
    MTRClusterDescriptorAttributeServerListID = 0x00000001,
    MTRClusterDescriptorAttributeClientListID = 0x00000002,
    MTRClusterDescriptorAttributePartsListID = 0x00000003,
    MTRClusterDescriptorAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterDescriptorAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterDescriptorAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterDescriptorAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterDescriptorAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Binding attributes
    MTRClusterBindingAttributeBindingID = 0x00000000,
    MTRClusterBindingAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBindingAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBindingAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBindingAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBindingAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster AccessControl attributes
    MTRClusterAccessControlAttributeAclID = 0x00000000,
    MTRClusterAccessControlAttributeExtensionID = 0x00000001,
    MTRClusterAccessControlAttributeSubjectsPerAccessControlEntryID = 0x00000002,
    MTRClusterAccessControlAttributeTargetsPerAccessControlEntryID = 0x00000003,
    MTRClusterAccessControlAttributeAccessControlEntriesPerFabricID = 0x00000004,
    MTRClusterAccessControlAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterAccessControlAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterAccessControlAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterAccessControlAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterAccessControlAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Actions attributes
    MTRClusterActionsAttributeActionListID = 0x00000000,
    MTRClusterActionsAttributeEndpointListsID = 0x00000001,
    MTRClusterActionsAttributeSetupURLID = 0x00000002,
    MTRClusterActionsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterActionsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterActionsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterActionsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterActionsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Basic attributes
    MTRClusterBasicAttributeDataModelRevisionID = 0x00000000,
    MTRClusterBasicAttributeVendorNameID = 0x00000001,
    MTRClusterBasicAttributeVendorIDID = 0x00000002,
    MTRClusterBasicAttributeProductNameID = 0x00000003,
    MTRClusterBasicAttributeProductIDID = 0x00000004,
    MTRClusterBasicAttributeNodeLabelID = 0x00000005,
    MTRClusterBasicAttributeLocationID = 0x00000006,
    MTRClusterBasicAttributeHardwareVersionID = 0x00000007,
    MTRClusterBasicAttributeHardwareVersionStringID = 0x00000008,
    MTRClusterBasicAttributeSoftwareVersionID = 0x00000009,
    MTRClusterBasicAttributeSoftwareVersionStringID = 0x0000000A,
    MTRClusterBasicAttributeManufacturingDateID = 0x0000000B,
    MTRClusterBasicAttributePartNumberID = 0x0000000C,
    MTRClusterBasicAttributeProductURLID = 0x0000000D,
    MTRClusterBasicAttributeProductLabelID = 0x0000000E,
    MTRClusterBasicAttributeSerialNumberID = 0x0000000F,
    MTRClusterBasicAttributeLocalConfigDisabledID = 0x00000010,
    MTRClusterBasicAttributeReachableID = 0x00000011,
    MTRClusterBasicAttributeUniqueIDID = 0x00000012,
    MTRClusterBasicAttributeCapabilityMinimaID = 0x00000013,
    MTRClusterBasicAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBasicAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBasicAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBasicAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBasicAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster OtaSoftwareUpdateProvider attributes
    MTRClusterOtaSoftwareUpdateProviderAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterOtaSoftwareUpdateProviderAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterOtaSoftwareUpdateProviderAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterOtaSoftwareUpdateProviderAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterOtaSoftwareUpdateProviderAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster OtaSoftwareUpdateRequestor attributes
    MTRClusterOtaSoftwareUpdateRequestorAttributeDefaultOtaProvidersID = 0x00000000,
    MTRClusterOtaSoftwareUpdateRequestorAttributeUpdatePossibleID = 0x00000001,
    MTRClusterOtaSoftwareUpdateRequestorAttributeUpdateStateID = 0x00000002,
    MTRClusterOtaSoftwareUpdateRequestorAttributeUpdateStateProgressID = 0x00000003,
    MTRClusterOtaSoftwareUpdateRequestorAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterOtaSoftwareUpdateRequestorAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterOtaSoftwareUpdateRequestorAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterOtaSoftwareUpdateRequestorAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterOtaSoftwareUpdateRequestorAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster LocalizationConfiguration attributes
    MTRClusterLocalizationConfigurationAttributeActiveLocaleID = 0x00000000,
    MTRClusterLocalizationConfigurationAttributeSupportedLocalesID = 0x00000001,
    MTRClusterLocalizationConfigurationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterLocalizationConfigurationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterLocalizationConfigurationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterLocalizationConfigurationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterLocalizationConfigurationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster TimeFormatLocalization attributes
    MTRClusterTimeFormatLocalizationAttributeHourFormatID = 0x00000000,
    MTRClusterTimeFormatLocalizationAttributeActiveCalendarTypeID = 0x00000001,
    MTRClusterTimeFormatLocalizationAttributeSupportedCalendarTypesID = 0x00000002,
    MTRClusterTimeFormatLocalizationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterTimeFormatLocalizationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterTimeFormatLocalizationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterTimeFormatLocalizationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterTimeFormatLocalizationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster UnitLocalization attributes
    MTRClusterUnitLocalizationAttributeTemperatureUnitID = 0x00000000,
    MTRClusterUnitLocalizationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterUnitLocalizationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterUnitLocalizationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterUnitLocalizationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterUnitLocalizationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster PowerSourceConfiguration attributes
    MTRClusterPowerSourceConfigurationAttributeSourcesID = 0x00000000,
    MTRClusterPowerSourceConfigurationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterPowerSourceConfigurationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterPowerSourceConfigurationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterPowerSourceConfigurationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterPowerSourceConfigurationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster PowerSource attributes
    MTRClusterPowerSourceAttributeStatusID = 0x00000000,
    MTRClusterPowerSourceAttributeOrderID = 0x00000001,
    MTRClusterPowerSourceAttributeDescriptionID = 0x00000002,
    MTRClusterPowerSourceAttributeWiredAssessedInputVoltageID = 0x00000003,
    MTRClusterPowerSourceAttributeWiredAssessedInputFrequencyID = 0x00000004,
    MTRClusterPowerSourceAttributeWiredCurrentTypeID = 0x00000005,
    MTRClusterPowerSourceAttributeWiredAssessedCurrentID = 0x00000006,
    MTRClusterPowerSourceAttributeWiredNominalVoltageID = 0x00000007,
    MTRClusterPowerSourceAttributeWiredMaximumCurrentID = 0x00000008,
    MTRClusterPowerSourceAttributeWiredPresentID = 0x00000009,
    MTRClusterPowerSourceAttributeActiveWiredFaultsID = 0x0000000A,
    MTRClusterPowerSourceAttributeBatVoltageID = 0x0000000B,
    MTRClusterPowerSourceAttributeBatPercentRemainingID = 0x0000000C,
    MTRClusterPowerSourceAttributeBatTimeRemainingID = 0x0000000D,
    MTRClusterPowerSourceAttributeBatChargeLevelID = 0x0000000E,
    MTRClusterPowerSourceAttributeBatReplacementNeededID = 0x0000000F,
    MTRClusterPowerSourceAttributeBatReplaceabilityID = 0x00000010,
    MTRClusterPowerSourceAttributeBatPresentID = 0x00000011,
    MTRClusterPowerSourceAttributeActiveBatFaultsID = 0x00000012,
    MTRClusterPowerSourceAttributeBatReplacementDescriptionID = 0x00000013,
    MTRClusterPowerSourceAttributeBatCommonDesignationID = 0x00000014,
    MTRClusterPowerSourceAttributeBatANSIDesignationID = 0x00000015,
    MTRClusterPowerSourceAttributeBatIECDesignationID = 0x00000016,
    MTRClusterPowerSourceAttributeBatApprovedChemistryID = 0x00000017,
    MTRClusterPowerSourceAttributeBatCapacityID = 0x00000018,
    MTRClusterPowerSourceAttributeBatQuantityID = 0x00000019,
    MTRClusterPowerSourceAttributeBatChargeStateID = 0x0000001A,
    MTRClusterPowerSourceAttributeBatTimeToFullChargeID = 0x0000001B,
    MTRClusterPowerSourceAttributeBatFunctionalWhileChargingID = 0x0000001C,
    MTRClusterPowerSourceAttributeBatChargingCurrentID = 0x0000001D,
    MTRClusterPowerSourceAttributeActiveBatChargeFaultsID = 0x0000001E,
    MTRClusterPowerSourceAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterPowerSourceAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterPowerSourceAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterPowerSourceAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterPowerSourceAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster GeneralCommissioning attributes
    MTRClusterGeneralCommissioningAttributeBreadcrumbID = 0x00000000,
    MTRClusterGeneralCommissioningAttributeBasicCommissioningInfoID = 0x00000001,
    MTRClusterGeneralCommissioningAttributeRegulatoryConfigID = 0x00000002,
    MTRClusterGeneralCommissioningAttributeLocationCapabilityID = 0x00000003,
    MTRClusterGeneralCommissioningAttributeSupportsConcurrentConnectionID = 0x00000004,
    MTRClusterGeneralCommissioningAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterGeneralCommissioningAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterGeneralCommissioningAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterGeneralCommissioningAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterGeneralCommissioningAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster NetworkCommissioning attributes
    MTRClusterNetworkCommissioningAttributeMaxNetworksID = 0x00000000,
    MTRClusterNetworkCommissioningAttributeNetworksID = 0x00000001,
    MTRClusterNetworkCommissioningAttributeScanMaxTimeSecondsID = 0x00000002,
    MTRClusterNetworkCommissioningAttributeConnectMaxTimeSecondsID = 0x00000003,
    MTRClusterNetworkCommissioningAttributeInterfaceEnabledID = 0x00000004,
    MTRClusterNetworkCommissioningAttributeLastNetworkingStatusID = 0x00000005,
    MTRClusterNetworkCommissioningAttributeLastNetworkIDID = 0x00000006,
    MTRClusterNetworkCommissioningAttributeLastConnectErrorValueID = 0x00000007,
    MTRClusterNetworkCommissioningAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterNetworkCommissioningAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterNetworkCommissioningAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterNetworkCommissioningAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterNetworkCommissioningAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster DiagnosticLogs attributes
    MTRClusterDiagnosticLogsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterDiagnosticLogsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterDiagnosticLogsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterDiagnosticLogsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterDiagnosticLogsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster GeneralDiagnostics attributes
    MTRClusterGeneralDiagnosticsAttributeNetworkInterfacesID = 0x00000000,
    MTRClusterGeneralDiagnosticsAttributeRebootCountID = 0x00000001,
    MTRClusterGeneralDiagnosticsAttributeUpTimeID = 0x00000002,
    MTRClusterGeneralDiagnosticsAttributeTotalOperationalHoursID = 0x00000003,
    MTRClusterGeneralDiagnosticsAttributeBootReasonsID = 0x00000004,
    MTRClusterGeneralDiagnosticsAttributeActiveHardwareFaultsID = 0x00000005,
    MTRClusterGeneralDiagnosticsAttributeActiveRadioFaultsID = 0x00000006,
    MTRClusterGeneralDiagnosticsAttributeActiveNetworkFaultsID = 0x00000007,
    MTRClusterGeneralDiagnosticsAttributeTestEventTriggersEnabledID = 0x00000008,
    MTRClusterGeneralDiagnosticsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterGeneralDiagnosticsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterGeneralDiagnosticsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterGeneralDiagnosticsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterGeneralDiagnosticsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster SoftwareDiagnostics attributes
    MTRClusterSoftwareDiagnosticsAttributeThreadMetricsID = 0x00000000,
    MTRClusterSoftwareDiagnosticsAttributeCurrentHeapFreeID = 0x00000001,
    MTRClusterSoftwareDiagnosticsAttributeCurrentHeapUsedID = 0x00000002,
    MTRClusterSoftwareDiagnosticsAttributeCurrentHeapHighWatermarkID = 0x00000003,
    MTRClusterSoftwareDiagnosticsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterSoftwareDiagnosticsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterSoftwareDiagnosticsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterSoftwareDiagnosticsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterSoftwareDiagnosticsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ThreadNetworkDiagnostics attributes
    MTRClusterThreadNetworkDiagnosticsAttributeChannelID = 0x00000000,
    MTRClusterThreadNetworkDiagnosticsAttributeRoutingRoleID = 0x00000001,
    MTRClusterThreadNetworkDiagnosticsAttributeNetworkNameID = 0x00000002,
    MTRClusterThreadNetworkDiagnosticsAttributePanIdID = 0x00000003,
    MTRClusterThreadNetworkDiagnosticsAttributeExtendedPanIdID = 0x00000004,
    MTRClusterThreadNetworkDiagnosticsAttributeMeshLocalPrefixID = 0x00000005,
    MTRClusterThreadNetworkDiagnosticsAttributeOverrunCountID = 0x00000006,
    MTRClusterThreadNetworkDiagnosticsAttributeNeighborTableListID = 0x00000007,
    MTRClusterThreadNetworkDiagnosticsAttributeRouteTableListID = 0x00000008,
    MTRClusterThreadNetworkDiagnosticsAttributePartitionIdID = 0x00000009,
    MTRClusterThreadNetworkDiagnosticsAttributeWeightingID = 0x0000000A,
    MTRClusterThreadNetworkDiagnosticsAttributeDataVersionID = 0x0000000B,
    MTRClusterThreadNetworkDiagnosticsAttributeStableDataVersionID = 0x0000000C,
    MTRClusterThreadNetworkDiagnosticsAttributeLeaderRouterIdID = 0x0000000D,
    MTRClusterThreadNetworkDiagnosticsAttributeDetachedRoleCountID = 0x0000000E,
    MTRClusterThreadNetworkDiagnosticsAttributeChildRoleCountID = 0x0000000F,
    MTRClusterThreadNetworkDiagnosticsAttributeRouterRoleCountID = 0x00000010,
    MTRClusterThreadNetworkDiagnosticsAttributeLeaderRoleCountID = 0x00000011,
    MTRClusterThreadNetworkDiagnosticsAttributeAttachAttemptCountID = 0x00000012,
    MTRClusterThreadNetworkDiagnosticsAttributePartitionIdChangeCountID = 0x00000013,
    MTRClusterThreadNetworkDiagnosticsAttributeBetterPartitionAttachAttemptCountID = 0x00000014,
    MTRClusterThreadNetworkDiagnosticsAttributeParentChangeCountID = 0x00000015,
    MTRClusterThreadNetworkDiagnosticsAttributeTxTotalCountID = 0x00000016,
    MTRClusterThreadNetworkDiagnosticsAttributeTxUnicastCountID = 0x00000017,
    MTRClusterThreadNetworkDiagnosticsAttributeTxBroadcastCountID = 0x00000018,
    MTRClusterThreadNetworkDiagnosticsAttributeTxAckRequestedCountID = 0x00000019,
    MTRClusterThreadNetworkDiagnosticsAttributeTxAckedCountID = 0x0000001A,
    MTRClusterThreadNetworkDiagnosticsAttributeTxNoAckRequestedCountID = 0x0000001B,
    MTRClusterThreadNetworkDiagnosticsAttributeTxDataCountID = 0x0000001C,
    MTRClusterThreadNetworkDiagnosticsAttributeTxDataPollCountID = 0x0000001D,
    MTRClusterThreadNetworkDiagnosticsAttributeTxBeaconCountID = 0x0000001E,
    MTRClusterThreadNetworkDiagnosticsAttributeTxBeaconRequestCountID = 0x0000001F,
    MTRClusterThreadNetworkDiagnosticsAttributeTxOtherCountID = 0x00000020,
    MTRClusterThreadNetworkDiagnosticsAttributeTxRetryCountID = 0x00000021,
    MTRClusterThreadNetworkDiagnosticsAttributeTxDirectMaxRetryExpiryCountID = 0x00000022,
    MTRClusterThreadNetworkDiagnosticsAttributeTxIndirectMaxRetryExpiryCountID = 0x00000023,
    MTRClusterThreadNetworkDiagnosticsAttributeTxErrCcaCountID = 0x00000024,
    MTRClusterThreadNetworkDiagnosticsAttributeTxErrAbortCountID = 0x00000025,
    MTRClusterThreadNetworkDiagnosticsAttributeTxErrBusyChannelCountID = 0x00000026,
    MTRClusterThreadNetworkDiagnosticsAttributeRxTotalCountID = 0x00000027,
    MTRClusterThreadNetworkDiagnosticsAttributeRxUnicastCountID = 0x00000028,
    MTRClusterThreadNetworkDiagnosticsAttributeRxBroadcastCountID = 0x00000029,
    MTRClusterThreadNetworkDiagnosticsAttributeRxDataCountID = 0x0000002A,
    MTRClusterThreadNetworkDiagnosticsAttributeRxDataPollCountID = 0x0000002B,
    MTRClusterThreadNetworkDiagnosticsAttributeRxBeaconCountID = 0x0000002C,
    MTRClusterThreadNetworkDiagnosticsAttributeRxBeaconRequestCountID = 0x0000002D,
    MTRClusterThreadNetworkDiagnosticsAttributeRxOtherCountID = 0x0000002E,
    MTRClusterThreadNetworkDiagnosticsAttributeRxAddressFilteredCountID = 0x0000002F,
    MTRClusterThreadNetworkDiagnosticsAttributeRxDestAddrFilteredCountID = 0x00000030,
    MTRClusterThreadNetworkDiagnosticsAttributeRxDuplicatedCountID = 0x00000031,
    MTRClusterThreadNetworkDiagnosticsAttributeRxErrNoFrameCountID = 0x00000032,
    MTRClusterThreadNetworkDiagnosticsAttributeRxErrUnknownNeighborCountID = 0x00000033,
    MTRClusterThreadNetworkDiagnosticsAttributeRxErrInvalidSrcAddrCountID = 0x00000034,
    MTRClusterThreadNetworkDiagnosticsAttributeRxErrSecCountID = 0x00000035,
    MTRClusterThreadNetworkDiagnosticsAttributeRxErrFcsCountID = 0x00000036,
    MTRClusterThreadNetworkDiagnosticsAttributeRxErrOtherCountID = 0x00000037,
    MTRClusterThreadNetworkDiagnosticsAttributeActiveTimestampID = 0x00000038,
    MTRClusterThreadNetworkDiagnosticsAttributePendingTimestampID = 0x00000039,
    MTRClusterThreadNetworkDiagnosticsAttributeDelayID = 0x0000003A,
    MTRClusterThreadNetworkDiagnosticsAttributeSecurityPolicyID = 0x0000003B,
    MTRClusterThreadNetworkDiagnosticsAttributeChannelPage0MaskID = 0x0000003C,
    MTRClusterThreadNetworkDiagnosticsAttributeOperationalDatasetComponentsID = 0x0000003D,
    MTRClusterThreadNetworkDiagnosticsAttributeActiveNetworkFaultsListID = 0x0000003E,
    MTRClusterThreadNetworkDiagnosticsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterThreadNetworkDiagnosticsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterThreadNetworkDiagnosticsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterThreadNetworkDiagnosticsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterThreadNetworkDiagnosticsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster WiFiNetworkDiagnostics attributes
    MTRClusterWiFiNetworkDiagnosticsAttributeBssidID = 0x00000000,
    MTRClusterWiFiNetworkDiagnosticsAttributeSecurityTypeID = 0x00000001,
    MTRClusterWiFiNetworkDiagnosticsAttributeWiFiVersionID = 0x00000002,
    MTRClusterWiFiNetworkDiagnosticsAttributeChannelNumberID = 0x00000003,
    MTRClusterWiFiNetworkDiagnosticsAttributeRssiID = 0x00000004,
    MTRClusterWiFiNetworkDiagnosticsAttributeBeaconLostCountID = 0x00000005,
    MTRClusterWiFiNetworkDiagnosticsAttributeBeaconRxCountID = 0x00000006,
    MTRClusterWiFiNetworkDiagnosticsAttributePacketMulticastRxCountID = 0x00000007,
    MTRClusterWiFiNetworkDiagnosticsAttributePacketMulticastTxCountID = 0x00000008,
    MTRClusterWiFiNetworkDiagnosticsAttributePacketUnicastRxCountID = 0x00000009,
    MTRClusterWiFiNetworkDiagnosticsAttributePacketUnicastTxCountID = 0x0000000A,
    MTRClusterWiFiNetworkDiagnosticsAttributeCurrentMaxRateID = 0x0000000B,
    MTRClusterWiFiNetworkDiagnosticsAttributeOverrunCountID = 0x0000000C,
    MTRClusterWiFiNetworkDiagnosticsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterWiFiNetworkDiagnosticsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterWiFiNetworkDiagnosticsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterWiFiNetworkDiagnosticsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterWiFiNetworkDiagnosticsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster EthernetNetworkDiagnostics attributes
    MTRClusterEthernetNetworkDiagnosticsAttributePHYRateID = 0x00000000,
    MTRClusterEthernetNetworkDiagnosticsAttributeFullDuplexID = 0x00000001,
    MTRClusterEthernetNetworkDiagnosticsAttributePacketRxCountID = 0x00000002,
    MTRClusterEthernetNetworkDiagnosticsAttributePacketTxCountID = 0x00000003,
    MTRClusterEthernetNetworkDiagnosticsAttributeTxErrCountID = 0x00000004,
    MTRClusterEthernetNetworkDiagnosticsAttributeCollisionCountID = 0x00000005,
    MTRClusterEthernetNetworkDiagnosticsAttributeOverrunCountID = 0x00000006,
    MTRClusterEthernetNetworkDiagnosticsAttributeCarrierDetectID = 0x00000007,
    MTRClusterEthernetNetworkDiagnosticsAttributeTimeSinceResetID = 0x00000008,
    MTRClusterEthernetNetworkDiagnosticsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterEthernetNetworkDiagnosticsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterEthernetNetworkDiagnosticsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterEthernetNetworkDiagnosticsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterEthernetNetworkDiagnosticsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster TimeSynchronization attributes
    MTRClusterTimeSynchronizationAttributeUTCTimeID = 0x00000000,
    MTRClusterTimeSynchronizationAttributeGranularityID = 0x00000001,
    MTRClusterTimeSynchronizationAttributeTimeSourceID = 0x00000002,
    MTRClusterTimeSynchronizationAttributeTrustedTimeNodeIdID = 0x00000003,
    MTRClusterTimeSynchronizationAttributeDefaultNtpID = 0x00000004,
    MTRClusterTimeSynchronizationAttributeTimeZoneID = 0x00000005,
    MTRClusterTimeSynchronizationAttributeDstOffsetID = 0x00000006,
    MTRClusterTimeSynchronizationAttributeLocalTimeID = 0x00000007,
    MTRClusterTimeSynchronizationAttributeTimeZoneDatabaseID = 0x00000008,
    MTRClusterTimeSynchronizationAttributeNtpServerPortID = 0x00000009,
    MTRClusterTimeSynchronizationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterTimeSynchronizationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterTimeSynchronizationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterTimeSynchronizationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterTimeSynchronizationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster BridgedDeviceBasic attributes
    MTRClusterBridgedDeviceBasicAttributeVendorNameID = 0x00000001,
    MTRClusterBridgedDeviceBasicAttributeVendorIDID = 0x00000002,
    MTRClusterBridgedDeviceBasicAttributeProductNameID = 0x00000003,
    MTRClusterBridgedDeviceBasicAttributeNodeLabelID = 0x00000005,
    MTRClusterBridgedDeviceBasicAttributeHardwareVersionID = 0x00000007,
    MTRClusterBridgedDeviceBasicAttributeHardwareVersionStringID = 0x00000008,
    MTRClusterBridgedDeviceBasicAttributeSoftwareVersionID = 0x00000009,
    MTRClusterBridgedDeviceBasicAttributeSoftwareVersionStringID = 0x0000000A,
    MTRClusterBridgedDeviceBasicAttributeManufacturingDateID = 0x0000000B,
    MTRClusterBridgedDeviceBasicAttributePartNumberID = 0x0000000C,
    MTRClusterBridgedDeviceBasicAttributeProductURLID = 0x0000000D,
    MTRClusterBridgedDeviceBasicAttributeProductLabelID = 0x0000000E,
    MTRClusterBridgedDeviceBasicAttributeSerialNumberID = 0x0000000F,
    MTRClusterBridgedDeviceBasicAttributeReachableID = 0x00000011,
    MTRClusterBridgedDeviceBasicAttributeUniqueIDID = 0x00000012,
    MTRClusterBridgedDeviceBasicAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBridgedDeviceBasicAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBridgedDeviceBasicAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBridgedDeviceBasicAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBridgedDeviceBasicAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Switch attributes
    MTRClusterSwitchAttributeNumberOfPositionsID = 0x00000000,
    MTRClusterSwitchAttributeCurrentPositionID = 0x00000001,
    MTRClusterSwitchAttributeMultiPressMaxID = 0x00000002,
    MTRClusterSwitchAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterSwitchAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterSwitchAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterSwitchAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterSwitchAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster AdministratorCommissioning attributes
    MTRClusterAdministratorCommissioningAttributeWindowStatusID = 0x00000000,
    MTRClusterAdministratorCommissioningAttributeAdminFabricIndexID = 0x00000001,
    MTRClusterAdministratorCommissioningAttributeAdminVendorIdID = 0x00000002,
    MTRClusterAdministratorCommissioningAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterAdministratorCommissioningAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterAdministratorCommissioningAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterAdministratorCommissioningAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterAdministratorCommissioningAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster OperationalCredentials attributes
    MTRClusterOperationalCredentialsAttributeNOCsID = 0x00000000,
    MTRClusterOperationalCredentialsAttributeFabricsID = 0x00000001,
    MTRClusterOperationalCredentialsAttributeSupportedFabricsID = 0x00000002,
    MTRClusterOperationalCredentialsAttributeCommissionedFabricsID = 0x00000003,
    MTRClusterOperationalCredentialsAttributeTrustedRootCertificatesID = 0x00000004,
    MTRClusterOperationalCredentialsAttributeCurrentFabricIndexID = 0x00000005,
    MTRClusterOperationalCredentialsAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterOperationalCredentialsAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterOperationalCredentialsAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterOperationalCredentialsAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterOperationalCredentialsAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster GroupKeyManagement attributes
    MTRClusterGroupKeyManagementAttributeGroupKeyMapID = 0x00000000,
    MTRClusterGroupKeyManagementAttributeGroupTableID = 0x00000001,
    MTRClusterGroupKeyManagementAttributeMaxGroupsPerFabricID = 0x00000002,
    MTRClusterGroupKeyManagementAttributeMaxGroupKeysPerFabricID = 0x00000003,
    MTRClusterGroupKeyManagementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterGroupKeyManagementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterGroupKeyManagementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterGroupKeyManagementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterGroupKeyManagementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster FixedLabel attributes
    MTRClusterFixedLabelAttributeLabelListID = 0x00000000,
    MTRClusterFixedLabelAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterFixedLabelAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterFixedLabelAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterFixedLabelAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterFixedLabelAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster UserLabel attributes
    MTRClusterUserLabelAttributeLabelListID = 0x00000000,
    MTRClusterUserLabelAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterUserLabelAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterUserLabelAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterUserLabelAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterUserLabelAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ProxyConfiguration attributes
    MTRClusterProxyConfigurationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterProxyConfigurationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterProxyConfigurationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterProxyConfigurationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterProxyConfigurationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ProxyDiscovery attributes
    MTRClusterProxyDiscoveryAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterProxyDiscoveryAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterProxyDiscoveryAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterProxyDiscoveryAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterProxyDiscoveryAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ProxyValid attributes
    MTRClusterProxyValidAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterProxyValidAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterProxyValidAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterProxyValidAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterProxyValidAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster BooleanState attributes
    MTRClusterBooleanStateAttributeStateValueID = 0x00000000,
    MTRClusterBooleanStateAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBooleanStateAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBooleanStateAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBooleanStateAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBooleanStateAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ModeSelect attributes
    MTRClusterModeSelectAttributeDescriptionID = 0x00000000,
    MTRClusterModeSelectAttributeStandardNamespaceID = 0x00000001,
    MTRClusterModeSelectAttributeSupportedModesID = 0x00000002,
    MTRClusterModeSelectAttributeCurrentModeID = 0x00000003,
    MTRClusterModeSelectAttributeStartUpModeID = 0x00000004,
    MTRClusterModeSelectAttributeOnModeID = 0x00000005,
    MTRClusterModeSelectAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterModeSelectAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterModeSelectAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterModeSelectAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterModeSelectAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster DoorLock attributes
    MTRClusterDoorLockAttributeLockStateID = 0x00000000,
    MTRClusterDoorLockAttributeLockTypeID = 0x00000001,
    MTRClusterDoorLockAttributeActuatorEnabledID = 0x00000002,
    MTRClusterDoorLockAttributeDoorStateID = 0x00000003,
    MTRClusterDoorLockAttributeDoorOpenEventsID = 0x00000004,
    MTRClusterDoorLockAttributeDoorClosedEventsID = 0x00000005,
    MTRClusterDoorLockAttributeOpenPeriodID = 0x00000006,
    MTRClusterDoorLockAttributeNumberOfTotalUsersSupportedID = 0x00000011,
    MTRClusterDoorLockAttributeNumberOfPINUsersSupportedID = 0x00000012,
    MTRClusterDoorLockAttributeNumberOfRFIDUsersSupportedID = 0x00000013,
    MTRClusterDoorLockAttributeNumberOfWeekDaySchedulesSupportedPerUserID = 0x00000014,
    MTRClusterDoorLockAttributeNumberOfYearDaySchedulesSupportedPerUserID = 0x00000015,
    MTRClusterDoorLockAttributeNumberOfHolidaySchedulesSupportedID = 0x00000016,
    MTRClusterDoorLockAttributeMaxPINCodeLengthID = 0x00000017,
    MTRClusterDoorLockAttributeMinPINCodeLengthID = 0x00000018,
    MTRClusterDoorLockAttributeMaxRFIDCodeLengthID = 0x00000019,
    MTRClusterDoorLockAttributeMinRFIDCodeLengthID = 0x0000001A,
    MTRClusterDoorLockAttributeCredentialRulesSupportID = 0x0000001B,
    MTRClusterDoorLockAttributeNumberOfCredentialsSupportedPerUserID = 0x0000001C,
    MTRClusterDoorLockAttributeLanguageID = 0x00000021,
    MTRClusterDoorLockAttributeLEDSettingsID = 0x00000022,
    MTRClusterDoorLockAttributeAutoRelockTimeID = 0x00000023,
    MTRClusterDoorLockAttributeSoundVolumeID = 0x00000024,
    MTRClusterDoorLockAttributeOperatingModeID = 0x00000025,
    MTRClusterDoorLockAttributeSupportedOperatingModesID = 0x00000026,
    MTRClusterDoorLockAttributeDefaultConfigurationRegisterID = 0x00000027,
    MTRClusterDoorLockAttributeEnableLocalProgrammingID = 0x00000028,
    MTRClusterDoorLockAttributeEnableOneTouchLockingID = 0x00000029,
    MTRClusterDoorLockAttributeEnableInsideStatusLEDID = 0x0000002A,
    MTRClusterDoorLockAttributeEnablePrivacyModeButtonID = 0x0000002B,
    MTRClusterDoorLockAttributeLocalProgrammingFeaturesID = 0x0000002C,
    MTRClusterDoorLockAttributeWrongCodeEntryLimitID = 0x00000030,
    MTRClusterDoorLockAttributeUserCodeTemporaryDisableTimeID = 0x00000031,
    MTRClusterDoorLockAttributeSendPINOverTheAirID = 0x00000032,
    MTRClusterDoorLockAttributeRequirePINforRemoteOperationID = 0x00000033,
    MTRClusterDoorLockAttributeExpiringUserTimeoutID = 0x00000035,
    MTRClusterDoorLockAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterDoorLockAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterDoorLockAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterDoorLockAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterDoorLockAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster WindowCovering attributes
    MTRClusterWindowCoveringAttributeTypeID = 0x00000000,
    MTRClusterWindowCoveringAttributePhysicalClosedLimitLiftID = 0x00000001,
    MTRClusterWindowCoveringAttributePhysicalClosedLimitTiltID = 0x00000002,
    MTRClusterWindowCoveringAttributeCurrentPositionLiftID = 0x00000003,
    MTRClusterWindowCoveringAttributeCurrentPositionTiltID = 0x00000004,
    MTRClusterWindowCoveringAttributeNumberOfActuationsLiftID = 0x00000005,
    MTRClusterWindowCoveringAttributeNumberOfActuationsTiltID = 0x00000006,
    MTRClusterWindowCoveringAttributeConfigStatusID = 0x00000007,
    MTRClusterWindowCoveringAttributeCurrentPositionLiftPercentageID = 0x00000008,
    MTRClusterWindowCoveringAttributeCurrentPositionTiltPercentageID = 0x00000009,
    MTRClusterWindowCoveringAttributeOperationalStatusID = 0x0000000A,
    MTRClusterWindowCoveringAttributeTargetPositionLiftPercent100thsID = 0x0000000B,
    MTRClusterWindowCoveringAttributeTargetPositionTiltPercent100thsID = 0x0000000C,
    MTRClusterWindowCoveringAttributeEndProductTypeID = 0x0000000D,
    MTRClusterWindowCoveringAttributeCurrentPositionLiftPercent100thsID = 0x0000000E,
    MTRClusterWindowCoveringAttributeCurrentPositionTiltPercent100thsID = 0x0000000F,
    MTRClusterWindowCoveringAttributeInstalledOpenLimitLiftID = 0x00000010,
    MTRClusterWindowCoveringAttributeInstalledClosedLimitLiftID = 0x00000011,
    MTRClusterWindowCoveringAttributeInstalledOpenLimitTiltID = 0x00000012,
    MTRClusterWindowCoveringAttributeInstalledClosedLimitTiltID = 0x00000013,
    MTRClusterWindowCoveringAttributeModeID = 0x00000017,
    MTRClusterWindowCoveringAttributeSafetyStatusID = 0x0000001A,
    MTRClusterWindowCoveringAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterWindowCoveringAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterWindowCoveringAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterWindowCoveringAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterWindowCoveringAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster BarrierControl attributes
    MTRClusterBarrierControlAttributeBarrierMovingStateID = 0x00000001,
    MTRClusterBarrierControlAttributeBarrierSafetyStatusID = 0x00000002,
    MTRClusterBarrierControlAttributeBarrierCapabilitiesID = 0x00000003,
    MTRClusterBarrierControlAttributeBarrierOpenEventsID = 0x00000004,
    MTRClusterBarrierControlAttributeBarrierCloseEventsID = 0x00000005,
    MTRClusterBarrierControlAttributeBarrierCommandOpenEventsID = 0x00000006,
    MTRClusterBarrierControlAttributeBarrierCommandCloseEventsID = 0x00000007,
    MTRClusterBarrierControlAttributeBarrierOpenPeriodID = 0x00000008,
    MTRClusterBarrierControlAttributeBarrierClosePeriodID = 0x00000009,
    MTRClusterBarrierControlAttributeBarrierPositionID = 0x0000000A,
    MTRClusterBarrierControlAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBarrierControlAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBarrierControlAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBarrierControlAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBarrierControlAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster PumpConfigurationAndControl attributes
    MTRClusterPumpConfigurationAndControlAttributeMaxPressureID = 0x00000000,
    MTRClusterPumpConfigurationAndControlAttributeMaxSpeedID = 0x00000001,
    MTRClusterPumpConfigurationAndControlAttributeMaxFlowID = 0x00000002,
    MTRClusterPumpConfigurationAndControlAttributeMinConstPressureID = 0x00000003,
    MTRClusterPumpConfigurationAndControlAttributeMaxConstPressureID = 0x00000004,
    MTRClusterPumpConfigurationAndControlAttributeMinCompPressureID = 0x00000005,
    MTRClusterPumpConfigurationAndControlAttributeMaxCompPressureID = 0x00000006,
    MTRClusterPumpConfigurationAndControlAttributeMinConstSpeedID = 0x00000007,
    MTRClusterPumpConfigurationAndControlAttributeMaxConstSpeedID = 0x00000008,
    MTRClusterPumpConfigurationAndControlAttributeMinConstFlowID = 0x00000009,
    MTRClusterPumpConfigurationAndControlAttributeMaxConstFlowID = 0x0000000A,
    MTRClusterPumpConfigurationAndControlAttributeMinConstTempID = 0x0000000B,
    MTRClusterPumpConfigurationAndControlAttributeMaxConstTempID = 0x0000000C,
    MTRClusterPumpConfigurationAndControlAttributePumpStatusID = 0x00000010,
    MTRClusterPumpConfigurationAndControlAttributeEffectiveOperationModeID = 0x00000011,
    MTRClusterPumpConfigurationAndControlAttributeEffectiveControlModeID = 0x00000012,
    MTRClusterPumpConfigurationAndControlAttributeCapacityID = 0x00000013,
    MTRClusterPumpConfigurationAndControlAttributeSpeedID = 0x00000014,
    MTRClusterPumpConfigurationAndControlAttributeLifetimeRunningHoursID = 0x00000015,
    MTRClusterPumpConfigurationAndControlAttributePowerID = 0x00000016,
    MTRClusterPumpConfigurationAndControlAttributeLifetimeEnergyConsumedID = 0x00000017,
    MTRClusterPumpConfigurationAndControlAttributeOperationModeID = 0x00000020,
    MTRClusterPumpConfigurationAndControlAttributeControlModeID = 0x00000021,
    MTRClusterPumpConfigurationAndControlAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterPumpConfigurationAndControlAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterPumpConfigurationAndControlAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterPumpConfigurationAndControlAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterPumpConfigurationAndControlAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Thermostat attributes
    MTRClusterThermostatAttributeLocalTemperatureID = 0x00000000,
    MTRClusterThermostatAttributeOutdoorTemperatureID = 0x00000001,
    MTRClusterThermostatAttributeOccupancyID = 0x00000002,
    MTRClusterThermostatAttributeAbsMinHeatSetpointLimitID = 0x00000003,
    MTRClusterThermostatAttributeAbsMaxHeatSetpointLimitID = 0x00000004,
    MTRClusterThermostatAttributeAbsMinCoolSetpointLimitID = 0x00000005,
    MTRClusterThermostatAttributeAbsMaxCoolSetpointLimitID = 0x00000006,
    MTRClusterThermostatAttributePICoolingDemandID = 0x00000007,
    MTRClusterThermostatAttributePIHeatingDemandID = 0x00000008,
    MTRClusterThermostatAttributeHVACSystemTypeConfigurationID = 0x00000009,
    MTRClusterThermostatAttributeLocalTemperatureCalibrationID = 0x00000010,
    MTRClusterThermostatAttributeOccupiedCoolingSetpointID = 0x00000011,
    MTRClusterThermostatAttributeOccupiedHeatingSetpointID = 0x00000012,
    MTRClusterThermostatAttributeUnoccupiedCoolingSetpointID = 0x00000013,
    MTRClusterThermostatAttributeUnoccupiedHeatingSetpointID = 0x00000014,
    MTRClusterThermostatAttributeMinHeatSetpointLimitID = 0x00000015,
    MTRClusterThermostatAttributeMaxHeatSetpointLimitID = 0x00000016,
    MTRClusterThermostatAttributeMinCoolSetpointLimitID = 0x00000017,
    MTRClusterThermostatAttributeMaxCoolSetpointLimitID = 0x00000018,
    MTRClusterThermostatAttributeMinSetpointDeadBandID = 0x00000019,
    MTRClusterThermostatAttributeRemoteSensingID = 0x0000001A,
    MTRClusterThermostatAttributeControlSequenceOfOperationID = 0x0000001B,
    MTRClusterThermostatAttributeSystemModeID = 0x0000001C,
    MTRClusterThermostatAttributeThermostatRunningModeID = 0x0000001E,
    MTRClusterThermostatAttributeStartOfWeekID = 0x00000020,
    MTRClusterThermostatAttributeNumberOfWeeklyTransitionsID = 0x00000021,
    MTRClusterThermostatAttributeNumberOfDailyTransitionsID = 0x00000022,
    MTRClusterThermostatAttributeTemperatureSetpointHoldID = 0x00000023,
    MTRClusterThermostatAttributeTemperatureSetpointHoldDurationID = 0x00000024,
    MTRClusterThermostatAttributeThermostatProgrammingOperationModeID = 0x00000025,
    MTRClusterThermostatAttributeThermostatRunningStateID = 0x00000029,
    MTRClusterThermostatAttributeSetpointChangeSourceID = 0x00000030,
    MTRClusterThermostatAttributeSetpointChangeAmountID = 0x00000031,
    MTRClusterThermostatAttributeSetpointChangeSourceTimestampID = 0x00000032,
    MTRClusterThermostatAttributeOccupiedSetbackID = 0x00000034,
    MTRClusterThermostatAttributeOccupiedSetbackMinID = 0x00000035,
    MTRClusterThermostatAttributeOccupiedSetbackMaxID = 0x00000036,
    MTRClusterThermostatAttributeUnoccupiedSetbackID = 0x00000037,
    MTRClusterThermostatAttributeUnoccupiedSetbackMinID = 0x00000038,
    MTRClusterThermostatAttributeUnoccupiedSetbackMaxID = 0x00000039,
    MTRClusterThermostatAttributeEmergencyHeatDeltaID = 0x0000003A,
    MTRClusterThermostatAttributeACTypeID = 0x00000040,
    MTRClusterThermostatAttributeACCapacityID = 0x00000041,
    MTRClusterThermostatAttributeACRefrigerantTypeID = 0x00000042,
    MTRClusterThermostatAttributeACCompressorTypeID = 0x00000043,
    MTRClusterThermostatAttributeACErrorCodeID = 0x00000044,
    MTRClusterThermostatAttributeACLouverPositionID = 0x00000045,
    MTRClusterThermostatAttributeACCoilTemperatureID = 0x00000046,
    MTRClusterThermostatAttributeACCapacityformatID = 0x00000047,
    MTRClusterThermostatAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterThermostatAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterThermostatAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterThermostatAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterThermostatAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster FanControl attributes
    MTRClusterFanControlAttributeFanModeID = 0x00000000,
    MTRClusterFanControlAttributeFanModeSequenceID = 0x00000001,
    MTRClusterFanControlAttributePercentSettingID = 0x00000002,
    MTRClusterFanControlAttributePercentCurrentID = 0x00000003,
    MTRClusterFanControlAttributeSpeedMaxID = 0x00000004,
    MTRClusterFanControlAttributeSpeedSettingID = 0x00000005,
    MTRClusterFanControlAttributeSpeedCurrentID = 0x00000006,
    MTRClusterFanControlAttributeRockSupportID = 0x00000007,
    MTRClusterFanControlAttributeRockSettingID = 0x00000008,
    MTRClusterFanControlAttributeWindSupportID = 0x00000009,
    MTRClusterFanControlAttributeWindSettingID = 0x0000000A,
    MTRClusterFanControlAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterFanControlAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterFanControlAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterFanControlAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterFanControlAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ThermostatUserInterfaceConfiguration attributes
    MTRClusterThermostatUserInterfaceConfigurationAttributeTemperatureDisplayModeID = 0x00000000,
    MTRClusterThermostatUserInterfaceConfigurationAttributeKeypadLockoutID = 0x00000001,
    MTRClusterThermostatUserInterfaceConfigurationAttributeScheduleProgrammingVisibilityID = 0x00000002,
    MTRClusterThermostatUserInterfaceConfigurationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterThermostatUserInterfaceConfigurationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterThermostatUserInterfaceConfigurationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterThermostatUserInterfaceConfigurationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterThermostatUserInterfaceConfigurationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ColorControl attributes
    MTRClusterColorControlAttributeCurrentHueID = 0x00000000,
    MTRClusterColorControlAttributeCurrentSaturationID = 0x00000001,
    MTRClusterColorControlAttributeRemainingTimeID = 0x00000002,
    MTRClusterColorControlAttributeCurrentXID = 0x00000003,
    MTRClusterColorControlAttributeCurrentYID = 0x00000004,
    MTRClusterColorControlAttributeDriftCompensationID = 0x00000005,
    MTRClusterColorControlAttributeCompensationTextID = 0x00000006,
    MTRClusterColorControlAttributeColorTemperatureMiredsID = 0x00000007,
    MTRClusterColorControlAttributeColorModeID = 0x00000008,
    MTRClusterColorControlAttributeOptionsID = 0x0000000F,
    MTRClusterColorControlAttributeNumberOfPrimariesID = 0x00000010,
    MTRClusterColorControlAttributePrimary1XID = 0x00000011,
    MTRClusterColorControlAttributePrimary1YID = 0x00000012,
    MTRClusterColorControlAttributePrimary1IntensityID = 0x00000013,
    MTRClusterColorControlAttributePrimary2XID = 0x00000015,
    MTRClusterColorControlAttributePrimary2YID = 0x00000016,
    MTRClusterColorControlAttributePrimary2IntensityID = 0x00000017,
    MTRClusterColorControlAttributePrimary3XID = 0x00000019,
    MTRClusterColorControlAttributePrimary3YID = 0x0000001A,
    MTRClusterColorControlAttributePrimary3IntensityID = 0x0000001B,
    MTRClusterColorControlAttributePrimary4XID = 0x00000020,
    MTRClusterColorControlAttributePrimary4YID = 0x00000021,
    MTRClusterColorControlAttributePrimary4IntensityID = 0x00000022,
    MTRClusterColorControlAttributePrimary5XID = 0x00000024,
    MTRClusterColorControlAttributePrimary5YID = 0x00000025,
    MTRClusterColorControlAttributePrimary5IntensityID = 0x00000026,
    MTRClusterColorControlAttributePrimary6XID = 0x00000028,
    MTRClusterColorControlAttributePrimary6YID = 0x00000029,
    MTRClusterColorControlAttributePrimary6IntensityID = 0x0000002A,
    MTRClusterColorControlAttributeWhitePointXID = 0x00000030,
    MTRClusterColorControlAttributeWhitePointYID = 0x00000031,
    MTRClusterColorControlAttributeColorPointRXID = 0x00000032,
    MTRClusterColorControlAttributeColorPointRYID = 0x00000033,
    MTRClusterColorControlAttributeColorPointRIntensityID = 0x00000034,
    MTRClusterColorControlAttributeColorPointGXID = 0x00000036,
    MTRClusterColorControlAttributeColorPointGYID = 0x00000037,
    MTRClusterColorControlAttributeColorPointGIntensityID = 0x00000038,
    MTRClusterColorControlAttributeColorPointBXID = 0x0000003A,
    MTRClusterColorControlAttributeColorPointBYID = 0x0000003B,
    MTRClusterColorControlAttributeColorPointBIntensityID = 0x0000003C,
    MTRClusterColorControlAttributeEnhancedCurrentHueID = 0x00004000,
    MTRClusterColorControlAttributeEnhancedColorModeID = 0x00004001,
    MTRClusterColorControlAttributeColorLoopActiveID = 0x00004002,
    MTRClusterColorControlAttributeColorLoopDirectionID = 0x00004003,
    MTRClusterColorControlAttributeColorLoopTimeID = 0x00004004,
    MTRClusterColorControlAttributeColorLoopStartEnhancedHueID = 0x00004005,
    MTRClusterColorControlAttributeColorLoopStoredEnhancedHueID = 0x00004006,
    MTRClusterColorControlAttributeColorCapabilitiesID = 0x0000400A,
    MTRClusterColorControlAttributeColorTempPhysicalMinMiredsID = 0x0000400B,
    MTRClusterColorControlAttributeColorTempPhysicalMaxMiredsID = 0x0000400C,
    MTRClusterColorControlAttributeCoupleColorTempToLevelMinMiredsID = 0x0000400D,
    MTRClusterColorControlAttributeStartUpColorTemperatureMiredsID = 0x00004010,
    MTRClusterColorControlAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterColorControlAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterColorControlAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterColorControlAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterColorControlAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster BallastConfiguration attributes
    MTRClusterBallastConfigurationAttributePhysicalMinLevelID = 0x00000000,
    MTRClusterBallastConfigurationAttributePhysicalMaxLevelID = 0x00000001,
    MTRClusterBallastConfigurationAttributeBallastStatusID = 0x00000002,
    MTRClusterBallastConfigurationAttributeMinLevelID = 0x00000010,
    MTRClusterBallastConfigurationAttributeMaxLevelID = 0x00000011,
    MTRClusterBallastConfigurationAttributeIntrinsicBalanceFactorID = 0x00000014,
    MTRClusterBallastConfigurationAttributeBallastFactorAdjustmentID = 0x00000015,
    MTRClusterBallastConfigurationAttributeLampQuantityID = 0x00000020,
    MTRClusterBallastConfigurationAttributeLampTypeID = 0x00000030,
    MTRClusterBallastConfigurationAttributeLampManufacturerID = 0x00000031,
    MTRClusterBallastConfigurationAttributeLampRatedHoursID = 0x00000032,
    MTRClusterBallastConfigurationAttributeLampBurnHoursID = 0x00000033,
    MTRClusterBallastConfigurationAttributeLampAlarmModeID = 0x00000034,
    MTRClusterBallastConfigurationAttributeLampBurnHoursTripPointID = 0x00000035,
    MTRClusterBallastConfigurationAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterBallastConfigurationAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterBallastConfigurationAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterBallastConfigurationAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterBallastConfigurationAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster IlluminanceMeasurement attributes
    MTRClusterIlluminanceMeasurementAttributeMeasuredValueID = 0x00000000,
    MTRClusterIlluminanceMeasurementAttributeMinMeasuredValueID = 0x00000001,
    MTRClusterIlluminanceMeasurementAttributeMaxMeasuredValueID = 0x00000002,
    MTRClusterIlluminanceMeasurementAttributeToleranceID = 0x00000003,
    MTRClusterIlluminanceMeasurementAttributeLightSensorTypeID = 0x00000004,
    MTRClusterIlluminanceMeasurementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterIlluminanceMeasurementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterIlluminanceMeasurementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterIlluminanceMeasurementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterIlluminanceMeasurementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster TemperatureMeasurement attributes
    MTRClusterTemperatureMeasurementAttributeMeasuredValueID = 0x00000000,
    MTRClusterTemperatureMeasurementAttributeMinMeasuredValueID = 0x00000001,
    MTRClusterTemperatureMeasurementAttributeMaxMeasuredValueID = 0x00000002,
    MTRClusterTemperatureMeasurementAttributeToleranceID = 0x00000003,
    MTRClusterTemperatureMeasurementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterTemperatureMeasurementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterTemperatureMeasurementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterTemperatureMeasurementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterTemperatureMeasurementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster PressureMeasurement attributes
    MTRClusterPressureMeasurementAttributeMeasuredValueID = 0x00000000,
    MTRClusterPressureMeasurementAttributeMinMeasuredValueID = 0x00000001,
    MTRClusterPressureMeasurementAttributeMaxMeasuredValueID = 0x00000002,
    MTRClusterPressureMeasurementAttributeToleranceID = 0x00000003,
    MTRClusterPressureMeasurementAttributeScaledValueID = 0x00000010,
    MTRClusterPressureMeasurementAttributeMinScaledValueID = 0x00000011,
    MTRClusterPressureMeasurementAttributeMaxScaledValueID = 0x00000012,
    MTRClusterPressureMeasurementAttributeScaledToleranceID = 0x00000013,
    MTRClusterPressureMeasurementAttributeScaleID = 0x00000014,
    MTRClusterPressureMeasurementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterPressureMeasurementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterPressureMeasurementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterPressureMeasurementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterPressureMeasurementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster FlowMeasurement attributes
    MTRClusterFlowMeasurementAttributeMeasuredValueID = 0x00000000,
    MTRClusterFlowMeasurementAttributeMinMeasuredValueID = 0x00000001,
    MTRClusterFlowMeasurementAttributeMaxMeasuredValueID = 0x00000002,
    MTRClusterFlowMeasurementAttributeToleranceID = 0x00000003,
    MTRClusterFlowMeasurementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterFlowMeasurementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterFlowMeasurementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterFlowMeasurementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterFlowMeasurementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster RelativeHumidityMeasurement attributes
    MTRClusterRelativeHumidityMeasurementAttributeMeasuredValueID = 0x00000000,
    MTRClusterRelativeHumidityMeasurementAttributeMinMeasuredValueID = 0x00000001,
    MTRClusterRelativeHumidityMeasurementAttributeMaxMeasuredValueID = 0x00000002,
    MTRClusterRelativeHumidityMeasurementAttributeToleranceID = 0x00000003,
    MTRClusterRelativeHumidityMeasurementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterRelativeHumidityMeasurementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterRelativeHumidityMeasurementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterRelativeHumidityMeasurementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterRelativeHumidityMeasurementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster OccupancySensing attributes
    MTRClusterOccupancySensingAttributeOccupancyID = 0x00000000,
    MTRClusterOccupancySensingAttributeOccupancySensorTypeID = 0x00000001,
    MTRClusterOccupancySensingAttributeOccupancySensorTypeBitmapID = 0x00000002,
    MTRClusterOccupancySensingAttributePirOccupiedToUnoccupiedDelayID = 0x00000010,
    MTRClusterOccupancySensingAttributePirUnoccupiedToOccupiedDelayID = 0x00000011,
    MTRClusterOccupancySensingAttributePirUnoccupiedToOccupiedThresholdID = 0x00000012,
    MTRClusterOccupancySensingAttributeUltrasonicOccupiedToUnoccupiedDelayID = 0x00000020,
    MTRClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedDelayID = 0x00000021,
    MTRClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedThresholdID = 0x00000022,
    MTRClusterOccupancySensingAttributePhysicalContactOccupiedToUnoccupiedDelayID = 0x00000030,
    MTRClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedDelayID = 0x00000031,
    MTRClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedThresholdID = 0x00000032,
    MTRClusterOccupancySensingAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterOccupancySensingAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterOccupancySensingAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterOccupancySensingAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterOccupancySensingAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster WakeOnLan attributes
    MTRClusterWakeOnLanAttributeMACAddressID = 0x00000000,
    MTRClusterWakeOnLanAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterWakeOnLanAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterWakeOnLanAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterWakeOnLanAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterWakeOnLanAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster Channel attributes
    MTRClusterChannelAttributeChannelListID = 0x00000000,
    MTRClusterChannelAttributeLineupID = 0x00000001,
    MTRClusterChannelAttributeCurrentChannelID = 0x00000002,
    MTRClusterChannelAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterChannelAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterChannelAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterChannelAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterChannelAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster TargetNavigator attributes
    MTRClusterTargetNavigatorAttributeTargetListID = 0x00000000,
    MTRClusterTargetNavigatorAttributeCurrentTargetID = 0x00000001,
    MTRClusterTargetNavigatorAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterTargetNavigatorAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterTargetNavigatorAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterTargetNavigatorAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterTargetNavigatorAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster MediaPlayback attributes
    MTRClusterMediaPlaybackAttributeCurrentStateID = 0x00000000,
    MTRClusterMediaPlaybackAttributeStartTimeID = 0x00000001,
    MTRClusterMediaPlaybackAttributeDurationID = 0x00000002,
    MTRClusterMediaPlaybackAttributeSampledPositionID = 0x00000003,
    MTRClusterMediaPlaybackAttributePlaybackSpeedID = 0x00000004,
    MTRClusterMediaPlaybackAttributeSeekRangeEndID = 0x00000005,
    MTRClusterMediaPlaybackAttributeSeekRangeStartID = 0x00000006,
    MTRClusterMediaPlaybackAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterMediaPlaybackAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterMediaPlaybackAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterMediaPlaybackAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterMediaPlaybackAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster MediaInput attributes
    MTRClusterMediaInputAttributeInputListID = 0x00000000,
    MTRClusterMediaInputAttributeCurrentInputID = 0x00000001,
    MTRClusterMediaInputAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterMediaInputAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterMediaInputAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterMediaInputAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterMediaInputAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster LowPower attributes
    MTRClusterLowPowerAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterLowPowerAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterLowPowerAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterLowPowerAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterLowPowerAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster KeypadInput attributes
    MTRClusterKeypadInputAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterKeypadInputAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterKeypadInputAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterKeypadInputAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterKeypadInputAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ContentLauncher attributes
    MTRClusterContentLauncherAttributeAcceptHeaderID = 0x00000000,
    MTRClusterContentLauncherAttributeSupportedStreamingProtocolsID = 0x00000001,
    MTRClusterContentLauncherAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterContentLauncherAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterContentLauncherAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterContentLauncherAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterContentLauncherAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster AudioOutput attributes
    MTRClusterAudioOutputAttributeOutputListID = 0x00000000,
    MTRClusterAudioOutputAttributeCurrentOutputID = 0x00000001,
    MTRClusterAudioOutputAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterAudioOutputAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterAudioOutputAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterAudioOutputAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterAudioOutputAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ApplicationLauncher attributes
    MTRClusterApplicationLauncherAttributeCatalogListID = 0x00000000,
    MTRClusterApplicationLauncherAttributeCurrentAppID = 0x00000001,
    MTRClusterApplicationLauncherAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterApplicationLauncherAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterApplicationLauncherAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterApplicationLauncherAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterApplicationLauncherAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ApplicationBasic attributes
    MTRClusterApplicationBasicAttributeVendorNameID = 0x00000000,
    MTRClusterApplicationBasicAttributeVendorIDID = 0x00000001,
    MTRClusterApplicationBasicAttributeApplicationNameID = 0x00000002,
    MTRClusterApplicationBasicAttributeProductIDID = 0x00000003,
    MTRClusterApplicationBasicAttributeApplicationID = 0x00000004,
    MTRClusterApplicationBasicAttributeStatusID = 0x00000005,
    MTRClusterApplicationBasicAttributeApplicationVersionID = 0x00000006,
    MTRClusterApplicationBasicAttributeAllowedVendorListID = 0x00000007,
    MTRClusterApplicationBasicAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterApplicationBasicAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterApplicationBasicAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterApplicationBasicAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterApplicationBasicAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster AccountLogin attributes
    MTRClusterAccountLoginAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterAccountLoginAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterAccountLoginAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterAccountLoginAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterAccountLoginAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster ElectricalMeasurement attributes
    MTRClusterElectricalMeasurementAttributeMeasurementTypeID = 0x00000000,
    MTRClusterElectricalMeasurementAttributeDcVoltageID = 0x00000100,
    MTRClusterElectricalMeasurementAttributeDcVoltageMinID = 0x00000101,
    MTRClusterElectricalMeasurementAttributeDcVoltageMaxID = 0x00000102,
    MTRClusterElectricalMeasurementAttributeDcCurrentID = 0x00000103,
    MTRClusterElectricalMeasurementAttributeDcCurrentMinID = 0x00000104,
    MTRClusterElectricalMeasurementAttributeDcCurrentMaxID = 0x00000105,
    MTRClusterElectricalMeasurementAttributeDcPowerID = 0x00000106,
    MTRClusterElectricalMeasurementAttributeDcPowerMinID = 0x00000107,
    MTRClusterElectricalMeasurementAttributeDcPowerMaxID = 0x00000108,
    MTRClusterElectricalMeasurementAttributeDcVoltageMultiplierID = 0x00000200,
    MTRClusterElectricalMeasurementAttributeDcVoltageDivisorID = 0x00000201,
    MTRClusterElectricalMeasurementAttributeDcCurrentMultiplierID = 0x00000202,
    MTRClusterElectricalMeasurementAttributeDcCurrentDivisorID = 0x00000203,
    MTRClusterElectricalMeasurementAttributeDcPowerMultiplierID = 0x00000204,
    MTRClusterElectricalMeasurementAttributeDcPowerDivisorID = 0x00000205,
    MTRClusterElectricalMeasurementAttributeAcFrequencyID = 0x00000300,
    MTRClusterElectricalMeasurementAttributeAcFrequencyMinID = 0x00000301,
    MTRClusterElectricalMeasurementAttributeAcFrequencyMaxID = 0x00000302,
    MTRClusterElectricalMeasurementAttributeNeutralCurrentID = 0x00000303,
    MTRClusterElectricalMeasurementAttributeTotalActivePowerID = 0x00000304,
    MTRClusterElectricalMeasurementAttributeTotalReactivePowerID = 0x00000305,
    MTRClusterElectricalMeasurementAttributeTotalApparentPowerID = 0x00000306,
    MTRClusterElectricalMeasurementAttributeMeasured1stHarmonicCurrentID = 0x00000307,
    MTRClusterElectricalMeasurementAttributeMeasured3rdHarmonicCurrentID = 0x00000308,
    MTRClusterElectricalMeasurementAttributeMeasured5thHarmonicCurrentID = 0x00000309,
    MTRClusterElectricalMeasurementAttributeMeasured7thHarmonicCurrentID = 0x0000030A,
    MTRClusterElectricalMeasurementAttributeMeasured9thHarmonicCurrentID = 0x0000030B,
    MTRClusterElectricalMeasurementAttributeMeasured11thHarmonicCurrentID = 0x0000030C,
    MTRClusterElectricalMeasurementAttributeMeasuredPhase1stHarmonicCurrentID = 0x0000030D,
    MTRClusterElectricalMeasurementAttributeMeasuredPhase3rdHarmonicCurrentID = 0x0000030E,
    MTRClusterElectricalMeasurementAttributeMeasuredPhase5thHarmonicCurrentID = 0x0000030F,
    MTRClusterElectricalMeasurementAttributeMeasuredPhase7thHarmonicCurrentID = 0x00000310,
    MTRClusterElectricalMeasurementAttributeMeasuredPhase9thHarmonicCurrentID = 0x00000311,
    MTRClusterElectricalMeasurementAttributeMeasuredPhase11thHarmonicCurrentID = 0x00000312,
    MTRClusterElectricalMeasurementAttributeAcFrequencyMultiplierID = 0x00000400,
    MTRClusterElectricalMeasurementAttributeAcFrequencyDivisorID = 0x00000401,
    MTRClusterElectricalMeasurementAttributePowerMultiplierID = 0x00000402,
    MTRClusterElectricalMeasurementAttributePowerDivisorID = 0x00000403,
    MTRClusterElectricalMeasurementAttributeHarmonicCurrentMultiplierID = 0x00000404,
    MTRClusterElectricalMeasurementAttributePhaseHarmonicCurrentMultiplierID = 0x00000405,
    MTRClusterElectricalMeasurementAttributeInstantaneousVoltageID = 0x00000500,
    MTRClusterElectricalMeasurementAttributeInstantaneousLineCurrentID = 0x00000501,
    MTRClusterElectricalMeasurementAttributeInstantaneousActiveCurrentID = 0x00000502,
    MTRClusterElectricalMeasurementAttributeInstantaneousReactiveCurrentID = 0x00000503,
    MTRClusterElectricalMeasurementAttributeInstantaneousPowerID = 0x00000504,
    MTRClusterElectricalMeasurementAttributeRmsVoltageID = 0x00000505,
    MTRClusterElectricalMeasurementAttributeRmsVoltageMinID = 0x00000506,
    MTRClusterElectricalMeasurementAttributeRmsVoltageMaxID = 0x00000507,
    MTRClusterElectricalMeasurementAttributeRmsCurrentID = 0x00000508,
    MTRClusterElectricalMeasurementAttributeRmsCurrentMinID = 0x00000509,
    MTRClusterElectricalMeasurementAttributeRmsCurrentMaxID = 0x0000050A,
    MTRClusterElectricalMeasurementAttributeActivePowerID = 0x0000050B,
    MTRClusterElectricalMeasurementAttributeActivePowerMinID = 0x0000050C,
    MTRClusterElectricalMeasurementAttributeActivePowerMaxID = 0x0000050D,
    MTRClusterElectricalMeasurementAttributeReactivePowerID = 0x0000050E,
    MTRClusterElectricalMeasurementAttributeApparentPowerID = 0x0000050F,
    MTRClusterElectricalMeasurementAttributePowerFactorID = 0x00000510,
    MTRClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodID = 0x00000511,
    MTRClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterID = 0x00000513,
    MTRClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodID = 0x00000514,
    MTRClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodID = 0x00000515,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSagPeriodID = 0x00000516,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodID = 0x00000517,
    MTRClusterElectricalMeasurementAttributeAcVoltageMultiplierID = 0x00000600,
    MTRClusterElectricalMeasurementAttributeAcVoltageDivisorID = 0x00000601,
    MTRClusterElectricalMeasurementAttributeAcCurrentMultiplierID = 0x00000602,
    MTRClusterElectricalMeasurementAttributeAcCurrentDivisorID = 0x00000603,
    MTRClusterElectricalMeasurementAttributeAcPowerMultiplierID = 0x00000604,
    MTRClusterElectricalMeasurementAttributeAcPowerDivisorID = 0x00000605,
    MTRClusterElectricalMeasurementAttributeOverloadAlarmsMaskID = 0x00000700,
    MTRClusterElectricalMeasurementAttributeVoltageOverloadID = 0x00000701,
    MTRClusterElectricalMeasurementAttributeCurrentOverloadID = 0x00000702,
    MTRClusterElectricalMeasurementAttributeAcOverloadAlarmsMaskID = 0x00000800,
    MTRClusterElectricalMeasurementAttributeAcVoltageOverloadID = 0x00000801,
    MTRClusterElectricalMeasurementAttributeAcCurrentOverloadID = 0x00000802,
    MTRClusterElectricalMeasurementAttributeAcActivePowerOverloadID = 0x00000803,
    MTRClusterElectricalMeasurementAttributeAcReactivePowerOverloadID = 0x00000804,
    MTRClusterElectricalMeasurementAttributeAverageRmsOverVoltageID = 0x00000805,
    MTRClusterElectricalMeasurementAttributeAverageRmsUnderVoltageID = 0x00000806,
    MTRClusterElectricalMeasurementAttributeRmsExtremeOverVoltageID = 0x00000807,
    MTRClusterElectricalMeasurementAttributeRmsExtremeUnderVoltageID = 0x00000808,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSagID = 0x00000809,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSwellID = 0x0000080A,
    MTRClusterElectricalMeasurementAttributeLineCurrentPhaseBID = 0x00000901,
    MTRClusterElectricalMeasurementAttributeActiveCurrentPhaseBID = 0x00000902,
    MTRClusterElectricalMeasurementAttributeReactiveCurrentPhaseBID = 0x00000903,
    MTRClusterElectricalMeasurementAttributeRmsVoltagePhaseBID = 0x00000905,
    MTRClusterElectricalMeasurementAttributeRmsVoltageMinPhaseBID = 0x00000906,
    MTRClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseBID = 0x00000907,
    MTRClusterElectricalMeasurementAttributeRmsCurrentPhaseBID = 0x00000908,
    MTRClusterElectricalMeasurementAttributeRmsCurrentMinPhaseBID = 0x00000909,
    MTRClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseBID = 0x0000090A,
    MTRClusterElectricalMeasurementAttributeActivePowerPhaseBID = 0x0000090B,
    MTRClusterElectricalMeasurementAttributeActivePowerMinPhaseBID = 0x0000090C,
    MTRClusterElectricalMeasurementAttributeActivePowerMaxPhaseBID = 0x0000090D,
    MTRClusterElectricalMeasurementAttributeReactivePowerPhaseBID = 0x0000090E,
    MTRClusterElectricalMeasurementAttributeApparentPowerPhaseBID = 0x0000090F,
    MTRClusterElectricalMeasurementAttributePowerFactorPhaseBID = 0x00000910,
    MTRClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseBID = 0x00000911,
    MTRClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseBID = 0x00000912,
    MTRClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseBID = 0x00000913,
    MTRClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseBID = 0x00000914,
    MTRClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseBID = 0x00000915,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseBID = 0x00000916,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseBID = 0x00000917,
    MTRClusterElectricalMeasurementAttributeLineCurrentPhaseCID = 0x00000A01,
    MTRClusterElectricalMeasurementAttributeActiveCurrentPhaseCID = 0x00000A02,
    MTRClusterElectricalMeasurementAttributeReactiveCurrentPhaseCID = 0x00000A03,
    MTRClusterElectricalMeasurementAttributeRmsVoltagePhaseCID = 0x00000A05,
    MTRClusterElectricalMeasurementAttributeRmsVoltageMinPhaseCID = 0x00000A06,
    MTRClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseCID = 0x00000A07,
    MTRClusterElectricalMeasurementAttributeRmsCurrentPhaseCID = 0x00000A08,
    MTRClusterElectricalMeasurementAttributeRmsCurrentMinPhaseCID = 0x00000A09,
    MTRClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseCID = 0x00000A0A,
    MTRClusterElectricalMeasurementAttributeActivePowerPhaseCID = 0x00000A0B,
    MTRClusterElectricalMeasurementAttributeActivePowerMinPhaseCID = 0x00000A0C,
    MTRClusterElectricalMeasurementAttributeActivePowerMaxPhaseCID = 0x00000A0D,
    MTRClusterElectricalMeasurementAttributeReactivePowerPhaseCID = 0x00000A0E,
    MTRClusterElectricalMeasurementAttributeApparentPowerPhaseCID = 0x00000A0F,
    MTRClusterElectricalMeasurementAttributePowerFactorPhaseCID = 0x00000A10,
    MTRClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseCID = 0x00000A11,
    MTRClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseCID = 0x00000A12,
    MTRClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseCID = 0x00000A13,
    MTRClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseCID = 0x00000A14,
    MTRClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseCID = 0x00000A15,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseCID = 0x00000A16,
    MTRClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseCID = 0x00000A17,
    MTRClusterElectricalMeasurementAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterElectricalMeasurementAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterElectricalMeasurementAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterElectricalMeasurementAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterElectricalMeasurementAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster UnitTesting attributes
    MTRClusterUnitTestingAttributeBooleanID MTR_NEWLY_AVAILABLE = 0x00000000,
    MTRClusterUnitTestingAttributeBitmap8ID MTR_NEWLY_AVAILABLE = 0x00000001,
    MTRClusterUnitTestingAttributeBitmap16ID MTR_NEWLY_AVAILABLE = 0x00000002,
    MTRClusterUnitTestingAttributeBitmap32ID MTR_NEWLY_AVAILABLE = 0x00000003,
    MTRClusterUnitTestingAttributeBitmap64ID MTR_NEWLY_AVAILABLE = 0x00000004,
    MTRClusterUnitTestingAttributeInt8uID MTR_NEWLY_AVAILABLE = 0x00000005,
    MTRClusterUnitTestingAttributeInt16uID MTR_NEWLY_AVAILABLE = 0x00000006,
    MTRClusterUnitTestingAttributeInt24uID MTR_NEWLY_AVAILABLE = 0x00000007,
    MTRClusterUnitTestingAttributeInt32uID MTR_NEWLY_AVAILABLE = 0x00000008,
    MTRClusterUnitTestingAttributeInt40uID MTR_NEWLY_AVAILABLE = 0x00000009,
    MTRClusterUnitTestingAttributeInt48uID MTR_NEWLY_AVAILABLE = 0x0000000A,
    MTRClusterUnitTestingAttributeInt56uID MTR_NEWLY_AVAILABLE = 0x0000000B,
    MTRClusterUnitTestingAttributeInt64uID MTR_NEWLY_AVAILABLE = 0x0000000C,
    MTRClusterUnitTestingAttributeInt8sID MTR_NEWLY_AVAILABLE = 0x0000000D,
    MTRClusterUnitTestingAttributeInt16sID MTR_NEWLY_AVAILABLE = 0x0000000E,
    MTRClusterUnitTestingAttributeInt24sID MTR_NEWLY_AVAILABLE = 0x0000000F,
    MTRClusterUnitTestingAttributeInt32sID MTR_NEWLY_AVAILABLE = 0x00000010,
    MTRClusterUnitTestingAttributeInt40sID MTR_NEWLY_AVAILABLE = 0x00000011,
    MTRClusterUnitTestingAttributeInt48sID MTR_NEWLY_AVAILABLE = 0x00000012,
    MTRClusterUnitTestingAttributeInt56sID MTR_NEWLY_AVAILABLE = 0x00000013,
    MTRClusterUnitTestingAttributeInt64sID MTR_NEWLY_AVAILABLE = 0x00000014,
    MTRClusterUnitTestingAttributeEnum8ID MTR_NEWLY_AVAILABLE = 0x00000015,
    MTRClusterUnitTestingAttributeEnum16ID MTR_NEWLY_AVAILABLE = 0x00000016,
    MTRClusterUnitTestingAttributeFloatSingleID MTR_NEWLY_AVAILABLE = 0x00000017,
    MTRClusterUnitTestingAttributeFloatDoubleID MTR_NEWLY_AVAILABLE = 0x00000018,
    MTRClusterUnitTestingAttributeOctetStringID MTR_NEWLY_AVAILABLE = 0x00000019,
    MTRClusterUnitTestingAttributeListInt8uID MTR_NEWLY_AVAILABLE = 0x0000001A,
    MTRClusterUnitTestingAttributeListOctetStringID MTR_NEWLY_AVAILABLE = 0x0000001B,
    MTRClusterUnitTestingAttributeListStructOctetStringID MTR_NEWLY_AVAILABLE = 0x0000001C,
    MTRClusterUnitTestingAttributeLongOctetStringID MTR_NEWLY_AVAILABLE = 0x0000001D,
    MTRClusterUnitTestingAttributeCharStringID MTR_NEWLY_AVAILABLE = 0x0000001E,
    MTRClusterUnitTestingAttributeLongCharStringID MTR_NEWLY_AVAILABLE = 0x0000001F,
    MTRClusterUnitTestingAttributeEpochUsID MTR_NEWLY_AVAILABLE = 0x00000020,
    MTRClusterUnitTestingAttributeEpochSID MTR_NEWLY_AVAILABLE = 0x00000021,
    MTRClusterUnitTestingAttributeVendorIdID MTR_NEWLY_AVAILABLE = 0x00000022,
    MTRClusterUnitTestingAttributeListNullablesAndOptionalsStructID MTR_NEWLY_AVAILABLE = 0x00000023,
    MTRClusterUnitTestingAttributeEnumAttrID MTR_NEWLY_AVAILABLE = 0x00000024,
    MTRClusterUnitTestingAttributeStructAttrID MTR_NEWLY_AVAILABLE = 0x00000025,
    MTRClusterUnitTestingAttributeRangeRestrictedInt8uID MTR_NEWLY_AVAILABLE = 0x00000026,
    MTRClusterUnitTestingAttributeRangeRestrictedInt8sID MTR_NEWLY_AVAILABLE = 0x00000027,
    MTRClusterUnitTestingAttributeRangeRestrictedInt16uID MTR_NEWLY_AVAILABLE = 0x00000028,
    MTRClusterUnitTestingAttributeRangeRestrictedInt16sID MTR_NEWLY_AVAILABLE = 0x00000029,
    MTRClusterUnitTestingAttributeListLongOctetStringID MTR_NEWLY_AVAILABLE = 0x0000002A,
    MTRClusterUnitTestingAttributeListFabricScopedID MTR_NEWLY_AVAILABLE = 0x0000002B,
    MTRClusterUnitTestingAttributeTimedWriteBooleanID MTR_NEWLY_AVAILABLE = 0x00000030,
    MTRClusterUnitTestingAttributeGeneralErrorBooleanID MTR_NEWLY_AVAILABLE = 0x00000031,
    MTRClusterUnitTestingAttributeClusterErrorBooleanID MTR_NEWLY_AVAILABLE = 0x00000032,
    MTRClusterUnitTestingAttributeUnsupportedID MTR_NEWLY_AVAILABLE = 0x000000FF,
    MTRClusterUnitTestingAttributeNullableBooleanID MTR_NEWLY_AVAILABLE = 0x00004000,
    MTRClusterUnitTestingAttributeNullableBitmap8ID MTR_NEWLY_AVAILABLE = 0x00004001,
    MTRClusterUnitTestingAttributeNullableBitmap16ID MTR_NEWLY_AVAILABLE = 0x00004002,
    MTRClusterUnitTestingAttributeNullableBitmap32ID MTR_NEWLY_AVAILABLE = 0x00004003,
    MTRClusterUnitTestingAttributeNullableBitmap64ID MTR_NEWLY_AVAILABLE = 0x00004004,
    MTRClusterUnitTestingAttributeNullableInt8uID MTR_NEWLY_AVAILABLE = 0x00004005,
    MTRClusterUnitTestingAttributeNullableInt16uID MTR_NEWLY_AVAILABLE = 0x00004006,
    MTRClusterUnitTestingAttributeNullableInt24uID MTR_NEWLY_AVAILABLE = 0x00004007,
    MTRClusterUnitTestingAttributeNullableInt32uID MTR_NEWLY_AVAILABLE = 0x00004008,
    MTRClusterUnitTestingAttributeNullableInt40uID MTR_NEWLY_AVAILABLE = 0x00004009,
    MTRClusterUnitTestingAttributeNullableInt48uID MTR_NEWLY_AVAILABLE = 0x0000400A,
    MTRClusterUnitTestingAttributeNullableInt56uID MTR_NEWLY_AVAILABLE = 0x0000400B,
    MTRClusterUnitTestingAttributeNullableInt64uID MTR_NEWLY_AVAILABLE = 0x0000400C,
    MTRClusterUnitTestingAttributeNullableInt8sID MTR_NEWLY_AVAILABLE = 0x0000400D,
    MTRClusterUnitTestingAttributeNullableInt16sID MTR_NEWLY_AVAILABLE = 0x0000400E,
    MTRClusterUnitTestingAttributeNullableInt24sID MTR_NEWLY_AVAILABLE = 0x0000400F,
    MTRClusterUnitTestingAttributeNullableInt32sID MTR_NEWLY_AVAILABLE = 0x00004010,
    MTRClusterUnitTestingAttributeNullableInt40sID MTR_NEWLY_AVAILABLE = 0x00004011,
    MTRClusterUnitTestingAttributeNullableInt48sID MTR_NEWLY_AVAILABLE = 0x00004012,
    MTRClusterUnitTestingAttributeNullableInt56sID MTR_NEWLY_AVAILABLE = 0x00004013,
    MTRClusterUnitTestingAttributeNullableInt64sID MTR_NEWLY_AVAILABLE = 0x00004014,
    MTRClusterUnitTestingAttributeNullableEnum8ID MTR_NEWLY_AVAILABLE = 0x00004015,
    MTRClusterUnitTestingAttributeNullableEnum16ID MTR_NEWLY_AVAILABLE = 0x00004016,
    MTRClusterUnitTestingAttributeNullableFloatSingleID MTR_NEWLY_AVAILABLE = 0x00004017,
    MTRClusterUnitTestingAttributeNullableFloatDoubleID MTR_NEWLY_AVAILABLE = 0x00004018,
    MTRClusterUnitTestingAttributeNullableOctetStringID MTR_NEWLY_AVAILABLE = 0x00004019,
    MTRClusterUnitTestingAttributeNullableCharStringID MTR_NEWLY_AVAILABLE = 0x0000401E,
    MTRClusterUnitTestingAttributeNullableEnumAttrID MTR_NEWLY_AVAILABLE = 0x00004024,
    MTRClusterUnitTestingAttributeNullableStructID MTR_NEWLY_AVAILABLE = 0x00004025,
    MTRClusterUnitTestingAttributeNullableRangeRestrictedInt8uID MTR_NEWLY_AVAILABLE = 0x00004026,
    MTRClusterUnitTestingAttributeNullableRangeRestrictedInt8sID MTR_NEWLY_AVAILABLE = 0x00004027,
    MTRClusterUnitTestingAttributeNullableRangeRestrictedInt16uID MTR_NEWLY_AVAILABLE = 0x00004028,
    MTRClusterUnitTestingAttributeNullableRangeRestrictedInt16sID MTR_NEWLY_AVAILABLE = 0x00004029,
    MTRClusterUnitTestingAttributeWriteOnlyInt8uID MTR_NEWLY_AVAILABLE = 0x0000402A,
    MTRClusterUnitTestingAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterUnitTestingAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterUnitTestingAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterUnitTestingAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterUnitTestingAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster TestCluster attributes
    MTRClusterTestClusterAttributeBooleanID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeBooleanID") = 0x00000000,
    MTRClusterTestClusterAttributeBitmap8ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeBitmap8ID") = 0x00000001,
    MTRClusterTestClusterAttributeBitmap16ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeBitmap16ID")
    = 0x00000002,
    MTRClusterTestClusterAttributeBitmap32ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeBitmap32ID")
    = 0x00000003,
    MTRClusterTestClusterAttributeBitmap64ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeBitmap64ID")
    = 0x00000004,
    MTRClusterTestClusterAttributeInt8uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt8uID") = 0x00000005,
    MTRClusterTestClusterAttributeInt16uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt16uID") = 0x00000006,
    MTRClusterTestClusterAttributeInt24uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt24uID") = 0x00000007,
    MTRClusterTestClusterAttributeInt32uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt32uID") = 0x00000008,
    MTRClusterTestClusterAttributeInt40uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt40uID") = 0x00000009,
    MTRClusterTestClusterAttributeInt48uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt48uID") = 0x0000000A,
    MTRClusterTestClusterAttributeInt56uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt56uID") = 0x0000000B,
    MTRClusterTestClusterAttributeInt64uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt64uID") = 0x0000000C,
    MTRClusterTestClusterAttributeInt8sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt8sID") = 0x0000000D,
    MTRClusterTestClusterAttributeInt16sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt16sID") = 0x0000000E,
    MTRClusterTestClusterAttributeInt24sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt24sID") = 0x0000000F,
    MTRClusterTestClusterAttributeInt32sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt32sID") = 0x00000010,
    MTRClusterTestClusterAttributeInt40sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt40sID") = 0x00000011,
    MTRClusterTestClusterAttributeInt48sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt48sID") = 0x00000012,
    MTRClusterTestClusterAttributeInt56sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt56sID") = 0x00000013,
    MTRClusterTestClusterAttributeInt64sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeInt64sID") = 0x00000014,
    MTRClusterTestClusterAttributeEnum8ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeEnum8ID") = 0x00000015,
    MTRClusterTestClusterAttributeEnum16ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeEnum16ID") = 0x00000016,
    MTRClusterTestClusterAttributeFloatSingleID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeFloatSingleID")
    = 0x00000017,
    MTRClusterTestClusterAttributeFloatDoubleID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeFloatDoubleID")
    = 0x00000018,
    MTRClusterTestClusterAttributeOctetStringID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeOctetStringID")
    = 0x00000019,
    MTRClusterTestClusterAttributeListInt8uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeListInt8uID")
    = 0x0000001A,
    MTRClusterTestClusterAttributeListOctetStringID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeListOctetStringID")
    = 0x0000001B,
    MTRClusterTestClusterAttributeListStructOctetStringID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeListStructOctetStringID")
    = 0x0000001C,
    MTRClusterTestClusterAttributeLongOctetStringID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeLongOctetStringID")
    = 0x0000001D,
    MTRClusterTestClusterAttributeCharStringID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeCharStringID")
    = 0x0000001E,
    MTRClusterTestClusterAttributeLongCharStringID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeLongCharStringID")
    = 0x0000001F,
    MTRClusterTestClusterAttributeEpochUsID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeEpochUsID") = 0x00000020,
    MTRClusterTestClusterAttributeEpochSID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeEpochSID") = 0x00000021,
    MTRClusterTestClusterAttributeVendorIdID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeVendorIdID")
    = 0x00000022,
    MTRClusterTestClusterAttributeListNullablesAndOptionalsStructID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeListNullablesAndOptionalsStructID")
    = 0x00000023,
    MTRClusterTestClusterAttributeEnumAttrID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeEnumAttrID")
    = 0x00000024,
    MTRClusterTestClusterAttributeStructAttrID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeStructAttrID")
    = 0x00000025,
    MTRClusterTestClusterAttributeRangeRestrictedInt8uID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeRangeRestrictedInt8uID")
    = 0x00000026,
    MTRClusterTestClusterAttributeRangeRestrictedInt8sID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeRangeRestrictedInt8sID")
    = 0x00000027,
    MTRClusterTestClusterAttributeRangeRestrictedInt16uID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeRangeRestrictedInt16uID")
    = 0x00000028,
    MTRClusterTestClusterAttributeRangeRestrictedInt16sID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeRangeRestrictedInt16sID")
    = 0x00000029,
    MTRClusterTestClusterAttributeListLongOctetStringID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeListLongOctetStringID")
    = 0x0000002A,
    MTRClusterTestClusterAttributeListFabricScopedID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeListFabricScopedID")
    = 0x0000002B,
    MTRClusterTestClusterAttributeTimedWriteBooleanID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeTimedWriteBooleanID")
    = 0x00000030,
    MTRClusterTestClusterAttributeGeneralErrorBooleanID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeGeneralErrorBooleanID")
    = 0x00000031,
    MTRClusterTestClusterAttributeClusterErrorBooleanID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeClusterErrorBooleanID")
    = 0x00000032,
    MTRClusterTestClusterAttributeUnsupportedID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeUnsupportedID")
    = 0x000000FF,
    MTRClusterTestClusterAttributeNullableBooleanID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableBooleanID")
    = 0x00004000,
    MTRClusterTestClusterAttributeNullableBitmap8ID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableBitmap8ID")
    = 0x00004001,
    MTRClusterTestClusterAttributeNullableBitmap16ID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableBitmap16ID")
    = 0x00004002,
    MTRClusterTestClusterAttributeNullableBitmap32ID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableBitmap32ID")
    = 0x00004003,
    MTRClusterTestClusterAttributeNullableBitmap64ID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableBitmap64ID")
    = 0x00004004,
    MTRClusterTestClusterAttributeNullableInt8uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt8uID")
    = 0x00004005,
    MTRClusterTestClusterAttributeNullableInt16uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt16uID")
    = 0x00004006,
    MTRClusterTestClusterAttributeNullableInt24uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt24uID")
    = 0x00004007,
    MTRClusterTestClusterAttributeNullableInt32uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt32uID")
    = 0x00004008,
    MTRClusterTestClusterAttributeNullableInt40uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt40uID")
    = 0x00004009,
    MTRClusterTestClusterAttributeNullableInt48uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt48uID")
    = 0x0000400A,
    MTRClusterTestClusterAttributeNullableInt56uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt56uID")
    = 0x0000400B,
    MTRClusterTestClusterAttributeNullableInt64uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt64uID")
    = 0x0000400C,
    MTRClusterTestClusterAttributeNullableInt8sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt8sID")
    = 0x0000400D,
    MTRClusterTestClusterAttributeNullableInt16sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt16sID")
    = 0x0000400E,
    MTRClusterTestClusterAttributeNullableInt24sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt24sID")
    = 0x0000400F,
    MTRClusterTestClusterAttributeNullableInt32sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt32sID")
    = 0x00004010,
    MTRClusterTestClusterAttributeNullableInt40sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt40sID")
    = 0x00004011,
    MTRClusterTestClusterAttributeNullableInt48sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt48sID")
    = 0x00004012,
    MTRClusterTestClusterAttributeNullableInt56sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt56sID")
    = 0x00004013,
    MTRClusterTestClusterAttributeNullableInt64sID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableInt64sID")
    = 0x00004014,
    MTRClusterTestClusterAttributeNullableEnum8ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableEnum8ID")
    = 0x00004015,
    MTRClusterTestClusterAttributeNullableEnum16ID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableEnum16ID")
    = 0x00004016,
    MTRClusterTestClusterAttributeNullableFloatSingleID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableFloatSingleID")
    = 0x00004017,
    MTRClusterTestClusterAttributeNullableFloatDoubleID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableFloatDoubleID")
    = 0x00004018,
    MTRClusterTestClusterAttributeNullableOctetStringID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableOctetStringID")
    = 0x00004019,
    MTRClusterTestClusterAttributeNullableCharStringID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableCharStringID")
    = 0x0000401E,
    MTRClusterTestClusterAttributeNullableEnumAttrID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableEnumAttrID")
    = 0x00004024,
    MTRClusterTestClusterAttributeNullableStructID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeNullableStructID")
    = 0x00004025,
    MTRClusterTestClusterAttributeNullableRangeRestrictedInt8uID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableRangeRestrictedInt8uID")
    = 0x00004026,
    MTRClusterTestClusterAttributeNullableRangeRestrictedInt8sID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableRangeRestrictedInt8sID")
    = 0x00004027,
    MTRClusterTestClusterAttributeNullableRangeRestrictedInt16uID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableRangeRestrictedInt16uID")
    = 0x00004028,
    MTRClusterTestClusterAttributeNullableRangeRestrictedInt16sID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingAttributeNullableRangeRestrictedInt16sID")
    = 0x00004029,
    MTRClusterTestClusterAttributeWriteOnlyInt8uID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingAttributeWriteOnlyInt8uID")
    = 0x0000402A,
    MTRClusterTestClusterAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterTestClusterAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterTestClusterAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterTestClusterAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterTestClusterAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

    // Cluster FaultInjection attributes
    MTRClusterFaultInjectionAttributeGeneratedCommandListID = MTRClusterGlobalAttributeGeneratedCommandListID,
    MTRClusterFaultInjectionAttributeAcceptedCommandListID = MTRClusterGlobalAttributeAcceptedCommandListID,
    MTRClusterFaultInjectionAttributeAttributeListID = MTRClusterGlobalAttributeAttributeListID,
    MTRClusterFaultInjectionAttributeFeatureMapID = MTRClusterGlobalAttributeFeatureMapID,
    MTRClusterFaultInjectionAttributeClusterRevisionID = MTRClusterGlobalAttributeClusterRevisionID,

};

#pragma mark - Commands IDs

typedef NS_ENUM(uint32_t, MTRClusterCommandIDType) {

    // Cluster Identify commands
    MTRClusterIdentifyCommandIdentifyID = 0x00000000,
    MTRClusterIdentifyCommandTriggerEffectID = 0x00000040,

    // Cluster Groups commands
    MTRClusterGroupsCommandAddGroupID = 0x00000000,
    MTRClusterGroupsCommandAddGroupResponseID = 0x00000000,
    MTRClusterGroupsCommandViewGroupID = 0x00000001,
    MTRClusterGroupsCommandViewGroupResponseID = 0x00000001,
    MTRClusterGroupsCommandGetGroupMembershipID = 0x00000002,
    MTRClusterGroupsCommandGetGroupMembershipResponseID = 0x00000002,
    MTRClusterGroupsCommandRemoveGroupID = 0x00000003,
    MTRClusterGroupsCommandRemoveGroupResponseID = 0x00000003,
    MTRClusterGroupsCommandRemoveAllGroupsID = 0x00000004,
    MTRClusterGroupsCommandAddGroupIfIdentifyingID = 0x00000005,

    // Cluster Scenes commands
    MTRClusterScenesCommandAddSceneID = 0x00000000,
    MTRClusterScenesCommandAddSceneResponseID = 0x00000000,
    MTRClusterScenesCommandViewSceneID = 0x00000001,
    MTRClusterScenesCommandViewSceneResponseID = 0x00000001,
    MTRClusterScenesCommandRemoveSceneID = 0x00000002,
    MTRClusterScenesCommandRemoveSceneResponseID = 0x00000002,
    MTRClusterScenesCommandRemoveAllScenesID = 0x00000003,
    MTRClusterScenesCommandRemoveAllScenesResponseID = 0x00000003,
    MTRClusterScenesCommandStoreSceneID = 0x00000004,
    MTRClusterScenesCommandStoreSceneResponseID = 0x00000004,
    MTRClusterScenesCommandRecallSceneID = 0x00000005,
    MTRClusterScenesCommandGetSceneMembershipID = 0x00000006,
    MTRClusterScenesCommandGetSceneMembershipResponseID = 0x00000006,
    MTRClusterScenesCommandEnhancedAddSceneID = 0x00000040,
    MTRClusterScenesCommandEnhancedAddSceneResponseID = 0x00000040,
    MTRClusterScenesCommandEnhancedViewSceneID = 0x00000041,
    MTRClusterScenesCommandEnhancedViewSceneResponseID = 0x00000041,
    MTRClusterScenesCommandCopySceneID = 0x00000042,
    MTRClusterScenesCommandCopySceneResponseID = 0x00000042,

    // Cluster OnOff commands
    MTRClusterOnOffCommandOffID = 0x00000000,
    MTRClusterOnOffCommandOnID = 0x00000001,
    MTRClusterOnOffCommandToggleID = 0x00000002,
    MTRClusterOnOffCommandOffWithEffectID = 0x00000040,
    MTRClusterOnOffCommandOnWithRecallGlobalSceneID = 0x00000041,
    MTRClusterOnOffCommandOnWithTimedOffID = 0x00000042,

    // Cluster LevelControl commands
    MTRClusterLevelControlCommandMoveToLevelID = 0x00000000,
    MTRClusterLevelControlCommandMoveID = 0x00000001,
    MTRClusterLevelControlCommandStepID = 0x00000002,
    MTRClusterLevelControlCommandStopID = 0x00000003,
    MTRClusterLevelControlCommandMoveToLevelWithOnOffID = 0x00000004,
    MTRClusterLevelControlCommandMoveWithOnOffID = 0x00000005,
    MTRClusterLevelControlCommandStepWithOnOffID = 0x00000006,
    MTRClusterLevelControlCommandStopWithOnOffID = 0x00000007,
    MTRClusterLevelControlCommandMoveToClosestFrequencyID = 0x00000008,

    // Cluster Actions commands
    MTRClusterActionsCommandInstantActionID = 0x00000000,
    MTRClusterActionsCommandInstantActionWithTransitionID = 0x00000001,
    MTRClusterActionsCommandStartActionID = 0x00000002,
    MTRClusterActionsCommandStartActionWithDurationID = 0x00000003,
    MTRClusterActionsCommandStopActionID = 0x00000004,
    MTRClusterActionsCommandPauseActionID = 0x00000005,
    MTRClusterActionsCommandPauseActionWithDurationID = 0x00000006,
    MTRClusterActionsCommandResumeActionID = 0x00000007,
    MTRClusterActionsCommandEnableActionID = 0x00000008,
    MTRClusterActionsCommandEnableActionWithDurationID = 0x00000009,
    MTRClusterActionsCommandDisableActionID = 0x0000000A,
    MTRClusterActionsCommandDisableActionWithDurationID = 0x0000000B,

    // Cluster Basic commands
    MTRClusterBasicCommandMfgSpecificPingID = 0x10020000,

    // Cluster OtaSoftwareUpdateProvider commands
    MTRClusterOtaSoftwareUpdateProviderCommandQueryImageID = 0x00000000,
    MTRClusterOtaSoftwareUpdateProviderCommandQueryImageResponseID = 0x00000001,
    MTRClusterOtaSoftwareUpdateProviderCommandApplyUpdateRequestID = 0x00000002,
    MTRClusterOtaSoftwareUpdateProviderCommandApplyUpdateResponseID = 0x00000003,
    MTRClusterOtaSoftwareUpdateProviderCommandNotifyUpdateAppliedID = 0x00000004,

    // Cluster OtaSoftwareUpdateRequestor commands
    MTRClusterOtaSoftwareUpdateRequestorCommandAnnounceOtaProviderID = 0x00000000,

    // Cluster GeneralCommissioning commands
    MTRClusterGeneralCommissioningCommandArmFailSafeID = 0x00000000,
    MTRClusterGeneralCommissioningCommandArmFailSafeResponseID = 0x00000001,
    MTRClusterGeneralCommissioningCommandSetRegulatoryConfigID = 0x00000002,
    MTRClusterGeneralCommissioningCommandSetRegulatoryConfigResponseID = 0x00000003,
    MTRClusterGeneralCommissioningCommandCommissioningCompleteID = 0x00000004,
    MTRClusterGeneralCommissioningCommandCommissioningCompleteResponseID = 0x00000005,

    // Cluster NetworkCommissioning commands
    MTRClusterNetworkCommissioningCommandScanNetworksID = 0x00000000,
    MTRClusterNetworkCommissioningCommandScanNetworksResponseID = 0x00000001,
    MTRClusterNetworkCommissioningCommandAddOrUpdateWiFiNetworkID = 0x00000002,
    MTRClusterNetworkCommissioningCommandAddOrUpdateThreadNetworkID = 0x00000003,
    MTRClusterNetworkCommissioningCommandRemoveNetworkID = 0x00000004,
    MTRClusterNetworkCommissioningCommandNetworkConfigResponseID = 0x00000005,
    MTRClusterNetworkCommissioningCommandConnectNetworkID = 0x00000006,
    MTRClusterNetworkCommissioningCommandConnectNetworkResponseID = 0x00000007,
    MTRClusterNetworkCommissioningCommandReorderNetworkID = 0x00000008,

    // Cluster DiagnosticLogs commands
    MTRClusterDiagnosticLogsCommandRetrieveLogsRequestID = 0x00000000,
    MTRClusterDiagnosticLogsCommandRetrieveLogsResponseID = 0x00000001,

    // Cluster GeneralDiagnostics commands
    MTRClusterGeneralDiagnosticsCommandTestEventTriggerID = 0x00000000,

    // Cluster SoftwareDiagnostics commands
    MTRClusterSoftwareDiagnosticsCommandResetWatermarksID = 0x00000000,

    // Cluster ThreadNetworkDiagnostics commands
    MTRClusterThreadNetworkDiagnosticsCommandResetCountsID = 0x00000000,

    // Cluster WiFiNetworkDiagnostics commands
    MTRClusterWiFiNetworkDiagnosticsCommandResetCountsID = 0x00000000,

    // Cluster EthernetNetworkDiagnostics commands
    MTRClusterEthernetNetworkDiagnosticsCommandResetCountsID = 0x00000000,

    // Cluster TimeSynchronization commands
    MTRClusterTimeSynchronizationCommandSetUtcTimeID = 0x00000000,

    // Cluster AdministratorCommissioning commands
    MTRClusterAdministratorCommissioningCommandOpenCommissioningWindowID = 0x00000000,
    MTRClusterAdministratorCommissioningCommandOpenBasicCommissioningWindowID = 0x00000001,
    MTRClusterAdministratorCommissioningCommandRevokeCommissioningID = 0x00000002,

    // Cluster OperationalCredentials commands
    MTRClusterOperationalCredentialsCommandAttestationRequestID = 0x00000000,
    MTRClusterOperationalCredentialsCommandAttestationResponseID = 0x00000001,
    MTRClusterOperationalCredentialsCommandCertificateChainRequestID = 0x00000002,
    MTRClusterOperationalCredentialsCommandCertificateChainResponseID = 0x00000003,
    MTRClusterOperationalCredentialsCommandCSRRequestID = 0x00000004,
    MTRClusterOperationalCredentialsCommandCSRResponseID = 0x00000005,
    MTRClusterOperationalCredentialsCommandAddNOCID = 0x00000006,
    MTRClusterOperationalCredentialsCommandUpdateNOCID = 0x00000007,
    MTRClusterOperationalCredentialsCommandNOCResponseID = 0x00000008,
    MTRClusterOperationalCredentialsCommandUpdateFabricLabelID = 0x00000009,
    MTRClusterOperationalCredentialsCommandRemoveFabricID = 0x0000000A,
    MTRClusterOperationalCredentialsCommandAddTrustedRootCertificateID = 0x0000000B,

    // Cluster GroupKeyManagement commands
    MTRClusterGroupKeyManagementCommandKeySetWriteID = 0x00000000,
    MTRClusterGroupKeyManagementCommandKeySetReadID = 0x00000001,
    MTRClusterGroupKeyManagementCommandKeySetReadResponseID = 0x00000002,
    MTRClusterGroupKeyManagementCommandKeySetRemoveID = 0x00000003,
    MTRClusterGroupKeyManagementCommandKeySetReadAllIndicesID = 0x00000004,
    MTRClusterGroupKeyManagementCommandKeySetReadAllIndicesResponseID = 0x00000005,

    // Cluster ModeSelect commands
    MTRClusterModeSelectCommandChangeToModeID = 0x00000000,

    // Cluster DoorLock commands
    MTRClusterDoorLockCommandLockDoorID = 0x00000000,
    MTRClusterDoorLockCommandUnlockDoorID = 0x00000001,
    MTRClusterDoorLockCommandUnlockWithTimeoutID = 0x00000003,
    MTRClusterDoorLockCommandSetWeekDayScheduleID = 0x0000000B,
    MTRClusterDoorLockCommandGetWeekDayScheduleID = 0x0000000C,
    MTRClusterDoorLockCommandGetWeekDayScheduleResponseID = 0x0000000C,
    MTRClusterDoorLockCommandClearWeekDayScheduleID = 0x0000000D,
    MTRClusterDoorLockCommandSetYearDayScheduleID = 0x0000000E,
    MTRClusterDoorLockCommandGetYearDayScheduleID = 0x0000000F,
    MTRClusterDoorLockCommandGetYearDayScheduleResponseID = 0x0000000F,
    MTRClusterDoorLockCommandClearYearDayScheduleID = 0x00000010,
    MTRClusterDoorLockCommandSetHolidayScheduleID = 0x00000011,
    MTRClusterDoorLockCommandGetHolidayScheduleID = 0x00000012,
    MTRClusterDoorLockCommandGetHolidayScheduleResponseID = 0x00000012,
    MTRClusterDoorLockCommandClearHolidayScheduleID = 0x00000013,
    MTRClusterDoorLockCommandSetUserID = 0x0000001A,
    MTRClusterDoorLockCommandGetUserID = 0x0000001B,
    MTRClusterDoorLockCommandGetUserResponseID = 0x0000001C,
    MTRClusterDoorLockCommandClearUserID = 0x0000001D,
    MTRClusterDoorLockCommandSetCredentialID = 0x00000022,
    MTRClusterDoorLockCommandSetCredentialResponseID = 0x00000023,
    MTRClusterDoorLockCommandGetCredentialStatusID = 0x00000024,
    MTRClusterDoorLockCommandGetCredentialStatusResponseID = 0x00000025,
    MTRClusterDoorLockCommandClearCredentialID = 0x00000026,

    // Cluster WindowCovering commands
    MTRClusterWindowCoveringCommandUpOrOpenID = 0x00000000,
    MTRClusterWindowCoveringCommandDownOrCloseID = 0x00000001,
    MTRClusterWindowCoveringCommandStopMotionID = 0x00000002,
    MTRClusterWindowCoveringCommandGoToLiftValueID = 0x00000004,
    MTRClusterWindowCoveringCommandGoToLiftPercentageID = 0x00000005,
    MTRClusterWindowCoveringCommandGoToTiltValueID = 0x00000007,
    MTRClusterWindowCoveringCommandGoToTiltPercentageID = 0x00000008,

    // Cluster BarrierControl commands
    MTRClusterBarrierControlCommandBarrierControlGoToPercentID = 0x00000000,
    MTRClusterBarrierControlCommandBarrierControlStopID = 0x00000001,

    // Cluster Thermostat commands
    MTRClusterThermostatCommandSetpointRaiseLowerID = 0x00000000,
    MTRClusterThermostatCommandGetWeeklyScheduleResponseID = 0x00000000,
    MTRClusterThermostatCommandSetWeeklyScheduleID = 0x00000001,
    MTRClusterThermostatCommandGetWeeklyScheduleID = 0x00000002,
    MTRClusterThermostatCommandClearWeeklyScheduleID = 0x00000003,

    // Cluster ColorControl commands
    MTRClusterColorControlCommandMoveToHueID = 0x00000000,
    MTRClusterColorControlCommandMoveHueID = 0x00000001,
    MTRClusterColorControlCommandStepHueID = 0x00000002,
    MTRClusterColorControlCommandMoveToSaturationID = 0x00000003,
    MTRClusterColorControlCommandMoveSaturationID = 0x00000004,
    MTRClusterColorControlCommandStepSaturationID = 0x00000005,
    MTRClusterColorControlCommandMoveToHueAndSaturationID = 0x00000006,
    MTRClusterColorControlCommandMoveToColorID = 0x00000007,
    MTRClusterColorControlCommandMoveColorID = 0x00000008,
    MTRClusterColorControlCommandStepColorID = 0x00000009,
    MTRClusterColorControlCommandMoveToColorTemperatureID = 0x0000000A,
    MTRClusterColorControlCommandEnhancedMoveToHueID = 0x00000040,
    MTRClusterColorControlCommandEnhancedMoveHueID = 0x00000041,
    MTRClusterColorControlCommandEnhancedStepHueID = 0x00000042,
    MTRClusterColorControlCommandEnhancedMoveToHueAndSaturationID = 0x00000043,
    MTRClusterColorControlCommandColorLoopSetID = 0x00000044,
    MTRClusterColorControlCommandStopMoveStepID = 0x00000047,
    MTRClusterColorControlCommandMoveColorTemperatureID = 0x0000004B,
    MTRClusterColorControlCommandStepColorTemperatureID = 0x0000004C,

    // Cluster Channel commands
    MTRClusterChannelCommandChangeChannelID = 0x00000000,
    MTRClusterChannelCommandChangeChannelResponseID = 0x00000001,
    MTRClusterChannelCommandChangeChannelByNumberID = 0x00000002,
    MTRClusterChannelCommandSkipChannelID = 0x00000003,

    // Cluster TargetNavigator commands
    MTRClusterTargetNavigatorCommandNavigateTargetID = 0x00000000,
    MTRClusterTargetNavigatorCommandNavigateTargetResponseID = 0x00000001,

    // Cluster MediaPlayback commands
    MTRClusterMediaPlaybackCommandPlayID = 0x00000000,
    MTRClusterMediaPlaybackCommandPauseID = 0x00000001,
    MTRClusterMediaPlaybackCommandStopPlaybackID = 0x00000002,
    MTRClusterMediaPlaybackCommandStartOverID = 0x00000003,
    MTRClusterMediaPlaybackCommandPreviousID = 0x00000004,
    MTRClusterMediaPlaybackCommandNextID = 0x00000005,
    MTRClusterMediaPlaybackCommandRewindID = 0x00000006,
    MTRClusterMediaPlaybackCommandFastForwardID = 0x00000007,
    MTRClusterMediaPlaybackCommandSkipForwardID = 0x00000008,
    MTRClusterMediaPlaybackCommandSkipBackwardID = 0x00000009,
    MTRClusterMediaPlaybackCommandPlaybackResponseID = 0x0000000A,
    MTRClusterMediaPlaybackCommandSeekID = 0x0000000B,

    // Cluster MediaInput commands
    MTRClusterMediaInputCommandSelectInputID = 0x00000000,
    MTRClusterMediaInputCommandShowInputStatusID = 0x00000001,
    MTRClusterMediaInputCommandHideInputStatusID = 0x00000002,
    MTRClusterMediaInputCommandRenameInputID = 0x00000003,

    // Cluster LowPower commands
    MTRClusterLowPowerCommandSleepID = 0x00000000,

    // Cluster KeypadInput commands
    MTRClusterKeypadInputCommandSendKeyID = 0x00000000,
    MTRClusterKeypadInputCommandSendKeyResponseID = 0x00000001,

    // Cluster ContentLauncher commands
    MTRClusterContentLauncherCommandLaunchContentID = 0x00000000,
    MTRClusterContentLauncherCommandLaunchURLID = 0x00000001,
    MTRClusterContentLauncherCommandLaunchResponseID = 0x00000002,

    // Cluster AudioOutput commands
    MTRClusterAudioOutputCommandSelectOutputID = 0x00000000,
    MTRClusterAudioOutputCommandRenameOutputID = 0x00000001,

    // Cluster ApplicationLauncher commands
    MTRClusterApplicationLauncherCommandLaunchAppID = 0x00000000,
    MTRClusterApplicationLauncherCommandStopAppID = 0x00000001,
    MTRClusterApplicationLauncherCommandHideAppID = 0x00000002,
    MTRClusterApplicationLauncherCommandLauncherResponseID = 0x00000003,

    // Cluster AccountLogin commands
    MTRClusterAccountLoginCommandGetSetupPINID = 0x00000000,
    MTRClusterAccountLoginCommandGetSetupPINResponseID = 0x00000001,
    MTRClusterAccountLoginCommandLoginID = 0x00000002,
    MTRClusterAccountLoginCommandLogoutID = 0x00000003,

    // Cluster ElectricalMeasurement commands
    MTRClusterElectricalMeasurementCommandGetProfileInfoResponseCommandID = 0x00000000,
    MTRClusterElectricalMeasurementCommandGetProfileInfoCommandID = 0x00000000,
    MTRClusterElectricalMeasurementCommandGetMeasurementProfileResponseCommandID = 0x00000001,
    MTRClusterElectricalMeasurementCommandGetMeasurementProfileCommandID = 0x00000001,

    // Cluster UnitTesting commands
    MTRClusterUnitTestingCommandTestID MTR_NEWLY_AVAILABLE = 0x00000000,
    MTRClusterUnitTestingCommandTestSpecificResponseID MTR_NEWLY_AVAILABLE = 0x00000000,
    MTRClusterUnitTestingCommandTestNotHandledID MTR_NEWLY_AVAILABLE = 0x00000001,
    MTRClusterUnitTestingCommandTestAddArgumentsResponseID MTR_NEWLY_AVAILABLE = 0x00000001,
    MTRClusterUnitTestingCommandTestSpecificID MTR_NEWLY_AVAILABLE = 0x00000002,
    MTRClusterUnitTestingCommandTestSimpleArgumentResponseID MTR_NEWLY_AVAILABLE = 0x00000002,
    MTRClusterUnitTestingCommandTestUnknownCommandID MTR_NEWLY_AVAILABLE = 0x00000003,
    MTRClusterUnitTestingCommandTestStructArrayArgumentResponseID MTR_NEWLY_AVAILABLE = 0x00000003,
    MTRClusterUnitTestingCommandTestAddArgumentsID MTR_NEWLY_AVAILABLE = 0x00000004,
    MTRClusterUnitTestingCommandTestListInt8UReverseResponseID MTR_NEWLY_AVAILABLE = 0x00000004,
    MTRClusterUnitTestingCommandTestSimpleArgumentRequestID MTR_NEWLY_AVAILABLE = 0x00000005,
    MTRClusterUnitTestingCommandTestEnumsResponseID MTR_NEWLY_AVAILABLE = 0x00000005,
    MTRClusterUnitTestingCommandTestStructArrayArgumentRequestID MTR_NEWLY_AVAILABLE = 0x00000006,
    MTRClusterUnitTestingCommandTestNullableOptionalResponseID MTR_NEWLY_AVAILABLE = 0x00000006,
    MTRClusterUnitTestingCommandTestStructArgumentRequestID MTR_NEWLY_AVAILABLE = 0x00000007,
    MTRClusterUnitTestingCommandTestComplexNullableOptionalResponseID MTR_NEWLY_AVAILABLE = 0x00000007,
    MTRClusterUnitTestingCommandTestNestedStructArgumentRequestID MTR_NEWLY_AVAILABLE = 0x00000008,
    MTRClusterUnitTestingCommandBooleanResponseID MTR_NEWLY_AVAILABLE = 0x00000008,
    MTRClusterUnitTestingCommandTestListStructArgumentRequestID MTR_NEWLY_AVAILABLE = 0x00000009,
    MTRClusterUnitTestingCommandSimpleStructResponseID MTR_NEWLY_AVAILABLE = 0x00000009,
    MTRClusterUnitTestingCommandTestListInt8UArgumentRequestID MTR_NEWLY_AVAILABLE = 0x0000000A,
    MTRClusterUnitTestingCommandTestEmitTestEventResponseID MTR_NEWLY_AVAILABLE = 0x0000000A,
    MTRClusterUnitTestingCommandTestNestedStructListArgumentRequestID MTR_NEWLY_AVAILABLE = 0x0000000B,
    MTRClusterUnitTestingCommandTestEmitTestFabricScopedEventResponseID MTR_NEWLY_AVAILABLE = 0x0000000B,
    MTRClusterUnitTestingCommandTestListNestedStructListArgumentRequestID MTR_NEWLY_AVAILABLE = 0x0000000C,
    MTRClusterUnitTestingCommandTestListInt8UReverseRequestID MTR_NEWLY_AVAILABLE = 0x0000000D,
    MTRClusterUnitTestingCommandTestEnumsRequestID MTR_NEWLY_AVAILABLE = 0x0000000E,
    MTRClusterUnitTestingCommandTestNullableOptionalRequestID MTR_NEWLY_AVAILABLE = 0x0000000F,
    MTRClusterUnitTestingCommandTestComplexNullableOptionalRequestID MTR_NEWLY_AVAILABLE = 0x00000010,
    MTRClusterUnitTestingCommandSimpleStructEchoRequestID MTR_NEWLY_AVAILABLE = 0x00000011,
    MTRClusterUnitTestingCommandTimedInvokeRequestID MTR_NEWLY_AVAILABLE = 0x00000012,
    MTRClusterUnitTestingCommandTestSimpleOptionalArgumentRequestID MTR_NEWLY_AVAILABLE = 0x00000013,
    MTRClusterUnitTestingCommandTestEmitTestEventRequestID MTR_NEWLY_AVAILABLE = 0x00000014,
    MTRClusterUnitTestingCommandTestEmitTestFabricScopedEventRequestID MTR_NEWLY_AVAILABLE = 0x00000015,

    // Cluster TestCluster commands
    MTRClusterTestClusterCommandTestID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingCommandTestID") = 0x00000000,
    MTRClusterTestClusterCommandTestSpecificResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestSpecificResponseID")
    = 0x00000000,
    MTRClusterTestClusterCommandTestNotHandledID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingCommandTestNotHandledID")
    = 0x00000001,
    MTRClusterTestClusterCommandTestAddArgumentsResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestAddArgumentsResponseID")
    = 0x00000001,
    MTRClusterTestClusterCommandTestSpecificID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingCommandTestSpecificID")
    = 0x00000002,
    MTRClusterTestClusterCommandTestSimpleArgumentResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestSimpleArgumentResponseID")
    = 0x00000002,
    MTRClusterTestClusterCommandTestUnknownCommandID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestUnknownCommandID")
    = 0x00000003,
    MTRClusterTestClusterCommandTestStructArrayArgumentResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestStructArrayArgumentResponseID")
    = 0x00000003,
    MTRClusterTestClusterCommandTestAddArgumentsID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingCommandTestAddArgumentsID")
    = 0x00000004,
    MTRClusterTestClusterCommandTestListInt8UReverseResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestListInt8UReverseResponseID")
    = 0x00000004,
    MTRClusterTestClusterCommandTestSimpleArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestSimpleArgumentRequestID")
    = 0x00000005,
    MTRClusterTestClusterCommandTestEnumsResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestEnumsResponseID")
    = 0x00000005,
    MTRClusterTestClusterCommandTestStructArrayArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestStructArrayArgumentRequestID")
    = 0x00000006,
    MTRClusterTestClusterCommandTestNullableOptionalResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestNullableOptionalResponseID")
    = 0x00000006,
    MTRClusterTestClusterCommandTestStructArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestStructArgumentRequestID")
    = 0x00000007,
    MTRClusterTestClusterCommandTestComplexNullableOptionalResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestComplexNullableOptionalResponseID")
    = 0x00000007,
    MTRClusterTestClusterCommandTestNestedStructArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestNestedStructArgumentRequestID")
    = 0x00000008,
    MTRClusterTestClusterCommandBooleanResponseID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingCommandBooleanResponseID")
    = 0x00000008,
    MTRClusterTestClusterCommandTestListStructArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestListStructArgumentRequestID")
    = 0x00000009,
    MTRClusterTestClusterCommandSimpleStructResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandSimpleStructResponseID")
    = 0x00000009,
    MTRClusterTestClusterCommandTestListInt8UArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestListInt8UArgumentRequestID")
    = 0x0000000A,
    MTRClusterTestClusterCommandTestEmitTestEventResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestEmitTestEventResponseID")
    = 0x0000000A,
    MTRClusterTestClusterCommandTestNestedStructListArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestNestedStructListArgumentRequestID")
    = 0x0000000B,
    MTRClusterTestClusterCommandTestEmitTestFabricScopedEventResponseID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestEmitTestFabricScopedEventResponseID")
    = 0x0000000B,
    MTRClusterTestClusterCommandTestListNestedStructListArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestListNestedStructListArgumentRequestID")
    = 0x0000000C,
    MTRClusterTestClusterCommandTestListInt8UReverseRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestListInt8UReverseRequestID")
    = 0x0000000D,
    MTRClusterTestClusterCommandTestEnumsRequestID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingCommandTestEnumsRequestID")
    = 0x0000000E,
    MTRClusterTestClusterCommandTestNullableOptionalRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestNullableOptionalRequestID")
    = 0x0000000F,
    MTRClusterTestClusterCommandTestComplexNullableOptionalRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestComplexNullableOptionalRequestID")
    = 0x00000010,
    MTRClusterTestClusterCommandSimpleStructEchoRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandSimpleStructEchoRequestID")
    = 0x00000011,
    MTRClusterTestClusterCommandTimedInvokeRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTimedInvokeRequestID")
    = 0x00000012,
    MTRClusterTestClusterCommandTestSimpleOptionalArgumentRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestSimpleOptionalArgumentRequestID")
    = 0x00000013,
    MTRClusterTestClusterCommandTestEmitTestEventRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestEmitTestEventRequestID")
    = 0x00000014,
    MTRClusterTestClusterCommandTestEmitTestFabricScopedEventRequestID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingCommandTestEmitTestFabricScopedEventRequestID")
    = 0x00000015,

    // Cluster FaultInjection commands
    MTRClusterFaultInjectionCommandFailAtFaultID = 0x00000000,
    MTRClusterFaultInjectionCommandFailRandomlyAtFaultID = 0x00000001,

};

#pragma mark - Events IDs

typedef NS_ENUM(uint32_t, MTRClusterEventIDType) {

    // Cluster AccessControl events
    MTRClusterAccessControlEventAccessControlEntryChangedID = 0x00000000,
    MTRClusterAccessControlEventAccessControlExtensionChangedID = 0x00000001,

    // Cluster Actions events
    MTRClusterActionsEventStateChangedID = 0x00000000,
    MTRClusterActionsEventActionFailedID = 0x00000001,

    // Cluster Basic events
    MTRClusterBasicEventStartUpID = 0x00000000,
    MTRClusterBasicEventShutDownID = 0x00000001,
    MTRClusterBasicEventLeaveID = 0x00000002,
    MTRClusterBasicEventReachableChangedID = 0x00000003,

    // Cluster OtaSoftwareUpdateRequestor events
    MTRClusterOtaSoftwareUpdateRequestorEventStateTransitionID = 0x00000000,
    MTRClusterOtaSoftwareUpdateRequestorEventVersionAppliedID = 0x00000001,
    MTRClusterOtaSoftwareUpdateRequestorEventDownloadErrorID = 0x00000002,

    // Cluster GeneralDiagnostics events
    MTRClusterGeneralDiagnosticsEventHardwareFaultChangeID = 0x00000000,
    MTRClusterGeneralDiagnosticsEventRadioFaultChangeID = 0x00000001,
    MTRClusterGeneralDiagnosticsEventNetworkFaultChangeID = 0x00000002,
    MTRClusterGeneralDiagnosticsEventBootReasonID = 0x00000003,

    // Cluster SoftwareDiagnostics events
    MTRClusterSoftwareDiagnosticsEventSoftwareFaultID = 0x00000000,

    // Cluster ThreadNetworkDiagnostics events
    MTRClusterThreadNetworkDiagnosticsEventConnectionStatusID = 0x00000000,
    MTRClusterThreadNetworkDiagnosticsEventNetworkFaultChangeID = 0x00000001,

    // Cluster WiFiNetworkDiagnostics events
    MTRClusterWiFiNetworkDiagnosticsEventDisconnectionID = 0x00000000,
    MTRClusterWiFiNetworkDiagnosticsEventAssociationFailureID = 0x00000001,
    MTRClusterWiFiNetworkDiagnosticsEventConnectionStatusID = 0x00000002,

    // Cluster BridgedDeviceBasic events
    MTRClusterBridgedDeviceBasicEventStartUpID = 0x00000000,
    MTRClusterBridgedDeviceBasicEventShutDownID = 0x00000001,
    MTRClusterBridgedDeviceBasicEventLeaveID = 0x00000002,
    MTRClusterBridgedDeviceBasicEventReachableChangedID = 0x00000003,

    // Cluster Switch events
    MTRClusterSwitchEventSwitchLatchedID = 0x00000000,
    MTRClusterSwitchEventInitialPressID = 0x00000001,
    MTRClusterSwitchEventLongPressID = 0x00000002,
    MTRClusterSwitchEventShortReleaseID = 0x00000003,
    MTRClusterSwitchEventLongReleaseID = 0x00000004,
    MTRClusterSwitchEventMultiPressOngoingID = 0x00000005,
    MTRClusterSwitchEventMultiPressCompleteID = 0x00000006,

    // Cluster BooleanState events
    MTRClusterBooleanStateEventStateChangeID = 0x00000000,

    // Cluster DoorLock events
    MTRClusterDoorLockEventDoorLockAlarmID = 0x00000000,
    MTRClusterDoorLockEventDoorStateChangeID = 0x00000001,
    MTRClusterDoorLockEventLockOperationID = 0x00000002,
    MTRClusterDoorLockEventLockOperationErrorID = 0x00000003,
    MTRClusterDoorLockEventLockUserChangeID = 0x00000004,

    // Cluster PumpConfigurationAndControl events
    MTRClusterPumpConfigurationAndControlEventSupplyVoltageLowID = 0x00000000,
    MTRClusterPumpConfigurationAndControlEventSupplyVoltageHighID = 0x00000001,
    MTRClusterPumpConfigurationAndControlEventPowerMissingPhaseID = 0x00000002,
    MTRClusterPumpConfigurationAndControlEventSystemPressureLowID = 0x00000003,
    MTRClusterPumpConfigurationAndControlEventSystemPressureHighID = 0x00000004,
    MTRClusterPumpConfigurationAndControlEventDryRunningID = 0x00000005,
    MTRClusterPumpConfigurationAndControlEventMotorTemperatureHighID = 0x00000006,
    MTRClusterPumpConfigurationAndControlEventPumpMotorFatalFailureID = 0x00000007,
    MTRClusterPumpConfigurationAndControlEventElectronicTemperatureHighID = 0x00000008,
    MTRClusterPumpConfigurationAndControlEventPumpBlockedID = 0x00000009,
    MTRClusterPumpConfigurationAndControlEventSensorFailureID = 0x0000000A,
    MTRClusterPumpConfigurationAndControlEventElectronicNonFatalFailureID = 0x0000000B,
    MTRClusterPumpConfigurationAndControlEventElectronicFatalFailureID = 0x0000000C,
    MTRClusterPumpConfigurationAndControlEventGeneralFaultID = 0x0000000D,
    MTRClusterPumpConfigurationAndControlEventLeakageID = 0x0000000E,
    MTRClusterPumpConfigurationAndControlEventAirDetectionID = 0x0000000F,
    MTRClusterPumpConfigurationAndControlEventTurbineOperationID = 0x00000010,

    // Cluster UnitTesting events
    MTRClusterUnitTestingEventTestEventID MTR_NEWLY_AVAILABLE = 0x00000001,
    MTRClusterUnitTestingEventTestFabricScopedEventID MTR_NEWLY_AVAILABLE = 0x00000002,

    // Cluster TestCluster events
    MTRClusterTestClusterEventTestEventID MTR_NEWLY_DEPRECATED("Please use MTRClusterUnitTestingEventTestEventID") = 0x00000001,
    MTRClusterTestClusterEventTestFabricScopedEventID MTR_NEWLY_DEPRECATED(
        "Please use MTRClusterUnitTestingEventTestFabricScopedEventID")
    = 0x00000002,

};
