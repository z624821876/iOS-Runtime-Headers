/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class ALCity, City, NSDictionary, NSNumber, NSString, NSURL;

@interface WorldClockCity : NSObject {
    ALCity *_alCity;
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_name;
    NSString *_timeZone;
    NSString *_unlocalizedCountryName;
    NSString *_unlocalizedName;
    City *_weatherCity;
}

@property(readonly) NSString * abbreviation;
@property(readonly) ALCity * alCity;
@property(readonly) NSNumber * alCityId;
@property(readonly) NSString * countryCode;
@property(readonly) NSString * countryName;
@property(readonly) NSURL * idUrl;
@property(readonly) NSString * name;
@property(readonly) NSDictionary * properties;
@property(readonly) NSString * timeZone;
@property(readonly) NSString * unlocalizedCityName;
@property(readonly) NSString * unlocalizedCountryName;
@property(retain) City * weatherCity;

+ (bool)isWorldClockCityProperties:(id)arg1;

- (id)_bundleWithAbbreviations;
- (id)_filePathForAbbreviationsResource;
- (id)abbreviation;
- (id)alCity;
- (id)alCityId;
- (id)countryCode;
- (id)countryName;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)idUrl;
- (id)initWithALCity:(id)arg1;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)properties;
- (void)setWeatherCity:(id)arg1;
- (id)timeZone;
- (id)unlocalizedCityName;
- (id)unlocalizedCountryName;
- (id)weatherCity;

@end