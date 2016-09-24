/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageViewPrivate : NSObject {
    PDFAnnotation * activeAnnotation;
    id  activeControl;
    CALayer * backgroundLayer;
    NSMutableSet * coachMarks;
    id  control;
    PDFAnnotation * controlAnnotation;
    int  displayBox;
    bool  hasBackgroundImage;
    PDFPage * page;
    PDFPageLayer * pageLayer;
    NSMapTable * pageWidgetMapTable;
    PDFPageSearchLayer * searchLayer;
    PDFPageSelectionLayer * selectionLayer;
    bool  shouldAntiAlias;
    unsigned int  visibilityDelegateIndex;
}

- (void).cxx_destruct;

@end