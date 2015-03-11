/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChat, IMHandle, NSArray, NSData, NSDictionary, NSMutableArray, NSString, NSTimer;

@interface IMAVChatParticipant : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSArray *_additionalPeers;
    IMAVChat *_avChat;
    unsigned int _cameraOrientation;
    unsigned int _cameraType;
    unsigned int _chatEndedReason;
    int _chatError;
    NSString *_conferenceID;
    NSTimer *_connectTimeoutTimer;
    IMHandle *_imHandle;
    NSData *_inFrequencyLevel;
    IMHandle *_inviter;
    NSData *_outFrequencyLevel;
    NSMutableArray *_participantsCallInfo;
    NSDictionary *_properties;
    } _remoteLandscapeContentRect;
    } _remoteLandscapeOrientation;
    } _remotePIPLandscapeOrientation;
    } _remotePIPPortraitOrientation;
    } _remotePortraitContentRect;
    } _remotePortraitOrientation;
    unsigned int _screenOrientation;
    unsigned int _state;
    NSString *_vcPartyID;
    float _volumeMeter;
    bool_audioMuted;
    bool_hasReinitiateCapability;
    bool_inviteDelivered;
    bool_isInitiator;
    bool_mediaStalled;
    bool_sendingAudio;
    bool_sendingVideo;
    bool_videoDegraded;
    bool_videoPaused;
}

@property(readonly) long long _activeCallID;
@property(setter=_setConferenceID:,retain) NSString * _conferenceID;
@property(setter=_setConnectTimeoutTimer:,retain) NSTimer * _connectTimeoutTimer;
@property(setter=_setInviteDelivered:) bool _inviteDelivered;
@property(retain) NSMutableArray * _participantsCallInfo;
@property(setter=_setRemoteLandscapeContentRect:) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _remoteLandscapeContentRect;
@property(setter=_setRemoteLandscapeOrientation:) struct CGSize { double x1; double x2; } _remoteLandscapeOrientation;
@property(setter=_setRemotePIPLandscapeOrientation:) struct CGSize { double x1; double x2; } _remotePIPLandscapeOrientation;
@property(setter=_setRemotePIPPortraitOrientation:) struct CGSize { double x1; double x2; } _remotePIPPortraitOrientation;
@property(setter=_setRemotePortraitContentRect:) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _remotePortraitContentRect;
@property(setter=_setRemotePortraitOrientation:) struct CGSize { double x1; double x2; } _remotePortraitOrientation;
@property(setter=_setScreenOrientation:) unsigned int _screenOrientation;
@property(retain) NSArray * additionalPeers;
@property IMAVChat * avChat;
@property(setter=_setCameraOrientation:) unsigned int cameraOrientation;
@property(setter=_setCameraType:) unsigned int cameraType;
@property int error;
@property(readonly) bool hasConnectingSessions;
@property bool hasReinitiateCapability;
@property(readonly) bool hasUnfinishedSessions;
@property(retain,readonly) IMHandle * imHandle;
@property(retain) NSData * inFrequencyLevel;
@property(retain,readonly) IMHandle * invitedBy;
@property(setter=setAudioMuted:) bool isAudioMuted;
@property(setter=setAudioMuted:) bool isAudioMuted;
@property(readonly) bool isInitiator;
@property(readonly) bool isLocalParticipant;
@property(readonly) bool isMediaStalled;
@property(setter=setMediaStalled:) bool isMediaStalled;
@property(readonly) bool isSendingAudio;
@property(readonly) bool isSendingAudio;
@property(readonly) bool isSendingVideo;
@property(readonly) bool isSendingVideo;
@property(readonly) bool isVideoDegraded;
@property(setter=setVideoDegraded:) bool isVideoDegraded;
@property(setter=setVideoPaused:) bool isVideoPaused;
@property(setter=setVideoPaused:) bool isVideoPaused;
@property(retain,readonly) NSString * name;
@property(retain) NSData * outFrequencyLevel;
@property(retain) NSDictionary * properties;
@property(readonly) unsigned int reasonChatEnded;
@property unsigned int state;
@property(setter=setVCPartyID:,retain) NSString * vcPartyID;
@property void* videoBackLayer;
@property void* videoLayer;
@property float volumeMeter;

