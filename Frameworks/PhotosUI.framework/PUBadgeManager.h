/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeManager : NSObject

+ (id)defaultManager;

- (int)_badgeTypeForPHAsset:(id)arg1 size:(int)arg2;
- (int)_badgeTypeForPLAsset:(id)arg1 size:(int)arg2;
- (id)_imageNameForBadgeType:(int)arg1;
- (int)badgeTypeForAsset:(id)arg1;
- (int)badgeTypeForAsset:(id)arg1 size:(int)arg2;
- (int)badgeTypeForCollection:(id)arg1;
- (int)badgeTypeForCollection:(id)arg1 size:(int)arg2;
- (id)imageForBadgeType:(int)arg1;
- (struct UIOffset { float x1; float x2; })imageOffsetForBadgeType:(int)arg1;
- (BOOL)isSmallBadge:(int)arg1;

@end