/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperation : NSObject {
    id _private;
    int _private1;
}

@property (getter=isAsynchronous, readonly) BOOL asynchronous;
@property (getter=isCancelled, readonly) BOOL cancelled;
@property (copy) id /* block */ completionBlock;
@property (getter=isConcurrent, readonly) BOOL concurrent;
@property (readonly, copy) NSArray *dependencies;
@property (getter=isExecuting, readonly) BOOL executing;
@property (getter=isFinished, readonly) BOOL finished;
@property (copy) NSString *name;
@property int qualityOfService;
@property int queuePriority;
@property (getter=isReady, readonly) BOOL ready;
@property double threadPriority;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentOperation;

- (id)__;
- (id)_activity;
- (int)_effQoS;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)arg1;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)dependencies;
- (id)description;
- (void)finalize;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isCancelled;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)main;
- (id)name;
- (void*)observationInfo;
- (int)qualityOfService;
- (int)queuePriority;
- (void)removeDependency:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setQueuePriority:(int)arg1;
- (void)setThreadPriority:(double)arg1;
- (void)start;
- (double)threadPriority;
- (void)waitUntilFinished;
- (void)waitUntilFinishedOrTimeout:(double)arg1;

@end
