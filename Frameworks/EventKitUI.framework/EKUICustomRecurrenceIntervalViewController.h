/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIPickerView;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _changeBlock;

    int _frequency;
    int _interval;
    BOOL _maximumInterval;
    UIPickerView *_pickerView;
}

@property(copy) id changeBlock;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property int frequency;
@property(readonly) unsigned int hash;
@property int interval;
@property BOOL maximumInterval;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)changeBlock;
- (int)frequency;
- (id)initWithSelectedInterval:(int)arg1 frequency:(int)arg2 changeBlock:(id)arg3;
- (int)interval;
- (void)loadView;
- (BOOL)maximumInterval;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setChangeBlock:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(int)arg1;
- (void)setMaximumInterval:(BOOL)arg1;
- (void)viewDidLoad;

@end