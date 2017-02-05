// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import MapKit;
@import CoreLocation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class UIUserNotificationSettings;

SWIFT_CLASS("_TtC9Projet37511AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (BOOL)application:(UIApplication * _Nonnull)application openURL:(NSURL * _Nonnull)url sourceApplication:(NSString * _Nullable)sourceApplication annotation:(id _Nonnull)annotation;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (void)applicationWithApplication:(UIApplication * _Nonnull)application didRegisterUserNotificationSettings:(UIUserNotificationSettings * _Nonnull)notificationSettings;
- (void)application:(UIApplication * _Nonnull)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class MKMapView;
@class CLLocation;
@protocol MKOverlay;
@class MKOverlayRenderer;
@class NSCoder;
@class UIViewController;

SWIFT_CLASS("_TtC9Projet3759ArenaView")
@interface ArenaView : UIView <MKMapViewDelegate, CLLocationManagerDelegate>
@property (nonatomic) BOOL showVR;
@property (nonatomic, weak) UIViewController * _Null_unspecified controller;
@property (nonatomic) BOOL isActive;
@property (nonatomic) CLLocationCoordinate2D areneLoc;
@property (nonatomic, readonly, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic, strong) MKMapView * _Nonnull map;
@property (nonatomic, readonly) CGFloat margin;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)back;
- (MKOverlayRenderer * _Nonnull)mapView:(MKMapView * _Nonnull)mapView rendererForOverlay:(id <MKOverlay> _Nonnull)overlay;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Nullable)getCurrentViewController;
@end


SWIFT_CLASS("_TtC9Projet3759ChartView")
@interface ChartView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)back;
- (void)loadData;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class LoginButton;

SWIFT_CLASS("_TtC9Projet3759LoginView")
@interface LoginView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/**
  Called when the button was used to logout.
  \param loginButton Button that was used to logout.

*/
- (void)loginButtonDidLogOut:(LoginButton * _Nonnull)loginButton;
- (void)loginSuccessWithSocial:(NSString * _Nonnull)social userId:(NSString * _Nonnull)userId;
- (void)logoutWithSocial:(NSString * _Nonnull)social;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;

SWIFT_CLASS("_TtC9Projet3758MenuView")
@interface MenuView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)logout;
- (void)selectMenuItemWithButton:(UIButton * _Nonnull)button;
- (void)setUsernameLabelWithName:(NSString * _Nonnull)name;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Projet37511ProfileView")
@interface ProfileView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)back;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class ResultView;
@class UINavigationBar;
@class UILabel;
@class NSTimer;
@class UILongPressGestureRecognizer;

SWIFT_CLASS("_TtC9Projet37512QuestionView")
@interface QuestionView : UIView <MKMapViewDelegate, CLLocationManagerDelegate>
@property (nonatomic, strong) ResultView * _Null_unspecified resultView;
@property (nonatomic, readonly, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic, strong) UINavigationBar * _Nonnull navBar;
@property (nonatomic, strong) UILabel * _Nonnull questionLabel;
@property (nonatomic, readonly) CGFloat margin;
@property (nonatomic, readonly) CGFloat marginB;
@property (nonatomic, readonly) CGFloat verticalMargin;
@property (nonatomic, readonly) CGFloat mapMargin;
@property (nonatomic, copy) NSArray<UIButton *> * _Nonnull buttons;
@property (nonatomic, strong) UIView * _Nonnull loadingBar;
@property (nonatomic) NSInteger time;
@property (nonatomic, strong) NSTimer * _Nonnull timer;
@property (nonatomic, strong) UILabel * _Nonnull timeLabel;
@property (nonatomic) CGFloat headerHeight;
@property (nonatomic, strong) MKMapView * _Nonnull map;
@property (nonatomic, strong) UILongPressGestureRecognizer * _Nonnull lgpr;
@property (nonatomic) BOOL hasAnswer;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)createHeaderWithCat:(NSString * _Nonnull)cat;
- (void)createRegularContent;
- (void)checkAnswerWithSender:(UIButton * _Nonnull)sender;
- (void)displayResultView;
- (void)timesUp;
- (void)createMapContent;
- (void)pressedWithSender:(UILongPressGestureRecognizer * _Nonnull)sender;
- (void)displayMapAnswer;
- (void)displayRegularAnswer;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (MKOverlayRenderer * _Nonnull)mapView:(MKMapView * _Nonnull)mapView rendererForOverlay:(id <MKOverlay> _Nonnull)overlay;
- (void)userHasWon;
- (void)userHasLost;
@end

