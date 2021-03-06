/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKCheckGlyphLayer : PKMicaLayer {
    BOOL  _covered;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _coveredTransform;
    CAGradientLayer * _maskLayer;
    struct UIColor { Class x1; } * _primaryColor;
    BOOL  _revealed;
    CAShapeLayer * _shapeLayer;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _uncoveredTransform;
}

@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic) BOOL revealed;

- (void).cxx_destruct;
- (void)_createMask;
- (double)_updateCovered:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 package:(id)arg2;
- (struct UIColor { Class x1; }*)primaryColor;
- (BOOL)revealed;
- (double)setCovered:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPrimaryColor:(struct UIColor { Class x1; }*)arg1;
- (void)setPrimaryColor:(struct UIColor { Class x1; }*)arg1 animated:(BOOL)arg2;
- (void)setRevealed:(BOOL)arg1;
- (double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;

@end
