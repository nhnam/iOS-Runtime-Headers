/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKSearchCompleterDelegate>, NSArray, NSString;

@interface MKSearchCompleter : NSObject {
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _boundingRegion;
    id _context;
    <MKSearchCompleterDelegate> *_delegate;
    int _entriesType;
    NSString *_fragment;
    NSString *_identifier;
    int _listType;
    double _timeSinceLastInBoundingRegion;
}

@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;
@property id context;
@property <MKSearchCompleterDelegate> * delegate;
@property int entriesType;
@property(copy) NSString * fragment;
@property(copy) NSString * identifier;
@property int listType;
@property(readonly) NSArray * results;
@property double timeSinceLastInBoundingRegion;

+ (id)alloc;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;
- (void)cancel;
- (id)context;
- (id)delegate;
- (int)entriesType;
- (id)fragment;
- (id)identifier;
- (id)init;
- (BOOL)isSearching;
- (int)listType;
- (id)results;
- (BOOL)resultsAreCurrent;
- (void)retry;
- (void)setBoundingRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntriesType:(int)arg1;
- (void)setFragment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setListType:(int)arg1;
- (void)setTimeSinceLastInBoundingRegion:(double)arg1;
- (double)timeSinceLastInBoundingRegion;

@end