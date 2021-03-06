/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary *_pendingUpdateRecordByStoreAdamID;
}

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_mediaLibrary;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3;
- (void)_deviceMediaLibraryDidChangeNotification:(id)arg1;
- (id)_libraryEntityWithStoreID:(long long)arg1 contentType:(unsigned int)arg2;
- (id)_libraryPlaylistWithGlobalID:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setTasteType:(unsigned int)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(unsigned int)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(unsigned int)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (unsigned int)tasteTypeForMediaEntity:(id)arg1;
- (unsigned int)tasteTypeForPlaylistGlobalID:(id)arg1;
- (unsigned int)tasteTypeForStoreAdamID:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (BOOL)MPU_tasteTypeSupportedForContentItemIdentifierCollection:(id)arg1;

- (void)MPU_setTasteType:(unsigned int)arg1 forContentItemIdentifierCollection:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned int)MPU_tasteTypeForContentItemIdentifierCollection:(id)arg1;

@end
