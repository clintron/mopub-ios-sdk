//
//  AdColonyInstanceMediationSettings.h
//  MoPubSDK
//
//  Copyright (c) 2015 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#else
    #import "MPMediationSettingsProtocol.h"
#endif

/*
 * `AdColonyInstanceMediationSettings` allows the application to provide per-instance properties
 * to configure aspects of Ad Colony ads. See `MPMediationSettingsProtocol` to see how mediation settings
 * are used.
 */
@interface AdColonyInstanceMediationSettings : NSObject <MPMediationSettingsProtocol>

/*
 * Set to true if you wish to show a pre-popup dialog for AdColony V4VC ads.
 *
 * Default behavior treats this property as if it is set to false.
 */
@property (nonatomic, assign) BOOL showPrePopup;

/*
 * Set to true if you wish to show a post-popup dialog for AdColony V4VC ads.
 *
 * Default behavior treats this property as if it is set to false.
 */
@property (nonatomic, assign) BOOL showPostPopup;

@end
