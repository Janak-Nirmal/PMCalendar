//
//  PMCalendarView.h
//  PMCalendarDemo
//
//  Created by Mazurin Pavel on 7/13/12.
//  Copyright (c) 2012 Pavel Mazurin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PMPeriod;
@protocol PMCalendarViewDelegate;

@interface PMCalendarView : UIView

@property (nonatomic, strong) PMPeriod *period;
@property (nonatomic, strong) PMPeriod *allowedPeriod;
@property (nonatomic, assign) BOOL mondayFirstDayOfWeek;
@property (nonatomic, assign) id<PMCalendarViewDelegate> delegate;
@property (nonatomic, strong) NSDate *currentDate; // month to show

- (NSCalendar *) gregorian;

@end

@protocol PMCalendarViewDelegate <NSObject>

- (void) currentDateChanged: (NSDate *)currentDate;

@end
