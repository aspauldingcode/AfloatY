//
//  NSApplication+Private.h
//  AfloatY

#ifndef NSApplication_Private_h
#define NSApplication_Private_h

#import <AppKit/AppKit.h>

@interface NSApplication (Private)
- (CFArrayRef)_flattenMenu:(NSMenu *)menu flatList:(id)list;
- (CFArrayRef)_flattenMenu:(NSMenu *)menu flatList:(id)list extraUpdateFlags:(uint32_t)flags;
@end

#endif /* NSApplication_Private_h */
