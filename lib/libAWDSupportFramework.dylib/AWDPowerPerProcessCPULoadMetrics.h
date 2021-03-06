/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerPerProcessCPULoadMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _loads;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSMutableArray *loads;
@property (nonatomic) unsigned long long timestamp;

+ (Class)loadType;

- (void)addLoad:(id)arg1;
- (void)clearLoads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)loadAtIndex:(unsigned int)arg1;
- (id)loads;
- (unsigned int)loadsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLoads:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
