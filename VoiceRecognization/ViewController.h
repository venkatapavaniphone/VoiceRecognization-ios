//
//  ViewController.h
//  VoiceRecognization
//
//  Created by INVIND-W033 on 18/08/15.
//  Copyright (c) 2015 INVIND-W033. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenEars/OELanguageModelGenerator.h>
#import <OpenEars/OEAcousticModel.h>
#import <OpenEars/OEEventsObserver.h>

@interface ViewController : UIViewController<OEEventsObserverDelegate>

@property (strong, nonatomic) OEEventsObserver *openEarsEventsObserver;
-(IBAction)record_Btn:(id)sender;
@end

