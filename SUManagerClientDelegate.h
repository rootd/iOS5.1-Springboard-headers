/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SUManagerClientDelegate <NSObject>
@optional
-(void)client:(id)client scanRequestDidStartForOptions:(id)scanRequest;
-(void)client:(id)client scanRequestDidFinishForOptions:(id)scanRequest update:(id)update error:(id)error;
-(void)client:(id)client scanDidCompleteWithNewUpdateAvailable:(id)scan error:(id)error;
-(void)client:(id)client automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;
-(void)client:(id)client downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;
-(void)client:(id)client downloadDidStart:(id)download;
-(void)client:(id)client downloadProgressDidChange:(id)downloadProgress;
-(void)client:(id)client downloadDidFail:(id)download withError:(id)error;
-(void)client:(id)client downloadDidFinish:(id)download;
-(void)client:(id)client installDidStart:(id)install;
-(void)client:(id)client installDidFail:(id)install withError:(id)error;
-(void)client:(id)client installDidFinish:(id)install;
@end

