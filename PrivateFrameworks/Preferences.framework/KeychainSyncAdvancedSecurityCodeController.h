/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIAlertView, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {
    UIFont *_cellFont;
    float _cellTextWidth;
    UIAlertView *_disableRecoveryConfirmationAlert;
    BOOL _showsDisableRecoveryOption;
}

@property BOOL showsDisableRecoveryOption;

- (void)_finishedWithSpecifier:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)nextPressed;
- (void)setShowsDisableRecoveryOption:(BOOL)arg1;
- (BOOL)showsDisableRecoveryOption;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (void)viewDidLoad;

@end