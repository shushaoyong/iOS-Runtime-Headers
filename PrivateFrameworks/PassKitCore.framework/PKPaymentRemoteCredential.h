/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteCredential : PKPaymentCredential {
    NSString * _identifier;
    NSArray * _metadata;
    NSURL * _passURL;
    int  _status;
    NSString * _statusDescription;
    NSArray * _summaryMetadata;
    NSString * _summaryMetadataDescription;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *metadata;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic) int status;
@property (nonatomic, readonly, copy) NSString *statusDescription;
@property (nonatomic, readonly, copy) NSArray *summaryMetadata;
@property (nonatomic, readonly, copy) NSString *summaryMetadataDescription;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)metadata;
- (id)passURL;
- (void)setIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusDescription;
- (id)summaryMetadata;
- (id)summaryMetadataDescription;

@end
