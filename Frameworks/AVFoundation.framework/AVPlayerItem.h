/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItem : NSObject <NSCopying> {
    AVPlayerItemInternal *_playerItem;
}

@property (nonatomic, retain) MPAVItem *MPAVItem;
@property (nonatomic) MPQueuePlayer *MP_associatedQueuePlayer;
@property (getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:, nonatomic) BOOL _externalProtectionRequiredForPlayback;
@property (getter=_isRental, nonatomic, readonly) BOOL _rental;
@property (nonatomic, readonly) NSDate *_rentalExpirationDate;
@property (nonatomic, readonly) NSDate *_rentalPlaybackExpirationDate;
@property (getter=_isRentalPlaybackStarted, nonatomic, readonly) BOOL _rentalPlaybackStarted;
@property (nonatomic, readonly) NSDate *_rentalPlaybackStartedDate;
@property (nonatomic, readonly) NSDate *_rentalStartDate;
@property (getter=isApplicationAuthorizedForPlayback, nonatomic, readonly) BOOL applicationAuthorizedForPlayback;
@property (getter=isAuthorizationRequiredForPlayback, nonatomic, readonly) BOOL authorizationRequiredForPlayback;
@property (getter=isContentAuthorizedForPlayback, nonatomic, readonly) BOOL contentAuthorizedForPlayback;
@property (nonatomic, copy) NSString *dataYouTubeID;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) NSString *mediaKind;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, readonly) double rc_durationInSeconds;
@property (nonatomic, readonly) BOOL rc_isDurationAvailable;
@property (nonatomic, readonly) struct { double x1; double x2; } rc_playableTimeRange;
@property (setter=rc_setPreviewTimeRange:, nonatomic) struct { double x1; double x2; } rc_previewTimeRange;
@property (nonatomic) unsigned int restrictions;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, readonly) int status;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (struct OpaqueCMTimebase { }*)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversOfTracks;
+ (BOOL)automaticallyNotifiesObserversOfVariantIndex;
+ (void)initialize;
+ (id)playerItemWithAsset:(id)arg1;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (id)playerItemWithURL:(id)arg1;

