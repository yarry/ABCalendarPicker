//
//  ABCalendarPickerStyleProviderProtocol.h
//  ABCalendarPicker
//
//  Created by Anton Bukov on 23.07.12.
//  Copyright (c) 2013 Anton Bukov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class ABCalendarPicker;

@protocol ABCalendarPickerStyleProviderProtocol <NSObject>

@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIColor *textShadowColor;

@property(readonly, nonatomic) UIColor *titleTextColor;
@property(readonly, nonatomic) UIColor *titleTextShadowColor;

@property(readonly, nonatomic) UIColor *tilesBackgroundColor;
@property(readonly, nonatomic) UIImage *patternImageForGradientBar;

@property(readonly, nonatomic) UIFont *titleFontForColumnTitlesVisible;
@property(readonly, nonatomic) UIFont *titleFontForColumnTitlesInvisible;
@property(readonly, nonatomic) UIFont *columnFont;
@property(readonly, nonatomic) UIFont *tileTitleFont;
@property(readonly, nonatomic) UIFont *tileDotFont;

- (UIControl *)calendarPicker:(ABCalendarPicker *)calendarPicker
             cellViewForTitle:(NSString *)cellTitle
                     andState:(ABCalendarPickerState)state;

- (void)calendarPicker:(ABCalendarPicker *)calendarPicker
 postUpdateForCellView:(UIControl *)control
        onControlState:(UIControlState)controlState
            withEvents:(NSInteger)eventsCount
              andState:(ABCalendarPickerState)state;

- (CGFloat)buttonAspectRatioForState:(ABCalendarPickerState)state;

- (CGFloat)gradientBarHeight;

- (UIView *)calendarPicker:(ABCalendarPicker *)picker arrowViewForAnimation:(ABCalendarPickerAnimation)animation andState:(ABCalendarPickerState)state;
@end
