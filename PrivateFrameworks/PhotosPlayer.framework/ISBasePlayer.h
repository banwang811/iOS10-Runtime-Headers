/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate> {
    NSMutableSet * __audioDisabledReasons;
    bool  __audioEnabledInternal;
    NSHashTable * __outputs;
    id  __playerItemDidPlayToEndObserver;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __videoForwardPlaybackEndTime;
    float  __videoVolume;
    id  __videoWillPlayToEndObserver;
    ISBehavior * _activeBehavior;
    bool  _audioEnabled;
    float  _audioVolume;
    ISLayerPlayer * _crossfadePlayer;
    <ISBasePlayerDelegate> * _delegate;
    ISPlayerState * _lastAppliedLayoutInfo;
    ISPlayerItem * _playerItem;
    long long  _status;
    ISWrappedAVPlayer * _videoPlayer;
}

@property (nonatomic, readonly) NSMutableSet *_audioDisabledReasons;
@property (setter=_setAudioEnabledInternal:, nonatomic) bool _audioEnabledInternal;
@property (nonatomic, readonly) NSHashTable *_outputs;
@property (setter=_setPlayerItemDidPlayToEndObserver:, nonatomic, retain) id _playerItemDidPlayToEndObserver;
@property (setter=_setVideoForwardPlaybackEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _videoForwardPlaybackEndTime;
@property (setter=_setVideoVolume:, nonatomic) float _videoVolume;
@property (setter=_setVideoWillPlayToEndObserver:, nonatomic, retain) id _videoWillPlayToEndObserver;
@property (setter=setActiveBehavior:, nonatomic, retain) ISBehavior *activeBehavior;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic) float audioVolume;
@property (nonatomic, readonly) ISLayerPlayer *crossfadePlayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISBasePlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setLastAppliedLayoutInfo:, nonatomic, retain) ISPlayerState *lastAppliedLayoutInfo;
@property (nonatomic, retain) ISPlayerItem *playerItem;
@property (setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (id)_audioDisabledReasons;
- (bool)_audioEnabledInternal;
- (void)_audioEnabledInternal:(bool)arg1;
- (void)_configureNewOutput:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleErrorsIfNeeded;
- (void)_handleMediaServicesReset;
- (id)_outputs;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (id)_playerItemDidPlayToEndObserver;
- (void)_setAudioDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setAudioEnabledInternal:(bool)arg1;
- (void)_setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setLastAppliedLayoutInfo:(id)arg1;
- (void)_setPlayerItemDidPlayToEndObserver:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setVideoForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoPlayer:(id)arg1;
- (void)_setVideoVolume:(float)arg1;
- (void)_setVideoWillPlayToEndObserver:(id)arg1;
- (void)_updateContentFromPlayerItem;
- (void)_updatePlayerItemAudioEnabled;
- (void)_updateStatus;
- (void)_updateVideoPlayerVolume;
- (void)_updateWillPlayToEndObserver;
- (void)_videoDidPlayToEnd;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoForwardPlaybackEndTime;
- (float)_videoVolume;
- (void)_videoWillPlayToEnd;
- (id)_videoWillPlayToEndObserver;
- (id)activeBehavior;
- (void)activeBehaviorDidChange;
- (void)addOutput:(id)arg1;
- (void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(id /* block */)arg4;
- (float)audioVolume;
- (void)avPlayer:(id)arg1 didChangeToItem:(id)arg2;
- (void)avPlayer:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)avPlayer:(id)arg1 item:(id)arg2 didChangeToStatus:(long long)arg3;
- (void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(id /* block */)arg4;
- (bool)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)behavior:(id)arg1 seekCrossfadeToTime:(double)arg2;
- (bool)behavior:(id)arg1 seekVideoPlayerToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (void)behavior:(id)arg1 setAudioEnabled:(bool)arg2;
- (void)behavior:(id)arg1 setCrossfadePlayRate:(float)arg2;
- (void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)behavior:(id)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(id)arg1 setVideoVolume:(float)arg2;
- (id)crossfadePlayer;
- (double)currentCrossfadeTime;
- (void)dealloc;
- (id)delegate;
- (void)didAddOutput:(id)arg1;
- (void)enumerateOutputsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (bool)isAudioEnabled;
- (id)lastAppliedLayoutInfo;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)playerItem;
- (void)playerItemDidChange;
- (void)removeOutput:(id)arg1;
- (void)setActiveBehavior:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (long long)status;
- (void)statusDidChange;
- (id)videoPlayer;
- (double)videoWillPlayToEndInterval;
- (void)willRemoveOutput:(id)arg1;

@end