- (unsigned int)RTCReportingFlags;
- (int)_CreateSeekID;
- (id)_URL;
- (void)_addFAListeners;
- (void)_addFPListeners;
- (void)_addLegibleOutput:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_addVideoOutput:(id)arg1;
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (BOOL)_alwaysMonitorsPlayability;
- (void)_applyMediaSelectionOptions;
- (void)_applyNewAudioMix:(id)arg1 oldAudioMix:(id)arg2;
- (void)_applySeekingWaitsForVideoCompositionRendering;
- (void)_applyTextStyleRules;
- (void)_attachToFigPlayer;
- (void)_attachToPlayer:(id)arg1;
- (id)_audioTimePitchAlgorithm;
- (long long)_availableFileSize;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (id)_cachedTracks;
- (id)_cachedValueForKey:(id)arg1;
- (BOOL)_canPlayFastForward;
- (BOOL)_canPlayFastReverse;
- (BOOL)_canPlayReverse;
- (BOOL)_canPlaySlowForward;
- (BOOL)_canPlaySlowReverse;
- (BOOL)_canStepBackward;
- (BOOL)_canStepForward;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id /* block */)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (void)_configurePlaybackItem;
- (BOOL)_continuesPlayingDuringPrerollForRateChange;
- (BOOL)_continuesPlayingDuringPrerollForSeek;
- (struct OpaqueFigPlaybackItem { }*)_copyFigPlaybackItem;
- (struct OpaqueCMTimebase { }*)_copyProxyTimebase;
- (struct OpaqueCMTimebase { }*)_copyTimebase;
- (void)_createPlayerConnection:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (void)_createPlayerItemInternal;
- (void)_dequeueFromPlayer;
- (void)_didAccessKVOForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (void)_enqueueWithPlayer:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateVideoOutputs;
- (struct OpaqueFigCPEProtector { }*)_figCPEProtector;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (long long)_fileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_forwardPlaybackEndTime;
- (id)_fpNotificationNames;
- (BOOL)_hasEnabledAudio;
- (BOOL)_hasEnabledVideo;
- (void)_informObserversAboutAvailabilityOfDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_insertAfterItem:(id)arg1;
- (void)_invokeReadyForEnqueueingHandlers;
- (BOOL)_isAFileBasedItemThatsReadyToPlay;
- (BOOL)_isCurrentPlayerItem;
- (BOOL)_isExternalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (BOOL)_isNonForcedSubtitleDisplayEnabled;
- (BOOL)_isRental;
- (BOOL)_isRentalPlaybackStarted;
- (void)_kickAssetObserversIfAppropriate;
- (id)_legibleOutputForKey:(id)arg1;
- (id)_legibleOutputsForKeys;
- (BOOL)_limitReadAhead;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (void)_makeNewAssetWithFigPlaybackItem;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id /* block */)arg1;
- (id)_mediaKind;
- (id)_metadataOutputForKey:(id)arg1;
- (id)_metadataOutputsForKeys;
- (id)_nextItem;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary { }*)arg1;
- (int)_playbackLikelyToKeepUpTrigger;
- (id)_playbackProperties;
- (id)_player;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (id)_playerConnection;
- (id)_preferredPixelBufferAttributes;
- (struct CGSize { float x1; float x2; })_presentationSize;
- (id)_previousItem;
- (id)_propertyStorage;
- (void)_quietlySetAllowsExtendedReadAhead:(BOOL)arg1;
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_quietlySetFigTimePitchAlgorithm:(struct __CFString { }*)arg1;
- (void)_quietlySetForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetLimitReadAhead:(BOOL)arg1;
- (void)_quietlySetMaximumTrailingBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetMediaKind:(id)arg1;
- (void)_quietlySetMinimumIntervalForIFrameOnlyPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (void)_quietlySetPlaybackProperties:(id)arg1;
- (void)_quietlySetRTCReportingFlags:(unsigned int)arg1;
- (void)_quietlySetRestrictions:(unsigned int)arg1;
- (void)_quietlySetReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetServiceIdentifier:(id)arg1;
- (void)_quietlySetSoundCheckVolumeNormalization:(float)arg1;
- (void)_quietlySetSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)_quietlySetUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1;
- (void)_quietlySetVariantIndex:(int)arg1;
- (void)_quietlySetVolumeAdjustment:(float)arg1;
- (void)_quietlySetWillNeverSeekBackwardsHint:(BOOL)arg1;
- (void)_removeFAListeners;
- (void)_removeFPListeners;
- (void)_removeFromItems;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (id)_rentalExpirationDate;
- (id)_rentalPlaybackExpirationDate;
- (id)_rentalPlaybackStartedDate;
- (id)_rentalStartDate;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_reversePlaybackEndTime;
- (id)_seekableTimeRanges;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (void)_setAsset:(id)arg1;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_setAssetWithFigPlaybackItem:(id)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1 forTrackID:(int)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (void)_setEQPreset:(int)arg1;
- (void)_setExternalProtectionRequiredForPlayback:(BOOL)arg1;
- (void)_setIsCurrentPlayerItem:(BOOL)arg1;
- (void)_setPlayerConnection:(id)arg1;
- (void)_setRampInOutInfo:(id)arg1;
- (void)_setSuppressesVideoLayers:(BOOL)arg1;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_setTimedMetadata:(id)arg1;
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)_setVideoCompositionFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setVideoCompositor:(void*)arg1;
- (id)_stateDispatchQueue;
- (BOOL)_suppressesVideoLayers;
- (BOOL)_suppressionForOutputs:(id)arg1;
- (id)_trackWithTrackID:(int)arg1;
- (id)_tracks;
- (id)_tracksFromAssetTrackIDs;
- (id)_tracksWithFPTrackIDArray:(id)arg1;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 basedOnOutputs:(id)arg2;
- (void)_updateTimebase;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 basedOnOutputs:(id)arg2;
- (id)_videoOutputs;
- (id)_weakReference;
- (void)_willAccessKVOForKey:(id)arg1;
- (BOOL)_willNeverSeekBackwardsHint;
- (id)accessLog;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)addOutput:(id)arg1;
- (BOOL)allowProgressiveSwitchUp;
- (BOOL)allowsExtendedReadAhead;
- (BOOL)alwaysMonitorsPlayability;
- (id)asset;
- (id)audioMix;
- (id)audioTimePitchAlgorithm;
- (id)automaticallyLoadedAssetKeys;
- (BOOL)canPlayFastForward;
- (BOOL)canPlayFastReverse;
- (BOOL)canPlayReverse;
- (BOOL)canPlaySlowForward;
- (BOOL)canPlaySlowReverse;
- (BOOL)canStepBackward;
- (BOOL)canStepForward;
- (void)cancelPendingSeeks;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDate;
- (id)currentEstimatedDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)customVideoCompositor;
- (id)dataYouTubeID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didChangeValueForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (id)errorLog;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)gaplessInfo;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initialDate;
- (id)initialEstimatedDate;
- (BOOL)isApplicationAuthorizedForPlayback;
- (BOOL)isAuthorizationRequiredForPlayback;
- (BOOL)isContentAuthorizedForPlayback;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (BOOL)isPlaybackBufferEmpty;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)limitReadAhead;
- (id)loadedTimeRanges;
- (float)maximumBitRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumTrailingBufferDuration;
- (id)mediaKind;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumIntervalForIFrameOnlyPlayback;
- (BOOL)networkUsuallyExceedsMaxBitRate;
- (id)outputs;
- (id)playabilityMetrics;
- (int)playbackLikelyToKeepUpTrigger;
- (double)preferredPeakBitRate;
- (struct CGSize { float x1; float x2; })presentationSize;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (void)removeOutput:(id)arg1;
- (BOOL)requiresAccessLog;
- (unsigned int)restrictions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (BOOL)savesDownloadedDataToDiskWhenDone;
- (BOOL)seekToDate:(id)arg1;
- (BOOL)seekToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (id)seekableTimeRanges;
- (BOOL)seekingWaitsForVideoCompositionRendering;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)serviceIdentifier;
- (void)setAllowProgressiveSwitchUp:(BOOL)arg1;
- (void)setAllowsExtendedReadAhead:(BOOL)arg1;
- (void)setAlwaysMonitorsPlayability:(BOOL)arg1;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (void)setDataYouTubeID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setGaplessInfo:(id)arg1;
- (void)setInitialDate:(id)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (void)setLimitReadAhead:(BOOL)arg1;
- (void)setMaximumBitRate:(float)arg1;
- (void)setMaximumTrailingBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMediaKind:(id)arg1;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNetworkUsuallyExceedsMaxBitRate:(BOOL)arg1;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (void)setPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)setRequiresAccessLog:(BOOL)arg1;
- (void)setRestrictions:(unsigned int)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSavesDownloadedDataToDiskWhenDone:(BOOL)arg1;
- (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)setTextStyleRules:(id)arg1;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1;
- (void)setVariantIndex:(int)arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVolumeAdjustment:(float)arg1;
- (void)setWillNeverSeekBackwardsHint:(BOOL)arg1;
- (float)soundCheckVolumeNormalization;
- (float)speedThresholdForIFrameOnlyPlayback;
- (int)status;
- (void)stepByCount:(int)arg1;
- (id)textStyleRules;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)timedMetadata;
- (id)tracks;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (id)valueForUndefinedKey:(id)arg1;
- (int)variantIndex;
- (id)videoComposition;
- (float)volumeAdjustment;
- (void)willChangeValueForKey:(id)arg1;
- (BOOL)willNeverSeekBackwardsHint;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)MPAVItem;
- (id)MP_associatedQueuePlayer;
- (id)MP_shortDescription;
- (void)setMPAVItem:(id)arg1;
- (void)setMP_associatedQueuePlayer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (double)_rawDurationInSeconds;
- (double)rc_durationInSeconds;
- (BOOL)rc_isDurationAvailable;
- (struct { double x1; double x2; })rc_playableTimeRange;
- (struct { double x1; double x2; })rc_previewTimeRange;
- (void)rc_setPreviewTimeRange:(struct { double x1; double x2; })arg1;

@end
