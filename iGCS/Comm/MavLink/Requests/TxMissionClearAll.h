//
//  TxMissionClearAll.h
//  iGCS
//
//  Created by Claudio Natoli on 23/08/2014.
//
//

#import <Foundation/Foundation.h>
#import "MavLinkRetryingRequestHandler.h"
#import "iGCSMavLinkInterface.h"

@interface TxMissionClearAll : NSObject <MavLinkRetryableRequest>

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) double timeout;

@property (nonatomic, readonly) iGCSMavLinkInterface* interface;

- (id)initWithInterface:(iGCSMavLinkInterface*)interface;

@end
