#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class IDOWSDKIDOWeatherSDK, IDOWSDKWeatherRequest, IDOWSDKWeatherApiResult<__covariant T>, IDOWSDKPlatform, IDOWSDKWeatherApiResultCompanion, IDOWSDKWeatherError, IDOWSDKKotlinNothing, IDOWSDKWeatherApiResultFailure, IDOWSDKWeatherApiResultSuccess<T>, IDOWSDKKotlinThrowable, IDOWSDKKotlinArray<T>, IDOWSDKKotlinException, IDOWSDKWeatherErrorAuthenticationError, IDOWSDKWeatherErrorCancellationError, IDOWSDKWeatherErrorNetworkError, IDOWSDKWeatherErrorRateLimitError, IDOWSDKWeatherErrorServerError, IDOWSDKWeatherErrorTimeoutError, IDOWSDKWeatherErrorUnknownError, IDOWSDKWeatherErrorValidationError, IDOWSDKWeatherRequestCompanion, IDOWSDKWeatherRequestBuilder, IDOWSDKKotlinRuntimeException, IDOWSDKKotlinIllegalStateException;

@protocol IDOWSDKKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface IDOWSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface IDOWSDKBase (IDOWSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface IDOWSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface IDOWSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorIDOWSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface IDOWSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface IDOWSDKByte : IDOWSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface IDOWSDKUByte : IDOWSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface IDOWSDKShort : IDOWSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface IDOWSDKUShort : IDOWSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface IDOWSDKInt : IDOWSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface IDOWSDKUInt : IDOWSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface IDOWSDKLong : IDOWSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface IDOWSDKULong : IDOWSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface IDOWSDKFloat : IDOWSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface IDOWSDKDouble : IDOWSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface IDOWSDKBoolean : IDOWSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDOWeatherSDK")))
@interface IDOWSDKIDOWeatherSDK : IDOWSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iDOWeatherSDK __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) IDOWSDKIDOWeatherSDK *shared __attribute__((swift_name("shared")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWeatherRequest:(IDOWSDKWeatherRequest *)request completionHandler:(void (^)(IDOWSDKWeatherApiResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getWeather(request:completionHandler:)")));
- (void)registerAppKey:(NSString *)appKey countryCode:(int32_t)countryCode __attribute__((swift_name("register(appKey:countryCode:)")));
- (void)setEnableLogEnable:(BOOL)enable __attribute__((swift_name("setEnableLog(enable:)")));
@property (readonly) BOOL isRegistered __attribute__((swift_name("isRegistered")));
@property (readonly) IDOWSDKIDOWeatherSDK *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface IDOWSDKPlatform : IDOWSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) IDOWSDKPlatform *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("WeatherApiResult")))
@interface IDOWSDKWeatherApiResult<__covariant T> : IDOWSDKBase
@property (class, readonly, getter=companion) IDOWSDKWeatherApiResultCompanion *companion __attribute__((swift_name("companion")));
- (IDOWSDKWeatherError * _Nullable)errorOrNull __attribute__((swift_name("errorOrNull()")));
- (void)foldOnSuccess:(void (^)(T _Nullable))onSuccess onFailure:(void (^)(IDOWSDKWeatherError *))onFailure __attribute__((swift_name("fold(onSuccess:onFailure:)")));
- (T _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherApiResultCompanion")))
@interface IDOWSDKWeatherApiResultCompanion : IDOWSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) IDOWSDKWeatherApiResultCompanion *shared __attribute__((swift_name("shared")));
- (IDOWSDKWeatherApiResult<IDOWSDKKotlinNothing *> *)failureError:(IDOWSDKWeatherError *)error __attribute__((swift_name("failure(error:)")));
- (IDOWSDKWeatherApiResult<id> *)successData:(id _Nullable)data __attribute__((swift_name("success(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherApiResultFailure")))
@interface IDOWSDKWeatherApiResultFailure : IDOWSDKWeatherApiResult<IDOWSDKKotlinNothing *>
- (instancetype)initWithError:(IDOWSDKWeatherError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherApiResultFailure *)doCopyError:(IDOWSDKWeatherError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) IDOWSDKWeatherError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherApiResultSuccess")))
@interface IDOWSDKWeatherApiResultSuccess<T> : IDOWSDKWeatherApiResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherApiResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface IDOWSDKKotlinThrowable : IDOWSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (IDOWSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) IDOWSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface IDOWSDKKotlinException : IDOWSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("WeatherError")))
@interface IDOWSDKWeatherError : IDOWSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.AuthenticationError")))
@interface IDOWSDKWeatherErrorAuthenticationError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorAuthenticationError *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.CancellationError")))
@interface IDOWSDKWeatherErrorCancellationError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorCancellationError *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.NetworkError")))
@interface IDOWSDKWeatherErrorNetworkError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorNetworkError *)doCopyMessage:(NSString *)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(message:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) IDOWSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.RateLimitError")))
@interface IDOWSDKWeatherErrorRateLimitError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message retryAfterMs:(int64_t)retryAfterMs __attribute__((swift_name("init(message:retryAfterMs:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorRateLimitError *)doCopyMessage:(NSString *)message retryAfterMs:(int64_t)retryAfterMs __attribute__((swift_name("doCopy(message:retryAfterMs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t retryAfterMs __attribute__((swift_name("retryAfterMs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.ServerError")))
@interface IDOWSDKWeatherErrorServerError : IDOWSDKWeatherError
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorServerError *)doCopyCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.TimeoutError")))
@interface IDOWSDKWeatherErrorTimeoutError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message timeoutMs:(int64_t)timeoutMs __attribute__((swift_name("init(message:timeoutMs:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorTimeoutError *)doCopyMessage:(NSString *)message timeoutMs:(int64_t)timeoutMs __attribute__((swift_name("doCopy(message:timeoutMs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t timeoutMs __attribute__((swift_name("timeoutMs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.UnknownError")))
@interface IDOWSDKWeatherErrorUnknownError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorUnknownError *)doCopyMessage:(NSString *)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(message:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) IDOWSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherError.ValidationError")))
@interface IDOWSDKWeatherErrorValidationError : IDOWSDKWeatherError
- (instancetype)initWithMessage:(NSString *)message field:(NSString *)field __attribute__((swift_name("init(message:field:)"))) __attribute__((objc_designated_initializer));
- (IDOWSDKWeatherErrorValidationError *)doCopyMessage:(NSString *)message field:(NSString *)field __attribute__((swift_name("doCopy(message:field:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *field __attribute__((swift_name("field")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherRequest")))
@interface IDOWSDKWeatherRequest : IDOWSDKBase
- (instancetype)initWithLongitude:(NSString *)longitude latitude:(NSString *)latitude type:(int32_t)type code:(NSString *)code city:(NSString *)city district:(NSString *)district extend:(NSDictionary<NSString *, NSString *> *)extend __attribute__((swift_name("init(longitude:latitude:type:code:city:district:extend:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) IDOWSDKWeatherRequestCompanion *companion __attribute__((swift_name("companion")));
- (IDOWSDKWeatherRequest *)doCopyLongitude:(NSString *)longitude latitude:(NSString *)latitude type:(int32_t)type code:(NSString *)code city:(NSString *)city district:(NSString *)district extend:(NSDictionary<NSString *, NSString *> *)extend __attribute__((swift_name("doCopy(longitude:latitude:type:code:city:district:extend:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *district __attribute__((swift_name("district")));
@property (readonly) NSDictionary<NSString *, NSString *> *extend __attribute__((swift_name("extend")));
@property (readonly) NSString *latitude __attribute__((swift_name("latitude")));
@property (readonly) NSString *longitude __attribute__((swift_name("longitude")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherRequest.Builder")))
@interface IDOWSDKWeatherRequestBuilder : IDOWSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (IDOWSDKWeatherRequest *)build __attribute__((swift_name("build()")));
- (IDOWSDKWeatherRequestBuilder *)cityCity:(NSString *)city __attribute__((swift_name("city(city:)")));
- (IDOWSDKWeatherRequestBuilder *)codeCode:(NSString *)code __attribute__((swift_name("code(code:)")));
- (IDOWSDKWeatherRequestBuilder *)districtDistrict:(NSString *)district __attribute__((swift_name("district(district:)")));
- (IDOWSDKWeatherRequestBuilder *)extendExtend:(NSDictionary<NSString *, NSString *> *)extend __attribute__((swift_name("extend(extend:)")));
- (IDOWSDKWeatherRequestBuilder *)latitudeLat:(NSString *)lat __attribute__((swift_name("latitude(lat:)")));
- (IDOWSDKWeatherRequestBuilder *)longitudeLon:(NSString *)lon __attribute__((swift_name("longitude(lon:)")));
- (IDOWSDKWeatherRequestBuilder *)typeType:(int32_t)type __attribute__((swift_name("type(type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherRequest.Companion")))
@interface IDOWSDKWeatherRequestCompanion : IDOWSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) IDOWSDKWeatherRequestCompanion *shared __attribute__((swift_name("shared")));
- (IDOWSDKWeatherRequestBuilder *)builder __attribute__((swift_name("builder()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateLimiter")))
@interface IDOWSDKRateLimiter : IDOWSDKBase
- (instancetype)initWithMinIntervalMs:(int64_t)minIntervalMs __attribute__((swift_name("init(minIntervalMs:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)canRequestRequestKey:(NSString * _Nullable)requestKey completionHandler:(void (^)(IDOWSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("canRequest(requestKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cleanupExpiredMaxAgeMs:(int64_t)maxAgeMs completionHandler:(void (^)(IDOWSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cleanupExpired(maxAgeMs:completionHandler:)")));
- (NSString *)generateRequestKeyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("generateRequestKey(latitude:longitude:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWaitTimeMsWithCompletionHandler:(void (^)(IDOWSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getWaitTimeMs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)markRequestEndRequestKey:(NSString * _Nullable)requestKey completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("markRequestEnd(requestKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)markRequestStartRequestKey:(NSString * _Nullable)requestKey completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("markRequestStart(requestKey:completionHandler:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface IDOWSDKKotlinRuntimeException : IDOWSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface IDOWSDKKotlinIllegalStateException : IDOWSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface IDOWSDKKotlinCancellationException : IDOWSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(IDOWSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface IDOWSDKKotlinNothing : IDOWSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface IDOWSDKKotlinArray<T> : IDOWSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(IDOWSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<IDOWSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol IDOWSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
