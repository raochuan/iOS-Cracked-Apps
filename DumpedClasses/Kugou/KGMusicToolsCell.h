//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeImageView, KGThemeLabel;

@interface KGMusicToolsCell : UITableViewCell
{
    KGThemeImageView *_imgView;
    KGThemeLabel *_titleLabel;
    KGThemeLabel *_detailLabel;
}

@property(retain, nonatomic) KGThemeLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KGThemeImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onChangeTheme:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setup;
- (void)bindData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

