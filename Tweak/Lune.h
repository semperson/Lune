#import <MediaRemote/MediaRemote.h>
#import <Kitten/libKitten.h>
#import "GcUniversal/GcColorPickerUtils.h"
#import <Cephei/HBPreferences.h>

HBPreferences* preferences = nil;
BOOL enabled = NO;

BOOL isDNDActive = NO;
NSData* lastArtworkData = nil;
UIColor* backgroundArtworkColor = nil;

// icon
BOOL enableIconSwitch = YES;
NSString* xPositionValue = @"150.0";
NSString* yPositionValue = @"100.0";
NSString* sizeValue = @"50.0";
NSString* iconValue = @"0";
NSString* customColorValue = @"FFFFFF";
BOOL glowSwitch = YES;
BOOL useCustomGlowColorSwitch = NO;
NSString* customGlowColorValue = @"FFFFFF";
NSString* glowRadiusValue = @"10.0";
NSString* glowAlphaValue = @"1.0";
BOOL useCustomColorSwitch = NO;
BOOL useArtworkBasedColorSwitch = YES;

// background
BOOL darkenBackgroundSwitch = YES;
BOOL alwaysDarkenBackgroundSwitch = NO;
NSString* darkeningAmountValue = @"0.5";

// status bar
BOOL showStatusBarIconSwitch = NO;

// miscellaneous
BOOL hideDNDBannerSwitch = NO;

@interface CSCoverSheetView : UIView
@property(nonatomic, retain)UIImageView* luneView;
@property(nonatomic, retain)UIView* luneDimView;
- (void)toggleLuneVisibility:(BOOL)visible;
@end

@interface SBMediaController : NSObject
+ (id)sharedInstance;
- (void)setNowPlayingInfo:(id)arg1;
@end