/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFString : NSString  {
    int _reserved1;
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
    int _reserved2;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)getCString:(char *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (const char *)cString;
- (void)encodeWithCoder:(id)arg1;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)cStringLength;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)description;
- (BOOL)isEqualToString:(id)arg1;
- (id)retain;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)getCharacters:(unsigned short*)arg1;
- (const char *)UTF8String;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (void)dealloc;
- (id)copy;

@end