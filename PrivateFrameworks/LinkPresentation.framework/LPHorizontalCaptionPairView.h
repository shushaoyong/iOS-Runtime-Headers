/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHorizontalCaptionPairView : LPComponentView <LPContentInsettable, LPTextStyleable> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    LPTextView * _leftView;
    LPTextView * _rightView;
}

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_layoutCaptionPairForSize:(struct CGSize { float x1; float x2; })arg1 applyingLayout:(BOOL)arg2;
- (float)ascender;
- (float)descender;
- (float)firstLineLeading;
- (id)init;
- (id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
