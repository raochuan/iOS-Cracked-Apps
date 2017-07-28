//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "HTSTTTAttributedLabel.h"
#import "UIGestureRecognizerDelegate.h"

@class HTSTTTAttributedLabelLink, NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UILongPressGestureRecognizer;

@interface HTSTTTAttributedLabel : UILabel <HTSTTTAttributedLabel, UIGestureRecognizerDelegate>
{
    _Bool _extendsLinkTouchArea;
    id <HTSTTTAttributedLabelDelegate> _delegate;
    unsigned long long _enabledTextCheckingTypes;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    NSDictionary *_inactiveLinkAttributes;
    NSString *_truncationTokenString;
    NSDictionary *_truncationTokenStringAttributes;
    NSAttributedString *_attributedTruncationToken;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSAttributedString *_inactiveAttributedText;
    NSDataDetector *_dataDetector;
    NSArray *_linkModels;
    HTSTTTAttributedLabelLink *_activeLink;
    NSArray *_accessibilityElements;
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) HTSTTTAttributedLabelLink *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSArray *linkModels; // @synthesize linkModels=_linkModels;
@property(retain) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSAttributedString *attributedTruncationToken; // @synthesize attributedTruncationToken=_attributedTruncationToken;
@property(retain, nonatomic) NSDictionary *truncationTokenStringAttributes; // @synthesize truncationTokenStringAttributes=_truncationTokenStringAttributes;
@property(retain, nonatomic) NSString *truncationTokenString; // @synthesize truncationTokenString=_truncationTokenString;
@property(nonatomic) _Bool extendsLinkTouchArea; // @synthesize extendsLinkTouchArea=_extendsLinkTouchArea;
@property(retain, nonatomic) NSDictionary *inactiveLinkAttributes; // @synthesize inactiveLinkAttributes=_inactiveLinkAttributes;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(nonatomic) unsigned long long enabledTextCheckingTypes; // @synthesize enabledTextCheckingTypes=_enabledTextCheckingTypes;
@property(nonatomic) id <HTSTTTAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copy:(id)arg1;
- (void)longPressGestureDidFire:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)layoutSubviews;
- (void)updateTextStorageFont;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long long)arg1;
- (id)linkAtRadius:(double)arg1 aroundPoint:(struct CGPoint)arg2;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (_Bool)containslinkAtPoint:(struct CGPoint)arg1;
- (id)addLinkToTransitInformation:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToDate:(id)arg1 timeZone:(id)arg2 duration:(double)arg3 withRange:(struct _NSRange)arg4;
- (id)addLinkToDate:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToPhoneNumber:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToAddress:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToURL:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkWithTextCheckingResult:(id)arg1;
- (id)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2;
- (id)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2;
- (void)addLinks:(id)arg1;
- (void)addLink:(id)arg1;
@property(nonatomic) unsigned long long dataDetectorTypes;
@property(readonly, nonatomic) NSArray *links;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) id text;

@end
