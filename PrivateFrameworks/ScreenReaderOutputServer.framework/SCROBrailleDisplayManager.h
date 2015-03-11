/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROSBrailleDisplayManagerDelegate>, NSAttributedString, NSData, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCROBrailleDisplay, SCROBrailleDisplayHistory, SCROBrailleDisplayManagedQueue, SCROBrailleEventDispatcher, SCROBrailleFormatter, SCRODBluetoothBrailleDisplay;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {
    struct { 
        NSData *aggregatedData; 
        int virtualAlignment; 
        long long masterStatusCellIndex; 
        boolcurrentAnnouncementUnread; 
        boolanyUnreadAnnouncements; 
    int _alertPriority;
    double _alertTimeout;
    struct __CFRunLoopTimer { } *_alertTimer;
    NSAttributedString *_blankUIString;
    SCRODBluetoothBrailleDisplay *_bluetoothBrailleDisplay;
    NSLock *_contentLock;
    int _contractionMode;
    SCROBrailleFormatter *_currentBrailleFormatter;
    <SCROSBrailleDisplayManagerDelegate> *_delegate;
    NSMutableDictionary *_detectedIOElementsDict;
    struct __CFDictionary { } *_displayConfigurationDict;
    NSMutableArray *_displayModeStack;
    SCROBrailleEventDispatcher *_eventDispatcher;
    SCROBrailleDisplayHistory *_history;
    int _inputAccessMode;
    int _inputContractionMode;
    NSAttributedString *_lineString;
    NSMutableSet *_loadedIOElements;
    NSAttributedString *_mainString;
    SCROBrailleDisplayManagedQueue *_managedDisplayQueue;
    struct __CFRunLoop { } *_runLoop;
    } _status;
    NSAttributedString *_statusString;
    SCROBrailleDisplay *_stealthBrailleDisplay;
    bool_automaticBrailleTranslation;
    bool_inputEightDot;
    bool_isValid;
    bool_lineDescriptorDisplayCallbackEnabled;
    bool_shouldBatchUpdates;
    bool_showDotsSevenAndEight;
    bool_showEightDot;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property int inputContractionMode;
@property bool inputEightDotBraille;
@property(readonly) Class superclass;

+ (void)initialize;

- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_alertTimeoutHandler;
- (void)_announcementHandler:(id)arg1;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (id)_cachedMainStringForDisplayMode:(int)arg1;
- (void)_contractionModeHandler:(id)arg1;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_disableAutoDetect;
- (void)_displayModeHandler:(id)arg1;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void)_enableAutoDetect;
- (void)_exitCurrentDisplayMode;
- (void)_inputEightDotHandler:(id)arg1;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (void)_loadStealthDisplay;
- (void)_mainDisplayHandler:(id)arg1;
- (void)_panHandler:(id)arg1;
- (void)_popDisplayModeStack;
- (void)_prepareToMemorizeNextKeyHandler:(id)arg1;
- (void)_resetAlertTimer;
- (void)_resetBluetoothReconnectionTimer;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (void)_setAggregatedStatusHandler:(id)arg1;
- (void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_setDisplayInputAccessMode:(id)arg1;
- (void)_setDisplayMode:(int)arg1;
- (void)_setLineDescriptorCallbackEnabledHandler:(id)arg1;
- (void)_setMasterStatusCellIndexHandler:(id)arg1;
- (void)_setPrimaryDisplayKeyHandler:(id)arg1;
- (void)_setTableHandler:(id)arg1;
- (void)_setVirtualStatusAlignmentHandler:(id)arg1;
- (void)_showDotsSevenAndEightHandler:(id)arg1;
- (void)_showEightDotHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_stopAlertTimer;
- (void)_unloadStealthDisplay;
- (id)aggregatedStatus;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (bool)automaticBrailleTranslation;
- (void)automaticBrailleTranslationHandler:(id)arg1;
- (void)beginUpdates;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(bool)arg2;
- (void)brailleDisplay:(id)arg1 isSleeping:(bool)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)brailleDriverDisconnected:(id)arg1;
- (id)brailleInputManager;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)configureTableWithIdentifier:(id)arg1;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (int)displayInputAccessMode;
- (int)displayMode;
- (id)driverConfiguration;
- (void)endUpdates;
- (void)exitCurrentDisplayMode;
- (void)handleEvent:(id)arg1;
- (bool)hasActiveDisplays;
- (id)init;
- (int)inputContractionMode;
- (void)inputContractionModeHandler:(id)arg1;
- (bool)inputEightDotBraille;
- (void)invalidate;
- (bool)isConfigured;
- (bool)isValid;
- (bool)lineDescriptorDisplayCallbackEnabled;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (id)mainAttributedString;
- (long long)masterStatusCellIndex;
- (id)newBrailleDisplayCommandDispatcher;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (void)playBorderHitSoundForBrailleDisplay:(id)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutomaticBrailleTranslationEnabled:(bool)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayInputAccessMode:(int)arg1;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(bool)arg1;
- (void)setLineDescriptorDisplayCallbackEnabled:(bool)arg1;
- (void)setMainAttributedString:(id)arg1 forceUpdate:(bool)arg2;
- (void)setMainAttributedString:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setShowEightDotBraille:(bool)arg1;
- (void)setUIDisplayMode;
- (void)setVirtualStatusAlignment:(int)arg1;
- (bool)showDotsSevenAndEight;
- (bool)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)simulateKeypress:(id)arg1;
- (id)tableIdentifier;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4;
- (int)virtualStatusAlignment;

@end