@class UIImageView;

SWIFT_CLASS("_TtC9Projet37516RandomPickerView")
@interface RandomPickerView : UIView
@property (nonatomic, strong) QuestionView * _Null_unspecified questionView;
@property (nonatomic, strong) UILabel * _Null_unspecified firstLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified secondLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified opposantName;
@property (nonatomic, strong) UIImageView * _Null_unspecified opposentImageView;
- (void)generateCategory;
- (void)clickToPlayWithButton:(UIButton * _Nonnull)button;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9Projet37510ResultView")
@interface ResultView : UIView
- (void)replayBtnWithButton:(UIButton * _Nonnull)button;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIEvent;

@interface UIButton (SWIFT_EXTENSION(Projet375))
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event;
@end


@interface UILabel (SWIFT_EXTENSION(Projet375))
@end


@interface UITextView (SWIFT_EXTENSION(Projet375))
@property (nonatomic) CGFloat lineSpacing;
@end


@interface UIView (SWIFT_EXTENSION(Projet375))
@property (nonatomic, readonly) CGFloat maxX;
@property (nonatomic, readonly) CGFloat maxY;
@property (nonatomic, readonly) CGFloat minX;
@property (nonatomic, readonly) CGFloat minY;
@property (nonatomic) CGFloat w;
@property (nonatomic) CGFloat h;
@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;
@end

@class NSBundle;

SWIFT_CLASS("_TtC9Projet37514ViewController")
@interface ViewController : UIViewController
- (void)viewDidLoad;
- (void)switchNavWithIndex:(NSInteger)index;
- (void)resultToQuestion;
- (void)resultToMenu;
- (void)didReceiveMemoryWarning;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class CMMotionManager;
@class AVCaptureDevice;
@class AVCaptureSession;
@class CLHeading;

SWIFT_CLASS("_TtC9Projet3756VrView")
@interface VrView : UIView <CLLocationManagerDelegate>
@property (nonatomic, strong) UILabel * _Null_unspecified DyawLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified DpitchLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified DrollLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified DheadingLabel;
@property (nonatomic, strong) UILabel * _Null_unspecified DlocationLabel;
@property (nonatomic) CLLocationCoordinate2D location;
@property (nonatomic, readonly) BOOL DEBUG;
@property (nonatomic, readonly, strong) UIColor * _Nonnull DebugColor;
@property (nonatomic, strong) CMMotionManager * _Null_unspecified motionManager;
@property (nonatomic, strong) AVCaptureDevice * _Nullable captureDevice;
@property (nonatomic, strong) AVCaptureSession * _Null_unspecified captureSession;
@property (nonatomic, strong) CLLocationManager * _Null_unspecified locationManager;
@property (nonatomic, strong) UIView * _Null_unspecified halfInfiniteWall1;
@property (nonatomic, strong) UIView * _Null_unspecified halfInfiniteWall2;
@property (nonatomic) CGFloat deviceWidth;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)placePointOnWallWithView:(UIView * _Nonnull)view degree:(CGFloat)degree;
- (void)addLocationToViewToAdd:(CLLocationCoordinate2D)toAdd;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateMotion;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (double)radToDegWithRad:(double)rad;
- (double)calculateDistanceWithOrigin:(CLLocationCoordinate2D)origin destination:(CLLocationCoordinate2D)destination;
- (double)calculateBearingWithOrigin:(CLLocationCoordinate2D)origin destination:(CLLocationCoordinate2D)destination;
- (void)beginCameraSession;
@end

#pragma clang diagnostic pop
