/* Generated by RuntimeBrowser.
 */

@protocol FCAppleAccount <NSObject>

@required

- (NSString *)DSID;
- (NSString *)contentStoreFrontID;
- (NSString *)currentStoreFrontID;
- (NSString *)endpointConnectionClientID;
- (BOOL)iCloudAccountChanged;
- (NSString *)iTunesAccountName;
- (BOOL)isContentStoreFrontSupported;
- (BOOL)isPrivateDataSyncingEnabled;
- (BOOL)isUserSignedInToiCloud;
- (BOOL)isUserSignedIntoiTunes;
- (void)loadStoreFrontIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)supportedContentStoreFrontID;
- (NSString *)userStoreFrontID;

@end
