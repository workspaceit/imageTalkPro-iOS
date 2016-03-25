//
//  StatusResponse.h
//  ImageTalk
//
//  Created by Workspace Infotech on 10/19/15.
//  Copyright (c) 2015 Workspace Infotech. All rights reserved.
//

#import "JSONModel.h"
#import "ResponseStatus.h"
#import "Status.h"

@interface StatusResponse : JSONModel

@property (strong, nonatomic) ResponseStatus  *responseStat;
@property (strong, nonatomic) Status  *responseData;


@end
