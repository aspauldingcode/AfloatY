//
//  WindowTransparencyController.h
//  AfloatY

#import <AppKit/AppKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WindowTransparencyController : NSObject
@property (assign) NSWindow *window;
@property (strong) NSWindow *sheetWindow;
@property (strong) NSSlider *transparencySlider;
@property (strong) NSButton *endSheetButton;

- (void)endSheet;
- (void)runSheet;
- (void)endSheetForWindow:(NSWindow *)window;
- (void)runSheetForWindow:(NSWindow *)window;
- (instancetype)initWithWindow:(NSWindow *)window;
+ (instancetype)sharedInstance;
@end

NS_ASSUME_NONNULL_END
