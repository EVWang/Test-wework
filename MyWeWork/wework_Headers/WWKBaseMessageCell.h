//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol WWKBaseMessageCellDelegate;

@interface WWKBaseMessageCell : UITableViewCell
{
    id <WWKBaseMessageCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKBaseMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (double)getHeightWithLimitWidth:(double)arg1;
- (void)setDataWrapper:(id)arg1;

@end

