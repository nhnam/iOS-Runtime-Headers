/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, NSMutableSet;



@interface CalendarAllDayRow : NSObject 
{
    NSMutableArray *_blocks;
    NSMutableSet *_occupyingDays;
    NSUInteger _startDate;
}


- (void)addOccurrenceBlock:(id)arg1;
- (NSUInteger)spaceGapFor:(id)arg1;
- (id)occurrenceBlocks;
- (id)init;
- (void)dealloc;

@end