- (long long)_activeCallID;
- (id)_callInfoForCallID:(long long)arg1;
- (id)_callInfoWithState:(long long)arg1;
- (id)_callInfosWaitingForAcceptAction;
- (id)_callInfosWaitingForResponse;
- (void)_cleanupOrphanedCallInfos;
- (id)_conferenceID;
- (void)_connectTimeout:(id)arg1;
- (id)_connectTimeoutTimer;
- (bool)_generateCallInfo:(id)arg1;
- (void)_handleIMAVResponse:(unsigned int)arg1;
- (void)_hangupCallLaterIfReinitiateFails:(id)arg1;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(bool)arg3 sendingVideo:(bool)arg4 usingICE:(bool)arg5 toChat:(id)arg6 inState:(unsigned int)arg7 withError:(int)arg8 andReason:(unsigned int)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (bool)_inviteDelivered;
- (id)_natType;
- (void)_noteInviteDelivered:(bool)arg1;
- (id)_participantsCallInfo;
- (id)_processIncomingCallProperties:(id)arg1;
- (void)_processPropertyUpdate:(id)arg1;
- (bool)_processResponseDictionary:(id)arg1 allowSecondConnection:(bool)arg2;
- (id)_proxyRepresentation;
- (void)_reInitiate;
- (void)_registerCallInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_remoteLandscapeContentRect;
- (struct CGSize { double x1; double x2; })_remoteLandscapeOrientation;
- (struct CGSize { double x1; double x2; })_remotePIPLandscapeOrientation;
- (struct CGSize { double x1; double x2; })_remotePIPPortraitOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_remotePortraitContentRect;
- (struct CGSize { double x1; double x2; })_remotePortraitOrientation;
- (unsigned int)_screenOrientation;
- (void)_sendResponse:(unsigned int)arg1 callInfo:(id)arg2;
- (void)_setCameraOrientation:(unsigned int)arg1;
- (void)_setCameraType:(unsigned int)arg1;
- (void)_setChatError:(int)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectTimeoutTimer:(id)arg1;
- (void)_setInviteDelivered:(bool)arg1;
- (void)_setRemoteLandscapeContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRemoteLandscapeOrientation:(struct CGSize { double x1; double x2; })arg1;
- (void)_setRemotePIPLandscapeOrientation:(struct CGSize { double x1; double x2; })arg1;
- (void)_setRemotePIPPortraitOrientation:(struct CGSize { double x1; double x2; })arg1;
- (void)_setRemotePortraitContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRemotePortraitOrientation:(struct CGSize { double x1; double x2; })arg1;
- (void)_setScreenOrientation:(unsigned int)arg1;
- (void)_setState:(unsigned int)arg1 withReason:(unsigned int)arg2 andError:(int)arg3;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (void)_updateProperties:(id)arg1;
- (id)additionalPeers;
- (struct CGSize { double x1; double x2; })aspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)avChat;
- (long long)bestCallID;
- (id)callInfoBeingHandedOff;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)cancelInvitation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (void)disconnectFromAVChat;
- (int)error;
- (bool)hasConnectingSessions;
- (bool)hasReinitiateCapability;
- (bool)hasUnfinishedSessions;
- (id)imHandle;
- (id)inFrequencyLevel;
- (id)init;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (id)invitedBy;
- (bool)isAudioMuted;
- (bool)isInitiator;
- (bool)isLocalParticipant;
- (bool)isMediaStalled;
- (bool)isSendingAudio;
- (bool)isSendingVideo;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (struct CGSize { double x1; double x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (bool)matchesAVConferenceCallID:(long long)arg1;
- (id)name;
- (id)outFrequencyLevel;
- (id)properties;
- (unsigned int)reasonChatEnded;
- (void)reinitializeCallForCallID:(unsigned int)arg1;
- (void)requestIconIfNecessary;
- (void)resetWaitingToConnectTimer;
- (void)sendAVMessage:(unsigned int)arg1 userInfo:(id)arg2;
- (void)sendInvitation;
- (void)sendResponse:(unsigned int)arg1;
- (void)setAVChat:(id)arg1;
- (void)setAdditionalPeers:(id)arg1;
- (void)setAudioMuted:(bool)arg1;
- (void)setHasReinitiateCapability:(bool)arg1;
- (void)setInFrequencyLevel:(id)arg1;
- (void)setMediaStalled:(bool)arg1;
- (void)setOutFrequencyLevel:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateToEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)setVCPartyID:(id)arg1;
- (void)setVideoBackLayer:(void*)arg1;
- (void)setVideoDegraded:(bool)arg1;
- (void)setVideoLayer:(void*)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVolumeMeter:(float)arg1;
- (void)setWaitingToConnect:(bool)arg1;
- (void)set_participantsCallInfo:(id)arg1;
- (unsigned int)state;
- (void)updateStateForCurrentCallInfo:(unsigned int)arg1;
- (id)vcPartyID;
- (void*)videoBackLayer;
- (void*)videoLayer;
- (float)volumeMeter;

@end