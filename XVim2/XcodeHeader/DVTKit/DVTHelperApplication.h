//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSRunningApplication, NSString, NSURL;

@interface DVTHelperApplication : NSObject
{
    DVTFilePath *_bundlePath;
    NSString *_bundleIdentifier;
    NSString *_localizedName;
    NSRunningApplication *_runningApplication;
}

+ (id)moreHelperApplicationsURL;
+ (id)availableInternalHelperApplications;
+ (id)_internalHelperAppsContentForKey:(id)arg1;
+ (id)availableHelperApplications;
+ (id)_helperAppsContentForKey:(id)arg1;
+ (id)helperApplicationWithIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy) DVTFilePath *bundlePath; // @synthesize bundlePath=_bundlePath;
- (BOOL)launchAndActivateHelperApplication:(id *)arg1;
@property(readonly) NSRunningApplication *runningApplication;
- (id)description;
- (id)initWithBundlePath:(id)arg1;
@property(readonly, copy) NSURL *bundleURL;

@end

