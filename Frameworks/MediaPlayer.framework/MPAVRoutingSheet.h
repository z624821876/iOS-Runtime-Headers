/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {
    UIView * _backgroundView;
    UIButton * _cancelButton;
    id /* block */  _completionHandler;
    UIView * _controlsView;
    UIButton * _dismissBackgroundButton;
    UIButton * _dismissControlsViewButton;
    BOOL  _mirroringOnly;
    UIWindow * _presentationWindow;
    MPAVRoutingViewController * _routingViewController;
}

@property (setter=setAVItemType:, nonatomic) int avItemType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL mirroringOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateControls:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cancelButtonFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_controlsViewFrame;
- (struct CGSize { float x1; float x2; })_maxRoutingViewSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_routingViewFrame;
- (void)_updateDismissButtonText;
- (void)_updateRoutingSheetFrame;
- (int)avItemType;
- (void)dealloc;
- (void)dismiss;
- (id)initWithAVItemType:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)mirroringOnly;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)setAVItemType:(int)arg1;
- (void)setMirroringOnly:(BOOL)arg1;
- (void)showInView:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)tintColorDidChange;

@end
