//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WWKCustomerInfoFooterView : UIView
{
    NSMutableArray *_dataItems;
    NSMutableArray *_itemViews;
    scoped_refptr_da27765f _customer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addButtonDidClick:(id)arg1;
- (void)didClickCell:(id)arg1;
- (_Bool)checkTimeIsToday:(long long)arg1;
- (basic_string_a490aa4c)p_parseTime:(long long)arg1;
- (basic_string_a490aa4c)p_monthFromTime:(long long)arg1;
- (basic_string_a490aa4c)p_dayfromTime:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)p_buildItemView:(id)arg1 withIndex:(long long)arg2;
- (void)setDataItems:(id)arg1 withCustomer:(scoped_refptr_da27765f)arg2;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

