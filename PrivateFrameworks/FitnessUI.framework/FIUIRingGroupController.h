/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class <FIUIRingGroupAnimationStatusDelegate>, NSArray;

@interface FIUIRingGroupController : FIUIAnimatableObject {
    float _additionalSpacingAtIndex;
    <FIUIRingGroupAnimationStatusDelegate> *_animationStatusDelegate;
    float _backingOrigin;
    struct CGPoint { 
        float x; 
        float y; 
    } _center;
    int *_iconAnimationFrameNumbers;
    int _numberOfRings;
    float _ringDiameter;
    float _ringIconSize;
    float _ringInterspacing;
    float _ringScale;
    BOOL _ringStartingStateIsDirty;
    float _ringThickness;
    NSArray *_rings;
}

@property float additionalSpacingAtIndex;
@property <FIUIRingGroupAnimationStatusDelegate> * animationStatusDelegate;
@property float backingOrigin;
@property struct CGPoint { float x1; float x2; } center;
@property(readonly) int numberOfRings;
@property float ringDiameter;
@property float ringIconSize;
@property float ringInterspacing;
@property float ringScale;
@property float ringThickness;
@property(retain) NSArray * rings;

+ (id)animationTimingFunction;
+ (double)defaultAnimationDuration;

- (void).cxx_destruct;
- (double)_adjustedDurationForRingWithIndex:(int)arg1 startPercentage:(double)arg2 targetPercentage:(double)arg3 defaultDuration:(double)arg4;
- (float)_diameterForRingAtIndex:(unsigned int)arg1;
- (void)_markRingStartingStateDirty;
- (id)_newAnimatablePropertyForType:(unsigned int)arg1;
- (float)_scaledRingDiameter;
- (float)_scaledRingIconSize;
- (float)_scaledRingInterspacing;
- (float)_scaledRingThickness;
- (BOOL)_setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateRingDiameters;
- (void)_updateRingIconProperties;
- (void)_updateRingThicknesses;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned int)arg2;
- (void)addOpacityAnimation:(id)arg1 forRingAtIndex:(int)arg2;
- (float)additionalSpacingAtIndex;
- (id)animationStatusDelegate;
- (BOOL)areAnimationsInProgress;
- (float)backingOrigin;
- (struct CGPoint { float x1; float x2; })center;
- (void)dealloc;
- (int)indexOfRingAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithNumberOfRings:(int)arg1;
- (int)numberOfRings;
- (float)ringDiameter;
- (float)ringIconSize;
- (float)ringInterspacing;
- (float)ringScale;
- (float)ringThickness;
- (id)rings;
- (BOOL)ringsAreEmpty;
- (void)setAdditionalSpacingAtIndex:(float)arg1;
- (void)setAnimationStatusDelegate:(id)arg1;
- (void)setBackingOrigin:(float)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDotPercentage:(double)arg1 ofRingAtIndex:(int)arg2 animated:(BOOL)arg3;
- (void)setIconDotTextureOrigin:(struct CGPoint { float x1; float x2; })arg1 ofRingAtIndex:(int)arg2;
- (void)setIconFirstFrameOrigin:(struct CGPoint { float x1; float x2; })arg1 frameSize:(struct CGSize { float x1; float x2; })arg2 frameCount:(int)arg3 columns:(int)arg4 ofRingAtIndex:(int)arg5;
- (void)setOpacity:(float)arg1 ofRingAtIndex:(int)arg2 animated:(BOOL)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(int)arg2 animated:(BOOL)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(int)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(id)arg6;
- (void)setRingDiameter:(float)arg1;
- (void)setRingIconSize:(float)arg1;
- (void)setRingInterspacing:(float)arg1;
- (void)setRingScale:(float)arg1;
- (void)setRingThickness:(float)arg1;
- (void)setRings:(id)arg1;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(int)arg3;
- (void)update:(double)arg1;

@end