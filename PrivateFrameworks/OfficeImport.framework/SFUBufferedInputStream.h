/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>;



@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream>
{
    <SFUInputStream> *mStream;
    char *mBuffer;
    NSUInteger mBufferSize;
    NSUInteger mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}


- (id)initWithStream:(id)arg1 bufferSize:(unsigned long)arg2;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (id)initWithStream:(id)arg1;
- (BOOL)canSeek;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (void)close;
- (long long)offset;
- (void)dealloc;

@end