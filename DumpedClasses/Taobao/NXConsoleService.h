//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXService.h"

#import "NXConsoleServiceProtocol.h"

@interface NXConsoleService : NXService <NXConsoleServiceProtocol>
{
}

+ (id)shareService;
+ (void)static_nxRegister;
- (void)error:(id)arg1;
- (void)warn:(id)arg1;
- (void)info:(id)arg1;
- (void)log:(id)arg1;
- (id)serviceName;

@end
