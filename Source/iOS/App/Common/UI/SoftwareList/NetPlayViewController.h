// Copyright 2026 DolphiniOS Project
// SPDX-License-Identifier: GPL-2.0-or-later

#import <UIKit/UIKit.h>

@class EmulationBootParameter;
@class NetPlayViewController;

@protocol NetPlayViewControllerDelegate <NSObject>
- (void)netPlayViewController:(NetPlayViewController*)controller
        didRequestGameLaunch:(EmulationBootParameter*)bootParameter;
- (void)netPlayViewControllerDidRequestSessionScreen:(NetPlayViewController*)controller;
@end

@interface NetPlayViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, weak) id<NetPlayViewControllerDelegate> delegate;

- (instancetype)initWithDelegate:(id<NetPlayViewControllerDelegate>)delegate;

@end
