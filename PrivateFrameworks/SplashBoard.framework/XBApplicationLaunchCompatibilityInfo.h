/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@class NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding> {
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSArray *_launchImageInfos;
    NSString *_launchNibName;
    NSString *_launchStoryboardName;
    NSString *_sandboxPath;
    bool_alwaysLaunchesFullScreen;
    bool_launchesOpaque;
}

@property(readonly) bool allowsSavingLaunchImages;
@property bool alwaysLaunchesFullScreen;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundlePath;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSArray * launchImageInfos;
@property(copy) NSString * launchNibName;
@property(copy) NSString * launchStoryboardName;
@property bool launchesOpaque;
@property(copy) NSString * sandboxPath;
@property(readonly) Class superclass;

+ (id)_compatibilityInfoForBundleIdentifier:(id)arg1 creatingIfNecessaryWithBundle:(id)arg2 andSandboxPath:(id)arg3;
+ (id)compatibilityInfoForBundleIdentifier:(id)arg1;
+ (void)removeCompatibilityInfoForBundleIdentifier:(id)arg1;

- (id)_baseAppLaunchImagePath;
- (id)_infoForLaunchImageWithRequest:(id)arg1 createIfNeeded:(bool)arg2 launchingOrientation:(long long*)arg3;
- (id)_pathForLaunchImageWithName:(id)arg1 sceneID:(id)arg2 scale:(double)arg3 size:(struct CGSize { double x1; double x2; })arg4 downscaled:(bool)arg5 interfaceOrientation:(long long)arg6;
- (id)_snapshotContainerName;
- (id)_snapshotSceneContainerNameForSceneID:(id)arg1;
- (void)_writeOutChanges;
- (void)addLaunchImageForRequest:(id)arg1 finalOrientation:(long long)arg2 ifCreatedAt:(id)arg3;
- (bool)allowsSavingLaunchImages;
- (bool)alwaysLaunchesFullScreen;
- (id)appLaunchImagePathForSceneID:(id)arg1 downscaled:(bool)arg2;
- (id)bundleIdentifier;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)infoForLaunchImageWithRequest:(id)arg1 launchingOrientation:(long long*)arg2;
- (id)initWithBundle:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)launchImageInfos;
- (id)launchNibName;
- (id)launchStoryboardName;
- (bool)launchesOpaque;
- (id)pathForLaunchImageWithRequest:(id)arg1 launchingOrientation:(long long*)arg2;
- (void)purgeSavedImages;
- (id)sandboxPath;
- (id)savedLaunchImagesDirectory;
- (void)setAlwaysLaunchesFullScreen:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setLaunchImageInfos:(id)arg1;
- (void)setLaunchNibName:(id)arg1;
- (void)setLaunchStoryboardName:(id)arg1;
- (void)setLaunchesOpaque:(bool)arg1;
- (void)setSandboxPath:(id)arg1;

@end