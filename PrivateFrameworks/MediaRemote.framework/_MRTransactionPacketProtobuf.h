/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int totalLength : 1; 
        unsigned int totalWritePosition : 1; 
    }  _has;
    NSString * _identifier;
    _MRTransactionKeyProtobuf * _key;
    NSData * _packetData;
    unsigned long long  _totalLength;
    unsigned long long  _totalWritePosition;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasKey;
@property (nonatomic, readonly) BOOL hasPacketData;
@property (nonatomic) BOOL hasTotalLength;
@property (nonatomic) BOOL hasTotalWritePosition;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _MRTransactionKeyProtobuf *key;
@property (nonatomic, retain) NSData *packetData;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) unsigned long long totalWritePosition;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (BOOL)hasKey;
- (BOOL)hasPacketData;
- (BOOL)hasTotalLength;
- (BOOL)hasTotalWritePosition;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)packetData;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTotalLength:(BOOL)arg1;
- (void)setHasTotalWritePosition:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPacketData:(id)arg1;
- (void)setTotalLength:(unsigned long long)arg1;
- (void)setTotalWritePosition:(unsigned long long)arg1;
- (unsigned long long)totalLength;
- (unsigned long long)totalWritePosition;
- (void)writeTo:(id)arg1;

@end