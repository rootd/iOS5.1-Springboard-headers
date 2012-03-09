/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AFAssistantUIService <NSObject>
-(id)supportedCommands;
@optional
-(void)assistantConnectionConversationFinished:(id)finished;
-(void)assistantConnection:(id)connection conversationFailedWithError:(id)error;
-(void)assistantConnectionRequestFinished:(id)finished;
-(void)assistantConnection:(id)connection requestFailedWithError:(id)error;
-(void)assistantConnection:(id)connection receivedCommand:(id)command;
-(void)assistantConnection:(id)connection shouldSpeak:(BOOL)speak;
@end

