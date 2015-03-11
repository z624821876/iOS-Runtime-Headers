/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    unsigned long long _count;
    NSData *_rawData;
    bool_lastNewLine;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (unsigned long long)count;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (bool)isLastCharacterNewLine;
- (id)rawData;

@end