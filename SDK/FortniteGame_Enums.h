#pragma once

enum ACLCompressionLevel
{
    ACLCL_Lowest = 0,
    ACLCL_Low = 1,
    ACLCL_Medium = 2,
    ACLCL_High = 3,
    ACLCL_Highest = 4,
    ACLCL_Automatic = 5,
    ACLCL_MAX = 6
};

enum ACLRotationFormat
{
    ACLRF_Quat_128 = 0,
    ACLRF_QuatDropW_96 = 1,
    ACLRF_QuatDropW_Variable = 2,
    ACLRF_MAX = 3
};

enum ACLVectorFormat
{
    ACLVF_Vector3_96 = 0,
    ACLVF_Vector3_Variable = 1,
    ACLVF_Vector3_MAX = 2
};

enum ACLVisualFidelity
{
    Highest = 0,
    Medium = 1,
    Lowest = 2,
    ACLVisualFidelity_MAX = 3
};

enum ACLVisualFidelityChangeResult
{
    Dispatched = 0,
    Completed = 1,
    Failed = 2,
    ACLVisualFidelityChangeResult_MAX = 3
};

enum AnimPhysAngularConstraintType
{
    Angular = 0,
    Cone = 1,
    AnimPhysAngularConstraintType_MAX = 2
};

enum AnimPhysCollisionType
{
    CoM = 0,
    CustomSphere = 1,
    InnerSphere = 2,
    OuterSphere = 3,
    AnimPhysCollisionType_MAX = 4
};

enum AnimPhysLinearConstraintType
{
    Free = 0,
    Limited = 1,
    AnimPhysLinearConstraintType_MAX = 2
};

enum AnimPhysSimSpaceType
{
    Component = 0,
    Actor = 1,
    World = 2,
    RootRelative = 3,
    BoneRelative = 4,
    AnimPhysSimSpaceType_MAX = 5
};

enum AnimPhysTwistAxis
{
    AxisX = 0,
    AxisY = 1,
    AxisZ = 2,
    AnimPhysTwistAxis_MAX = 3
};

enum AnimationCompressionFormat
{
    ACF_None = 0,
    ACF_Float96NoW = 1,
    ACF_Fixed48NoW = 2,
    ACF_IntervalFixed32NoW = 3,
    ACF_Fixed32NoW = 4,
    ACF_Float32NoW = 5,
    ACF_Identity = 6,
    ACF_MAX = 7
};

enum AnimationKeyFormat
{
    AKF_ConstantKeyLerp = 0,
    AKF_VariableKeyLerp = 1,
    AKF_PerTrackCompression = 2,
    AKF_MAX = 3
};

enum BattleMapHoveredReason
{
    None = 0,
    Mouse = 1,
    Code = 2,
    BattleMapHoveredReason_MAX = 3
};

enum BattlePassTileAvailabilityStates
{
    Invalid = 0,
    Available = 1,
    Owned = 2,
    Locked = 3,
    BattlePassTileAvailabilityStates_MAX = 4
};

enum Beam2SourceTargetMethod
{
    PEB2STM_Default = 0,
    PEB2STM_UserSet = 1,
    PEB2STM_Emitter = 2,
    PEB2STM_Particle = 3,
    PEB2STM_Actor = 4,
    PEB2STM_MAX = 5
};

enum Beam2SourceTargetTangentMethod
{
    PEB2STTM_Direct = 0,
    PEB2STTM_UserSet = 1,
    PEB2STTM_Distribution = 2,
    PEB2STTM_Emitter = 3,
    PEB2STTM_MAX = 4
};

enum BeamModifierType
{
    PEB2MT_Source = 0,
    PEB2MT_Target = 1,
    PEB2MT_MAX = 2
};

enum BotDataOverrideCosmeticMode
{
    SpecificLoadout = 0,
    CosmeticLibrary = 1,
    BotDataOverrideCosmeticMode_MAX = 2
};

enum ChaosDeformableSimSpace
{
    World = 0,
    ComponentXf = 1,
    bone = 2,
    ChaosDeformableSimSpace_MAX = 3
};

enum CopyBoneDeltaMode
{
    Accumulate = 0,
    Copy = 1,
    CopyBoneDeltaMode_MAX = 2
};

enum CurveInterpolationType
{
    AUTOINTERP = 0,
    LINEAR = 1,
    CONSTANT = 2,
    CurveInterpolationType_MAX = 3
};

enum CylinderHeightAxis
{
    PMLPC_HEIGHTAXIS_X = 0,
    PMLPC_HEIGHTAXIS_Y = 1,
    PMLPC_HEIGHTAXIS_Z = 2,
    PMLPC_HEIGHTAXIS_MAX = 3
};

enum DateFormat
{
    CountdownTextual = 0,
    CountdownNumeric = 1,
    CountdownNumUnder12Hours = 2,
    Date = 3,
    CountdownNumericDilatable = 4,
    DateFormat_MAX = 5
};

enum DistributionParamMode
{
    DPM_Normal = 0,
    DPM_Abs = 1,
    DPM_Direct = 2,
    DPM_MAX = 3
};

enum EAESGCMNetResult
{
    Unknown = 0,
    Success = 1,
    AESMissingIV = 2,
    AESMissingAuthTag = 3,
    AESMissingPayload = 4,
    AESDecryptionFailed = 5,
    AESZeroLastByte = 6,
    EAESGCMNetResult_MAX = 7
};

enum EAFSActiveType
{
    None = 0,
    USBOnly = 1,
    NetworkOnly = 2,
    Combined = 3,
    EAFSActiveType_MAX = 4
};

enum EAIBotBuildingTemplate
{
    SingleWall = 0,
    SingleRamp = 1,
    SingleRoof = 2,
    SingleBrace = 3,
    SingleWallWindow = 4,
    MAX = 5
};

enum EAICustomTargetRequestType
{
    Movement = 0,
    MeleeAttack = 1,
    RangedAttack = 2,
    EAICustomTargetRequestType_MAX = 3
};

enum EAIDebuggerVisualization
{
    INVALID = 0,
    NavMesh = 1,
    EAIDebuggerVisualization_MAX = 2
};

enum EAIHotSpotAssignmentFilter
{
    All = 0,
    WithSlots = 1,
    WaitingList = 2,
    EAIHotSpotAssignmentFilter_MAX = 3
};

enum EAIHotSpotSlot
{
    Free = 0,
    Claimed = 1,
    Occupied = 2,
    Blocked = 3,
    Disabled = 4,
    EAIHotSpotSlot_MAX = 5
};

enum EAIHotSpotSlotFilter
{
    All = 0,
    AvailableOnly = 1,
    UnavailableOnly = 2,
    EAIHotSpotSlotFilter_MAX = 3
};

enum EAILockSource
{
    Animation = 0,
    Logic = 1,
    Script = 2,
    Gameplay = 3,
    MAX = 4
};

enum EAILootExcludeListReason
{
    Invalid = 0,
    ExecutionError = 1,
    CannotReachLootLocation = 2,
    OutsideSafeZoneRadius = 3,
    NoInventorySpace = 4,
    LootStateUnavailable = 5,
    PathNotFound = 6,
    GoalOffNavmesh = 7,
    AgentBlocked = 8,
    IsolatedIsland = 9,
    UnsupportedItem = 10,
    Count = 11,
    EAILootExcludeListReason_MAX = 12
};

enum EAIOptionFlag
{
    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3
};

enum EAIParamType
{
    Float = 0,
    Int = 1,
    Bool = 2,
    MAX = 3
};

enum EAIPatrolPathVersion
{
    InitialVersion = 0,
    TemplateFromQuickBarVersion = 1,
    PatrolPointMovedToUserSettingsVersion = 2,
    VersionPlusOne = 3,
    LatestVersion = 4,
    EAIPatrolPathVersion_MAX = 5
};

enum EAIPingCommandType
{
    None = 0,
    PingGoTo = 1,
    PingHoldPosition = 2,
    PingBackToMe = 3,
    EAIPingCommandType_MAX = 4
};

enum EAIRequestPriority
{
    SoftScript = 0,
    Logic = 1,
    HardScript = 2,
    Reaction = 3,
    Ultimate = 4,
    MAX = 5
};

enum EAIRuntimePatrolPathPointProviderAttributeSource
{
    RuntimeComponent = 0,
    PatrolPath = 1,
    SourceClass = 2,
    EAIRuntimePatrolPathPointProviderAttributeSource_MAX = 3
};

enum EAIScalableFloatScalingType
{
    Disabled = 0,
    ReceivedDamageByTarget = 1,
    EAIScalableFloatScalingType_MAX = 2
};

enum EAISenseNotifyType
{
    OnEveryPerception = 0,
    OnPerceptionChange = 1,
    EAISenseNotifyType_MAX = 2
};

enum EAITaskPriority
{
    Lowest = 0,
    Low = 1,
    AutonomousAI = 2,
    High = 3,
    Ultimate = 4,
    EAITaskPriority_MAX = 5
};

enum EAIVisibilityOptions
{
    None = 0,
    AlwaysHidden = 1,
    AlwaysVisible = 2,
    HiddenWhenIdle = 3,
    HiddenWhenCrouched = 4,
    HiddenWhenIdleAndCrouched = 5,
    VisibleWhenOverlappingPerceivedActor = 6,
    CheckPriorVisibility = 7,
    EAIVisibilityOptions_MAX = 8
};

enum EAbilityGenericReplicatedEvent
{
    GenericConfirm = 0,
    GenericCancel = 1,
    InputPressed = 2,
    InputReleased = 3,
    GenericSignalFromClient = 4,
    GenericSignalFromServer = 5,
    GameCustom1 = 6,
    GameCustom2 = 7,
    GameCustom3 = 8,
    GameCustom4 = 9,
    GameCustom5 = 10,
    GameCustom6 = 11,
    MAX = 12
};

enum EAbilityTaskNetSyncType
{
    BothWait = 0,
    OnlyServerWait = 1,
    OnlyClientWait = 2,
    EAbilityTaskNetSyncType_MAX = 3
};

enum EAbilityTaskWaitState
{
    WaitingOnGame = 0,
    WaitingOnUser = 1,
    WaitingOnAvatar = 2,
    EAbilityTaskWaitState_MAX = 3
};

enum EAcceptFriendInviteFailureReason
{
    InviterTooManyFriends = 0,
    SelfTooManyFriends = 1,
    MissingPin = 2,
    InvalidPin = 3,
    PinAttemptsExceeded = 4,
    UnknownError = 5,
    EAcceptFriendInviteFailureReason_MAX = 6
};

enum EAccessoryColorName
{
    EAccessoryColorName_AccessoryColor1 = 0,
    EAccessoryColorName_AccessoryColor2 = 1,
    EAccessoryColorName_AccessoryColor3 = 2,
    EAccessoryColorName_NumTypes = 3,
    EAccessoryColorName_MAX = 4
};

enum EAcquireIncrementType
{
    Single = 0,
    HighestMatchingItemCount = 1,
    TotalMatchingItemCounts = 2,
    UniqueMatchingItems = 3,
    TotalItemCount = 4,
    UniqueItemCount = 5,
    EAcquireIncrementType_MAX = 6
};

enum EActionBindingComparisonType
{
    NoneBound = 0,
    AnyBound = 1,
    AllBound = 2,
    EActionBindingComparisonType_MAX = 3
};

enum EActionState
{
    TryingToEquip = 0,
    EquippingItem = 1,
    UsingItem = 2,
    WaitingItemTermination = 3,
    WaitBeforeEquippingNextItem = 4,
    ActionEndedWithNoError = 5,
    ActionEndedWithError = 6,
    EActionState_MAX = 7
};

enum EActionStatus
{
    Pending = 0,
    Running = 1,
    Completed = 2,
    EActionStatus_MAX = 3
};

enum EActivatePanelOption
{
    Show = 0,
    Hide = 1,
    PlatformDefault = 2,
    EActivatePanelOption_MAX = 3
};

enum EActivationFunction
{
    Linear = 0,
    ReLU = 1,
    LeakyReLU = 2,
    Tanh = 3,
    Sigmoid = 4,
    EActivationFunction_MAX = 5
};

enum EActivePreTravelSetupStepsMask
{
    None = 0,
    WaitingForSubGameContent = 1,
    WaitingForDownloadableContent = 2,
    WaitingForServerInitialization = 3,
    WaitingForContentBeaconDisconnect = 4,
    WaitingForSecondContentBeacon = 5,
    CancelingPreTravelSetup = 6,
    EActivePreTravelSetupStepsMask_MAX = 7
};

enum EActivityBrowserFilterType
{
    ExcludePanelsInFilter = 0,
    ExcludePanelsNotInFilter = 1,
    EActivityBrowserFilterType_MAX = 2
};

enum EActivityBrowserRowViewModelSource
{
    CreateInstance = 0,
    FetchFromSurfaceVM = 1,
    EActivityBrowserRowViewModelSource_MAX = 2
};

enum EActivityBrowserTileStyle
{
    Default = 0,
    Minimal = 1,
    Detailed = 2,
    EActivityBrowserTileStyle_MAX = 3
};

enum EActivityCheckSolution
{
    None = 0,
    Purchase = 1,
    Install = 2,
    Settings = 3,
    LeavePartyAndPlayTutorial = 4,
    EActivityCheckSolution_MAX = 5
};

enum EActivityImageLoadingState
{
    Unset = 0,
    Loading = 1,
    Loaded = 2,
    Error = 3,
    Max = 4
};

enum EActivityItemType
{
    Island = 0,
    Creator = 1,
    PlayingNow = 2,
    Max = 3
};

enum EActorFilterPolicy
{
    POL_FilterActorsWithoutVolumeReference = 0,
    POL_IgnorePreviewActors = 1,
    POL_MAX = 2
};

enum EActorMovementCompensationMode
{
    ComponentSpace = 0,
    WorldSpace = 1,
    SuddenMotionOnly = 2,
    EActorMovementCompensationMode_MAX = 3
};

enum EActorUnderReticleType
{
    None = 0,
    Enemy = 1,
    Ally = 2,
    World = 3,
    EActorUnderReticleType_MAX = 4
};

enum EActorUpdateOverlapsMethod
{
    UseConfigDefault = 0,
    AlwaysUpdate = 1,
    OnlyUpdateMovable = 2,
    NeverUpdate = 3,
    EActorUpdateOverlapsMethod_MAX = 4
};

enum EAdHocSquads_InviteStatus
{
    Unset = 0,
    Inviting = 1,
    InviteEnded_APlayerAcceptedTheInvite = 2,
    InviteCancelled_SquadFull = 3,
    InviteCancelled_ByInvitingPlayer = 4,
    EAdHocSquads_MAX = 5
};

enum EAdHocSquads_LeaveSquadReason
{
    ManualLeave = 0,
    MutatorDisabled = 1,
    JoinedADifferentSquad = 2,
    PlayerDiedAndCannotBeRevived = 3,
    PlayerHasWonGame = 4,
    EAdHocSquads_MAX = 5
};

enum EAdHocSquads_SquadUpResult
{
    Success = 0,
    Failure_OneOrMorePlayersWereNull = 1,
    Failure_BothPlayersAreInAdHocSquads = 2,
    Failure_BothPlayersAreAlreadyInTheSameAdHocSquad = 3,
    Failure_CouldNotCreateAdHocSquad = 4,
    Failure_CalledOnClient = 5,
    Failure_SquadIsAlreadyFull = 6,
    Failure_TooManyPlayersToMergeSquads = 7,
    Failure_MutatorIsDisabled = 8,
    Failure_Unknown = 9,
    Failure_Custom = 10,
    EAdHocSquads_MAX = 11
};

enum EAdManagerDelegate
{
    AMD_ClickedBanner = 0,
    AMD_UserClosedAd = 1,
    AMD_MAX = 2
};

enum EAddChainResult
{
    Success = 0,
    NoMatchingShell = 1,
    InvalidAttachIndex = 2,
    NoExitsLeft = 3,
    CannotFitShell = 4,
    NoShellsGenerated = 5,
    EAddChainResult_MAX = 6
};

enum EAddToSelectionResult
{
    Added = 0,
    Removed = 1,
    AtLimit = 2,
    None = 3,
    EAddToSelectionResult_MAX = 4
};

enum EAdditiveAnimationType
{
    AAT_None = 0,
    AAT_LocalSpaceBase = 1,
    AAT_RotationOffsetMeshSpace = 2,
    AAT_MAX = 3
};

enum EAdditiveBasePoseType
{
    ABPT_None = 0,
    ABPT_RefPose = 1,
    ABPT_AnimScaled = 2,
    ABPT_AnimFrame = 3,
    ABPT_LocalAnimFrame = 4,
    ABPT_MAX = 5
};

enum EAdsrTarget
{
    Volume = 0,
    FilterFreq = 1,
    Num = 2,
    Invalid = 3,
    EAdsrTarget_MAX = 4
};

enum EAgentComponentState
{
    None = 0,
    EntityPendingCreation = 1,
    EntityCreated = 2,
    PuppetPendingInitialization = 3,
    PuppetInitialized = 4,
    PuppetPaused = 5,
    PuppetPendingReplication = 6,
    PuppetReplicatedOrphan = 7,
    EAgentComponentState_MAX = 8
};

enum EAileronRollDirection
{
    None = 0,
    Right = 1,
    Left = 2,
    EAileronRollDirection_MAX = 3
};

enum EAimControls
{
    Facing = 0,
    CardinalMovement = 1,
    FullRangeMovement = 2,
    FullRangeManual = 3,
    EAimControls_MAX = 4
};

enum EAimMode
{
    AimAtTarget = 0,
    OrientToTarget = 1,
    MAX = 2
};

enum EAimedObjectType
{
    HasSightOrScope = 0,
    HighlyAnimated = 1,
    EAimedObjectType_MAX = 2
};

enum EAirAbsorptionMethod
{
    Linear = 0,
    CustomCurve = 1,
    EAirAbsorptionMethod_MAX = 2
};

enum EAirCraftBehavior
{
    Default = 0,
    OpposingAirCraftForEachTeam = 1,
    FlyTowardFirstCircleCenter = 2,
    NoAircraft = 3,
    EAirCraftBehavior_MAX = 4
};

enum EAircraftLaunchReason
{
    StdTimerAllPlayers = 0,
    EarlyTimerAllPlayers = 1,
    StdTimerMostPlayers = 2,
    EarlyTimerMostPlayers = 3,
    StdTimerFewPlayers = 4,
    EAircraftLaunchReason_MAX = 5
};

enum EAlertLevel
{
    Unaware = 0,
    Suspicious = 1,
    LostTarget = 2,
    Threatened = 3,
    Count = 4,
    EAlertLevel_MAX = 5
};

enum EAlertLevelComparisonOperator
{
    GreaterThan = 0,
    LessThan = 1,
    EqualTo = 2,
    NotEqualTo = 3,
    GreaterThanOrEqualTo = 4,
    LessThanOrEqualTo = 5,
    EAlertLevelComparisonOperator_MAX = 6
};

enum EAlignObjectsAlignToOptions
{
    FirstSelected = 0,
    LastSelected = 1,
    Combined = 2,
    EAlignObjectsAlignToOptions_MAX = 3
};

enum EAlignObjectsAlignTypes
{
    Pivots = 0,
    BoundingBoxes = 1,
    EAlignObjectsAlignTypes_MAX = 2
};

enum EAlignObjectsBoxPoint
{
    Center = 0,
    Bottom = 1,
    Top = 2,
    Left = 3,
    Right = 4,
    Front = 5,
    Back = 6,
    Min = 7,
    Max = 8
};

enum EAllowConvexMergeMethod
{
    ByProximity = 0,
    Any = 1,
    EAllowConvexMergeMethod_MAX = 2
};

enum EAllowedConfrontationalEmoteDisplaySources
{
    Anyone = 0,
    FriendsInParty = 1,
    LocalOnly = 2,
    EAllowedConfrontationalEmoteDisplaySources_MAX = 3
};

enum EAllowedPinnedQuestTypes
{
    AllAllowed = 0,
    OnlyUserSelected = 1,
    OnlyConciergeSuggested = 2,
    EAllowedPinnedQuestTypes_MAX = 3
};

enum EAllowedToEdit
{
    Default = 0,
    Anyone = 1,
    EAllowedToEdit_MAX = 2
};

enum EAlphaBlendOption
{
    Linear = 0,
    Cubic = 1,
    HermiteCubic = 2,
    Sinusoidal = 3,
    QuadraticInOut = 4,
    CubicInOut = 5,
    QuarticInOut = 6,
    QuinticInOut = 7,
    CircularIn = 8,
    CircularOut = 9,
    CircularInOut = 10,
    ExpIn = 11,
    ExpOut = 12,
    ExpInOut = 13,
    Custom = 14,
    EAlphaBlendOption_MAX = 15
};

enum EAlphaChannelMode
{
    Disabled = 0,
    LinearColorSpaceOnly = 1,
    AllowThroughTonemapper = 2,
    EAlphaChannelMode_MAX = 3
};

enum EAlphaFromDeltaTypes
{
    TranslationX = 0,
    TranslationY = 1,
    TranslationZ = 2,
    Scale = 3,
    ScaleX = 4,
    ScaleY = 5,
    ScaleZ = 6,
    EulerX = 7,
    EulerY = 8,
    EulerZ = 9,
    QuaternionTwist = 10,
    EAlphaFromDeltaTypes_MAX = 11
};

enum EAmbientAudioEntryActionType
{
    Added = 0,
    Updated = 1,
    Removed = 2,
    Count = 3,
    EAmbientAudioEntryActionType_MAX = 4
};

enum EAmbientAudioTagActionType
{
    Added = 0,
    Removed = 1,
    Count = 2,
    EAmbientAudioTagActionType_MAX = 3
};

enum EAnalyticMatchCounts
{
    IDScannerDoorFailed = 0,
    IDSCannerDoorSuccessBelongsToFaction = 1,
    IDSCannerDoorSuccessPlayerDisguised = 2,
    IDSCannerDoorSuccessCarriedHenchman = 3,
    IDSCannerDoorSuccessCarriedHuman = 4,
    IDScannerChestFailed = 5,
    IDSCannerChestSuccessBelongsToFaction = 6,
    IDSCannerChestSuccessPlayerDisguised = 7,
    IDSCannerChestSuccessCarriedHenchman = 8,
    IDSCannerChestSuccessCarriedHuman = 9,
    HenchmenEnteredSuspiciousState = 10,
    HenchmenEnteredLostTargetState = 11,
    HenchmenEnteredThreatenedState = 12,
    HenchmenDowned = 13,
    HenchmenEliminated = 14,
    HenchmenInterrogated = 15,
    BossesEliminated = 16,
    DisguisePhoneBoothTimesEntered = 17,
    DisguiseItemTimesUsed = 18,
    HiddenPassagesTimesEntered = 19,
    CameraOrSentryTimesEnteredCautionState = 20,
    CameraOrSentryTimesEnteredAltertedState = 21,
    CameraOrSentryTimesDestroyed = 22,
    GeneratorTimesDisabled = 23,
    UmbrellaNumberOfDashes = 24,
    UmbrellaNumberUsedToFloat = 25,
    UmbrellaAmountDamageBlocked = 26,
    UmbrellaBulletsBlocked = 27,
    UmbrellaMeleeHitsBlocked = 28,
    Count = 29,
    EAnalyticMatchCounts_MAX = 30
};

enum EAndroidAppStoreTypes
{
    Unset = 0,
    Epic = 1,
    Samsung = 2,
    EAndroidAppStoreTypes_MAX = 3
};

enum EAndroidAudio
{
    Default = 0,
    OGG = 1,
    ADPCM = 2,
    EAndroidAudio_MAX = 3
};

enum EAndroidDepthBufferPreference
{
    Default = 0,
    Bits16 = 1,
    Bits24 = 2,
    Bits32 = 3,
    EAndroidDepthBufferPreference_MAX = 4
};

enum EAndroidGraphicsDebugger
{
    None = 0,
    Mali = 1,
    Adreno = 2,
    EAndroidGraphicsDebugger_MAX = 3
};

enum EAndroidInstallLocation
{
    InternalOnly = 0,
    PreferExternal = 1,
    Auto = 2,
    EAndroidInstallLocation_MAX = 3
};

enum EAndroidScreenOrientation
{
    Portrait = 0,
    ReversePortrait = 1,
    SensorPortrait = 2,
    Landscape = 3,
    ReverseLandscape = 4,
    SensorLandscape = 5,
    Sensor = 6,
    FullSensor = 7,
    EAndroidScreenOrientation_MAX = 8
};

enum EAngularConstraintMotion
{
    ACM_Free = 0,
    ACM_Limited = 1,
    ACM_Locked = 2,
    ACM_MAX = 3
};

enum EAngularDriveMode
{
    SLERP = 0,
    TwistAndSwing = 1,
    EAngularDriveMode_MAX = 2
};

enum EAnimAlphaInputType
{
    Float = 0,
    Bool = 1,
    Curve = 2,
    EAnimAlphaInputType_MAX = 3
};

enum EAnimAssetCurveFlags
{
    AACF_NONE = 0,
    AACF_DriveMorphTarget_DEPRECATED = 1,
    AACF_DriveAttribute_DEPRECATED = 2,
    AACF_Editable = 3,
    AACF_DriveMaterial_DEPRECATED = 4,
    AACF_Metadata = 5,
    AACF_DriveTrack = 6,
    AACF_Disabled = 7,
    AACF_MAX = 8
};

enum EAnimCurveType
{
    AttributeCurve = 0,
    MaterialCurve = 1,
    MorphTargetCurve = 2,
    MaxAnimCurveType = 3,
    EAnimCurveType_MAX = 4
};

enum EAnimDataModelNotifyType
{
    BracketOpened = 0,
    BracketClosed = 1,
    TrackAdded = 2,
    TrackChanged = 3,
    TrackRemoved = 4,
    SequenceLengthChanged = 5,
    FrameRateChanged = 6,
    CurveAdded = 7,
    CurveChanged = 8,
    CurveRemoved = 9,
    CurveFlagsChanged = 10,
    CurveRenamed = 11,
    CurveScaled = 12,
    CurveColorChanged = 13,
    CurveCommentChanged = 14,
    AttributeAdded = 15,
    AttributeRemoved = 16,
    AttributeChanged = 17,
    Populated = 18,
    Reset = 19,
    SkeletonChanged = 20,
    Invalid = 21,
    EAnimDataModelNotifyType_MAX = 22
};

enum EAnimExecutionContextConversionResult
{
    Succeeded = 0,
    Failed = 1,
    EAnimExecutionContextConversionResult_MAX = 2
};

enum EAnimFunctionCallSite
{
    OnInitialize = 0,
    OnUpdate = 1,
    OnBecomeRelevant = 2,
    OnEvaluate = 3,
    OnInitializePostRecursion = 4,
    OnUpdatePostRecursion = 5,
    OnBecomeRelevantPostRecursion = 6,
    OnEvaluatePostRecursion = 7,
    OnStartedBlendingOut = 8,
    OnStartedBlendingIn = 9,
    OnFinishedBlendingOut = 10,
    OnFinishedBlendingIn = 11,
    EAnimFunctionCallSite_MAX = 12
};

enum EAnimGroupRole
{
    CanBeLeader = 0,
    AlwaysFollower = 1,
    AlwaysLeader = 2,
    TransitionLeader = 3,
    TransitionFollower = 4,
    EAnimGroupRole_MAX = 5
};

enum EAnimInstanceClassSwapType
{
    None = 0,
    SwapOnMatch = 1,
    EAnimInstanceClassSwapType_MAX = 2
};

enum EAnimInstanceLocatorFragmentType
{
    AnimInstance = 0,
    PostProcessAnimInstance = 1,
    EAnimInstanceLocatorFragmentType_MAX = 2
};

enum EAnimInterpolationType
{
    Linear = 0,
    Step = 1,
    EAnimInterpolationType_MAX = 2
};

enum EAnimLinkMethod
{
    Absolute = 0,
    Relative = 1,
    Proportional = 2,
    EAnimLinkMethod_MAX = 3
};

enum EAnimNodeDataFlags
{
    None = 0,
    HasInitialUpdateFunction = 1,
    HasBecomeRelevantFunction = 2,
    HasUpdateFunction = 3,
    AllFunctions = 4,
    EAnimNodeDataFlags_MAX = 5
};

enum EAnimNodeReferenceConversionResult
{
    Succeeded = 0,
    Failed = 1,
    EAnimNodeReferenceConversionResult_MAX = 2
};

enum EAnimNotifyEventType
{
    Begin = 0,
    End = 1,
    EAnimNotifyEventType_MAX = 2
};

enum EAnimNotifyTracks
{
    GenericNotifies = 0,
    DualWield = 1,
    DecisionWindow = 2,
    AbilityTrigger = 3,
    AudioParameters = 4,
    ReloadFx = 5,
    MeleeTrails = 6,
    StopMeleeTrailsOnEnd = 7,
    PlaySwimmingSounds = 8,
    Count = 9,
    EAnimNotifyTracks_MAX = 10
};

enum EAnimPropertyAccessCallSite
{
    WorkerThread_Unbatched = 0,
    WorkerThread_Batched_PreEventGraph = 1,
    WorkerThread_Batched_PostEventGraph = 2,
    GameThread_Batched_PreEventGraph = 3,
    GameThread_Batched_PostEventGraph = 4,
    EAnimPropertyAccessCallSite_MAX = 5
};

enum EAnimRelaxedState
{
    None = 0,
    WeaponRaised = 1,
    RelaxedLevel1 = 2,
    RelaxedLevel2 = 3,
    EAnimRelaxedState_MAX = 4
};

enum EAnimSyncGroupScope
{
    Local = 0,
    Component = 1,
    EAnimSyncGroupScope_MAX = 2
};

enum EAnimSyncMethod
{
    DoNotSync = 0,
    SyncGroup = 1,
    Graph = 2,
    EAnimSyncMethod_MAX = 3
};

enum EAnimationMode
{
    AnimationBlueprint = 0,
    AnimationSingleNode = 1,
    AnimationCustomMode = 2,
    EAnimationMode_MAX = 3
};

enum EAntiAliasingMethod
{
    AAM_None = 0,
    AAM_FXAA = 1,
    AAM_TemporalAA = 2,
    AAM_MSAA = 3,
    AAM_TSR = 4,
    AAM_MAX = 5
};

enum EAppMsgCategory
{
    Warning = 0,
    Error = 1,
    Success = 2,
    Info = 3,
    EAppMsgCategory_MAX = 4
};

enum EAppMsgType
{
    Ok = 0,
    YesNo = 1,
    OkCancel = 2,
    YesNoCancel = 3,
    CancelRetryContinue = 4,
    YesNoYesAllNoAll = 5,
    YesNoYesAllNoAllCancel = 6,
    YesNoYesAll = 7,
    EAppMsgType_MAX = 8
};

enum EAppReturnType
{
    No = 0,
    Yes = 1,
    YesAll = 2,
    NoAll = 3,
    Cancel = 4,
    Ok = 5,
    Retry = 6,
    Continue = 7,
    EAppReturnType_MAX = 8
};

enum EAppStore
{
    DebugStore = 0,
    EpicPurchasingService = 1,
    IOSAppStore = 2,
    WeGameStore = 3,
    GooglePlayAppStore = 4,
    KindleStore = 5,
    PlayStation4Store = 6,
    XboxLiveStore = 7,
    NintendoEShop = 8,
    SamsungGalaxyAppStore = 9,
    MicrosoftStore = 10,
    PlayStation5Store = 11,
    MAX = 12
};

enum EApplicationState
{
    Unknown = 0,
    Inactive = 1,
    Background = 2,
    Active = 3,
    EApplicationState_MAX = 4
};

enum EApplyTransformMode
{
    Override = 0,
    Additive = 1,
    Max = 2
};

enum EApprovalAction
{
    Approve = 0,
    Enqueue = 1,
    EnqueueAndStartBeacon = 2,
    Deny = 3,
    EApprovalAction_MAX = 4
};

enum EArchetype
{
    Asian = 0,
    Black = 1,
    Caucasian = 2,
    Hispanic = 3,
    Alien = 4,
    Other = 5,
    EArchetype_MAX = 6
};

enum EArithmeticKeyOperation
{
    Equal = 0,
    NotEqual = 1,
    Less = 2,
    LessOrEqual = 3,
    Greater = 4,
    GreaterOrEqual = 5,
    EArithmeticKeyOperation_MAX = 6
};

enum EArraySortOrder
{
    Ascending = 0,
    Descending = 1,
    EArraySortOrder_MAX = 2
};

enum EAshtonStoneStateType
{
    NotSpawned = 0,
    Spawned = 1,
    Captured = 2,
    MAX = 3
};

enum EAshtonStoneType
{
    Purple = 0,
    Blue = 1,
    Red = 2,
    Orange = 3,
    Green = 4,
    Yellow = 5,
    MAX = 6
};

enum EAshtonTeam
{
    Heroes = 0,
    Villains = 1,
    Invalid = 2,
    EAshtonTeam_MAX = 3
};

enum EAspectRatioAxisConstraint
{
    AspectRatio_MaintainYFOV = 0,
    AspectRatio_MaintainXFOV = 1,
    AspectRatio_MajorAxisFOV = 2,
    AspectRatio_MAX = 3
};

enum EAssetLoadHistoryState
{
    None = 0,
    Requested = 1,
    Cancelled = 2,
    Finished = 3,
    Removed = 4,
    EAssetLoadHistoryState_MAX = 5
};

enum EAssignmentCreationResult
{
    AssignmentNotFoundOrCreated = 0,
    AssignmentCreated = 1,
    AssignmentFound = 2,
    EAssignmentCreationResult_MAX = 3
};

enum EAssignmentType
{
    Invalid = 0,
    Encounter = 1,
    World = 2,
    Enemy = 3,
    NumAssignmentTypes = 4,
    EAssignmentType_MAX = 5
};

enum EAthenaAIServicePOIList
{
    MainBusDrop = 0,
    SecondaryBusDrop = 1,
    OnGround = 2,
    EAthenaAIServicePOIList_MAX = 3
};

enum EAthenaAITelemetryEventType
{
    Spawn = 0,
    Despawn = 1,
    EAthenaAITelemetryEventType_MAX = 2
};

enum EAthenaAITrackedZoneType
{
    Occluder = 0,
    Danger = 1,
    EAthenaAITrackedZoneType_MAX = 2
};

enum EAthenaAerialPhase
{
    None = 0,
    BusCantExit = 1,
    BusCanExit = 2,
    BusCanExitEndZebulonDrone = 3,
    Skydiving = 4,
    Parachuting = 5,
    Falling = 6,
    EAthenaAerialPhase_MAX = 7
};

enum EAthenaBroadcastKillFeedEntryType
{
    Elimination = 0,
    Storm = 1,
    FallDamage = 2,
    Explosion = 3,
    DBNO = 4,
    EAthenaBroadcastKillFeedEntryType_MAX = 5
};

enum EAthenaChallengeTimerState
{
    Hidden = 0,
    WeeksRemaining = 1,
    DaysRemaining = 2,
    HoursRemaining = 3,
    MinutesRemaining = 4,
    Urgent = 5,
    EAthenaChallengeTimerState_MAX = 6
};

enum EAthenaConfirmationResult
{
    Confirmed = 0,
    Declined = 1,
    Canceled = 2,
    Max_NONE = 3,
    EAthenaConfirmationResult_MAX = 4
};

enum EAthenaCustomizationCategory
{
    None = 0,
    Glider = 1,
    Pickaxe = 2,
    Backpack = 3,
    Character = 4,
    LoadingScreen = 5,
    Dance = 6,
    SkyDiveContrail = 7,
    MusicPack = 8,
    ItemWrap = 9,
    RegCosmeticDef = 10,
    Apparel = 11,
    SparksAura = 12,
    SparksGuitar = 13,
    SparksBass = 14,
    SparksKeyboard = 15,
    SparksMicrophone = 16,
    SparksDrums = 17,
    SparksSpotlightAnim = 18,
    SparksSong = 19,
    Loadout = 20,
    SaveLoadout = 21,
    MAX = 22
};

enum EAthenaEventMatchInfoSortMethod
{
    Eliminations = 0,
    Place = 1,
    Count = 2,
    EAthenaEventMatchInfoSortMethod_MAX = 3
};

enum EAthenaFilterDisplayType
{
    UseCategoryName = 0,
    ShowFilterString = 1,
    EAthenaFilterDisplayType_MAX = 2
};

enum EAthenaFogDensityOverride
{
    NoOverride = 0,
    Fog0 = 1,
    Fog1 = 2,
    Fog2 = 3,
    Fog3 = 4,
    Fog4 = 5,
    Fog5 = 6,
    Fog6 = 7,
    Fog7 = 8,
    Fog8 = 9,
    Fog9 = 10,
    Fog10 = 11,
    EAthenaFogDensityOverride_MAX = 12
};

enum EAthenaGameFeatureStatus
{
    InProgress = 0,
    ProgressPaused = 1,
    ErrorOccured = 2,
    EAthenaGameFeatureStatus_MAX = 3
};

enum EAthenaGameMessageDataFlags
{
    None = 0,
    DisableCreativeExclamation = 1,
    EAthenaGameMessageDataFlags_MAX = 2
};

enum EAthenaGameMsgType
{
    None = 0,
    DefaultIntro = 1,
    DefaultMessage = 2,
    DefaultCriticalMessage = 3,
    CommIntro = 4,
    CommMessage = 5,
    CommCriticalMessage = 6,
    CornerIntro = 7,
    CornerMessage = 8,
    CornerCriticalMessage = 9,
    RespawnTurningOffWarning = 10,
    RespawnOffWarning = 11,
    CenterMessage = 12,
    CenterImportantMessage = 13,
    CenterCriticalMessage = 14,
    EAthenaGameMsgType_MAX = 15
};

enum EAthenaGamePhase
{
    None = 0,
    Setup = 1,
    Warmup = 2,
    Aircraft = 3,
    SafeZones = 4,
    EndGame = 5,
    Count = 6,
    EAthenaGamePhase_MAX = 7
};

enum EAthenaGamePhaseStep
{
    None = 0,
    Setup = 1,
    Warmup = 2,
    GetReady = 3,
    BusLocked = 4,
    BusFlying = 5,
    StormForming = 6,
    StormHolding = 7,
    StormShrinking = 8,
    Countdown = 9,
    FinalCountdown = 10,
    EndGame = 11,
    Count = 12,
    EAthenaGamePhaseStep_MAX = 13
};

enum EAthenaInventorySpawnOverride
{
    NoOverride = 0,
    Always = 1,
    IntialSpawn = 2,
    AircraftPhaseOnly = 3,
    AfterWarmup = 4,
    EAthenaInventorySpawnOverride_MAX = 5
};

enum EAthenaLightIntensityOverride
{
    NoOverride = 0,
    Intensity0 = 1,
    Intensity1 = 2,
    Intensity2 = 3,
    Intensity3 = 4,
    Intensity4 = 5,
    Intensity5 = 6,
    Intensity6 = 7,
    Intensity7 = 8,
    Intensity8 = 9,
    Intensity9 = 10,
    Intensity10 = 11,
    EAthenaLightIntensityOverride_MAX = 12
};

enum EAthenaLockerInfoRestrictionWarning
{
    UnsatisfiedExclusiveItem = 0,
    LockedEmote = 1,
    CosmeticRestriction = 2,
    AllItemsAreArchived = 3,
    Unknown = 4,
    EAthenaLockerInfoRestrictionWarning_MAX = 5
};

enum EAthenaLootDropOverride
{
    NoOverride = 0,
    ForceDrop = 1,
    ForceKeep = 2,
    ForceDestroy = 3,
    ForceDropUnlessRespawning = 4,
    ForceDestroyUnlessRespawning = 5,
    DropUnlessTeamSelectionUpdated = 6,
    EAthenaLootDropOverride_MAX = 7
};

enum EAthenaMatchXpMultiplierSource
{
    Invalid = 0,
    BattlePassSelf = 1,
    BattlePassFriends = 2,
    CosmeticSet = 3,
    AntiAddictionPenalty = 4,
    BonusXpEvent = 5,
    MAX_COUNT = 6,
    EAthenaMatchXpMultiplierSource_MAX = 7
};

enum EAthenaMutatorEvaluators
{
    NoOverride = 0,
    ForceOverride = 1,
    Add = 2,
    Multiply = 3,
    EAthenaMutatorEvaluators_MAX = 4
};

enum EAthenaNewsEntryType
{
    Text = 0,
    Item = 1,
    Website = 2,
    NavigateToTab = 3,
    Challenge = 4,
    Setting = 5,
    SpatialScreen = 6,
    SmallNews = 7,
    NavigateToBattlePassSubPage = 8,
    Creative = 9,
    NavigateToSubscriptionSubPage = 10,
    ProgressiveItemLearnMore = 11,
    ProgressiveItemReminder = 12,
    ProgressiveItemClaimRewards = 13,
    Event = 14,
    Discovery = 15,
    NavigateToCompetitiveSubPage = 16,
    NavigateToSocialMenu = 17,
    NavigateToSocialTagsSubPage = 18,
    NavigateToRebootRallySubPage = 19,
    NavigateToMapSubPage = 20,
    NavigateToHabaneroSubPage = 21,
    Invalid = 22,
    EAthenaNewsEntryType_MAX = 23
};

enum EAthenaNewsStyle
{
    None = 0,
    SpecialEvent = 1,
    SpecialEvent2 = 2,
    EAthenaNewsStyle_MAX = 3
};

enum EAthenaPIEStartupMode
{
    UseDefaults = 0,
    Warmup = 1,
    WarmupPaused = 2,
    Aircraft = 3,
    AircraftPaused = 4,
    Gameplay = 5,
    EAthenaPIEStartupMode_MAX = 6
};

enum EAthenaPartyMemberReadyType
{
    Ready = 0,
    NotReady = 1,
    Playing = 2,
    Spectating = 3,
    WatchingReplay = 4,
    EAthenaPartyMemberReadyType_MAX = 5
};

enum EAthenaPathFollowingFocus
{
    TowardsNextPathPoint = 0,
    AlignWithSmoothedVelocity = 1,
    EAthenaPathFollowingFocus_MAX = 2
};

enum EAthenaPetAttachRule
{
    AttachToBackpack = 0,
    AttachToBody = 1,
    EAthenaPetAttachRule_MAX = 2
};

enum EAthenaPickerType
{
    EditMode = 0,
    Interact = 1,
    MAX = 2
};

enum EAthenaPinnedQuestType
{
    UserSelected = 0,
    ConciergeSuggested = 1,
    NoPinnedQuest = 2,
    EAthenaPinnedQuestType_MAX = 3
};

enum EAthenaPlayerActionAlert
{
    PlayerDown = 0,
    PlayerKill = 1,
    EnteredStorm = 2,
    NewZebulonDrone = 3,
    NewZebulonDroneYou = 4,
    EAthenaPlayerActionAlert_MAX = 5
};

enum EAthenaQuickChatFilteringType
{
    AlwaysVisible = 0,
    ActiveMaterial = 1,
    FacingPickup = 2,
    ActiveHotbarItem = 3,
    ActiveHotbarItemAmmo = 4,
    FacingPickupOrActiveHotbarItem = 5,
    NoWeaponEquippedRequiringAmmo = 6,
    WeaponEquippedOfAmmoType = 7,
    EAthenaQuickChatFilteringType_MAX = 8
};

enum EAthenaRebootEligiblityStatus
{
    None = 0,
    User = 1,
    Squad = 2,
    EAthenaRebootEligiblityStatus_MAX = 3
};

enum EAthenaRespawnLocation
{
    LastDeath = 0,
    CreativePlayerStart = 1,
    EAthenaRespawnLocation_MAX = 2
};

enum EAthenaRespawnType
{
    None = 0,
    InfiniteRespawn = 1,
    InfiniteRespawnExceptStorm = 2,
    EAthenaRespawnType_MAX = 3
};

enum EAthenaRewardItemType
{
    Normal = 0,
    HiddenReward = 1,
    GiftboxHiddenReward = 2,
    NonExportedFakeReward = 3,
    EAthenaRewardItemType_MAX = 4
};

enum EAthenaRewardVisualImportanceType
{
    Normal = 0,
    Hot = 1,
    CrazyHot = 2,
    Crazy = 3,
    EAthenaRewardVisualImportanceType_MAX = 4
};

enum EAthenaRoundsMutatorPhase
{
    GamePhase_Setup = 0,
    GamePhase_Warmup = 1,
    FadeOutToNextRound = 2,
    RoundSetup = 3,
    RoundPlay = 4,
    RoundEnd = 5,
    RoundEndUI = 6,
    MatchEndUI = 7,
    MatchEndedPrematurely = 8,
    EAthenaRoundsMutatorPhase_MAX = 9
};

enum EAthenaScoringEvent
{
    None = 0,
    Elimination = 1,
    ChestOpened = 2,
    AmmoCanOpened = 3,
    SupplyDropOpened = 4,
    SupplyLlamaOpened = 5,
    ForagedItemConsumed = 6,
    SurvivalInMinutes = 7,
    CollectedCoinBronze = 8,
    CollectedCoinSilver = 9,
    CollectedCoinGold = 10,
    AIKilled = 11,
    EAthenaScoringEvent_MAX = 12
};

enum EAthenaSeasonMapIconState
{
    Unknown = 0,
    Found = 1,
    Interacted = 2,
    EAthenaSeasonMapIconState_MAX = 3
};

enum EAthenaSeasonRewardTrack
{
    Invalid = 0,
    SeasonProgressionTrack = 1,
    CompendiumFreeTrack = 2,
    CompendiumPaidTrack = 3,
    CompendiumAdditionalTrack = 4,
    EAthenaSeasonRewardTrack_MAX = 5
};

enum EAthenaSpectatorNameplateDetailState
{
    High = 0,
    Low = 1,
    Arrow = 2,
    Off = 3,
    EAthenaSpectatorNameplateDetailState_MAX = 4
};

enum EAthenaSpectatorNameplateDistanceState
{
    Near = 0,
    MidDistance = 1,
    FurtherThanMaxDistance = 2,
    EAthenaSpectatorNameplateDistanceState_MAX = 3
};

enum EAthenaSquadListUpdateType
{
    None = 0,
    CanResurrect = 1,
    FindResurrectChip = 2,
    EAthenaSquadListUpdateType_MAX = 3
};

enum EAthenaStormCapState
{
    None = 0,
    Clear = 1,
    Warning = 2,
    Damaging = 3,
    EAthenaStormCapState_MAX = 4
};

enum EAthenaTODColor
{
    NoOverride = 0,
    Black = 1,
    White = 2,
    Red = 3,
    Green = 4,
    Blue = 5,
    Yellow = 6,
    Magenta = 7,
    Cyan = 8,
    EAthenaTODColor_MAX = 9
};

enum EAthenaTODPostProcessOverride
{
    NoOverride = 0,
    PostProcess0 = 1,
    PostProcess1 = 2,
    PostProcess2 = 3,
    PostProcess3 = 4,
    PostProcess4 = 5,
    PostProcess5 = 6,
    PostProcess6 = 7,
    PostProcess7 = 8,
    PostProcess8 = 9,
    PostProcess9 = 10,
    PostProcess10 = 11,
    PostProcess11 = 12,
    PostProcess12 = 13,
    PostProcess13 = 14,
    PostProcess14 = 15,
    PostProcess15 = 16,
    EAthenaTODPostProcessOverride_MAX = 17
};

enum EAthenaTimeOfDayOverride
{
    NoOverride = 0,
    ForceDay = 1,
    ForceNight = 2,
    Custom = 3,
    Hour0 = 4,
    Hour1 = 5,
    Hour2 = 6,
    Hour3 = 7,
    Hour4 = 8,
    Hour5 = 9,
    Hour6 = 10,
    Hour7 = 11,
    Hour8 = 12,
    Hour9 = 13,
    Hour10 = 14,
    Hour11 = 15,
    Hour12 = 16,
    Hour13 = 17,
    Hour14 = 18,
    Hour15 = 19,
    Hour16 = 20,
    Hour17 = 21,
    Hour18 = 22,
    Hour19 = 23,
    Hour20 = 24,
    Hour21 = 25,
    Hour22 = 26,
    Hour23 = 27,
    Random = 28,
    EAthenaTimeOfDayOverride_MAX = 29
};

enum EAthenaTravelEventType
{
    GroundMove = 0,
    AirMove = 1,
    BattleBusJump = 2,
    LaunchJump = 3,
    Landed = 4,
    OpenChest = 5,
    OpenAmmo = 6,
    GotAssist = 7,
    GotKnockdown = 8,
    GotKill = 9,
    PlayerDowned = 10,
    PlayerDied = 11,
    Won = 12,
    DealtDamage = 13,
    HealthChange = 14,
    GotItem = 15,
    DroppedItem = 16,
    ShieldChange = 17,
    WeaponExecuted = 18,
    EnteredVehicle = 19,
    ExitedVehicle = 20,
    TrapBuilt = 21,
    UsedItem = 22,
    ZoneUpdate = 23,
    PlacedBuilding = 24,
    EmoteUsed = 25,
    UpgradedBuilding = 26,
    EditedBuilding = 27,
    Count = 28,
    EAthenaTravelEventType_MAX = 29
};

enum EAthenaTravelLogPlayerType
{
    Self = 0,
    Ally = 1,
    Enemy = 2,
    Invalid = 3,
    EAthenaTravelLogPlayerType_MAX = 4
};

enum EAthenaWinCondition
{
    LastManStanding = 0,
    LastManStandingIncludingAllies = 1,
    TimedTeamFinalFight = 2,
    FirstToGoalScore = 3,
    TimedLastMenStanding = 4,
    MutatorControlled = 5,
    MutatorControlledGoalScore = 6,
    MutatorControlledChinaSupported = 7,
    EAthenaWinCondition_MAX = 8
};

enum EAtomCommonPartCategory
{
    None = 0,
    Knob = 1,
    Pin = 2,
    Tube = 3,
    EAtomCommonPartCategory_MAX = 4
};

enum EAtomCommonPartType
{
    None = 0,
    Dknob_01_C = 1,
    Dknob_01_D = 2,
    Dpin_01_C = 3,
    Dtube_01_C = 4,
    Dtube_02_C = 5,
    Dtube_03_C = 6,
    Dtube_04_C = 7,
    knob_01_C = 8,
    knob_01_D = 9,
    knob_01_P = 10,
    knob_01_PC = 11,
    knob_02_P = 12,
    knob_02_PC = 13,
    knob_03_P = 14,
    knob_03_PC = 15,
    knob_04_P = 16,
    knob_04_PC = 17,
    pin_01_C = 18,
    pin_01_D = 19,
    pin_02_C = 20,
    pin_02_D = 21,
    tube_01_D = 22,
    tube_02_D = 23,
    tube_03_D = 24,
    EAtomCommonPartType_MAX = 25
};

enum EAtomIssue
{
    None = 0,
    FailedToLoadModelFile = 1,
    UnsupportedLxFMLVersion = 2,
    UnsupportedLxFMLSticker = 3,
    MissingPrimitive = 4,
    MismatchedPrimitive = 5,
    UnsupportedPrimitive = 6,
    UnplacedPrimitive = 7,
    MissingPrimitiveSourceGeometry = 8,
    ExcludedByFilter = 9,
    UnsupportedCommonPart = 10,
    OldVersionPrimitive = 11,
    UnknownDecorationTexture = 12,
    UnknownDecorationSurface = 13,
    DuplicatedSelectionSet = 14,
    EmptySelectionSet = 15,
    EAtomIssue_MAX = 16
};

enum EAtomMaterialColorSource
{
    VertexColor = 0,
    InstanceCustomData = 1,
    Material = 2,
    LUTVertexColor = 3,
    LUTInstanceCustomData = 4,
    LUTMaterial = 5,
    EAtomMaterialColorSource_MAX = 6
};

enum EAtomMaterialType
{
    None = 0,
    Standard = 1,
    Transparent = 2,
    Glitter = 3,
    Opalescent = 4,
    Metallic = 5,
    EAtomMaterialType_MAX = 6
};

enum EAtomModelCommonPartOptimizationFlag
{
    None = 0,
    RemoveConnected = 1,
    RemoveKnobs = 2,
    RemoveTubes = 3,
    RemovePins = 4,
    All = 5,
    EAtomModelCommonPartOptimizationFlag_MAX = 6
};

enum EAtomModelInstanceType
{
    Components = 0,
    Actors = 1,
    HISM = 2,
    ComponentsWithVertexColor = 3,
    RenderStylesComponents = 4,
    EAtomModelInstanceType_MAX = 5
};

enum EAtomModelMergedMeshSelection
{
    AllMeshes = 0,
    OnlyOpaqueMeshes = 1,
    OnlyTransparentMeshes = 2,
    EAtomModelMergedMeshSelection_MAX = 3
};

enum EAtomModelPivotAnchor
{
    Original = 0,
    TopCenter = 1,
    Center = 2,
    BottomCenter = 3,
    EAtomModelPivotAnchor_MAX = 4
};

enum EAtomPlatform
{
    NA = 0,
    Duplo = 1,
    Atom = 2,
    Technic = 3,
    Clickits = 4,
    ActionFigures = 5,
    Outdoor = 6,
    SoftPrimitives = 7,
    ExtendedLine = 8,
    Scala = 9,
    Znap = 10,
    Toolo = 11,
    Storage = 12,
    MusicBuilder = 13,
    StoryBuilder = 14,
    Quatro = 15,
    Ccbs = 16,
    Primo1 = 17,
    AtomFoundation = 18,
    DieCutToStickers = 19,
    GeneralPlatform = 20,
    EAtomPlatform_MAX = 21
};

enum EAtomPrimitiveApproximationShapeType
{
    Auto = 0,
    OrientedBox = 1,
    ExtrudedConvexHull2D = 2,
    ConvexHull3D = 3,
    Extrusion = 4,
    EAtomPrimitiveApproximationShapeType_MAX = 5
};

enum EAtomPrimitiveApproximationShapeType_Old
{
    Auto = 0,
    OrientedBox = 1,
    ExtrudedConvexHull2D = 2,
    ConvexHull3D = 3,
    Extrusion = 4,
    EAtomPrimitiveApproximationShapeType_MAX = 5
};

enum EAtomPrimitiveCollisionVolumeType
{
    Box = 0,
    Sphere = 1,
    Capsule = 2,
    Cylinder = 3,
    Tube = 4,
    Crate = 5,
    EAtomPrimitiveCollisionVolumeType_MAX = 6
};

enum EAtomPrimitiveDetailTextureType
{
    None = 0,
    NormalMap = 1,
    AlphaMask = 2,
    EAtomPrimitiveDetailTextureType_MAX = 3
};

enum EAtomPrimitiveGeoOptimization
{
    Default = 0,
    UseForDetailOnly = 1,
    UseApproximationForLODs = 2,
    EAtomPrimitiveGeoOptimization_MAX = 3
};

enum EAtomPrimitiveGeoOptimization_Old
{
    Default = 0,
    UseForDetailOnly = 1,
    UseApproximationForLODs = 2,
    EAtomPrimitiveGeoOptimization_MAX = 3
};

enum EAtomPrimitiveImportWarningFlags
{
    None = 0,
    UnableToFindUnwrappedMeshUVSet = 1,
    BrokenPrincipalUVSet = 2,
    InvalidFBXFile = 3,
    InvalidMeshInFBXScene = 4,
    CommonPartMeshNotFound = 5,
    FullyTriangulated = 6,
    TransformedMeshes = 7,
    CommonPartRotationsInconsistent = 8,
    EAtomPrimitiveImportWarningFlags_MAX = 9
};

enum EAtomShaderType
{
    Unknown = 0,
    ShinyPlastic = 1,
    MattePlastic = 2,
    Rubber = 3,
    ShinySteel = 4,
    BrushedSteel = 5,
    MatteSteel = 6,
    Glitter = 7,
    Metallic = 8,
    Opalescence = 9,
    EAtomShaderType_MAX = 10
};

enum EAttachLocation
{
    KeepRelativeOffset = 0,
    KeepWorldPosition = 1,
    SnapToTarget = 2,
    SnapToTargetIncludingScale = 3,
    EAttachLocation_MAX = 4
};

enum EAttachmentRule
{
    KeepRelative = 0,
    KeepWorld = 1,
    SnapToTarget = 2,
    EAttachmentRule_MAX = 3
};

enum EAttenuationDistanceModel
{
    Linear = 0,
    Logarithmic = 1,
    Inverse = 2,
    LogReverse = 3,
    NaturalSound = 4,
    Custom = 5,
    EAttenuationDistanceModel_MAX = 6
};

enum EAttenuationShape
{
    Sphere = 0,
    Capsule = 1,
    Box = 2,
    Cone = 3,
    EAttenuationShape_MAX = 4
};

enum EAttractorParticleSelectionMethod
{
    EAPSM_Random = 0,
    EAPSM_Sequential = 1,
    EAPSM_MAX = 2
};

enum EAttributeBasedFloatCalculationType
{
    AttributeMagnitude = 0,
    AttributeBaseValue = 1,
    AttributeBonusMagnitude = 2,
    AttributeMagnitudeEvaluatedUpToChannel = 3,
    EAttributeBasedFloatCalculationType_MAX = 4
};

enum EAttributeBasedRootMotionMode
{
    ApplyDelta = 0,
    ApplyVelocity = 1,
    EAttributeBasedRootMotionMode_MAX = 2
};

enum EAttributeHandling
{
    HealthAmount = 0,
    HealthPercent = 1,
    ShieldAmount = 2,
    ShieldPercent = 3,
    OverShieldAmount = 4,
    OverShieldPercent = 5,
    EAttributeHandling_MAX = 6
};

enum EAttributeInitLevelSource
{
    WorldDifficulty = 0,
    PlayerBuildingSkill = 1,
    AthenaPlaylist = 2,
    EAttributeInitLevelSource_MAX = 3
};

enum EAudioAnalysisEnvelopeFollowerStereoBehavior
{
    Average = 0,
    Add = 1,
    Max = 2,
    Count = 3
};

enum EAudioAnalysisParameterType
{
    Scalar = 0,
    Vector4 = 1,
    Count = 2,
    EAudioAnalysisParameterType_MAX = 3
};

enum EAudioBusChannels
{
    Mono = 0,
    Stereo = 1,
    Quad = 2,
    FivePointOne = 3,
    SevenPointOne = 4,
    MaxChannelCount = 5,
    EAudioBusChannels_MAX = 6
};

enum EAudioColorGradient
{
    BlackToWhite = 0,
    WhiteToBlack = 1,
    EAudioColorGradient_MAX = 2
};

enum EAudioComponentPlayState
{
    Playing = 0,
    Stopped = 1,
    Paused = 2,
    FadingIn = 3,
    FadingOut = 4,
    Count = 5,
    EAudioComponentPlayState_MAX = 6
};

enum EAudioDeviceChangedRole
{
    Invalid = 0,
    Console = 1,
    Multimedia = 2,
    Communications = 3,
    Count = 4,
    EAudioDeviceChangedRole_MAX = 5
};

enum EAudioDeviceChangedState
{
    Invalid = 0,
    Active = 1,
    Disabled = 2,
    NotPresent = 3,
    Unplugged = 4,
    Count = 5,
    EAudioDeviceChangedState_MAX = 6
};

enum EAudioFaderCurve
{
    Linear = 0,
    Logarithmic = 1,
    SCurve = 2,
    Sin = 3,
    Count = 4,
    EAudioFaderCurve_MAX = 5
};

enum EAudioGameplayBehaviorPlayState
{
    Stopped = 0,
    Playing = 1,
    TickingWhileStopped = 2,
    EAudioGameplayBehaviorPlayState_MAX = 3
};

enum EAudioMaterialEnvelopeType
{
    AD = 0,
    ADSR = 1,
    EAudioMaterialEnvelopeType_MAX = 2
};

enum EAudioMixerChannelType
{
    FrontLeft = 0,
    FrontRight = 1,
    FrontCenter = 2,
    LowFrequency = 3,
    BackLeft = 4,
    BackRight = 5,
    FrontLeftOfCenter = 6,
    FrontRightOfCenter = 7,
    BackCenter = 8,
    SideLeft = 9,
    SideRight = 10,
    TopCenter = 11,
    TopFrontLeft = 12,
    TopFrontCenter = 13,
    TopFrontRight = 14,
    TopBackLeft = 15,
    TopBackCenter = 16,
    TopBackRight = 17,
    Unknown = 18,
    ChannelTypeCount = 19,
    DefaultChannel = 20,
    EAudioMixerChannelType_MAX = 21
};

enum EAudioMixerStreamDataFormatType
{
    Unknown = 0,
    Float = 1,
    Int16 = 2,
    Unsupported = 3,
    EAudioMixerStreamDataFormatType_MAX = 4
};

enum EAudioOscilloscopeTriggerMode
{
    None = 0,
    Rising = 1,
    Falling = 2,
    EAudioOscilloscopeTriggerMode_MAX = 3
};

enum EAudioOutputTarget
{
    Speaker = 0,
    Controller = 1,
    ControllerFallbackToSpeaker = 2,
    EAudioOutputTarget_MAX = 3
};

enum EAudioPanelLayoutType
{
    Basic = 0,
    Advanced = 1,
    EAudioPanelLayoutType_MAX = 2
};

enum EAudioParameterType
{
    None = 0,
    Boolean = 1,
    Integer = 2,
    Float = 3,
    String = 4,
    Object = 5,
    NoneArray = 6,
    BooleanArray = 7,
    IntegerArray = 8,
    FloatArray = 9,
    StringArray = 10,
    ObjectArray = 11,
    Trigger = 12,
    COUNT = 13,
    EAudioParameterType_MAX = 14
};

enum EAudioRadialSliderLayout
{
    Layout_LabelTop = 0,
    Layout_LabelCenter = 1,
    Layout_LabelBottom = 2,
    Layout_MAX = 3
};

enum EAudioRecordingExportType
{
    SoundWave = 0,
    WavFile = 1,
    EAudioRecordingExportType_MAX = 2
};

enum EAudioShapeComponentState
{
    Inactive = 0,
    Active = 1,
    Count = 2,
    EAudioShapeComponentState_MAX = 3
};

enum EAudioSpectrogramFrequencyAxisPixelBucketMode
{
    Sample = 0,
    Peak = 1,
    Average = 2,
    EAudioSpectrogramFrequencyAxisPixelBucketMode_MAX = 3
};

enum EAudioSpectrogramFrequencyAxisScale
{
    Linear = 0,
    Logarithmic = 1,
    EAudioSpectrogramFrequencyAxisScale_MAX = 2
};

enum EAudioSpectrumAnalyzerType
{
    FFT = 0,
    CQT = 1,
    EAudioSpectrumAnalyzerType_MAX = 2
};

enum EAudioSpectrumBandPresetType
{
    KickDrum = 0,
    SnareDrum = 1,
    Voice = 2,
    Cymbals = 3,
    EAudioSpectrumBandPresetType_MAX = 4
};

enum EAudioSpectrumPlotFrequencyAxisPixelBucketMode
{
    Sample = 0,
    Peak = 1,
    Average = 2,
    EAudioSpectrumPlotFrequencyAxisPixelBucketMode_MAX = 3
};

enum EAudioSpectrumPlotFrequencyAxisScale
{
    Linear = 0,
    Logarithmic = 1,
    EAudioSpectrumPlotFrequencyAxisScale_MAX = 2
};

enum EAudioSpectrumPlotTilt
{
    NoTilt = 0,
    Plus1_5dBPerOctave = 1,
    Plus3dBPerOctave = 2,
    Plus4_5dBPerOctave = 3,
    Plus6dBPerOctave = 4,
    EAudioSpectrumPlotTilt_MAX = 5
};

enum EAudioSpectrumType
{
    MagnitudeSpectrum = 0,
    PowerSpectrum = 1,
    Decibel = 2,
    EAudioSpectrumType_MAX = 3
};

enum EAudioUnitsValueType
{
    Linear = 0,
    Frequency = 1,
    Volume = 2,
    EAudioUnitsValueType_MAX = 3
};

enum EAudioVolumeLocationState
{
    InsideTheVolume = 0,
    OutsideTheVolume = 1,
    EAudioVolumeLocationState_MAX = 2
};

enum EAugmentExecResult
{
    Success = 0,
    Failure = 1,
    EAugmentExecResult_MAX = 2
};

enum EAugmentHoldInputRerollState
{
    Pressed = 0,
    Released = 1,
    EAugmentHoldInputRerollState_MAX = 2
};

enum EAugmentReRollType
{
    Any = 0,
    Free = 1,
    SpentBars = 2,
    EAugmentReRollType_MAX = 3
};

enum EAutoExposureMethod
{
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3
};

enum EAutoExposureMethodUI
{
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3
};

enum EAutoFrameMode
{
    Off = 0,
    ManualOverride = 1,
    AutoFrame = 2,
    EAutoFrameMode_MAX = 3
};

enum EAutoPossessAI
{
    Disabled = 0,
    PlacedInWorld = 1,
    Spawned = 2,
    PlacedInWorldOrSpawned = 3,
    EAutoPossessAI_MAX = 4
};

enum EAutoReceiveInput
{
    Disabled = 0,
    Player0 = 1,
    Player1 = 2,
    Player2 = 3,
    Player3 = 4,
    Player4 = 5,
    Player5 = 6,
    Player6 = 7,
    Player7 = 8,
    EAutoReceiveInput_MAX = 9
};

enum EAutoRenewState
{
    None = 0,
    AutoRenewEnabled = 1,
    AutoRenewDisabled = 2,
    NotAutoRenewable = 3,
    MAX = 4
};

enum EAutomationEventType
{
    Info = 0,
    Warning = 1,
    Error = 2,
    EAutomationEventType_MAX = 3
};

enum EAutoplayOptions
{
    None = 0,
    Create = 1,
    WaitingForPlayer = 2,
    Countdown = 3,
    Gameplay = 4,
    RoundEnd = 5,
    GameEnd = 6,
    EAutoplayOptions_MAX = 7
};

enum EAutorunActivationMode
{
    None = 0,
    DoubleTap = 1,
    LockZoneButton = 2,
    EAutorunActivationMode_MAX = 3
};

enum EAutorunLockZonePreferenceMobile
{
    Off = 0,
    Fixed = 1,
    Dynamic = 2,
    EAutorunLockZonePreferenceMobile_MAX = 3
};

enum EAuxIndicatorStates
{
    AIS_GuidingArrow = 0,
    AIS_ConfirmedArrow = 1,
    AIS_Inactive = 2,
    AIS_Active = 3,
    AIS_MAX = 4
};

enum EAvailableSquadSlotsListEntryState
{
    Detailed = 0,
    Simplified = 1,
    EAvailableSquadSlotsListEntryState_MAX = 2
};

enum EAxis
{
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    EAxis_MAX = 4
};

enum EAxisDirection
{
    Disabled = 0,
    Standard = 1,
    Inverted = 2,
    EAxisDirection_MAX = 3
};

enum EAxisDirectionTypeFlags
{
    None = 0,
    PositiveX = 1,
    NegativeX = 2,
    PositiveY = 3,
    NegativeY = 4,
    PositiveZ = 5,
    NegativeZ = 6,
    All = 7,
    EAxisDirectionTypeFlags_MAX = 8
};

enum EAxisList
{
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    Screen = 4,
    XY = 5,
    XZ = 6,
    YZ = 7,
    XYZ = 8,
    All = 9,
    ZRotation = 10,
    Rotate2D = 11,
    EAxisList_MAX = 12
};

enum EAxisOption
{
    X = 0,
    Y = 1,
    Z = 2,
    X_Neg = 3,
    Y_Neg = 4,
    Z_Neg = 5,
    Custom = 6,
    EAxisOption_MAX = 7
};

enum EAxisTravelBehavior
{
    RequireAny = 0,
    RequireAll = 1,
    RequireNone = 2,
    EAxisTravelBehavior_MAX = 3
};

enum EAxleDiameter
{
    Tiny = 0,
    Medium = 1,
    Large = 2,
    EAxleDiameter_MAX = 3
};

enum EBPStatus
{
    UnpurchasedBP = 0,
    PurchasedBP = 1,
    EBPStatus_MAX = 2
};

enum EBTBlackboardRestart
{
    ValueChange = 0,
    ResultChange = 1,
    EBTBlackboardRestart_MAX = 2
};

enum EBTChildIndex
{
    FirstNode = 0,
    TaskNode = 1,
    EBTChildIndex_MAX = 2
};

enum EBTDecoratorLogic
{
    Invalid = 0,
    Test = 1,
    And = 2,
    Or = 3,
    Not = 4,
    EBTDecoratorLogic_MAX = 5
};

enum EBTFlowAbortMode
{
    None = 0,
    LowerPriority = 1,
    Self = 2,
    Both = 3,
    EBTFlowAbortMode_MAX = 4
};

enum EBTNodeResult
{
    Succeeded = 0,
    Failed = 1,
    Aborted = 2,
    InProgress = 3,
    EBTNodeResult_MAX = 4
};

enum EBTParallelMode
{
    AbortBackground = 0,
    WaitForBackground = 1,
    EBTParallelMode_MAX = 2
};

enum EBTServiceSetAIFocusPriority
{
    Default = 0,
    Move = 1,
    Gameplay = 2,
    EBTServiceSetAIFocusPriority_MAX = 3
};

enum EBTSetBlackboardBoolExitActions
{
    Invert = 0,
    Revert = 1,
    Keep = 2,
    EBTSetBlackboardBoolExitActions_MAX = 3
};

enum EBacchusHUDStateType
{
    DoNothing = 0,
    Hide = 1,
    Show = 2,
    FallbackToDefault = 3,
    EBacchusHUDStateType_MAX = 4
};

enum EBacchusSignalQuality
{
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    EBacchusSignalQuality_MAX = 4
};

enum EBackgroundIntensityLevel
{
    None = 0,
    LowIntensity = 1,
    HighIntensity = 2,
    EBackgroundIntensityLevel_MAX = 3
};

enum EBackgroundSource
{
    CMS = 0,
    LobbyData = 1,
    URL = 2,
    EBackgroundSource_MAX = 3
};

enum EBackpackType
{
    Jetpack = 0,
    Medic = 1,
    StormTracker = 2,
    Glider = 3,
    EBackpackType_MAX = 4
};

enum EBackupSaveState
{
    Ready = 0,
    InProgress = 1,
    OnCooldown = 2,
    EBackupSaveState_MAX = 3
};

enum EBadMatchType
{
    None = 0,
    Ping = 1,
    PacketLoss = 2,
    NotMonitored = 3,
    EBadMatchType_MAX = 4
};

enum EBagelDifficulty
{
    Easy = 0,
    Medium = 1,
    Hard = 2,
    EBagelDifficulty_MAX = 3
};

enum EBagelPhase
{
    NotStarted = 0,
    Preparation = 1,
    Survival = 2,
    AfterMath = 3,
    Moving = 4,
    FinalPhase = 5,
    FinalPhaseFullStorm = 6,
    MAX = 7
};

enum EBagelScoreEvent
{
    FiendKill = 0,
    BruteKill = 1,
    RangedKill = 2,
    ExplodingKill = 3,
    ChillKill = 4,
    PoisonKill = 5,
    GoldKill = 6,
    RiftDestroyed = 7,
    ScoreMultiplierUsed = 8,
    HeadshotKill = 9,
    RespawnPenalty = 10,
    AmmoBoxOpened = 11,
    ChestOpened = 12,
    FinalBossKill = 13,
    MAX = 14
};

enum EBakeCurvatureClampMode
{
    None = 0,
    OnlyPositive = 1,
    OnlyNegative = 2,
    EBakeCurvatureClampMode_MAX = 3
};

enum EBakeCurvatureColorMode
{
    Grayscale = 0,
    RedBlue = 1,
    RedGreenBlue = 2,
    EBakeCurvatureColorMode_MAX = 3
};

enum EBakeCurvatureTypeMode
{
    MeanAverage = 0,
    Max = 1,
    Min = 2,
    Gaussian = 3
};

enum EBakeMapType
{
    None = 0,
    TangentSpaceNormal = 1,
    ObjectSpaceNormal = 2,
    FaceNormal = 3,
    BentNormal = 4,
    Position = 5,
    Curvature = 6,
    AmbientOcclusion = 7,
    Texture = 8,
    MultiTexture = 9,
    VertexColor = 10,
    MaterialID = 11,
    PolyGroupID = 12,
    One = 13,
    Zero = 14,
    All = 15,
    EBakeMapType_MAX = 16
};

enum EBakeNormalSpace
{
    Tangent = 0,
    Object = 1,
    EBakeNormalSpace_MAX = 2
};

enum EBakeScaleMethod
{
    BakeFullScale = 0,
    BakeNonuniformScale = 1,
    DoNotBakeScale = 2,
    EBakeScaleMethod_MAX = 3
};

enum EBakeTextureBitDepth
{
    ChannelBits8 = 0,
    ChannelBits16 = 1,
    EBakeTextureBitDepth_MAX = 2
};

enum EBakeTextureResolution
{
    Resolution16 = 0,
    Resolution32 = 1,
    Resolution64 = 2,
    Resolution128 = 3,
    Resolution256 = 4,
    Resolution512 = 5,
    Resolution1024 = 6,
    Resolution2048 = 7,
    Resolution4096 = 8,
    Resolution8192 = 9,
    EBakeTextureResolution_MAX = 10
};

enum EBakeTextureSamplesPerPixel
{
    Sample1 = 0,
    Sample4 = 1,
    Sample16 = 2,
    Sample64 = 3,
    Sample256 = 4,
    EBakeTextureSamplesPerPixel_MAX = 5
};

enum EBakeVertexChannel
{
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    RGBA = 4,
    EBakeVertexChannel_MAX = 5
};

enum EBakeVertexOutput
{
    RGBA = 0,
    PerChannel = 1,
    EBakeVertexOutput_MAX = 2
};

enum EBallisticShieldPlayerActionState
{
    Idling = 0,
    Blocking = 1,
    Charging = 2,
    EBallisticShieldPlayerActionState_MAX = 3
};

enum EBannerUsageContext
{
    Unknown = 0,
    BannerIcon = 1,
    PhysicalBanner = 2,
    Spray = 3,
    EBannerUsageContext_MAX = 4
};

enum EBarrierFlagState
{
    FlagUp = 0,
    FlagDown = 1,
    EBarrierFlagState_MAX = 2
};

enum EBarrierFoodTeam
{
    Burger = 0,
    Tomato = 1,
    MAX = 2
};

enum EBarrierObjectiveDamageState
{
    Health_75 = 0,
    Health_50 = 1,
    Health_25 = 2,
    Health_10 = 3,
    Health_5 = 4,
    Health_4 = 5,
    Health_3 = 6,
    Health_2 = 7,
    Health_1 = 8,
    MAX = 9
};

enum EBarrierState
{
    BarrierUp = 0,
    BarrierComingDown = 1,
    BarrierDown = 2,
    EBarrierState_MAX = 3
};

enum EBaseCreateFromSelectedTargetType
{
    NewObject = 0,
    FirstInputObject = 1,
    LastInputObject = 2,
    EBaseCreateFromSelectedTargetType_MAX = 3
};

enum EBaseMediaDelayAction
{
    Open = 0,
    Stop = 1,
    Start = 2,
    EBaseMediaDelayAction_MAX = 3
};

enum EBaseMediaPlayerState
{
    None = 0,
    Released = 1,
    Stopped = 2,
    Started = 3,
    Opened = 4,
    Playing = 5,
    Ended = 6,
    Error = 7,
    EBaseMediaPlayerState_MAX = 8
};

enum EBaseMediaTerminalErrorReason
{
    Unknown = 0,
    None = 1,
    ClosedError = 2,
    OpenTimeout = 3,
    OpenFailed = 4,
    Source = 5,
    UCP = 6,
    EBaseMediaTerminalErrorReason_MAX = 7
};

enum EBasicAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    NegX = 3,
    NegY = 4,
    NegZ = 5,
    EBasicAxis_MAX = 6
};

enum EBasicKeyOperation
{
    Set = 0,
    NotSet = 1,
    EBasicKeyOperation_MAX = 2
};

enum EBassMidiNoteEvent
{
    None = 0,
    FretPosition1 = 1,
    FretPosition2 = 2,
    FretPosition3 = 3,
    FretPosition4 = 4,
    FretPosition5 = 5,
    FretPosition6 = 6,
    FretPosition7 = 7,
    FretPosition8 = 8,
    FretPosition9 = 9,
    FretPosition10 = 10,
    FretPosition11 = 11,
    FretPosition12 = 12,
    FretPosition13 = 13,
    FretPosition14 = 14,
    FretPosition15 = 15,
    FretPosition16 = 16,
    FretPosition17 = 17,
    FretPosition18 = 18,
    FretPosition19 = 19,
    FretPosition20 = 20,
    StrumDown = 21,
    StrumUp = 22,
    ChordShape = 23,
    EBassMidiNoteEvent_MAX = 24
};

enum EBassMidiTextEvent
{
    None = 0,
    PlayingMellow = 1,
    PlayingStandard = 2,
    PlayingIntense = 3,
    IdleRhythmMellow = 4,
    IdleRhythmStandard = 5,
    IdleRhythmIntense = 6,
    IdleRealtime = 7,
    Pickup = 8,
    EBassMidiTextEvent_MAX = 9
};

enum EBattleLabAlertType
{
    QuestComplete = 0,
    QuestGranted = 1,
    Reward = 2,
    EBattleLabAlertType_MAX = 3
};

enum EBattleMapTimelineWidgetState
{
    None = 0,
    HasNext = 1,
    HasPrevious = 2,
    IsInReplay = 3,
    CanBeScrubbed = 4,
    IsStreaming = 5,
    Invalid = 6,
    EBattleMapTimelineWidgetState_MAX = 7
};

enum EBattlePassCrewContentState
{
    BattlePass = 0,
    Crew = 1,
    CrewSubscribed = 2,
    EBattlePassCrewContentState_MAX = 3
};

enum EBattlePassCurrencyType
{
    BattleStar = 0,
    CustomSkin = 1,
    TOTAL_CURRENCIES = 2,
    EBattlePassCurrencyType_MAX = 3
};

enum EBattlePassFeatures
{
    None = 0,
    BuyBattlePass = 1,
    GiftBattlePass = 2,
    BuySubscription = 3,
    ViewDetails = 4,
    WatchVideo = 5,
    ShowAbout = 6,
    PurchaseResources = 7,
    EBattlePassFeatures_MAX = 8
};

enum EBattlePassInputs
{
    Back = 0,
    ViewItem = 1,
    PreviewAction = 2,
    ReplayTrailer = 3,
    ShowAbout = 4,
    BulkBuyRewards = 5,
    PageComplete = 6,
    ShowAboutCustomization = 7,
    GiftBattlePass = 8,
    SwipeLeft = 9,
    SwipeRight = 10,
    RewardDetails = 11,
    COUNT = 12,
    EBattlePassInputs_MAX = 13
};

enum EBattlePassLandingPageSpecialEntryType
{
    None = 0,
    Subscription = 1,
    CharacterCustomizer = 2,
    SpecialCharacter = 3,
    Weekly = 4,
    COUNT = 5,
    EBattlePassLandingPageSpecialEntryType_MAX = 6
};

enum EBattlePassPurchaseButtonCurrencyType
{
    None = 0,
    Mtx = 1,
    RealMoney = 2,
    EBattlePassPurchaseButtonCurrencyType_MAX = 3
};

enum EBattlePassPurchaseButtonLayout
{
    Normal = 0,
    Bundle = 1,
    Normal_PaysForSelf = 2,
    EBattlePassPurchaseButtonLayout_MAX = 3
};

enum EBattlePassPurchaseScreenExperimentBucketType
{
    ShowBattlePassPurchaseScreen = 0,
    SkipBattlePassPurchaseScreen = 1,
    EBattlePassPurchaseScreenExperimentBucketType_MAX = 2
};

enum EBattlePassPurchaseState
{
    Purchase = 0,
    Confirm = 1,
    EBattlePassPurchaseState_MAX = 2
};

enum EBattlePassRewardPrerequisiteType
{
    RewardCount = 0,
    RequiredItems = 1,
    Quest = 2,
    NeededLevels = 3,
    NONE = 4,
    EBattlePassRewardPrerequisiteType_MAX = 5
};

enum EBattlePassRewardSource
{
    None = 0,
    ChallengeBundle = 1,
    Quest = 2,
    EBattlePassRewardSource_MAX = 3
};

enum EBattlePassStatusBarTypeS31
{
    Hidden = 0,
    Prerequisite = 1,
    Delayed = 2,
    Unclaimable = 3,
    Claimable = 4,
    Special = 5,
    Owned = 6,
    EBattlePassStatusBarTypeS31_MAX = 7
};

enum EBattlePassView
{
    None = 0,
    LandingPage = 1,
    RewardOverview = 2,
    ItemDetails = 3,
    BulkBuyRewards = 4,
    CharacterCustomizer = 5,
    BonusRewards = 6,
    Weekly = 7,
    Quests = 8,
    ItemDetailsSecondLayer = 9,
    EBattlePassView_MAX = 10
};

enum EBattleRoyaleBPAugmentLogVerbosity
{
    Log = 0,
    Verbose = 1,
    EBattleRoyaleBPAugmentLogVerbosity_MAX = 2
};

enum EBeaconConnectionState
{
    Invalid = 0,
    Closed = 1,
    Pending = 2,
    Open = 3,
    EBeaconConnectionState_MAX = 4
};

enum EBeam2Method
{
    PEB2M_Distance = 0,
    PEB2M_Target = 1,
    PEB2M_Branch = 2,
    PEB2M_MAX = 3
};

enum EBeamTaperMethod
{
    PEBTM_None = 0,
    PEBTM_Full = 1,
    PEBTM_Partial = 2,
    PEBTM_MAX = 3
};

enum EBeanAudioCategories
{
    NONE = 0,
    SFX = 1,
    VO = 2,
    EBeanAudioCategories_MAX = 3
};

enum EBeanAudioEventTypes
{
    NONE = 0,
    JumpStart = 1,
    Emote = 2,
    DiveStart = 3,
    EBeanAudioEventTypes_MAX = 4
};

enum EBeanCharActivateStateResult
{
    Undefined = 0,
    Success = 1,
    AlreadyActive = 2,
    FailedPriorityCheck = 3,
    Failed = 4,
    EBeanCharActivateStateResult_MAX = 5
};

enum EBeanCharJumpDiveButtonBehaviour
{
    Jump = 0,
    Dive = 1,
    EBeanCharJumpDiveButtonBehaviour_MAX = 2
};

enum EBeanCharKnockbackType
{
    Additive = 0,
    Impulse = 1,
    Absolute = 2,
    EBeanCharKnockbackType_MAX = 3
};

enum EBeanCharMantleFailedReason
{
    None = 0,
    CharacterIsGrounded = 1,
    InvalidState = 2,
    NoSpaceAboveWall = 3,
    WallTopTooSlanted = 4,
    CharacterTravelingTooFast = 5,
    CouldNotFindWallTop = 6,
    CouldNotFindWall = 7,
    WallAngleTooHigh = 8,
    CouldNotFindLedge = 9,
    LedgeInclineTooHigh = 10,
    NoSpaceToHang = 11,
    UnacceptedComponentMobility = 12,
    PlayerNotAlignedEnoughToWall = 13,
    EBeanCharMantleFailedReason_MAX = 14
};

enum EBeanCharRemoteRagdollSimMode
{
    Disabled = 0,
    PendingEnable = 1,
    Enabled = 2,
    KeepEnabled = 3,
    EBeanCharRemoteRagdollSimMode_MAX = 4
};

enum EBeanCharServerNetLocationToleranceType
{
    Minimum = 0,
    Jostling = 1,
    Grabbing = 2,
    BeingGrabbed = 3,
    COUNT = 4,
    EBeanCharServerNetLocationToleranceType_MAX = 5
};

enum EBeanCharStateID
{
    Null = 0,
    Grounded = 1,
    Jostle = 2,
    Emote = 3,
    Staggered = 4,
    Grab = 5,
    GrabStumble = 6,
    Falling = 7,
    Jump = 8,
    Dive = 9,
    Mantle = 10,
    Getup = 11,
    GetupRoll = 12,
    Roll = 13,
    SurfaceSwimming = 14,
    WaterJump = 15,
    Ragdoll = 16,
    Zipline = 17,
    Flying = 18,
    Count = 19,
    EBeanCharStateID_MAX = 20
};

enum EBeanCharStateLayerID
{
    Lower = 0,
    Upper = 1,
    Count = 2,
    EBeanCharStateLayerID_MAX = 3
};

enum EBeanCharStateLayerMask
{
    None = 0,
    Lower = 1,
    Upper = 2,
    All = 3,
    EBeanCharStateLayerMask_MAX = 4
};

enum EBeanCharTurn180State
{
    None = 0,
    Left = 1,
    Right = 2,
    EBeanCharTurn180State_MAX = 3
};

enum EBeanCharTurnSpeedOverrideType
{
    None = 0,
    Grabbing = 1,
    Diving = 2,
    GettingUp = 3,
    BeingGrabbed = 4,
    COUNT = 5,
    EBeanCharTurnSpeedOverrideType_MAX = 6
};

enum EBeanDebugForceCorrectionMode
{
    Disabled = 0,
    Enabled = 1,
    Once = 2,
    EBeanDebugForceCorrectionMode_MAX = 3
};

enum EBeanImpactAnimType
{
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    EBeanImpactAnimType_MAX = 4
};

enum EBeanParticleVfxTypes
{
    NONE = 0,
    JumpStart = 1,
    ImpactSmall = 2,
    ImpactMedium = 3,
    ImpactLarge = 4,
    DiveStart = 5,
    GrabStart = 6,
    GrabBreak = 7,
    EBeanParticleVfxTypes_MAX = 8
};

enum EBeanStateCorrectionReason
{
    NoCorrection = 0,
    ServerAheadClientReset = 1,
    ClientAheadServerDisagreed = 2,
    ClientAheadServerTookTooLong = 3,
    EBeanStateCorrectionReason_MAX = 4
};

enum EBeatMarkerType
{
    None = 0,
    OnBeat = 1,
    OnDownbeat = 2,
    EBeatMarkerType_MAX = 3
};

enum EBeatSyncAnimNodeLogging
{
    Enabled = 0,
    Disabled = 1,
    Default = 2,
    EBeatSyncAnimNodeLogging_MAX = 3
};

enum EBehaviorTreeBranches
{
    CanUseDiving = 0,
    CanUseGliding = 1,
    CanReactToProjectile = 2,
    CanReactToTraps = 3,
    CanAvoidDangerArea = 4,
    CanBeConverted = 5,
    CanPropagateAwareness = 6,
    CanUseThreatenedBehaviors = 7,
    CanUseLastKnownPositionBehavior = 8,
    CanUseAlertedBehavior = 9,
    CanUseSmartObjects = 10,
    CanReviveDBNOTeammates = 11,
    CanPlayEmote = 12,
    CanConverse = 13,
    CanPatrolOnPath = 14,
    CanPatrolAround = 15,
    CanTeleportWhenStuck = 16,
    CanEmoteWhenStuck = 17,
    CanUseZiplines = 18,
    CanMoveAway = 19,
    CanReturnToLeash = 20,
    Count = 21,
    EBehaviorTreeBranches_MAX = 22
};

enum EBehaviorTreeBranchesBitmask
{
    CanUseDiving = 0,
    CanUseGliding = 1,
    CanReactToProjectile = 2,
    CanReactToTraps = 3,
    CanAvoidDangerArea = 4,
    CanBeConverted = 5,
    CanPropagateAwareness = 6,
    CanUseThreatenedBehaviors = 7,
    CanUseLastKnownPositionBehavior = 8,
    CanUseAlertedBehavior = 9,
    CanUseSmartObjects = 10,
    CanReviveDBNOTeammates = 11,
    CanPlayEmote = 12,
    CanConverse = 13,
    CanPatrolOnPath = 14,
    CanPatrolAround = 15,
    CanTeleportWhenStuck = 16,
    CanEmoteWhenStuck = 17,
    CanUseZiplines = 18,
    CanMoveAway = 19,
    CanReturnToLeash = 20,
    Count = 21,
    EBehaviorTreeBranchesBitmask_MAX = 22
};

enum EBinaryToggleValues
{
    BTV_Active = 0,
    BTV_Inactive = 1,
    BTV_Either = 2,
    BTV_MAX = 3
};

enum EBindingKind
{
    Function = 0,
    Property = 1,
    EBindingKind_MAX = 2
};

enum EBiplaneSimEvent
{
    EngineStart = 0,
    EngineStop = 1,
    Takeoff = 2,
    Landing = 3,
    BoostBegin = 4,
    BoostEnd = 5,
    BoostChargeAboveThreshold = 6,
    AileronRoll = 7,
    ControlContextChange = 8,
    EBiplaneSimEvent_MAX = 9
};

enum EBiquadFilterType
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    Peaking = 3,
    LowShelf = 4,
    HighShelf = 5,
    Num = 6,
    None = 7,
    EBiquadFilterType_MAX = 8
};

enum EBlackBoardEntryComparison
{
    Equal = 0,
    NotEqual = 1,
    EBlackBoardEntryComparison_MAX = 2
};

enum EBlackboardUpdateType
{
    NoUpdate = 0,
    UpdateNow = 1,
    UpdateNextTick = 2,
    EBlackboardUpdateType_MAX = 3
};

enum EBlastBerryRespawnRewardType
{
    Downed = 0,
    Elimination = 1,
    TeamWipe = 2,
    EBlastBerryRespawnRewardType_MAX = 3
};

enum EBlendListTransitionType
{
    StandardBlend = 0,
    Inertialization = 1,
    EBlendListTransitionType_MAX = 2
};

enum EBlendMode
{
    BLEND_Opaque = 0,
    BLEND_Masked = 1,
    BLEND_Translucent = 2,
    BLEND_Additive = 3,
    BLEND_Modulate = 4,
    BLEND_AlphaComposite = 5,
    BLEND_AlphaHoldout = 6,
    BLEND_TranslucentColoredTransmittance = 7,
    BLEND_MAX = 8,
    BLEND_TranslucentGreyTransmittance = 9,
    BLEND_ColoredTransmittanceOnly = 10
};

enum EBlendProfileMode
{
    TimeFactor = 0,
    WeightFactor = 1,
    BlendMask = 2,
    EBlendProfileMode_MAX = 3
};

enum EBlendSpaceAxis
{
    BSA_None = 0,
    BSA_X = 1,
    BSA_Y = 2,
    BSA_MAX = 3
};

enum EBlendSpacePerBoneBlendMode
{
    ManualPerBoneOverride = 0,
    BlendProfile = 1,
    EBlendSpacePerBoneBlendMode_MAX = 2
};

enum EBlendState
{
    Out = 0,
    BlendingIn = 1,
    In = 2,
    BlendingOut = 3,
    EBlendState_MAX = 4
};

enum EBlendableLocation
{
    BL_SceneColorBeforeDOF = 0,
    BL_SceneColorAfterDOF = 1,
    BL_TranslucencyAfterDOF = 2,
    BL_SSRInput = 3,
    BL_SceneColorBeforeBloom = 4,
    BL_ReplacingTonemapper = 5,
    BL_SceneColorAfterTonemapping = 6,
    BL_MAX = 7,
    BL_BeforeTranslucency = 8,
    BL_BeforeTonemapping = 9,
    BL_AfterTonemapping = 10
};

enum EBlockedDirection
{
    Left = 0,
    Right = 1,
    Top = 2,
    Bottom = 3,
    EBlockedDirection_MAX = 4
};

enum EBloomMethod
{
    BM_SOG = 0,
    BM_FFT = 1,
    BM_MAX = 2
};

enum EBlueprintCompileMode
{
    Default = 0,
    Development = 1,
    FinalRelease = 2,
    EBlueprintCompileMode_MAX = 3
};

enum EBlueprintNativizationFlag
{
    Disabled = 0,
    Dependency = 1,
    ExplicitlyEnabled = 2,
    EBlueprintNativizationFlag_MAX = 3
};

enum EBlueprintPinStyleType
{
    BPST_Original = 0,
    BPST_VariantA = 1,
    BPST_MAX = 2
};

enum EBlueprintStatus
{
    BS_Unknown = 0,
    BS_Dirty = 1,
    BS_Error = 2,
    BS_UpToDate = 3,
    BS_BeingCreated = 4,
    BS_UpToDateWithWarnings = 5,
    BS_MAX = 6
};

enum EBlueprintType
{
    BPTYPE_Normal = 0,
    BPTYPE_Const = 1,
    BPTYPE_MacroLibrary = 2,
    BPTYPE_Interface = 3,
    BPTYPE_LevelScript = 4,
    BPTYPE_FunctionLibrary = 5,
    BPTYPE_MAX = 6
};

enum EBlueprintableSideEffectTriggerType
{
    TriggeredAsTarget = 0,
    TriggeredAsSource = 1,
    EBlueprintableSideEffectTriggerType_MAX = 2
};

enum EBodyCollisionResponse
{
    BodyCollision_Enabled = 0,
    BodyCollision_Disabled = 1,
    BodyCollision_MAX = 2
};

enum EBodyPartVisibilityGrouping
{
    AllParts = 0,
    AllButHead = 1,
    OnlyBackBling = 2,
    BackBlingAndCharm = 3,
    OnlyBody = 4,
    OnlyHead = 5,
    OnlyTail = 6,
    EBodyPartVisibilityGrouping_MAX = 7
};

enum EBoneAxis
{
    BA_X = 0,
    BA_Y = 1,
    BA_Z = 2,
    BA_MAX = 3
};

enum EBoneControlSpace
{
    BCS_WorldSpace = 0,
    BCS_ComponentSpace = 1,
    BCS_ParentBoneSpace = 2,
    BCS_BoneSpace = 3,
    BCS_MAX = 4
};

enum EBoneFilterActionOption
{
    Remove = 0,
    Keep = 1,
    Invalid = 2,
    EBoneFilterActionOption_MAX = 3
};

enum EBoneModificationMode
{
    BMM_Ignore = 0,
    BMM_Replace = 1,
    BMM_Additive = 2,
    BMM_MAX = 3
};

enum EBoneRotationSource
{
    BRS_KeepComponentSpaceRotation = 0,
    BRS_KeepLocalSpaceRotation = 1,
    BRS_CopyFromTarget = 2,
    BRS_MAX = 3
};

enum EBoneSpaces
{
    WorldSpace = 0,
    ComponentSpace = 1,
    EBoneSpaces_MAX = 2
};

enum EBoneTransformResolution
{
    KeepParent = 0,
    KeepChild = 1,
    Combine = 2,
    EBoneTransformResolution_MAX = 3
};

enum EBoneTranslationRetargetingMode
{
    Animation = 0,
    Skeleton = 1,
    AnimationScaled = 2,
    AnimationRelative = 3,
    OrientAndScale = 4,
    EBoneTranslationRetargetingMode_MAX = 5
};

enum EBoneVisibilityStatus
{
    BVS_HiddenByParent = 0,
    BVS_Visible = 1,
    BVS_ExplicitlyHidden = 2,
    BVS_MAX = 3
};

enum EBoolColumnCellValue
{
    MatchFalse = 0,
    MatchTrue = 1,
    MatchAny = 2,
    EBoolColumnCellValue_MAX = 3
};

enum EBotControllerClamberStatus
{
    Invalid = 0,
    MoveStarted = 1,
    MoveDone = 2,
    MoveFailed = 3,
    EBotControllerClamberStatus_MAX = 4
};

enum EBotMovementState
{
    None = 0,
    InProgress = 1,
    Failed_NoPathFound = 2,
    Failed_Aborted = 3,
    Failed_AgentOffNavmesh = 4,
    Failed_GoalOffNavmesh = 5,
    Failed_Blocked = 6,
    Failed_OffPath = 7,
    Failed_Falling = 8,
    Success = 9,
    Success_Partial = 10,
    Success_AlreadyAtGoal = 11,
    EBotMovementState_MAX = 12
};

enum EBotNamingMode
{
    RealName = 0,
    SkinName = 1,
    Anonymous = 2,
    Custom = 3,
    CharacterDataDisplayName = 4,
    CustomIncremental = 5,
    EBotNamingMode_MAX = 6
};

enum EBotPOIType
{
    Unknown = 0,
    ClusterLoot = 1,
    MidMatchObjective = 2,
    EBotPOIType_MAX = 3
};

enum EBotPOIUsageBitmask
{
    None = 0,
    BotJumpOffBus = 1,
    BotNavigation = 2,
    EBotPOIUsageBitmask_MAX = 3
};

enum EBounceCompressionState
{
    None = 0,
    Crouching = 1,
    Crouched = 2,
    Jumping = 3,
    Recoiling = 4,
    EBounceCompressionState_MAX = 5
};

enum EBoundingBoxSlotDirectionCalculation
{
    Auto = 0,
    FaceWall = 1,
    FaceAwayFromWall = 2,
    FaceCenter = 3,
    EBoundingBoxSlotDirectionCalculation_MAX = 4
};

enum EBracketNodeState
{
    LocalTeam = 0,
    EnemyTeam = 1,
    Neutral = 2,
    EBracketNodeState_MAX = 3
};

enum EBrelmarCameraShake
{
    Default = 0,
    Low = 1,
    Off = 2,
    EBrelmarCameraShake_MAX = 3
};

enum EBrushActionMode
{
    Paint = 0,
    FloodFill = 1,
    EBrushActionMode_MAX = 2
};

enum EBrushBlendType
{
    AlphaBlend = 0,
    Min = 1,
    Max = 2,
    Additive = 3
};

enum EBrushFalloffMode
{
    Angle = 0,
    Width = 1,
    EBrushFalloffMode_MAX = 2
};

enum EBrushToolSizeType
{
    Adaptive = 0,
    World = 1,
    EBrushToolSizeType_MAX = 2
};

enum EBrushType
{
    Brush_Default = 0,
    Brush_Add = 1,
    Brush_Subtract = 2,
    Brush_MAX = 3
};

enum EBudgetClassLimitsFor
{
    Creative = 0,
    Uefn = 1,
    EBudgetClassLimitsFor_MAX = 2
};

enum EBuildingActorComponentCreationPolicy
{
    Never = 0,
    Lazy = 1,
    Always = 2,
    EBuildingActorComponentCreationPolicy_MAX = 3
};

enum EBuildingAnim
{
    EBA_None = 0,
    EBA_Building = 1,
    EBA_Breaking = 2,
    EBA_Constructed = 3,
    EBA_Destruction = 4,
    EBA_Placement = 5,
    EBA_DynamicLOD = 6,
    EBA_DynamicShrink = 7,
    EBA_MAX = 8
};

enum EBuildingAsPropSetting
{
    None = 0,
    SnapToEdge = 1,
    SnapToCenter = 2,
    EBuildingAsPropSetting_MAX = 3
};

enum EBuildingAttachmentSide
{
    Front = 0,
    Back = 1,
    Any = 2,
    EBuildingAttachmentSide_MAX = 3
};

enum EBuildingAttachmentSlot
{
    SLOT_Floor = 0,
    SLOT_Wall = 1,
    SLOT_Ceiling = 2,
    SLOT_None = 3,
    SLOT_MAX = 4
};

enum EBuildingAttachmentType
{
    ATTACH_Floor = 0,
    ATTACH_Wall = 1,
    ATTACH_Ceiling = 2,
    ATTACH_Corner = 3,
    ATTACH_All = 4,
    ATTACH_WallThenFloor = 5,
    ATTACH_FloorAndStairs = 6,
    ATTACH_CeilingAndStairs = 7,
    ATTACH_StairsBothSides = 8,
    ATTACH_None = 9,
    ATTACH_MAX = 10
};

enum EBuildingDamageTeamFilter
{
    Default = 0,
    OwnerOnly = 1,
    TeamOnly = 2,
    EnemyOnly = 3,
    EnemyAndOwnerOnly = 4,
    None = 5,
    EBuildingDamageTeamFilter_MAX = 6
};

enum EBuildingFloorRailing
{
    None = 0,
    Balcony = 1,
    EBuildingFloorRailing_MAX = 2
};

enum EBuildingFocusType
{
    Contextual = 0,
    Interactable = 1,
    Normal = 2,
    Count = 3,
    EBuildingFocusType_MAX = 4
};

enum EBuildingFoundationType
{
    BFT_3x3 = 0,
    BFT_5x5 = 1,
    BFT_5x10 = 2,
    BFT_None = 3,
    BFT_MAX = 4
};

enum EBuildingGameplayActorAircraftSpawnSide
{
    None = 0,
    Side1 = 1,
    Side2 = 2,
    EBuildingGameplayActorAircraftSpawnSide_MAX = 3
};

enum EBuildingGameplayActorSentry_IdleBehavior
{
    Oscillates = 0,
    ContinuouslyTurnLeft = 1,
    ContinuouslyTurnRight = 2,
    EBuildingGameplayActorSentry_MAX = 3
};

enum EBuildingGameplayActorSentry_State
{
    PassiveIdle = 0,
    ActiveIdle = 1,
    Tracking = 2,
    Aggro = 3,
    Dormant = 4,
    Deactivated = 5,
    ReturningToIdle = 6,
    LocatingDamager = 7,
    EBuildingGameplayActorSentry_MAX = 8
};

enum EBuildingHighlightType
{
    Primary = 0,
    Interact = 1,
    WillBeDestroyed = 2,
    Quest = 3,
    AuxiliaryInterestPoint = 4,
    MAX_None = 5,
    EBuildingHighlightType_MAX = 6
};

enum EBuildingMode
{
    None = 0,
    BuildingsOnly = 1,
    TrapsOnly = 2,
    All = 3,
    EBuildingMode_MAX = 4
};

enum EBuildingNavObstacleType
{
    UnwalkableAll = 0,
    UnwalkableHuskOnly = 1,
    SmashWhenLowHeight = 2,
    SmashOnlyLowHeight = 3,
    SmashSmasherOnly = 4,
    SmashAll = 5,
    EBuildingNavObstacleType_MAX = 6
};

enum EBuildingReplacementType
{
    BRT_None = 0,
    BRT_Edited = 1,
    BRT_Upgrade = 2,
    BRT_MAX = 3
};

enum EBuildingStairsRailing
{
    None = 0,
    Partial = 1,
    Full = 2,
    EBuildingStairsRailing_MAX = 3
};

enum EBuildingTickReason
{
    Dynamic = 0,
    Damaged = 1,
    GameplayCue_Damage = 2,
    GameplayCue_Healing = 3,
    GameplayCue_InstantDeath = 4,
    UnderConstruction = 5,
    UnderRepair = 6,
    Editing = 7,
    BuildingAnimation = 8,
    DynamicLODAnim = 9,
    DynamicShrinkAnim = 10,
    AutoBuild = 11,
    FullHealthEffect = 12,
    BounceAnimation = 13,
    DoorOpenStyleChanged = 14,
    DoorOpenChanged = 15,
    DoorInteract = 16,
    CinematicCamera = 17,
    Blueprint = 18,
    EBuildingTickReason_MAX = 19
};

enum EBuildingTintSource
{
    Disabled = 0,
    Custom = 1,
    Table = 2,
    EBuildingTintSource_MAX = 3
};

enum EBuildingWallArea
{
    Regular = 0,
    Flat = 1,
    Special = 2,
    EBuildingWallArea_MAX = 3
};

enum EBundleStyleColor
{
    Primary = 0,
    Secondary = 1,
    Accent = 2,
    EBundleStyleColor_MAX = 3
};

enum EBuoyancyEvent
{
    EnteredWaterBody = 0,
    ExitedWaterBody = 1,
    EBuoyancyEvent_MAX = 2
};

enum EBuoyancyEventFlags
{
    None = 0,
    Begin = 1,
    Continue = 2,
    End = 3,
    EBuoyancyEventFlags_MAX = 4
};

enum EButtonAction
{
    NextTile = 0,
    PreviousTile = 1,
    Close = 2,
    ActionButton = 3,
    Unknown = 4,
    EButtonAction_MAX = 5
};

enum EButtonClickMethod
{
    DownAndUp = 0,
    MouseDown = 1,
    MouseUp = 2,
    PreciseClick = 3,
    EButtonClickMethod_MAX = 4
};

enum EButtonContext
{
    NoButtonSelected = 0,
    ButtonSelected = 1,
    StylingButtons = 2,
    EButtonContext_MAX = 3
};

enum EButtonPressMethod
{
    DownAndUp = 0,
    ButtonPress = 1,
    ButtonRelease = 2,
    EButtonPressMethod_MAX = 3
};

enum EButtonTouchMethod
{
    DownAndUp = 0,
    Down = 1,
    PreciseTap = 2,
    EButtonTouchMethod_MAX = 3
};

enum ECOResourceDataType
{
    None = 0,
    AssetUserData = 1,
    ECOResourceDataType_MAX = 2
};

enum ECRSimConstraintType
{
    Distance = 0,
    DistanceFromA = 1,
    DistanceFromB = 2,
    Plane = 3,
    ECRSimConstraintType_MAX = 4
};

enum ECRSimPointForceType
{
    Direction = 0,
    ECRSimPointForceType_MAX = 1
};

enum ECRSimSoftCollisionType
{
    Plane = 0,
    Sphere = 1,
    Cone = 2,
    ECRSimSoftCollisionType_MAX = 3
};

enum ECSGOperation
{
    DifferenceAB = 0,
    DifferenceBA = 1,
    Intersect = 2,
    Union = 3,
    ECSGOperation_MAX = 4
};

enum ECabinEmailViewState
{
    Initial = 0,
    Sending = 1,
    Sent = 2,
    SendFailed = 3,
    ECabinEmailViewState_MAX = 4
};

enum ECacheMode
{
    None = 0,
    Play = 1,
    Record = 2,
    ECacheMode_MAX = 3
};

enum ECalendarDrivenState
{
    ForceEnable = 0,
    ForceDisable = 1,
    ECalendarDrivenState_MAX = 2
};

enum ECalibratedMusicTimebase
{
    AudioRenderTime = 0,
    ExperiencedTime = 1,
    VideoRenderTime = 2,
    RawAudioRenderTime = 3,
    ECalibratedMusicTimebase_MAX = 4
};

enum ECalibrationState
{
    TooFewSamples = 0,
    InputTooErratic = 1,
    TightResult = 2,
    LooseResult = 3,
    ECalibrationState_MAX = 4
};

enum ECalloutNavigationDirection
{
    Previous = 0,
    Next = 1,
    ECalloutNavigationDirection_MAX = 2
};

enum ECameraAlphaBlendMode
{
    CABM_Linear = 0,
    CABM_Cubic = 1,
    CABM_MAX = 2
};

enum ECameraAnimationEasingType
{
    Linear = 0,
    Sinusoidal = 1,
    Quadratic = 2,
    Cubic = 3,
    Quartic = 4,
    Quintic = 5,
    Exponential = 6,
    Circular = 7,
    ECameraAnimationEasingType_MAX = 8
};

enum ECameraAnimationPlaySpace
{
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
    ECameraAnimationPlaySpace_MAX = 3
};

enum ECameraBuildStatus
{
    Clean = 0,
    CleanWithWarnings = 1,
    WithErrors = 2,
    Dirty = 3,
    ECameraBuildStatus_MAX = 4
};

enum ECameraFocusMethod
{
    DoNotOverride = 0,
    Manual = 1,
    Tracking = 2,
    Disable = 3,
    MAX = 4
};

enum ECameraNodeSpace
{
    CameraPose = 0,
    Context = 1,
    World = 2,
    ECameraNodeSpace_MAX = 3
};

enum ECameraOrigin
{
    ViewTargetTransform = 0,
    BoneTransform = 1,
    ECameraOrigin_MAX = 2
};

enum ECameraProjectionMode
{
    Perspective = 0,
    Orthographic = 1,
    ECameraProjectionMode_MAX = 2
};

enum ECameraResetAxes
{
    Pitch = 0,
    Yaw = 1,
    Both = 2,
    ECameraResetAxes_MAX = 3
};

enum ECameraRigLayer
{
    Base = 0,
    Main = 1,
    Global = 2,
    Visual = 3,
    User0 = 4,
    User1 = 5,
    User2 = 6,
    ECameraRigLayer_MAX = 7
};

enum ECameraShakeAttenuation
{
    Linear = 0,
    Quadratic = 1,
    ECameraShakeAttenuation_MAX = 2
};

enum ECameraShakeDurationType
{
    Fixed = 0,
    Infinite = 1,
    Custom = 2,
    ECameraShakeDurationType_MAX = 3
};

enum ECameraShakePatternUpdateResultFlags
{
    ApplyAsAbsolute = 0,
    SkipAutoScale = 1,
    SkipAutoPlaySpace = 2,
    Default = 3,
    ECameraShakePatternUpdateResultFlags_MAX = 4
};

enum ECameraShakePlaySpace
{
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
    ECameraShakePlaySpace_MAX = 3
};

enum ECameraShotNotificationTypes
{
    Notification = 0,
    HighlightAnnotation = 1,
    TitleScreen = 2,
    ECameraShotNotificationTypes_MAX = 3
};

enum ECameraSpaceHoldPosition
{
    AsPickup = 0,
    Left = 1,
    Center = 2,
    Right = 3,
    ECameraSpaceHoldPosition_MAX = 4
};

enum ECameraStateRestoreReason
{
    Unknown = 0,
    ChangedFollowTarget = 1,
    ChangedCameraType = 2,
    InvokedHotKey = 3,
    Scrubbed = 4,
    Restored = 5,
    SpecialAction = 6,
    MAX = 7
};

enum ECameraVariableType
{
    Boolean = 0,
    Integer32 = 1,
    Float = 2,
    Double = 3,
    Vector2f = 4,
    Vector2d = 5,
    Vector3f = 6,
    Vector3d = 7,
    Vector4f = 8,
    Vector4d = 9,
    Rotator3f = 10,
    Rotator3d = 11,
    Transform3f = 12,
    Transform3d = 13,
    ECameraVariableType_MAX = 14
};

enum ECampRemovalStatus
{
    NotRemoved = 0,
    SoftRemoved = 1,
    HardRemoved = 2,
    ECampRemovalStatus_MAX = 3
};

enum ECampaignCustomizationCategory
{
    None = 0,
    PersonalVehicle = 1,
    ECampaignCustomizationCategory_MAX = 2
};

enum ECanBeCharacterBase
{
    ECB_No = 0,
    ECB_Yes = 1,
    ECB_Owner = 2,
    ECB_MAX = 3
};

enum ECanCreateConnectionResponse
{
    CONNECT_RESPONSE_MAKE = 0,
    CONNECT_RESPONSE_DISALLOW = 1,
    CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
    CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
    CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
    CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
    CONNECT_RESPONSE_MAX = 7
};

enum ECanSlideMutatorType
{
    Unset = 0,
    Yes = 1,
    No = 2,
    ECanSlideMutatorType_MAX = 3
};

enum ECancelMarkerReason
{
    Ping = 0,
    MapOrDeath = 1,
    ECancelMarkerReason_MAX = 2
};

enum ECannotBuyReason
{
    CannotAfford = 0,
    OutOfStock = 1,
    ECannotBuyReason_MAX = 2
};

enum ECannotMeleeAttackReason
{
    None = 0,
    CooldownActive = 1,
    Other = 2,
    AttackDestinationNotValid = 3,
    TargetOutsideLeash = 4,
    ECannotMeleeAttackReason_MAX = 5
};

enum ECaptureAreaItemFilters
{
    None = 0,
    Both = 1,
    ForPeriodicScoring = 2,
    ToTakeControl = 3,
    ECaptureAreaItemFilters_MAX = 4
};

enum ECapturePointState
{
    Idle = 0,
    Capturing = 1,
    Contested = 2,
    Resetting = 3,
    Captured = 4,
    Reset = 5,
    ECapturePointState_MAX = 6
};

enum ECapturePointUnlockRules
{
    Reset = 0,
    MaintainState = 1,
    ResetDeactivate = 2,
    ECapturePointUnlockRules_MAX = 3
};

enum ECaptureState
{
    Neutral = 0,
    Capturing = 1,
    Contested = 2,
    Disabled = 3,
    Decapturing = 4,
    Neutralizing = 5,
    Deneutralizing = 6,
    Captured = 7,
    ECaptureState_MAX = 8
};

enum ECardPackPurchaseError
{
    PendingServerConfirmation = 0,
    CannotAffordItem = 1,
    NoneLeft = 2,
    PurchaseAlreadyPending = 3,
    NoConnection = 4,
    ECardPackPurchaseError_MAX = 5
};

enum ECardinalPoint
{
    E = 0,
    NE = 1,
    N = 2,
    NW = 3,
    W = 4,
    SW = 5,
    S = 6,
    SE = 7,
    None = 8,
    ECardinalPoint_MAX = 9
};

enum ECastRayTracedShadow
{
    Disabled = 0,
    UseProjectSetting = 1,
    Enabled = 2,
    ECastRayTracedShadow_MAX = 3
};

enum ECatalogOfferType
{
    StaticPrice = 0,
    DynamicBundle = 1,
    ECatalogOfferType_MAX = 2
};

enum ECatalogRequirementType
{
    RequireFulfillment = 0,
    DenyOnFulfillment = 1,
    RequireItemOwnership = 2,
    DenyOnItemOwnership = 3,
    ECatalogRequirementType_MAX = 4
};

enum ECatalogSaleType
{
    NotOnSale = 0,
    UndecoratedNewPrice = 1,
    AmountOff = 2,
    PercentOff = 3,
    PercentOn = 4,
    Strikethrough = 5,
    MAX = 6
};

enum ECaveMeshNetworkLevelSequenceStatus
{
    DefaultNotReplicated = 0,
    SequenceStopped = 1,
    SequenceStarted = 2,
    ECaveMeshNetworkLevelSequenceStatus_MAX = 3
};

enum ECaveMeshNetworkPlayStatus
{
    DefaultNotReplicated = 0,
    VideoPlaybackStopped = 1,
    VideoPlaybackActive = 2,
    ECaveMeshNetworkPlayStatus_MAX = 3
};

enum ECenterPopupMessageStateEnum
{
    NotVisible = 0,
    WaitingForOutpostOwner = 1,
    ECenterPopupMessageStateEnum_MAX = 2
};

enum EChallengeBundleQuestExpireType
{
    WithSchedule = 0,
    DaysFromEventStart = 1,
    EChallengeBundleQuestExpireType_MAX = 2
};

enum EChallengeBundleQuestUnlockType
{
    Manually = 0,
    GrantWithBundle = 1,
    RequiresBattlePass = 2,
    DaysFromEventStart = 3,
    ChallengesCompletedToUnlock = 4,
    BundleLevelup = 5,
    EChallengeBundleQuestUnlockType_MAX = 6
};

enum EChallengeListEntryType
{
    ProductCompatibility = 0,
    GoalCard = 1,
    Header = 2,
    Normal = 3,
    PartyUp = 4,
    LockedQuest = 5,
    AllQuestsComplete = 6,
    CustomMessage = 7,
    GiftCard = 8,
    Count = 9,
    EChallengeListEntryType_MAX = 10
};

enum EChallengeScheduleUnlockType
{
    Manually = 0,
    OnScheduleGranted = 1,
    DaysSinceEventStart = 2,
    EChallengeScheduleUnlockType_MAX = 3
};

enum EChangeInStructDetected
{
    Dirty = 0,
    Clean = 1,
    EChangeInStructDetected_MAX = 2
};

enum EChannelMaskParameterColor
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EChannelMaskParameterColor_MAX = 4
};

enum EChannelSpeakerStyle
{
    InGame = 0,
    InLobby = 1,
    OutOfClient = 2,
    Max = 3
};

enum EChaosBreakingSortMethod
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
    EChaosBreakingSortMethod_MAX = 5
};

enum EChaosBufferMode
{
    Double = 0,
    Triple = 1,
    Num = 2,
    Invalid = 3,
    EChaosBufferMode_MAX = 4
};

enum EChaosClothTetherMode
{
    FastTetherFastLength = 0,
    AccurateTetherFastLength = 1,
    AccurateTetherAccurateLength = 2,
    MaxChaosClothTetherMode = 3,
    EChaosClothTetherMode_MAX = 4
};

enum EChaosCollisionSortMethod
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByHighestImpulse = 3,
    SortByNearestFirst = 4,
    Count = 5,
    EChaosCollisionSortMethod_MAX = 6
};

enum EChaosEventSize
{
    Single = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    Default = 4,
    EChaosEventSize_MAX = 5
};

enum EChaosRemovalSortMethod
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByNearestFirst = 2,
    Count = 3,
    EChaosRemovalSortMethod_MAX = 4
};

enum EChaosSolverTickMode
{
    Fixed = 0,
    Variable = 1,
    VariableCapped = 2,
    VariableCappedWithTarget = 3,
    EChaosSolverTickMode_MAX = 4
};

enum EChaosThreadingMode
{
    DedicatedThread = 0,
    TaskGraph = 1,
    SingleThread = 2,
    Num = 3,
    Invalid = 4,
    EChaosThreadingMode_MAX = 5
};

enum EChaosTrailingSortMethod
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
    EChaosTrailingSortMethod_MAX = 5
};

enum EChaosWeightMapTarget
{
    None = 0,
    MaxDistance = 1,
    BackstopDistance = 2,
    BackstopRadius = 3,
    AnimDriveStiffness = 4,
    AnimDriveDamping = 5,
    TetherStiffness = 6,
    TetherScale = 7,
    Drag = 8,
    Lift = 9,
    EdgeStiffness = 10,
    BendingStiffness = 11,
    AreaStiffness = 12,
    BucklingStiffness = 13,
    Pressure = 14,
    EChaosWeightMapTarget_MAX = 15
};

enum ECharacterColorSwatchType
{
    ECharacterColorSwatchType_Skin = 0,
    ECharacterColorSwatchType_Hair = 1,
    ECharacterColorSwatchType_NumTypes = 2,
    ECharacterColorSwatchType_MAX = 3
};

enum ECharacterEncounterType
{
    Converstation = 0,
    Attack = 1,
    Count = 2,
    ECharacterEncounterType_MAX = 3
};

enum ECharacterLook
{
    FortniteCharacter = 0,
    CharacterBlueprint = 1,
    ECharacterLook_MAX = 2
};

enum ECharacterPartAttachmentTargetType
{
    RootComponent = 0,
    SkeletalMeshForAssociatedPlayerPawnPartType = 1,
    ECharacterPartAttachmentTargetType_MAX = 2
};

enum EChatMessageOrigin
{
    Local = 0,
    Remote = 1,
    System = 2,
    Unknown = 3,
    EChatMessageOrigin_MAX = 4
};

enum EChatRoomJoinHelperState
{
    Ready = 0,
    AttemptingJoin = 1,
    Joined = 2,
    AttemptingLeave = 3,
    EChatRoomJoinHelperState_MAX = 4
};

enum ECheatBotTargetingCategory
{
    Player = 0,
    NPC = 1,
    Other = 2,
    COUNT = 3,
    ECheatBotTargetingCategory_MAX = 4
};

enum ECheckBoxState
{
    Unchecked = 0,
    Checked = 1,
    Undetermined = 2,
    ECheckBoxState_MAX = 3
};

enum ECheckoutType
{
    None = 0,
    ReceiptRequested = 1,
    Receiptless = 2,
    MAX = 3
};

enum ECheckpointToSendClientLogs
{
    None = 0,
    Login = 1,
    RMTPurchase = 2,
    MAX = 3
};

enum EChooserEvaluationFrequency
{
    OnInitialUpdate = 0,
    OnBecomeRelevant = 1,
    OnLoop = 2,
    OnUpdate = 3,
    EChooserEvaluationFrequency_MAX = 4
};

enum EChunkSeekTableMode
{
    ConstantSamplesPerEntry = 0,
    VariableSamplesPerEntry = 1,
    EChunkSeekTableMode_MAX = 2
};

enum EChuteActions
{
    None = 0,
    WantsToOpen = 1,
    WantsToClose = 2,
    EChuteActions_MAX = 3
};

enum ECilantroIdleTime
{
    Minutes_1 = 0,
    Minutes_5 = 1,
    Minutes_10 = 2,
    Minutes_15 = 3,
    Minutes_30 = 4,
    Minutes_60 = 5,
    Minutes_MAX = 6
};

enum ECinematicSequenceEnabledOnPhase
{
    Always = 0,
    PreGameOnly = 1,
    GameplayOnly = 2,
    CreateOnly = 3,
    ECinematicSequenceEnabledOnPhase_MAX = 4
};

enum ECinematicSequenceVisibility
{
    InstigatorOnly = 0,
    InstigatingTeam = 1,
    Everyone = 2,
    ECinematicSequenceVisibility_MAX = 3
};

enum EClamberingActivationMode
{
    ClientPreference = 0,
    ForceAutoClambering = 1,
    ForceManualClambering = 2,
    EClamberingActivationMode_MAX = 3
};

enum EClamberingDebugTextAlign
{
    Left = 0,
    Right = 1,
    Center = 2,
    EClamberingDebugTextAlign_MAX = 3
};

enum EClamberingFailedReason
{
    None = 0,
    Unknown = 1,
    DebugForced = 2,
    OwnerDied = 3,
    OwnerDBNO = 4,
    OwnerLaunched = 5,
    SynchedActionNotStarted = 6,
    OwnerTeleported = 7,
    Ledge_PlayerTooFar = 8,
    Ledge_TargetLocationInvalid = 9,
    Ledge_TargetActorInvalid = 10,
    Ledge_TargetActorDestroyed = 11,
    Ledge_BlockerEncountered = 12,
    EClamberingFailedReason_MAX = 13
};

enum EClamberingState
{
    Inactive = 0,
    Targeting = 1,
    Ledge_Moving = 2,
    Ledge_Failed = 3,
    Window_Moving = 4,
    Window_Failed = 5,
    EClamberingState_MAX = 6
};

enum EClamberingType
{
    Invalid = 0,
    Ledge = 1,
    Window = 2,
    EClamberingType_MAX = 3
};

enum EClampMode
{
    CMODE_Clamp = 0,
    CMODE_ClampMin = 1,
    CMODE_ClampMax = 2,
    CMODE_MAX = 3
};

enum EClampToScreenDirection
{
    Left = 0,
    Top = 1,
    Right = 2,
    Bottom = 3,
    None = 4,
    EClampToScreenDirection_MAX = 5
};

enum EClampType
{
    Minimum = 0,
    Maximum = 1,
    EClampType_MAX = 2
};

enum EClassRepNodeMapping
{
    NotRouted = 0,
    RelevantAllConnections = 1,
    RelevantAllInsideFortVolume = 2,
    Custom = 3,
    Spatialize_Static = 4,
    Spatialize_Dynamic = 5,
    Spatialize_Dormancy = 6,
    Instance_Dynamic = 7,
    EClassRepNodeMapping_MAX = 8
};

enum EClassSelectorDisplayMode
{
    ClassesOnly = 0,
    TeamsOnly = 1,
    TeamsAndClasses = 2,
    EClassSelectorDisplayMode_MAX = 3
};

enum EClearItemOnSwitchRules
{
    NeverClear = 0,
    ClearOnTeamSwitch = 1,
    ClearOnClassSwitch = 2,
    ClearOnClassOrTeamSwitch = 3,
    EClearItemOnSwitchRules_MAX = 4
};

enum EClearSceneOptions
{
    NoClear = 0,
    HardwareClear = 1,
    QuadAtMaxZ = 2,
    EClearSceneOptions_MAX = 3
};

enum EClientContentReadinessV2
{
    NotConnected = 0,
    AwaitingServerResponse = 1,
    GeneratingManifests = 2,
    MountingContent = 3,
    LoadedContent = 4,
    ReadyToJoin = 5,
    AllRequestsComplete = 6,
    Disconnecting = 7,
    None = 8,
    EClientContentReadinessV2_MAX = 9
};

enum EClientModuleType
{
    Local = 0,
    Remote = 1,
    EClientModuleType_MAX = 2
};

enum EClientRequestType
{
    NonePending = 0,
    ExistingSessionReservation = 1,
    ReservationUpdate = 2,
    EmptyServerReservation = 3,
    Reconnect = 4,
    Abandon = 5,
    ReservationRemoveMembers = 6,
    AddOrUpdateReservation = 7,
    EClientRequestType_MAX = 8
};

enum EClientSettingsSaveType
{
    Unknown = 0,
    LocalDisk = 1,
    CloudStorage = 2,
    EClientSettingsSaveType_MAX = 3
};

enum EClientsReadyToJoinPhase
{
    Uninitialized = 0,
    WaitingForPlaylistInitialize = 1,
    WaitingForPartyLeader = 2,
    WaitingForLoadContentCall = 3,
    ReadyToJoin = 4,
    EClientsReadyToJoinPhase_MAX = 5
};

enum EClipMessageSettings
{
    DontShow = 0,
    ShowString = 1,
    DeduceUnicornAnnotation = 2,
    ShotTitleScreen = 3,
    EClipMessageSettings_MAX = 4
};

enum EClothAssetAsyncProperties
{
    None = 0,
    RenderData = 1,
    ThumbnailInfo = 2,
    ImportedModel = 3,
    ClothCollection = 4,
    RefSkeleton = 5,
    All = 6,
    EClothAssetAsyncProperties_MAX = 7
};

enum EClothLODBiasMode
{
    MappingsToSameLOD = 0,
    MappingsToMinLOD = 1,
    MappingsToAnyLOD = 2,
    EClothLODBiasMode_MAX = 3
};

enum EClothMassMode
{
    UniformMass = 0,
    TotalMass = 1,
    Density = 2,
    MaxClothMassMode = 3,
    EClothMassMode_MAX = 4
};

enum EClothingColorName
{
    EClothingColorName_AccessoryColor1 = 0,
    EClothingColorName_AccessoryColor2 = 1,
    EClothingColorName_NumTypes = 2,
    EClothingColorName_MAX = 3
};

enum EClothingWindMethodNv
{
    Legacy = 0,
    Accurate = 1,
    EClothingWindMethodNv_MAX = 2
};

enum EClothingWindMethod_Legacy
{
    Legacy = 0,
    Accurate = 1,
    EClothingWindMethod_MAX = 2
};

enum ECloudFileState
{
    Unitialized = 0,
    Saving = 1,
    Loading = 2,
    Idle = 3,
    ECloudFileState_MAX = 4
};

enum ECloudStorageDelegate
{
    CSD_KeyValueReadComplete = 0,
    CSD_KeyValueWriteComplete = 1,
    CSD_ValueChanged = 2,
    CSD_DocumentQueryComplete = 3,
    CSD_DocumentReadComplete = 4,
    CSD_DocumentWriteComplete = 5,
    CSD_DocumentConflictDetected = 6,
    CSD_MAX = 7
};

enum EClusterConnectionTypeEnum
{
    Chaos_PointImplicit = 0,
    Chaos_DelaunayTriangulation = 1,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
    Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
    Chaos_None = 5,
    Chaos_EClsuterCreationParameters_Max = 6,
    Chaos_MAX = 7
};

enum EClusterUnionMethod
{
    PointImplicit = 0,
    DelaunayTriangulation = 1,
    MinimalSpanningSubsetDelaunayTriangulation = 2,
    PointImplicitAugmentedWithMinimalDelaunay = 3,
    BoundsOverlapFilteredDelaunayTriangulation = 4,
    None = 5,
    EClusterUnionMethod_MAX = 6
};

enum ECoastState
{
    Idle = 0,
    Mount = 1,
    Coasting = 2,
    Pedaling = 3,
    PreDismount = 4,
    Dismount = 5,
    EndCoast = 6,
    ECoastState_MAX = 7
};

enum ECobaltStatusTeam
{
    Ally = 0,
    Enemy = 1,
    MAX = 2
};

enum ECodeTokenPlatform
{
    PC = 0,
    PS4 = 1,
    XBOX = 2,
    ECodeTokenPlatform_MAX = 3
};

enum ECollabDialogExitResult
{
    None = 0,
    Close = 1,
    Continue = 2,
    ECollabDialogExitResult_MAX = 3
};

enum ECollabIPGatingContext
{
    Edit = 0,
    CreateButton = 1,
    JoinProgramButton = 2,
    ReviewTermsButton = 3,
    ProgramDetailsButton = 4,
    NameIslandDialog = 5,
    Disclaimer = 6,
    Icon = 7,
    BrandAndICPDialog = 8,
    BrandOnlyDialog = 9,
    ECollabIPGatingContext_MAX = 10
};

enum ECollabIPGatingStatus
{
    Pending = 0,
    None = 1,
    ICP = 2,
    IP = 3,
    ICP_and_IP = 4,
    LIME = 5,
    ECollabIPGatingStatus_MAX = 6
};

enum ECollabIPGatingType
{
    None = 0,
    ICP_and_IP = 1,
    Lime = 2,
    ECollabIPGatingType_MAX = 3
};

enum ECollectionAttributeEnum
{
    Chaos_Active = 0,
    Chaos_DynamicState = 1,
    Chaos_CollisionGroup = 2,
    Chaos_Max = 3
};

enum ECollectionBookPrimaryNavTarget
{
    Overview = 0,
    SectionTileView = 1,
    ECollectionBookPrimaryNavTarget_MAX = 2
};

enum ECollectionBookRewardStatus
{
    Unknown = 0,
    Available = 1,
    Claimed = 2,
    ECollectionBookRewardStatus_MAX = 3
};

enum ECollectionBookRewardType
{
    Uninitialized = 0,
    Book = 1,
    Page = 2,
    Section = 3,
    ECollectionBookRewardType_MAX = 4
};

enum ECollectionBookSectionNavTarget
{
    SlotSelect = 0,
    SlotPicker = 1,
    ECollectionBookSectionNavTarget_MAX = 2
};

enum ECollectionGroupEnum
{
    Chaos_Traansform = 0,
    Chaos_Max = 1
};

enum ECollectionScriptingShareType
{
    Local = 0,
    Private = 1,
    Shared = 2,
    ECollectionScriptingShareType_MAX = 3
};

enum ECollectionSelectionMethod
{
    TierAsIndex = 0,
    TierAsIndexOverflowToLastValid = 1,
    Modulo = 2,
    Random = 3,
    None = 4,
    ECollectionSelectionMethod_MAX = 5
};

enum ECollectionsComponentValidityResult
{
    IsValid = 0,
    IsNotValid = 1,
    ECollectionsComponentValidityResult_MAX = 2
};

enum ECollisionChannel
{
    ECC_WorldStatic = 0,
    ECC_WorldDynamic = 1,
    ECC_Pawn = 2,
    ECC_Visibility = 3,
    ECC_Camera = 4,
    ECC_PhysicsBody = 5,
    ECC_Vehicle = 6,
    ECC_Destructible = 7,
    ECC_EngineTraceChannel1 = 8,
    ECC_EngineTraceChannel2 = 9,
    ECC_EngineTraceChannel3 = 10,
    ECC_EngineTraceChannel4 = 11,
    ECC_EngineTraceChannel5 = 12,
    ECC_EngineTraceChannel6 = 13,
    ECC_GameTraceChannel1 = 14,
    ECC_GameTraceChannel2 = 15,
    ECC_GameTraceChannel3 = 16,
    ECC_GameTraceChannel4 = 17,
    ECC_GameTraceChannel5 = 18,
    ECC_GameTraceChannel6 = 19,
    ECC_GameTraceChannel7 = 20,
    ECC_GameTraceChannel8 = 21,
    ECC_GameTraceChannel9 = 22,
    ECC_GameTraceChannel10 = 23,
    ECC_GameTraceChannel11 = 24,
    ECC_GameTraceChannel12 = 25,
    ECC_GameTraceChannel13 = 26,
    ECC_GameTraceChannel14 = 27,
    ECC_GameTraceChannel15 = 28,
    ECC_GameTraceChannel16 = 29,
    ECC_GameTraceChannel17 = 30,
    ECC_GameTraceChannel18 = 31,
    ECC_OverlapAll_Deprecated = 32,
    ECC_MAX = 33
};

enum ECollisionEnabled
{
    NoCollision = 0,
    QueryOnly = 1,
    PhysicsOnly = 2,
    QueryAndPhysics = 3,
    ProbeOnly = 4,
    QueryAndProbe = 5,
    ECollisionEnabled_MAX = 6
};

enum ECollisionGeometryMode
{
    Default = 0,
    SimpleAndComplex = 1,
    UseSimpleAsComplex = 2,
    UseComplexAsSimple = 3,
    ECollisionGeometryMode_MAX = 4
};

enum ECollisionGeometryType
{
    CopyFromInputs = 0,
    AlignedBoxes = 1,
    OrientedBoxes = 2,
    MinimalSpheres = 3,
    Capsules = 4,
    ConvexHulls = 5,
    ConvexDecompositions = 6,
    SweptHulls = 7,
    LevelSets = 8,
    MinVolume = 9,
    Empty = 10,
    ECollisionGeometryType_MAX = 11
};

enum ECollisionResponse
{
    ECR_Ignore = 0,
    ECR_Overlap = 1,
    ECR_Block = 2,
    ECR_MAX = 3
};

enum ECollisionShapeMode
{
    Mesh = 0,
    Box = 1,
    Capsule = 2,
    Sphere = 3,
    ECollisionShapeMode_MAX = 4
};

enum ECollisionTraceFlag
{
    CTF_UseDefault = 0,
    CTF_UseSimpleAndComplex = 1,
    CTF_UseSimpleAsComplex = 2,
    CTF_UseComplexAsSimple = 3,
    CTF_MAX = 4
};

enum ECollisionTypeEnum
{
    Chaos_Volumetric = 0,
    Chaos_Surface_Volumetric = 1,
    Chaos_Max = 2
};

enum EColorBlindMode
{
    Off = 0,
    Deuteranope = 1,
    Protanope = 2,
    Tritanope = 3,
    EColorBlindMode_MAX = 4
};

enum EColorEffects
{
    None = 0,
    Metallic = 1,
    Glitter = 2,
    Opalescent = 3,
    EColorEffects_MAX = 4
};

enum EColorPickerColorRepresentation
{
    HSV = 0,
    RGB = 1,
    Max_NONE = 2,
    EColorPickerColorRepresentation_MAX = 3
};

enum EColorPickerType
{
    Swatches = 0,
    CustomColor = 1,
    Both = 2,
    EColorPickerType_MAX = 3
};

enum EColorSwatchType
{
    EColorSwatchType_Skin = 0,
    EColorSwatchType_Hair = 1,
    EColorSwatchType_BodyAccessory = 2,
    EColorSwatchType_Accessory = 3,
    EColorSwatchType_NumTypes = 4,
    EColorSwatchType_MAX = 5
};

enum EColorVisionDeficiency
{
    NormalVision = 0,
    Deuteranope = 1,
    Protanope = 2,
    Tritanope = 3,
    EColorVisionDeficiency_MAX = 4
};

enum ECombineCurvesMethod
{
    LeaveSeparate = 0,
    Union = 1,
    Intersect = 2,
    Difference = 3,
    ExclusiveOr = 4,
    ECombineCurvesMethod_MAX = 5
};

enum ECombinedADSFireMode
{
    Disabled = 0,
    OnPressed = 1,
    WhileHeld = 2,
    ECombinedADSFireMode_MAX = 3
};

enum EComboSlotType
{
    Primary = 0,
    Secondary = 1,
    Combo = 2,
    Creative = 3,
    COUNT = 4,
    EComboSlotType_MAX = 5
};

enum EComboType
{
    None = 0,
    Full = 1,
    Perfect = 2,
    EComboType_MAX = 3
};

enum ECommonGamepadType
{
    XboxOneController = 0,
    PS4Controller = 1,
    SwitchController = 2,
    GenericController = 3,
    XboxSeriesXController = 4,
    PS5Controller = 5,
    Count = 6,
    ECommonGamepadType_MAX = 7
};

enum ECommonInputEventFlowBehavior
{
    BlockIfActive = 0,
    BlockIfHandled = 1,
    NeverBlock = 2,
    ECommonInputEventFlowBehavior_MAX = 3
};

enum ECommonInputMode
{
    Menu = 0,
    Game = 1,
    All = 2,
    MAX = 3
};

enum ECommonInputType
{
    MouseAndKeyboard = 0,
    Gamepad = 1,
    Touch = 2,
    Count = 3,
    ECommonInputType_MAX = 4
};

enum ECommonNumericType
{
    Number = 0,
    Percentage = 1,
    Seconds = 2,
    Distance = 3,
    ECommonNumericType_MAX = 4
};

enum ECommonPlatformType
{
    PC = 0,
    Mac = 1,
    PS4 = 2,
    XBox = 3,
    IOS = 4,
    Android = 5,
    Switch = 6,
    XSX = 7,
    PS5 = 8,
    Count = 9,
    ECommonPlatformType_MAX = 10
};

enum ECommonSwitcherTransition
{
    FadeOnly = 0,
    Horizontal = 1,
    Vertical = 2,
    Zoom = 3,
    ECommonSwitcherTransition_MAX = 4
};

enum ECommonSwitcherTransitionFallbackStrategy
{
    None = 0,
    Previous = 1,
    Next = 2,
    First = 3,
    Last = 4,
    ECommonSwitcherTransitionFallbackStrategy_MAX = 5
};

enum ECompareType
{
    CMP_Equal = 0,
    CMP_Less = 1,
    CMP_LessEqual = 2,
    CMP_Greater = 3,
    CMP_GreaterEqual = 4,
    CMP_NotEqual = 5,
    CMP_Regex = 6,
    CMP_EqualIgnore = 7,
    CMP_LessIgnore = 8,
    CMP_LessEqualIgnore = 9,
    CMP_GreaterIgnore = 10,
    CMP_GreaterEqualIgnore = 11,
    CMP_NotEqualIgnore = 12,
    CMP_Hash = 13,
    CMP_MAX = 14
};

enum EComponentCreationMethod
{
    Native = 0,
    SimpleConstructionScript = 1,
    UserConstructionScript = 2,
    Instance = 3,
    EComponentCreationMethod_MAX = 4
};

enum EComponentMaterialType
{
    Empty = 0,
    IndexedMaterial = 1,
    OverlayMaterial = 2,
    DecalMaterial = 3,
    VolumetricCloudMaterial = 4,
    EComponentMaterialType_MAX = 5
};

enum EComponentMobility
{
    Static = 0,
    Stationary = 1,
    Movable = 2,
    EComponentMobility_MAX = 3
};

enum EComponentPhysicsStateChange
{
    Created = 0,
    Destroyed = 1,
    EComponentPhysicsStateChange_MAX = 2
};

enum EComponentSocketType
{
    Invalid = 0,
    Bone = 1,
    Socket = 2,
    EComponentSocketType_MAX = 3
};

enum EComponentStrippingVector
{
    None = 0,
    StripXY = 1,
    StripZ = 2,
    EComponentStrippingVector_MAX = 3
};

enum EComponentType
{
    None = 0,
    TranslationX = 1,
    TranslationY = 2,
    TranslationZ = 3,
    RotationX = 4,
    RotationY = 5,
    RotationZ = 6,
    Scale = 7,
    ScaleX = 8,
    ScaleY = 9,
    ScaleZ = 10,
    EComponentType_MAX = 11
};

enum ECompositeTextureMode
{
    CTM_Disabled = 0,
    CTM_NormalRoughnessToRed = 1,
    CTM_NormalRoughnessToGreen = 2,
    CTM_NormalRoughnessToBlue = 3,
    CTM_NormalRoughnessToAlpha = 4,
    CTM_MAX = 5
};

enum ECompositingSampleCount
{
    One = 0,
    Two = 1,
    Four = 2,
    Eight = 3,
    ECompositingSampleCount_MAX = 4
};

enum EComputeKernelFlags
{
    IsDefaultKernel = 0,
    IsolatedMemoryWrites = 1,
    EComputeKernelFlags_MAX = 2
};

enum EComputeNTBsOptions
{
    None = 0,
    Normals = 1,
    Tangents = 2,
    WeightedNTBs = 3,
    EComputeNTBsOptions_MAX = 4
};

enum EConcurrencyVolumeScaleMode
{
    Default = 0,
    Distance = 1,
    Priority = 2,
    EConcurrencyVolumeScaleMode_MAX = 3
};

enum EConfirmDialogType
{
    CancelChanges = 0,
    CharLimitExceeded = 1,
    MarkupWarning = 2,
    EConfirmDialogType_MAX = 3
};

enum EConnectionAxleType
{
    UnusedReceptor = 0,
    UnusedConnector = 1,
    RoundAxleReceptor = 2,
    RoundAxleConnector = 3,
    CrossAxleReceptor = 4,
    CrossAxleConnector = 5,
    SecondaryPinReceptor = 6,
    SecondaryPinConnector = 7,
    PlateRoundCrossAxleReceptor = 8,
    UnusedPlateRoundCrossAxleConnector = 9,
    MiniFigNeckReceptor = 10,
    MiniFigNeckConnector = 11,
    RoundCrossAxleReceptor = 12,
    RoundCrossAxleConnector = 13,
    TinyPinReceptor = 14,
    TinyPinConnector = 15,
    UnusedCrossAxlePegHoleCapAlignmentReceptor = 16,
    CrossAxlePegHoleCapAlignmentConnector = 17,
    UnusedRoundAxleReceptorDontRejectSecondaryPinConnector = 18,
    RoundAxleConnectorDontRejectSecondaryPinConnector = 19,
    UnusedSecondaryPinReceptorDontRejectTinyPinConnector = 20,
    SecondaryPinConnectorDontRejectTinyPinConnector = 21,
    SubTypeSize = 22,
    EConnectionAxleType_MAX = 23
};

enum EConnectionContactMethod
{
    None = 0,
    ConvexHullContactArea = 1,
    EConnectionContactMethod_MAX = 2
};

enum EConnectionFieldGender
{
    Receptor = 0,
    Connector = 1,
    Any = 2,
    EConnectionFieldGender_MAX = 3
};

enum EConnectionFieldSuperType
{
    Planar = 0,
    Line = 1,
    Point = 2,
    EConnectionFieldSuperType_MAX = 3
};

enum EConnectionFieldType
{
    Planar = 0,
    Hinge = 1,
    Axle = 2,
    Ball = 3,
    Cardan = 4,
    Fixed = 5,
    Rail = 6,
    Slider = 7,
    Gear = 8,
    User = 9,
    EConnectionFieldType_MAX = 10
};

enum EConnectionPointFlags
{
    SquareFeature = 0,
    RoundFeature = 1,
    KnobWithHole = 2,
    KnobWithMiniFigHandHole = 3,
    KnobWithSingleCollision = 4,
    SingleFeature = 5,
    ReceptorDontRemoveKnobCollision = 6,
    KnobWithoutCollision = 7,
    CreationValidFlags = 8,
    ThisSideTransparent = 9,
    ThisSideHidden = 10,
    DynamicValidFlags = 11,
    InternalIsDuploSecondaryPin = 12,
    InternalIsQuadConnector = 13,
    InternalIsSecondaryPin = 14,
    InternalIsAnyKnob = 15,
    SquareOcclusionShapeIndex = 16,
    RoundOcclusionShapeIndex = 17,
    OtherOcclusionShapeIndex = 18,
    OcclusionShapeMask = 19,
    EConnectionPointFlags_MAX = 20
};

enum EConnectionPointType
{
    Knob = 0,
    HollowKnob = 1,
    KnobFitInPegHole = 2,
    HollowKnobFitInPegHole = 3,
    SquareKnob = 4,
    Tube = 5,
    TubeWithRib = 6,
    BottomTube = 7,
    BottomTubeWithRib = 8,
    SecondaryPin = 9,
    SecondaryPinWithRib = 10,
    SecondaryPinWithTinyPinReceptor = 11,
    SecondaryPinWithRibAndTinyPinReceptor = 12,
    FixedTube = 13,
    FixedTubeWithAntiKnob = 14,
    AntiKnob = 15,
    PegHole = 16,
    SquareAntiKnob = 17,
    TubeGap = 18,
    TubeGrabber = 19,
    TinyPin = 20,
    TinyPinReceptor = 21,
    Edge = 22,
    EdgeGap = 23,
    KnobReject = 24,
    PowerFuncLeftTop = 25,
    PowerFuncRightTop = 26,
    PowerFuncLeftBottom = 27,
    PowerFuncRightBottom = 28,
    VoidFeature = 29,
    DuploKnob = 30,
    DuploHollowKnob = 31,
    DuploAntiKnob = 32,
    DuploTube = 33,
    DuploFixedTube = 34,
    DuploTubeGap = 35,
    DuploAnimalKnob = 36,
    DuploAnimalTube = 37,
    SecondaryPinReceptor = 38,
    DuploFixedAnimalTube = 39,
    DuploSecondaryPinWithRib = 40,
    DuploSecondaryPin = 41,
    DuploKnobReject = 42,
    RejectAll = 43,
    _size = 44,
    _duploBegin = 45,
    _duploEnd = 46,
    EConnectionPointType_MAX = 47
};

enum EConnectorType
{
    Primary = 0,
    Secondary = 1,
    EConnectorType_MAX = 2
};

enum EConsideredForActorEntityInterop
{
    No = 0,
    Partial = 1,
    Yes = 2,
    EConsideredForActorEntityInterop_MAX = 3
};

enum EConsoleAuthLinkState
{
    NotOnConsole = 0,
    ConsoleNotLoggedIn = 1,
    EpicNotLoggedIn = 2,
    ThisEpicAccountLinked = 3,
    OtherEpicAccountLinked = 4,
    NoEpicAccountLinked = 5,
    PrimaryIdNotLinked = 6,
    SecondaryIdNotLinked = 7,
    EConsoleAuthLinkState_MAX = 8
};

enum EConsoleForGamepadLabels
{
    None = 0,
    XBoxOne = 1,
    PS4 = 2,
    EConsoleForGamepadLabels_MAX = 3
};

enum EConstantQFFTSizeEnum
{
    Min = 0,
    XXSmall = 1,
    XSmall = 2,
    Small = 3,
    Medium = 4,
    Large = 5,
    XLarge = 6,
    XXLarge = 7,
    Max = 8
};

enum EConstantQNormalizationEnum
{
    EqualEuclideanNorm = 0,
    EqualEnergy = 1,
    EqualAmplitude = 2,
    EConstantQNormalizationEnum_MAX = 3
};

enum EConstraintFrame
{
    Frame1 = 0,
    Frame2 = 1,
    EConstraintFrame_MAX = 2
};

enum EConstraintInterpType
{
    Average = 0,
    Shortest = 1,
    Max = 2
};

enum EConstraintOffsetOption
{
    None = 0,
    Offset_RefPose = 1,
    EConstraintOffsetOption_MAX = 2
};

enum EConstraintPlasticityType
{
    CCPT_Free = 0,
    CCPT_Shrink = 1,
    CCPT_Grow = 2,
    CCPT_MAX = 3
};

enum EConstraintTransformComponentFlags
{
    None = 0,
    ChildPosition = 1,
    ChildRotation = 2,
    ParentPosition = 3,
    ParentRotation = 4,
    AllChild = 5,
    AllParent = 6,
    AllPosition = 7,
    AllRotation = 8,
    All = 9,
    EConstraintTransformComponentFlags_MAX = 10
};

enum EConstraintType
{
    Transform = 0,
    Aim = 1,
    MAX = 2
};

enum EConstructionBuildingType
{
    Wall = 0,
    Floor = 1,
    Stairs = 2,
    Roof = 3,
    Brace = 4,
    WallWindow = 5,
    Count = 6,
    EConstructionBuildingType_MAX = 7
};

enum EConsumeMouseWheel
{
    WhenScrollingPossible = 0,
    Always = 1,
    Never = 2,
    EConsumeMouseWheel_MAX = 3
};

enum EConsumerRole
{
    Server = 0,
    Client = 1,
    Editor = 2,
    EConsumerRole_MAX = 3
};

enum EContentBeaconClientState
{
    Idle = 0,
    Cooking = 1,
    Downloading = 2,
    EContentBeaconClientState_MAX = 3
};

enum EContentBeaconErrorCode
{
    Success = 0,
    FailedToConnect = 1,
    FailedToGenerateContentPackage = 2,
    FailedToCreateContentPackageResolver = 3,
    RequestInvalid = 4,
    ContentPackageResolverBecameInvalid = 5,
    PackageResolveFlowCancelled = 6,
    FailedToBuildManifestServer = 7,
    FailedToBuildManifestClient = 8,
    FailedToInstallModule = 9,
    InvalidStateRequested = 10,
    DuplicateClientConnected = 11,
    TimeoutUnspecifiedClientTransition = 12,
    TimeoutUnspecifiedRequestTransition = 13,
    TimeoutRequestTransitionHostActive = 14,
    TimeoutRequestTransitionClientsActive = 15,
    TimeoutRequestTransitionClientsUninstalled = 16,
    TimeoutClientTransitionAllLoaded = 17,
    TimeoutClientTransitionUninstalled = 18,
    ClientCancelledDownload = 19,
    UnauthorizedClient = 20,
    FailedToSetProjectId = 21,
    Unknown = 22,
    EContentBeaconErrorCode_MAX = 23
};

enum EContentBeaconErrorResponse
{
    None = 0,
    DisconnectClient = 1,
    CancelRequest = 2,
    Shutdown = 3,
    EContentBeaconErrorResponse_MAX = 4
};

enum EContentBeaconErrorSource
{
    Unknown = 0,
    Host = 1,
    Client = 2,
    EContentBeaconErrorSource_MAX = 3
};

enum EContentBeaconHostGlobalState
{
    Initializing = 0,
    Running = 1,
    WaitingForUnload = 2,
    PendingShutdown = 3,
    Shutdown = 4,
    EContentBeaconHostGlobalState_MAX = 5
};

enum EContentBeaconMetadataChangeType
{
    Add = 0,
    Remove = 1,
    EContentBeaconMetadataChangeType_MAX = 2
};

enum EContentBundleClientState
{
    Unregistered = 0,
    Registered = 1,
    ContentInjectionRequested = 2,
    ContentRemovalRequested = 3,
    RegistrationFailed = 4,
    EContentBundleClientState_MAX = 5
};

enum EContentBundleStatus
{
    Registered = 0,
    ReadyToInject = 1,
    FailedToInject = 2,
    ContentInjected = 3,
    Unknown = 4,
    EContentBundleStatus_MAX = 5
};

enum EContentInstallState
{
    NotInstalled = 0,
    Pending = 1,
    Installed = 2,
    Unknown = 3,
    Error = 4,
    EContentInstallState_MAX = 5
};

enum EContentRequestInstallState
{
    None = 0,
    Initialized = 1,
    ManifestsBuilt = 2,
    Installed = 3,
    HostLoadedClientsInstalled = 4,
    HostActiveClientsInstalled = 5,
    Loaded = 6,
    Active = 7,
    ClientsUninstalled = 8,
    Uninstalled = 9,
    COMPLETELYLOADED = 10,
    EContentRequestInstallState_MAX = 11
};

enum EContentionRuleType
{
    MajorityWins = 0,
    OneTeamOnlyWins = 1,
    EContentionRuleType_MAX = 2
};

enum EContextLayoutAccessLevel
{
    Editable = 0,
    Hidden = 1,
    EContextLayoutAccessLevel_MAX = 2
};

enum EContextObjectDirection
{
    Read = 0,
    Write = 1,
    ReadWrite = 2,
    EContextObjectDirection_MAX = 3
};

enum EContextPositionPlatform
{
    NonMobile = 0,
    Mobile = 1,
    EContextPositionPlatform_MAX = 2
};

enum EContextRequirementMatchPolicy
{
    RequireAll = 0,
    RequireAny = 1,
    EContextRequirementMatchPolicy_MAX = 2
};

enum EContextualAnimActorPreviewType
{
    SkeletalMesh = 0,
    StaticMesh = 1,
    Actor = 2,
    None = 3,
    EContextualAnimActorPreviewType_MAX = 4
};

enum EContextualAnimCollisionBehavior
{
    None = 0,
    IgnoreActorWhenMoving = 1,
    IgnoreChannels = 2,
    EContextualAnimCollisionBehavior_MAX = 3
};

enum EContextualAnimCriterionConeMode
{
    ToPrimary = 0,
    FromPrimary = 1,
    EContextualAnimCriterionConeMode_MAX = 2
};

enum EContextualAnimCriterionDistanceMode
{
    Distance_3D = 0,
    Distance_2D = 1,
    Distance_MAX = 2
};

enum EContextualAnimCriterionToConsider
{
    All = 0,
    Spatial = 1,
    Other = 2,
    EContextualAnimCriterionToConsider_MAX = 3
};

enum EContextualAnimCriterionType
{
    Spatial = 0,
    Other = 1,
    EContextualAnimCriterionType_MAX = 2
};

enum EContextualAnimIKTargetProvider
{
    Autogenerated = 0,
    Bone = 1,
    EContextualAnimIKTargetProvider_MAX = 2
};

enum EContextualAnimJoinRule
{
    Default = 0,
    Late = 1,
    EContextualAnimJoinRule_MAX = 2
};

enum EContextualAnimPointType
{
    FirstFrame = 0,
    SyncFrame = 1,
    LastFrame = 2,
    EContextualAnimPointType_MAX = 3
};

enum EContextualAnimWarpPointDefinitionMode
{
    PrimaryActor = 0,
    Socket = 1,
    Custom = 2,
    EContextualAnimWarpPointDefinitionMode_MAX = 3
};

enum EContextualContext
{
    DoNotShow = 0,
    BusPhase = 1,
    Skydiving = 2,
    Gameplay = 3,
    EContextualContext_MAX = 4
};

enum EContextualEvent
{
    Generic = 0,
    Location = 1,
    InventoryAdded = 2,
    InventoryRemoved = 3,
    StartSkydiving = 4,
    NewQuests = 5,
    EContextualEvent_MAX = 6
};

enum EControlPointState
{
    None = 0,
    Disabled = 1,
    Enabled = 2,
    EControlPointState_MAX = 3
};

enum EControlRigComponentMapDirection
{
    Input = 0,
    Output = 1,
    EControlRigComponentMapDirection_MAX = 2
};

enum EControlRigComponentSpace
{
    WorldSpace = 0,
    ActorSpace = 1,
    ComponentSpace = 2,
    RigSpace = 3,
    LocalSpace = 4,
    Max = 5
};

enum EControlRigCurveAlignment
{
    Front = 0,
    Stretched = 1,
    EControlRigCurveAlignment_MAX = 2
};

enum EControlRigDrawHierarchyMode
{
    Axes = 0,
    Max = 1
};

enum EControlRigFKRigExecuteMode
{
    Replace = 0,
    Additive = 1,
    Direct = 2,
    Max = 3
};

enum EControlRigInteractionType
{
    None = 0,
    Translate = 1,
    Rotate = 2,
    Scale = 3,
    All = 4,
    EControlRigInteractionType_MAX = 5
};

enum EControlRigModifyBoneMode
{
    OverrideLocal = 0,
    OverrideGlobal = 1,
    AdditiveLocal = 2,
    AdditiveGlobal = 3,
    Max = 4
};

enum EControlRigSetKey
{
    DoNotCare = 0,
    Always = 1,
    Never = 2,
    EControlRigSetKey_MAX = 3
};

enum EControlRigTestDataPlaybackMode
{
    Live = 0,
    ReplayInputs = 1,
    GroundTruth = 2,
    Max = 3
};

enum EControlRigVectorKind
{
    Direction = 0,
    Location = 1,
    EControlRigVectorKind_MAX = 2
};

enum EControllerAnalogStick
{
    CAS_LeftStick = 0,
    CAS_RightStick = 1,
    CAS_MAX = 2
};

enum EControllerHand
{
    Left = 0,
    Right = 1,
    AnyHand = 2,
    Pad = 3,
    ExternalCamera = 4,
    Gun = 5,
    HMD = 6,
    Chest = 7,
    LeftShoulder = 8,
    RightShoulder = 9,
    LeftElbow = 10,
    RightElbow = 11,
    Waist = 12,
    LeftKnee = 13,
    RightKnee = 14,
    LeftFoot = 15,
    RightFoot = 16,
    Special = 17,
    ControllerHand_Count = 18,
    EControllerHand_MAX = 19
};

enum EControllerRequirementQuestPolicy
{
    Single = 0,
    AnyOf = 1,
    AllOf = 2,
    EControllerRequirementQuestPolicy_MAX = 3
};

enum EControlsPrototypes
{
    CameraSteering = 0,
    NonCameraSteering = 1,
    HybridCameraSteering = 2,
    MaxCount = 3,
    EControlsPrototypes_MAX = 4
};

enum EConversationChoiceType
{
    ServerOnly = 0,
    UserChoiceAvailable = 1,
    UserChoiceUnavailable = 2,
    EConversationChoiceType_MAX = 3
};

enum EConversationEventQueryMethod
{
    CheckAgainstCurrentConversationParticipant = 0,
    CheckAgainstConversationEntryTag = 1,
    EConversationEventQueryMethod_MAX = 2
};

enum EConversationRequirementResult
{
    Passed = 0,
    FailedButVisible = 1,
    FailedAndHidden = 2,
    EConversationRequirementResult_MAX = 3
};

enum EConversationTaskResultType
{
    Invalid = 0,
    AbortConversation = 1,
    AdvanceConversation = 2,
    AdvanceConversationWithChoice = 3,
    PauseConversationAndSendClientChoices = 4,
    ReturnToLastClientChoice = 5,
    ReturnToCurrentClientChoice = 6,
    ReturnToConversationStart = 7,
    EConversationTaskResultType_MAX = 8
};

enum EConversionControlKeyRequest
{
    AllKeys = 0,
    NonConsumableKeys = 1,
    ConsumableKeys = 2,
    EConversionControlKeyRequest_MAX = 3
};

enum EConvertToPolygonsMode
{
    FaceNormalDeviation = 0,
    FindPolygons = 1,
    FromUVIslands = 2,
    FromNormalSeams = 3,
    FromConnectedTris = 4,
    FromFurthestPointSampling = 5,
    CopyFromLayer = 6,
    EConvertToPolygonsMode_MAX = 7
};

enum EConvertedType
{
    NPC = 0,
    Creature = 1,
    All = 2,
    Unknown = 3,
    EConvertedType_MAX = 4
};

enum EConvexDecompositionMethod
{
    NavigationDriven = 0,
    VolumetricError = 1,
    EConvexDecompositionMethod_MAX = 2
};

enum EConvexOverlapRemoval
{
    None = 0,
    All = 1,
    OnlyClusters = 2,
    OnlyClustersVsClusters = 3,
    EConvexOverlapRemoval_MAX = 4
};

enum ECooldownTrackingType
{
    Cue = 0,
    AbilityCooldownTags = 1,
    COUNT = 2,
    ECooldownTrackingType_MAX = 3
};

enum ECooldownType
{
    OnActionTriggered = 0,
    OnActionFinished = 1,
    OnActionSucceeded = 2,
    ECooldownType_MAX = 3
};

enum ECoordinatorBroadcasts
{
    ReadyForRequests = 0,
    BeginStateChange_TwoPhase = 1,
    BeginStateChange_ThreePhase = 2,
    PreCommit = 3,
    Success = 4,
    Aborted = 5,
    NUM = 6,
    ECoordinatorBroadcasts_MAX = 7
};

enum ECoordinatorBroadcasts_Repl
{
    R = 0,
    A = 1,
    B = 2,
    C = 3,
    S = 4,
    F = 5,
    NUM = 6,
    ECoordinatorBroadcasts_MAX = 7
};

enum ECoordinatorFlowState
{
    NONE = 0,
    Initializing = 1,
    WaitingForRequest = 2,
    WaitingForConsensus_BeginChange = 3,
    WaitingForConsensus_Precommit = 4,
    Consensus_Success = 5,
    Consensus_Failed = 6,
    ECoordinatorFlowState_MAX = 7
};

enum ECopyMotion_Component
{
    TranslationX = 0,
    TranslationY = 1,
    TranslationZ = 2,
    RotationAngle = 3,
    ECopyMotion_MAX = 4
};

enum ECoreOnlineDummy
{
    Dummy = 0,
    ECoreOnlineDummy_MAX = 1
};

enum ECorePerceptionTypes
{
    Sight = 0,
    Hearing = 1,
    Damage = 2,
    Touch = 3,
    Team = 4,
    Prediction = 5,
    MAX = 6
};

enum ECorePerceptionTypesBitmask
{
    Sight = 0,
    Hearing = 1,
    Damage = 2,
    Touch = 3,
    Team = 4,
    Prediction = 5,
    All = 6,
    ECorePerceptionTypesBitmask_MAX = 7
};

enum ECosmeticBudgetingMode
{
    Direct = 0,
    IndirectOrNone = 1,
    ECosmeticBudgetingMode_MAX = 2
};

enum ECosmeticCompatibleMode
{
    BattleRoyale = 0,
    Juno = 1,
    DelMar = 2,
    Sparks = 3,
    ECosmeticCompatibleMode_MAX = 4
};

enum ECosmeticCompatibleModeLegacy
{
    BattleRoyale = 0,
    Juno = 1,
    DelMar = 2,
    Sparks = 3,
    MAX = 4
};

enum ECosmeticMetaTagRequirementCategory
{
    None = 0,
    Glider = 1,
    Pickaxe = 2,
    Backpack = 3,
    Character = 4,
    FullLoadout = 5,
    MAX = 6
};

enum ECosmeticModifierOutExec
{
    Success = 0,
    Failure = 1,
    ECosmeticModifierOutExec_MAX = 2
};

enum ECosmeticStepOrdinality
{
    PreStep = 0,
    Default = 1,
    PostStep = 2,
    NumPhases = 3,
    ECosmeticStepOrdinality_MAX = 4
};

enum ECosmeticTestOperationType
{
    Multiply = 0,
    Add = 1,
    None = 2,
    ECosmeticTestOperationType_MAX = 3
};

enum ECosmeticType
{
    Image = 0,
    Widget = 1,
    ECosmeticType_MAX = 2
};

enum ECosmeticVariantRowType
{
    Numeric = 0,
    Tiled = 1,
    RichColor = 2,
    Texture = 3,
    Slider = 4,
    Ranked = 5,
    Redirector = 6,
    None = 7,
    ECosmeticVariantRowType_MAX = 8
};

enum ECosmeticsEventBindingFlags
{
    None = 0,
    ExecuteImmediately = 1,
    ExecuteOnce = 2,
    ECosmeticsEventBindingFlags_MAX = 3
};

enum ECountAIAssignedToType
{
    Goal = 0,
    Actor = 1,
    Assignment = 2,
    ECountAIAssignedToType_MAX = 3
};

enum ECountdownDisplay
{
    EventEndTime = 0,
    ChallengeUnlockTime = 1,
    ChallengeBundleUnlockTime = 2,
    UnlockAlreadySet = 3,
    MAX = 4
};

enum ECountdownTimerState
{
    None = 0,
    Countdown = 1,
    Live = 2,
    ECountdownTimerState_MAX = 3
};

enum ECraftingIngredientReqError
{
    None = 0,
    NoItem = 1,
    NotEnough = 2,
    ECraftingIngredientReqError_MAX = 3
};

enum ECraftingObjectState
{
    Invalid = 0,
    Idle = 1,
    Crafting = 2,
    CraftingPaused = 3,
    CraftingPausedDecaying = 4,
    Ready = 5,
    OverCrafting = 6,
    Resetting = 7,
    TotalStates = 8,
    ECraftingObjectState_MAX = 9
};

enum ECraftingStationsInventoryState
{
    CanCraft = 0,
    MissingIngredients = 1,
    OutputFull = 2,
    ECraftingStationsInventoryState_MAX = 3
};

enum ECraftingUpgradeDataFlags
{
    None = 0,
    OverrideWrap = 1,
    Durability = 2,
    PhantomAmmo = 3,
    LoadedAmmo = 4,
    ModSlots = 5,
    All = 6,
    ECraftingUpgradeDataFlags_MAX = 7
};

enum ECreateAccountResult
{
    NotStarted = 0,
    Pending = 1,
    Success = 2,
    Console_LoginFailed = 3,
    Console_DuplicateAuthAssociation = 4,
    DuplicateAccount = 5,
    GenericError = 6,
    ECreateAccountResult_MAX = 7
};

enum ECreateMeshObjectSourceMeshType
{
    MeshDescription = 0,
    DynamicMesh = 1,
    ECreateMeshObjectSourceMeshType_MAX = 2
};

enum ECreateModelingObjectResult
{
    Ok = 0,
    Cancelled = 1,
    Failed_Unknown = 2,
    Failed_NoAPIFound = 3,
    Failed_InvalidWorld = 4,
    Failed_InvalidMesh = 5,
    Failed_InvalidTexture = 6,
    Failed_AssetCreationFailed = 7,
    Failed_ActorCreationFailed = 8,
    Failed_InvalidMaterial = 9,
    ECreateModelingObjectResult_MAX = 10
};

enum ECreateObjectTypeHint
{
    Undefined = 0,
    StaticMesh = 1,
    Volume = 2,
    DynamicMeshActor = 3,
    ECreateObjectTypeHint_MAX = 4
};

enum ECreativeAllowSpectateOtherTeams
{
    Disallow = 0,
    Allow = 1,
    BattleRoyale = 2,
    ECreativeAllowSpectateOtherTeams_MAX = 3
};

enum ECreativeAssetCostFilterMethod
{
    IncludeOnly = 0,
    Exclude = 1,
    ECreativeAssetCostFilterMethod_MAX = 2
};

enum ECreativeAudioPlayerTargetListener
{
    None = 0,
    Instigator = 1,
    RegisteredPlayers = 2,
    NonRegisteredPlayers = 3,
    Everyone = 4,
    ECreativeAudioPlayerTargetListener_MAX = 5
};

enum ECreativeAudioPlayerTargetLocation
{
    None = 0,
    Device = 1,
    LocalPlayer = 2,
    RegisteredPlayers = 3,
    InstigatingPlayer = 4,
    All = 5,
    ECreativeAudioPlayerTargetLocation_MAX = 6
};

enum ECreativeBossDisplayMode
{
    DontOverride = 0,
    Yes = 1,
    No = 2,
    ECreativeBossDisplayMode_MAX = 3
};

enum ECreativeBotIslandIterationType
{
    CBI_NONE = 0,
    CBI_Mnemonics = 1,
    CBI_User = 2,
    CBI_MAX = 3
};

enum ECreativeBotIslandLoadingState
{
    ILS_NONE = 0,
    ILS_LoadNotStarted = 1,
    ILS_GrantPlotItem = 2,
    ILS_WaitingUserPlotReady = 3,
    ILS_LoadInProgress = 4,
    ILS_LoadComplete = 5,
    ILS_Teleporting = 6,
    ILS_Returning = 7,
    ILS_Items = 8,
    ILS_MAX = 9
};

enum ECreativeBotItemTestingState
{
    ITS_NONE = 0,
    ITS_Teleporting = 1,
    ITS_Landing = 2,
    ITS_Grant = 3,
    ITS_Equip = 4,
    ITS_Place = 5,
    ITS_Cleanup = 6,
    ITS_MAX = 7
};

enum ECreativeClassType
{
    ClassSlot = 0,
    NoClass = 1,
    All = 2,
    Any = 3,
    ECreativeClassType_MAX = 4
};

enum ECreativeCreatorAnalyticsType
{
    MatchEnd = 0,
    Heartbeat = 1,
    ECreativeCreatorAnalyticsType_MAX = 2
};

enum ECreativeDynamicUIAlignment
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    MiddleLeft = 3,
    Centered = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    CenteredFull = 9,
    LeftTall = 10,
    CenteredTall = 11,
    RightTall = 12,
    TopWide = 13,
    CenteredWide = 14,
    BottomWide = 15,
    ECreativeDynamicUIAlignment_MAX = 16
};

enum ECreativeDynamicUIAnchor
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    CenterLeft = 3,
    CenterCenter = 4,
    CenterRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    ECreativeDynamicUIAnchor_MAX = 9
};

enum ECreativeDynamicUIAspectRatioType
{
    None = 0,
    AspectRatio_1_1 = 1,
    AspectRatio_4_3 = 2,
    AspectRatio_5_4 = 3,
    AspectRatio_16_9 = 4,
    AspectRatio_16_10 = 5,
    AspectRatio_21_9 = 6,
    ECreativeDynamicUIAspectRatioType_MAX = 7
};

enum ECreativeDynamicUILayoutConstraintType
{
    None = 0,
    Alignment = 1,
    ECreativeDynamicUILayoutConstraintType_MAX = 2
};

enum ECreativeDynamicUISizeModifierType
{
    None = 0,
    Fixed = 1,
    Scale = 2,
    ECreativeDynamicUISizeModifierType_MAX = 3
};

enum ECreativeItemListType
{
    ThemedCollection = 0,
    ItemCollection = 1,
    Device = 2,
    Equipment = 3,
    Expendable = 4,
    Island = 5,
    Hidden = 6,
    None = 7,
    ECreativeItemListType_MAX = 8
};

enum ECreativeKeyLockState
{
    LOCKED = 0,
    UNLOCKED = 1,
    INVALID = 2,
    ECreativeKeyLockState_MAX = 3
};

enum ECreativeLayoutAlignmentOption
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    MiddleLeft = 3,
    Centered = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    CenteredFull = 9,
    LeftTall = 10,
    CenteredTall = 11,
    RightTall = 12,
    TopWide = 13,
    CenteredWide = 14,
    BottomWide = 15,
    ECreativeLayoutAlignmentOption_MAX = 16
};

enum ECreativeLayoutAnchorOption
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    CenterLeft = 3,
    CenterCenter = 4,
    CenterRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    ECreativeLayoutAnchorOption_MAX = 9
};

enum ECreativeLinkPreviewSize
{
    Small = 0,
    Medium = 1,
    Large = 2,
    Extra_Small = 3,
    NUM_SIZES = 4,
    ECreativeLinkPreviewSize_MAX = 5
};

enum ECreativeMannequinAnalyticsInteractType
{
    Equip = 0,
    OpenStore = 1,
    ECreativeMannequinAnalyticsInteractType_MAX = 2
};

enum ECreativeMinimapComponentIconColorType
{
    None = 0,
    White = 1,
    Red = 2,
    Orange = 3,
    Yellow = 4,
    Green = 5,
    Teal = 6,
    Blue = 7,
    Purple = 8,
    ECreativeMinimapComponentIconColorType_MAX = 9
};

enum ECreativeModalBackActionBoundButtonOption
{
    None = 0,
    LastButton = 1,
    Button1 = 2,
    Button2 = 3,
    Button3 = 4,
    Button4 = 5,
    Button5 = 6,
    Button6 = 7,
    ECreativeModalBackActionBoundButtonOption_MAX = 8
};

enum ECreativeModalDialogAlignmentOption
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    MiddleLeft = 3,
    Centered = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    CenteredFull = 9,
    LeftTall = 10,
    CenteredTall = 11,
    RightTall = 12,
    TopWide = 13,
    CenteredWide = 14,
    BottomWide = 15,
    ECreativeModalDialogAlignmentOption_MAX = 16
};

enum ECreativeModalDialogTimerOption
{
    None = 0,
    Countdown = 1,
    ECreativeModalDialogTimerOption_MAX = 2
};

enum ECreativeModalDialogViewmodelResponse
{
    None = 0,
    Button1 = 1,
    Button2 = 2,
    Button3 = 3,
    Button4 = 4,
    Button5 = 5,
    Button6 = 6,
    ECreativeModalDialogViewmodelResponse_MAX = 7
};

enum ECreativeOptionDestructiveActionOperator
{
    Invalid = 0,
    LessThan = 1,
    NotEqual = 2,
    GreaterThan = 3,
    ECreativeOptionDestructiveActionOperator_MAX = 4
};

enum ECreativePersistenceErrorTypes
{
    None = 0,
    VersionError = 1,
    LocalOnly = 2,
    LSRError = 3,
    ECreativePersistenceErrorTypes_MAX = 4
};

enum ECreativePlayerSpawnMethod
{
    Spawner = 0,
    Rift = 1,
    Aircraft = 2,
    ECreativePlayerSpawnMethod_MAX = 3
};

enum ECreativePortalManagerValidityResult
{
    Valid = 0,
    Invalid = 1,
    ECreativePortalManagerValidityResult_MAX = 2
};

enum ECreativePublishError
{
    None = 0,
    RateLimited = 1,
    PlotOverBudget = 2,
    LinkCodeInvalid = 3,
    SanitizationFiltered = 4,
    Other = 5,
    ECreativePublishError_MAX = 6
};

enum ECreativePublishedIslandCodeDisplay
{
    Off = 0,
    ShowWithWatermark = 1,
    ShowWithoutWatermark = 2,
    ECreativePublishedIslandCodeDisplay_MAX = 3
};

enum ECreativeQuestSharing
{
    Individual = 0,
    Team = 1,
    All = 2,
    MAX = 3
};

enum ECreativeQuestStat
{
    None = 0,
    Eliminations = 1,
    Eliminated = 2,
    Score = 3,
    ChestOpened = 4,
    LlamaOpened = 5,
    PlayerRevived = 6,
    PlayerInterrogated = 7,
    RaceCheckpointActivated = 8,
    FishFished = 9,
    WeaponFished = 10,
    PropDestroyed = 11,
    ShieldPotionConsumed = 12,
    DistanceTraveledOnFoot = 13,
    DistanceTraveledInVehicle = 14,
    DistanceTraveledInAir = 15,
    DistanceTraveled = 16,
    RoundCompleted = 17,
    RoundWon = 18,
    GameCompleted = 19,
    GameWon = 20,
    PlayTimeElapsed = 21,
    MAX = 22
};

enum ECreativeQuickbarSlots
{
    Phone = 0,
    Max_None = 1,
    ECreativeQuickbarSlots_MAX = 2
};

enum ECreativeRegisteredPlayerGroups
{
    None = 0,
    RegisteredPlayers = 1,
    NonRegisteredPlayers = 2,
    Everyone = 3,
    ECreativeRegisteredPlayerGroups_MAX = 4
};

enum ECreativeRespawnWaveType
{
    None = 0,
    WaveStartingOnElimination = 1,
    ECreativeRespawnWaveType_MAX = 2
};

enum ECreativeTeamType
{
    TeamIndex = 0,
    None = 1,
    All = 2,
    Any = 3,
    Allies = 4,
    Hostiles = 5,
    Friendlies = 6,
    Enemies = 7,
    Neutral = 8,
    Random = 9,
    DoNotSwitch = 10,
    ActivatingTeam = 11,
    WinningTeam = 12,
    UseGameWinConditions = 13,
    CompletingTeamWins = 14,
    TriggeringPlayer = 15,
    TriggeringTeam = 16,
    Spectating = 17,
    Cooperative = 18,
    FreeForAll = 19,
    Custom = 20,
    SpawnOnNextRound = 21,
    Spawn = 22,
    Spectate = 23,
    ECreativeTeamType_MAX = 24
};

enum ECreativeUITeamColors
{
    Relationship = 0,
    TeamColor = 1,
    ECreativeUITeamColors_MAX = 2
};

enum ECreativeVendingMachineState
{
    DisplayingItem = 0,
    AcceptingItem = 1,
    AcceptedItem = 2,
    RejectedItem = 3,
    ECreativeVendingMachineState_MAX = 4
};

enum ECreativeVersionCompareResult
{
    OlderVersion = 0,
    Equal = 1,
    NewerVersion = 2,
    ECreativeVersionCompareResult_MAX = 3
};

enum ECreativeVideoPlayerFullscreenEffects
{
    None = 0,
    NoCollisionOnly = 1,
    NoDamageOnly = 2,
    NoCollisionAndNoDamage = 3,
    ECreativeVideoPlayerFullscreenEffects_MAX = 4
};

enum ECreatorManagedTeams
{
    Enabled = 0,
    Disabled = 1,
    ECreatorManagedTeams_MAX = 2
};

enum ECreatureManagerAffectedTargets
{
    NewPawnsOnly = 0,
    NewAndExistingPawns = 1,
    ECreatureManagerAffectedTargets_MAX = 2
};

enum ECrewDetailsTag
{
    SeasonLaunchBenefit = 0,
    MonthlyBenefit = 1,
    CrewMonthBenefit = 2,
    AvailableUntilBenefit = 3,
    MonthlySubscription = 4,
    None = 5,
    ECrewDetailsTag_MAX = 6
};

enum ECrewItemShopTileType
{
    None = 0,
    Subscription = 1,
    ProgressiveCosmetic = 2,
    ECrewItemShopTileType_MAX = 3
};

enum ECrewPurchaseButtonState
{
    None = 0,
    Purchase = 1,
    Rejoin = 2,
    Continue = 3,
    ECrewPurchaseButtonState_MAX = 4
};

enum ECrewTileType
{
    None = 0,
    Basic = 1,
    BattlePass = 2,
    CrewPack = 3,
    ProgressiveCosmetic = 4,
    TemporaryItems = 5,
    ECrewTileType_MAX = 6
};

enum ECrossplayPreference
{
    NoSelection = 0,
    OptedIn = 1,
    OptedOut = 2,
    OptedOutRestricted = 3,
    ECrossplayPreference_MAX = 4
};

enum ECrucibleWhitelistOverride
{
    DoNothing = 0,
    ForceOn = 1,
    ForceOff = 2,
    ECrucibleWhitelistOverride_MAX = 3
};

enum ECsgOper
{
    CSG_Active = 0,
    CSG_Add = 1,
    CSG_Subtract = 2,
    CSG_Intersect = 3,
    CSG_Deintersect = 4,
    CSG_None = 5,
    CSG_MAX = 6
};

enum ECubeGridToolAction
{
    NoAction = 0,
    Push = 1,
    Pull = 2,
    Flip = 3,
    SlideForward = 4,
    SlideBack = 5,
    DecreaseGridPower = 6,
    IncreaseGridPower = 7,
    CornerMode = 8,
    ResetFromActor = 9,
    AcceptAndStartNew = 10,
    ECubeGridToolAction_MAX = 11
};

enum ECubeGridToolFaceSelectionMode
{
    OutsideBasedOnNormal = 0,
    InsideBasedOnNormal = 1,
    OutsideBasedOnViewRay = 2,
    InsideBasedOnViewRay = 3,
    ECubeGridToolFaceSelectionMode_MAX = 4
};

enum ECurieEntityType
{
    Invalid = 0,
    Material = 1,
    Element = 2,
    ECurieEntityType_MAX = 3
};

enum ECurieHandlerBehavior
{
    Handler_Add = 0,
    Handler_Replace = 1,
    Handler_MAX = 2
};

enum ECurieHandlerPriority
{
    Priority_1 = 0,
    Priority_2 = 1,
    Priority_3 = 2,
    Priority_4 = 3,
    Priority_5 = 4,
    Priority_6 = 5,
    Priority_7 = 6,
    Priority_8 = 7,
    Priority_9 = 8,
    Priority_10 = 9,
    Priority_Default = 10,
    Priority_MAX = 11
};

enum ECurieManagerComponentPriority
{
    Priority_1 = 0,
    Priority_2 = 1,
    Priority_3 = 2,
    Priority_4 = 3,
    Priority_5 = 4,
    Priority_6 = 5,
    Priority_7 = 6,
    Priority_8 = 7,
    Priority_9 = 8,
    Priority_10 = 9,
    Priority_Default = 10,
    Priority_MAX = 11
};

enum ECurveBlendOption
{
    Override = 0,
    DoNotOverride = 1,
    NormalizeByWeight = 2,
    BlendByWeight = 3,
    UseBasePose = 4,
    UseMaxValue = 5,
    UseMinValue = 6,
    ECurveBlendOption_MAX = 7
};

enum ECurveColor
{
    RED = 0,
    GREEN = 1,
    BLUE = 2,
    ALPHA = 3,
    ECurveColor_MAX = 4
};

enum ECurveFilterSlotMode
{
    Open = 0,
    Closed = 1,
    ECurveFilterSlotMode_MAX = 2
};

enum ECurveTableMode
{
    Empty = 0,
    SimpleCurves = 1,
    RichCurves = 2,
    ECurveTableMode_MAX = 3
};

enum ECustomAttributeBlendType
{
    Override = 0,
    Blend = 1,
    ECustomAttributeBlendType_MAX = 2
};

enum ECustomBoneAttributeLookup
{
    BoneOnly = 0,
    ImmediateParent = 1,
    ParentHierarchy = 2,
    ECustomBoneAttributeLookup_MAX = 3
};

enum ECustomControlsAttackType
{
    None = 0,
    Ranged = 1,
    Melee = 2,
    Throw = 3,
    ECustomControlsAttackType_MAX = 4
};

enum ECustomControlsFacingMode
{
    Movement = 0,
    TwinStick = 1,
    Fixed = 2,
    ECustomControlsFacingMode_MAX = 3
};

enum ECustomControlsLockOnMode
{
    Never = 0,
    Always = 1,
    Shooting = 2,
    Aiming = 3,
    ShootingOrAiming = 4,
    ECustomControlsLockOnMode_MAX = 5
};

enum ECustomControlsTargetingType
{
    None = 0,
    Aiming = 1,
    Windup = 2,
    MeleeLockOn = 3,
    ECustomControlsTargetingType_MAX = 4
};

enum ECustomControlsTwinStickMouseAimMode
{
    TargetCursor = 0,
    DialAiming = 1,
    ECustomControlsTwinStickMouseAimMode_MAX = 2
};

enum ECustomControlsWeaponType
{
    None = 0,
    Ranged = 1,
    Melee = 2,
    Other = 3,
    ECustomControlsWeaponType_MAX = 4
};

enum ECustomDepthStencil
{
    Disabled = 0,
    Enabled = 1,
    EnabledOnDemand = 2,
    EnabledWithStencil = 3,
    ECustomDepthStencil_MAX = 4
};

enum ECustomFeedFilterParticipantNames
{
    NoFiltering = 0,
    AllPlayers = 1,
    ECustomFeedFilterParticipantNames_MAX = 2
};

enum ECustomGameVoiceChannel
{
    Squad = 0,
    FullTeam = 1,
    ECustomGameVoiceChannel_MAX = 2
};

enum ECustomHatType
{
    ECustomHatType_None = 0,
    ECustomHatType_Cap = 1,
    ECustomHatType_Helmet = 2,
    ECustomHatType_Mask = 3,
    ECustomHatType_Hat = 4,
    ECustomHatType_HeadReplacement = 5,
    ECustomHatType_MAX = 6
};

enum ECustomLootSelection
{
    Default = 0,
    SolidGold = 1,
    ECustomLootSelection_MAX = 2
};

enum ECustomMaterialOutputType
{
    CMOT_Float1 = 0,
    CMOT_Float2 = 1,
    CMOT_Float3 = 2,
    CMOT_Float4 = 3,
    CMOT_MaterialAttributes = 4,
    CMOT_MAX = 5
};

enum ECustomNavLinkProcessorResult
{
    Unhandled = 0,
    Success = 1,
    Failure = 2,
    ECustomNavLinkProcessorResult_MAX = 3
};

enum ECustomTimeStepSynchronizationState
{
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ECustomTimeStepSynchronizationState_MAX = 4
};

enum ECustomizableObjectGroupType
{
    COGT_TOGGLE = 0,
    COGT_ALL = 1,
    COGT_ONE = 2,
    COGT_ONE_OR_NONE = 3,
    COGT_MAX = 4
};

enum ECustomizableObjectNumBoneInfluences
{
    Four = 0,
    Eight = 1,
    Twelve = 2,
    ECustomizableObjectNumBoneInfluences_MAX = 3
};

enum ECustomizableObjectProjectorType
{
    Planar = 0,
    Cylindrical = 1,
    Wrapping = 2,
    ECustomizableObjectProjectorType_MAX = 3
};

enum ECustomizableObjectTextureCompression
{
    None = 0,
    Fast = 1,
    HighQuality = 2,
    ECustomizableObjectTextureCompression_MAX = 3
};

enum ECustomizedToolMenuVisibility
{
    None = 0,
    Visible = 1,
    Hidden = 2,
    ECustomizedToolMenuVisibility_MAX = 3
};

enum EDBNOMutatorType
{
    Default = 0,
    On = 1,
    Off = 2,
    Improved = 3,
    EDBNOMutatorType_MAX = 4
};

enum EDBNOPlayStyle
{
    Thirsty = 0,
    Default = 1,
    Passive = 2,
    ThristyButPassiveOnPlayers = 3,
    DefaultButPassiveOnPlayers = 4,
    EDBNOPlayStyle_MAX = 5
};

enum EDBNOType
{
    On = 0,
    Off = 1,
    NotWhenRespawning = 2,
    EDBNOType_MAX = 3
};

enum EDBufferTextureId
{
    DBT_A = 0,
    DBT_B = 1,
    DBT_C = 2,
    DBT_MAX = 3
};

enum EDNADataLayer
{
    None = 0,
    Descriptor = 1,
    Definition = 2,
    Behavior = 3,
    Geometry = 4,
    GeometryWithoutBlendShapes = 5,
    MachineLearnedBehavior = 6,
    All = 7,
    EDNADataLayer_MAX = 8
};

enum EDOFMode
{
    Default = 0,
    SixDOF = 1,
    YZPlane = 2,
    XZPlane = 3,
    XYPlane = 4,
    CustomPlane = 5,
    None = 6,
    EDOFMode_MAX = 7
};

enum EDSSReplayResult
{
    Success = 0,
    FailedJsonParse = 1,
    DataUnavailable = 2,
    InvalidHttpResponse = 3,
    CompressionFailed = 4,
    InvalidPayload = 5,
    Unknown = 6,
    EDSSReplayResult_MAX = 7
};

enum EDadBroHealthType
{
    None = 0,
    Weakpoints = 1,
    Horn = 2,
    Guy = 3,
    EDadBroHealthType_MAX = 4
};

enum EDadBroState
{
    NotYet = 0,
    Initializing = 1,
    Active = 2,
    EDadBroState_MAX = 3
};

enum EDamageCauserType
{
    Undefined = 0,
    Pickaxe = 1,
    RangedWeapon = 2,
    Fire = 3,
    Vehicle = 4,
    Vehicle_Empty = 5,
    IndirectCauser = 6,
    Inactivation = 7,
    EnteringWater = 8,
    ShockwaveMace = 9,
    Katana = 10,
    ForcePower = 11,
    ODMGear = 12,
    EDamageCauserType_MAX = 13
};

enum EDamageModelTypeEnum
{
    Chaos_Damage_Model_UserDefined_Damage_Threshold = 0,
    Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold = 1,
    Chaos_Max = 2
};

enum EDanceBeatSyncMode
{
    Off = 0,
    Tempo = 1,
    Music = 2,
    EDanceBeatSyncMode_MAX = 3
};

enum EDataAssetDirectoryTestEnum
{
    A = 0,
    B = 1,
    C = 2,
    D = 3,
    EDataAssetDirectoryTestEnum_MAX = 4
};

enum EDataAssetDirectoryUpdateStatus
{
    Failed = 0,
    Success = 1,
    SuccessNoChange = 2,
    EDataAssetDirectoryUpdateStatus_MAX = 3
};

enum EDataDrivenEffectRecipient
{
    Player = 0,
    NPC = 1,
    EDataDrivenEffectRecipient_MAX = 2
};

enum EDataDrivenShaderPlatformInfoCondition
{
    COND_True = 0,
    COND_False = 1,
    COND_Max = 2
};

enum EDataLayerLoadFilter
{
    None = 0,
    ClientOnly = 1,
    ServerOnly = 2,
    EDataLayerLoadFilter_MAX = 3
};

enum EDataLayerRuntimeState
{
    Unloaded = 0,
    Loaded = 1,
    Activated = 2,
    EDataLayerRuntimeState_MAX = 3
};

enum EDataLayerState
{
    Unloaded = 0,
    Loaded = 1,
    Activated = 2,
    EDataLayerState_MAX = 3
};

enum EDataLayerType
{
    Runtime = 0,
    Editor = 1,
    Unknown = 2,
    Size = 3,
    EDataLayerType_MAX = 4
};

enum EDataRegistryAcquireStatus
{
    NotStarted = 0,
    WaitingForInitialAcquire = 1,
    InitialAcquireFinished = 2,
    WaitingForResources = 3,
    AcquireFinished = 4,
    AcquireError = 5,
    DoesNotExist = 6,
    EDataRegistryAcquireStatus_MAX = 7
};

enum EDataRegistryAvailability
{
    DoesNotExist = 0,
    Unknown = 1,
    Remote = 2,
    OnDisk = 3,
    LocalAsset = 4,
    PreCached = 5,
    EDataRegistryAvailability_MAX = 6
};

enum EDataRegistrySubsystemGetItemResult
{
    Found = 0,
    NotFound = 1,
    EDataRegistrySubsystemGetItemResult_MAX = 2
};

enum EDataSortTypeEnum
{
    ChaosNiagara_DataSortType_NoSorting = 0,
    ChaosNiagara_DataSortType_RandomShuffle = 1,
    ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
    ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
    ChaosNiagara_Max = 4
};

enum EDataSourceTypeEnum
{
    ChaosNiagara_DataSourceType_Collision = 0,
    ChaosNiagara_DataSourceType_Breaking = 1,
    ChaosNiagara_DataSourceType_Trailing = 2,
    ChaosNiagara_Max = 3
};

enum EDataStreamSendStatus
{
    Send = 0,
    Pause = 1,
    EDataStreamSendStatus_MAX = 2
};

enum EDataValidationResult
{
    Invalid = 0,
    Valid = 1,
    NotValidated = 2,
    EDataValidationResult_MAX = 3
};

enum EDataValidationUsecase
{
    None = 0,
    Manual = 1,
    Commandlet = 2,
    Save = 3,
    PreSubmit = 4,
    Script = 5,
    EDataValidationUsecase_MAX = 6
};

enum EDataflowType
{
    Construction = 0,
    Simulation = 1,
    EDataflowType_MAX = 2
};

enum EDatasmithActorAttachmentRule
{
    KeepRelativeTransform = 0,
    KeepWorldTransform = 1,
    EDatasmithActorAttachmentRule_MAX = 2
};

enum EDatasmithActorRemovalRule
{
    RemoveChildren = 0,
    KeepChildrenAndKeepRelativeTransform = 1,
    EDatasmithActorRemovalRule_MAX = 2
};

enum EDatasmithColorSpace
{
    Default = 0,
    sRGB = 1,
    Linear = 2,
    EDatasmithColorSpace_MAX = 3
};

enum EDatasmithCompletionMode
{
    KeepState = 0,
    RestoreState = 1,
    ProjectDefault = 2,
    EDatasmithCompletionMode_MAX = 3
};

enum EDatasmithKeyValuePropertyType
{
    String = 0,
    Color = 1,
    Float = 2,
    Bool = 3,
    Texture = 4,
    Vector = 5,
    Integer = 6,
    EDatasmithKeyValuePropertyType_MAX = 7
};

enum EDatasmithLightShape
{
    Rectangle = 0,
    Disc = 1,
    Sphere = 2,
    Cylinder = 3,
    None = 4,
    EDatasmithLightShape_MAX = 5
};

enum EDatasmithPropertyCategory
{
    Undefined = 0,
    Generic = 1,
    RelativeLocation = 2,
    RelativeRotation = 3,
    RelativeScale3D = 4,
    Visibility = 5,
    Material = 6,
    Color = 7,
    Option = 8,
    EDatasmithPropertyCategory_MAX = 9
};

enum EDatasmithTextureAddress
{
    Wrap = 0,
    Clamp = 1,
    Mirror = 2,
    EDatasmithTextureAddress_MAX = 3
};

enum EDatasmithTextureFilter
{
    Nearest = 0,
    Bilinear = 1,
    Trilinear = 2,
    Default = 3,
    EDatasmithTextureFilter_MAX = 4
};

enum EDatasmithTextureFormat
{
    PNG = 0,
    JPEG = 1,
    EDatasmithTextureFormat_MAX = 2
};

enum EDatasmithTextureMode
{
    Diffuse = 0,
    Specular = 1,
    Normal = 2,
    NormalGreenInv = 3,
    UNUSED_Displace = 4,
    Other = 5,
    Bump = 6,
    Ies = 7,
    EDatasmithTextureMode_MAX = 8
};

enum EDateType
{
    None = 0,
    Coming = 1,
    Ending = 2,
    EDateType_MAX = 3
};

enum EDayNightCycleMode
{
    Default = 0,
    FixedTime = 1,
    StartAtSpecifiedTime = 2,
    RandomFixedTime = 3,
    RandomStartTime = 4,
    EDayNightCycleMode_MAX = 5
};

enum EDaySequenceModifierBlendMode
{
    None = 0,
    Distance = 1,
    EDaySequenceModifierBlendMode_MAX = 2
};

enum EDeadZoneType
{
    Axial = 0,
    Radial = 1,
    EDeadZoneType_MAX = 2
};

enum EDeathCause
{
    OutsideSafeZone = 0,
    FallDamage = 1,
    Pistol = 2,
    Shotgun = 3,
    Rifle = 4,
    SMG = 5,
    Sniper = 6,
    SniperNoScope = 7,
    Melee = 8,
    InfinityBlade = 9,
    Grenade = 10,
    C4 = 11,
    GrenadeLauncher = 12,
    RocketLauncher = 13,
    Minigun = 14,
    Bow = 15,
    Trap = 16,
    DBNOTimeout = 17,
    Banhammer = 18,
    RemovedFromGame = 19,
    MassiveMelee = 20,
    MassiveDiveBomb = 21,
    MassiveRanged = 22,
    Vehicle = 23,
    ShoppingCart = 24,
    ATK = 25,
    QuadCrasher = 26,
    Biplane = 27,
    BiplaneGun = 28,
    LMG = 29,
    GasGrenade = 30,
    InstantEnvironmental = 31,
    InstantEnvironmentalFellOutOfWorld = 32,
    InstantEnvironmentalUnderLandscape = 33,
    Turret = 34,
    ShipCannon = 35,
    Cube = 36,
    Balloon = 37,
    StormSurge = 38,
    Lava = 39,
    BasicFiend = 40,
    EliteFiend = 41,
    RangedFiend = 42,
    BasicBrute = 43,
    EliteBrute = 44,
    MegaBrute = 45,
    SilentSwitchingToSpectate = 46,
    LoggedOut = 47,
    TeamSwitchSuicide = 48,
    WonMatch = 49,
    Unspecified = 50,
    EDeathCause_MAX = 51
};

enum EDeathCauseReason
{
    SelfInflicted = 0,
    SelfInflictedDBNO = 1,
    Eliminated = 2,
    EliminatedDBNO = 3,
    EDeathCauseReason_MAX = 4
};

enum EDeathFailurePolicy
{
    None = 0,
    FailQuestIfAnyParticipantDies = 1,
    EDeathFailurePolicy_MAX = 2
};

enum EDebugTypeEnum
{
    ChaosNiagara_DebugType_NoDebug = 0,
    ChaosNiagara_DebugType_ColorBySolver = 1,
    ChaosNiagara_DebugType_ColorByParticleIndex = 2,
    ChaosNiagara_Max = 3
};

enum EDebugVehicleFlags
{
    Status = 0,
    Input = 1,
    Controls = 2,
    Shocks = 3,
    Exits = 4,
    Water = 5,
    Wheels = 6,
    Friction = 7,
    AirControl = 8,
    CenterOfMass = 9,
    Gravity = 10,
    Forces = 11,
    Damage = 12,
    Collisions = 13,
    OrientationCorrection = 14,
    BoundarySpline = 15,
    Sleeping = 16,
    Misc = 17,
    LeanBreak = 18,
    LevelOfDetail = 19,
    EDebugVehicleFlags_MAX = 20
};

enum EDecalBlendMode
{
    DBM_Translucent = 0,
    DBM_Stain = 1,
    DBM_Normal = 2,
    DBM_Emissive = 3,
    DBM_DBuffer_ColorNormalRoughness = 4,
    DBM_DBuffer_Color = 5,
    DBM_DBuffer_ColorNormal = 6,
    DBM_DBuffer_ColorRoughness = 7,
    DBM_DBuffer_Normal = 8,
    DBM_DBuffer_NormalRoughness = 9,
    DBM_DBuffer_Roughness = 10,
    DBM_DBuffer_Emissive = 11,
    DBM_DBuffer_AlphaComposite = 12,
    DBM_DBuffer_EmissiveAlphaComposite = 13,
    DBM_Volumetric_DistanceFunction = 14,
    DBM_AlphaComposite = 15,
    DBM_AmbientOcclusion = 16,
    DBM_MAX = 17
};

enum EDecompressionType
{
    DTYPE_Setup = 0,
    DTYPE_Invalid = 1,
    DTYPE_Preview = 2,
    DTYPE_Native = 3,
    DTYPE_RealTime = 4,
    DTYPE_Procedural = 5,
    DTYPE_Xenon = 6,
    DTYPE_Streaming = 7,
    DTYPE_MAX = 8
};

enum EDefaultAnimationMode
{
    UseAnimationBlueprint = 0,
    UseAnimationAsset = 1,
    UseCustomMode = 2,
    EDefaultAnimationMode_MAX = 3
};

enum EDefaultAudioCompressionType
{
    BinkAudio = 0,
    ADPCM = 1,
    PCM = 2,
    Opus = 3,
    PlatformSpecific = 4,
    RADAudio = 5,
    EDefaultAudioCompressionType_MAX = 6
};

enum EDefaultBackBufferPixelFormat
{
    DBBPF_B8G8R8A8 = 0,
    DBBPF_A16B16G16R16_DEPRECATED = 1,
    DBBPF_FloatRGB_DEPRECATED = 2,
    DBBPF_FloatRGBA = 3,
    DBBPF_A2B10G10R10 = 4,
    DBBPF_MAX = 5
};

enum EDefaultCharacterSelection
{
    Random = 0,
    DefaultBase = 1,
    EDefaultCharacterSelection_MAX = 2
};

enum EDefaultStaticMesh
{
    Cube = 0,
    Sphere = 1,
    Cylinder = 2,
    Cone = 3,
    Plane = 4,
    EDefaultStaticMesh_MAX = 5
};

enum EDefenderSpawnFailureReason
{
    None = 0,
    AllPlayerSlotsFull = 1,
    DefendersNotUnlocked = 2,
    CurrentlySimulatingDefender = 3,
    NotOutpostOwner = 4,
    EDefenderSpawnFailureReason_MAX = 5
};

enum EDefensivePlayerStyleSource
{
    Unknown = 0,
    Escape = 1,
    MAX = 2
};

enum EDeimosAnimState
{
    Idle = 0,
    Running = 1,
    Attack = 2,
    Dance = 3,
    Dying = 4,
    Died = 5,
    FullBodyHitReact = 6,
    AdditiveHitReact = 7,
    ActiveIdle = 8,
    Falling = 9,
    Frozen = 10,
    RangedAttack = 11,
    Walking = 12,
    Sprinting = 13,
    EDeimosAnimState_MAX = 14
};

enum EDelMarCheckpointMeshType
{
    Default = 0,
    StartLine = 1,
    FinishLine = 2,
    EDelMarCheckpointMeshType_MAX = 3
};

enum EDelMarDemolishedProcessorInfo
{
    None = 0,
    WithoutDemolish = 1,
    WithDemolish = 2,
    EDelMarDemolishedProcessorInfo_MAX = 3
};

enum EDelMarDriftSteerState
{
    None = 0,
    Controlled = 1,
    DriftBoost = 2,
    Uncontrolled = 3,
    EDelMarDriftSteerState_MAX = 4
};

enum EDelMarFloatOperation
{
    DMFO_Set = 0,
    DMFO_Add = 1,
    DMFO_Subtract = 2,
    DMFO_Multiply = 3,
    DMFO_BaseMultiply = 4,
    DMFO_Divide = 5,
    DMFO_Min = 6,
    DMFO_Max = 7
};

enum EDelMarGlobalLeaderboardType
{
    Top = 0,
    Focused = 1,
    Friend = 2,
    EDelMarGlobalLeaderboardType_MAX = 3
};

enum EDelMarInputInjectionState
{
    FIRST_PRESSED = 0,
    PRESSED = 1,
    RELEASED = 2,
    CANCELLED = 3,
    EDelMarInputInjectionState_MAX = 4
};

enum EDelMarInvertSteerMethod
{
    CeilingAngle = 0,
    CeilingTimeDelay = 1,
    CeilingReleaseInput = 2,
    Never = 3,
    Always = 4,
    EDelMarInvertSteerMethod_MAX = 5
};

enum EDelMarJellyHazardProcessorInfo
{
    None = 0,
    WithoutJellyHazardHit = 1,
    WithJellyHazardHit = 2,
    EDelMarJellyHazardProcessorInfo_MAX = 3
};

enum EDelMarKickflipDirection
{
    None = 0,
    Up = 1,
    Down = 2,
    Left = 3,
    Right = 4,
    UpLeft = 5,
    DownLeft = 6,
    UpRight = 7,
    DownRight = 8,
    EDelMarKickflipDirection_MAX = 9
};

enum EDelMarModifierStackingPolicy
{
    DMSP_Allow = 0,
    DMSP_DontAdd = 1,
    DMSP_ClearOthers = 2,
    DMSP_MAX = 3
};

enum EDelMarNetModel
{
    ClientAuthoritative = 0,
    ChaosRollback = 1,
    EDelMarNetModel_MAX = 2
};

enum EDelMarPhysicsRate
{
    ThirtyHz = 0,
    SixtyHz = 1,
    OneHundredTwentyHz = 2,
    EDelMarPhysicsRate_MAX = 3
};

enum EDelMarPlaylistTypeInfo
{
    Any = 0,
    Casual = 1,
    Ranked = 2,
    EDelMarPlaylistTypeInfo_MAX = 3
};

enum EDelMarPositionChangeInfo
{
    None = 0,
    PassPlayer = 1,
    PassedByPlayer = 2,
    EDelMarPositionChangeInfo_MAX = 3
};

enum EDelMarPostMatchFlows
{
    PlayNowFlow = 0,
    PlayTogetherFlow = 1,
    PlayTrackFlow = 2,
    EDelMarPostMatchFlows_MAX = 3
};

enum EDelMarPostMatchState
{
    WaitingForLocalPlayers = 0,
    WaitingForParty = 1,
    WaitingForLobby = 2,
    StartingNextRace = 3,
    MatchmakingStarted = 4,
    MatchmakingSucceeded = 5,
    MatchmakingFailed = 6,
    MatchmakingCancelled = 7,
    Idle = 8,
    Failed = 9,
    Completed = 10,
    INVALID = 11,
    EDelMarPostMatchState_MAX = 12
};

enum EDelMarPostRaceVote
{
    Unset = 0,
    PlayAgain = 1,
    NextMap = 2,
    MAX = 3
};

enum EDelMarPreviewCameraType
{
    None = 0,
    ZoomIn = 1,
    ZoomOut = 2,
    EDelMarPreviewCameraType_MAX = 3
};

enum EDelMarRaceMode
{
    ChallengeMode = 0,
    CompetitiveMode = 1,
    DeathRaceMode = 2,
    TutorialRaceMode = 3,
    Invalid = 4,
    EDelMarRaceMode_MAX = 5
};

enum EDelMarRaceSpawnMode
{
    SpawnAtMostRecentSplinePoint = 0,
    SpawnAtMostRecentCheckpoint = 1,
    SpawnAtRaceStart = 2,
    NoAutomaticRespawn = 3,
    EDelMarRaceSpawnMode_MAX = 4
};

enum EDelMarRankedProgressError
{
    None = 0,
    MissingRankedComponent = 1,
    RankedComponentSocialUserNotBound = 2,
    RankedComponentUnableToQueryProgress = 3,
    EmptyRankType = 4,
    InitialProgressMapInvalid = 5,
    CurrentProgressMapInvalid = 6,
    InvalidCurrentTrack = 7,
    InitialProgressEntryNotFound = 8,
    CurrentProgressEntryNotFound = 9,
    GameModeNotFound = 10,
    CurrentTierLessThanZero = 11,
    NotEnoughTiersForInitialTier = 12,
    NotEnoughTiersForCurrentTier = 13,
    FailedToFindUnrankedTier = 14,
    UnknownError = 15,
    EDelMarRankedProgressError_MAX = 16
};

enum EDelMarRearAlertVerticalHint
{
    Level = 0,
    Up = 1,
    Down = 2,
    EDelMarRearAlertVerticalHint_MAX = 3
};

enum EDelMarSpeedometerState
{
    Normal = 0,
    SlowingDown = 1,
    BonusSpeed = 2,
    EDelMarSpeedometerState_MAX = 3
};

enum EDelMarSplineGenerationMode
{
    PerSplinePoint = 0,
    UserAmount = 1,
    EDelMarSplineGenerationMode_MAX = 2
};

enum EDelMarSplineMovementType
{
    OneShot = 0,
    Repeat = 1,
    PingPong = 2,
    EDelMarSplineMovementType_MAX = 3
};

enum EDelMarTimerDirection
{
    CountUp = 0,
    CountDown = 1,
    EDelMarTimerDirection_MAX = 2
};

enum EDelMarTouchActionButtonState
{
    None = 0,
    FullyDisabled = 1,
    Disabled = 2,
    Enabled = 3,
    Ready = 4,
    Pressed = 5,
    Supercharged = 6,
    EDelMarTouchActionButtonState_MAX = 7
};

enum EDelMarTouchInputTrackingState
{
    NOT_TRACKING = 0,
    TRACKING_WITH_INJECTION = 1,
    TRACKING_WITHOUT_INJECTION = 2,
    EDelMarTouchInputTrackingState_MAX = 3
};

enum EDelMarTrackOobTubeTransitionType
{
    Default = 0,
    IntoTunnel = 1,
    OutOfTunnel = 2,
    IntoPipe = 3,
    OutOfPipe = 4,
    NoMeshNeeded = 5,
    EDelMarTrackOobTubeTransitionType_MAX = 6
};

enum EDelMarTrackPropPlacementPosition
{
    FromBeginning = 0,
    FromEnding = 1,
    EDelMarTrackPropPlacementPosition_MAX = 2
};

enum EDelMarTrackPropPlacementSpread
{
    UseDistanceBetween = 0,
    UseNumberOfProps = 1,
    UseBothDistanceAndNumber = 2,
    EDelMarTrackPropPlacementSpread_MAX = 3
};

enum EDelMarTrackPropType
{
    None = 0,
    SkeletalMesh = 1,
    StaticMesh = 2,
    Blueprint = 3,
    EDelMarTrackPropType_MAX = 4
};

enum EDelMarTrackRoadPropType
{
    StartLine = 0,
    FinishLine = 1,
    EDelMarTrackRoadPropType_MAX = 2
};

enum EDelMarTrackSide
{
    Neither = 0,
    Left = 1,
    Right = 2,
    Both = 3,
    EDelMarTrackSide_MAX = 4
};

enum EDelMarTrackSnapComponentMode
{
    SetTransform = 0,
    SnapToComponent = 1,
    EDelMarTrackSnapComponentMode_MAX = 2
};

enum EDelMarTrackSplinePointSnapMode
{
    StartingPoint = 0,
    EndingPoint = 1,
    CustomPoint = 2,
    EDelMarTrackSplinePointSnapMode_MAX = 3
};

enum EDelMarTrackType
{
    Primary = 0,
    Secondary = 1,
    Cosmetic = 2,
    EDelMarTrackType_MAX = 3
};

enum EDelMarTurboZoneState
{
    None = 0,
    Visible = 1,
    Failed = 2,
    Active = 3,
    Success = 4,
    Missed = 5,
    EDelMarTurboZoneState_MAX = 6
};

enum EDelMarVehicleBoosterFlags
{
    None = 0,
    Side = 1,
    Down = 2,
    Front = 3,
    Back = 4,
    Left = 5,
    Right = 6,
    All = 7,
    EDelMarVehicleBoosterFlags_MAX = 8
};

enum EDelMarVehicleCollisionOverrideSetting
{
    Disabled = 0,
    Enabled = 1,
    Unset = 2,
    Max = 3
};

enum EDelMarVehicleDriftState
{
    NotDrifting = 0,
    Drifting = 1,
    InitialKick = 2,
    SwapKick = 3,
    ExitVelocity = 4,
    ExitForward = 5,
    ForcedDrift = 6,
    EDelMarVehicleDriftState_MAX = 7
};

enum EDelMarVehicleForwardState
{
    None = 0,
    ForwardAccel = 1,
    Braking = 2,
    Reversing = 3,
    EDelMarVehicleForwardState_MAX = 4
};

enum EDelMarVehicleWheelIndex
{
    FrontLeft = 0,
    FrontRight = 1,
    BackLeft = 2,
    BackRight = 3,
    Num = 4,
    EDelMarVehicleWheelIndex_MAX = 5
};

enum EDelMarWheelAttachPoint
{
    Spin = 0,
    Pivot = 1,
    Contact = 2,
    EDelMarWheelAttachPoint_MAX = 3
};

enum EDelMarWheelMirrorType
{
    Scale = 0,
    Rotate = 1,
    None = 2,
    EDelMarWheelMirrorType_MAX = 3
};

enum EDelayFilterType
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    Num = 3,
    EDelayFilterType_MAX = 4
};

enum EDelayStereoType
{
    Default = 0,
    CustomSpread = 1,
    PingPongForceLR = 2,
    PingPongSum = 3,
    PingPongIndividual = 4,
    Num = 5,
    EDelayStereoType_MAX = 6
};

enum EDelmarDraftingState
{
    NotActive = 0,
    HasTarget = 1,
    GainingSpeed = 2,
    GracePeriod = 3,
    LosingSpeed = 4,
    EDelmarDraftingState_MAX = 5
};

enum EDemoPlayFailure
{
    Generic = 0,
    DemoNotFound = 1,
    Corrupt = 2,
    InvalidVersion = 3,
    InitBase = 4,
    GameSpecificHeader = 5,
    ReplayStreamerInternal = 6,
    LoadMap = 7,
    Serialization = 8,
    EDemoPlayFailure_MAX = 9
};

enum EDeployableBaseBoxType
{
    BuildSpace = 0,
    SaveSpace = 1,
    PlotSpace = 2,
    NumSpaceTypes = 3,
    EDeployableBaseBoxType_MAX = 4
};

enum EDeployableBaseBuildingState
{
    Empty = 0,
    Built = 1,
    Unoccupied = 2,
    WaitingToBuild = 3,
    Building = 4,
    WaitingToDestroy = 5,
    Destroying = 6,
    WaitingToReset = 7,
    Resetting = 8,
    EDeployableBaseBuildingState_MAX = 9
};

enum EDeployableBaseConstructionStatus
{
    Constructing = 0,
    Destroying = 1,
    Finished = 2,
    EDeployableBaseConstructionStatus_MAX = 3
};

enum EDeployableBaseUseType
{
    Neighborhood = 0,
    PvECombat = 1,
    EDeployableBaseUseType_MAX = 2
};

enum EDeployableTurretState
{
    Collapsed = 0,
    Transforming = 1,
    Scanning = 2,
    Tracking = 3,
    Attacking = 4,
    Deactivated = 5,
    WindUp = 6,
    WindDown = 7,
    EDeployableTurretState_MAX = 8
};

enum EDepthOfFieldFunctionValue
{
    TDOF_NearAndFarMask = 0,
    TDOF_NearMask = 1,
    TDOF_FarMask = 2,
    TDOF_CircleOfConfusionRadius = 3,
    TDOF_MAX = 4
};

enum EDepthOfFieldMethod
{
    DOFM_BokehDOF = 0,
    DOFM_Gaussian = 1,
    DOFM_CircleDOF = 2,
    DOFM_MAX = 3
};

enum EDescendantScrollDestination
{
    IntoView = 0,
    TopOrLeft = 1,
    Center = 2,
    BottomOrRight = 3,
    EDescendantScrollDestination_MAX = 4
};

enum EDesiredImageFormat
{
    PNG = 0,
    JPG = 1,
    BMP = 2,
    EXR = 3,
    EDesiredImageFormat_MAX = 4
};

enum EDespawnAIType
{
    Relevancy = 0,
    Distance = 1,
    EDespawnAIType_MAX = 2
};

enum EDestroyActorsAndComponentsMutator_ComponentNameComparisonType
{
    NameEquals = 0,
    NameStartsWith = 1,
    NameContains = 2,
    AdditionalStatNameEquals = 3,
    AdditionalStatNameStartsWith = 4,
    AdditionalStatNameContains = 5,
    EDestroyActorsAndComponentsMutator_MAX = 6
};

enum EDetachmentRule
{
    KeepRelative = 0,
    KeepWorld = 1,
    EDetachmentRule_MAX = 2
};

enum EDetailMode
{
    DM_Low = 0,
    DM_Medium = 1,
    DM_High = 2,
    DM_Epic = 3,
    DM_MAX = 4
};

enum EDeterminismLevel
{
    None = 0,
    NoDeterminism = 1,
    Basic = 2,
    OrderOrthogonal = 3,
    OrderConsistent = 4,
    OrderIndependent = 5,
    Deterministic = 6,
    EDeterminismLevel_MAX = 7
};

enum EDeviceCableActivatedState
{
    Active = 0,
    Dormant = 1,
    EDeviceCableActivatedState_MAX = 2
};

enum EDeviceCableInteractionType
{
    Free = 0,
    StaticOutput = 1,
    EDeviceCableInteractionType_MAX = 2
};

enum EDeviceCableLoadableState
{
    Loadable = 0,
    NotLoadable = 1,
    EDeviceCableLoadableState_MAX = 2
};

enum EDeviceCablePortAnimationSyncType
{
    Follower = 0,
    Authority = 1,
    Independent = 2,
    EDeviceCablePortAnimationSyncType_MAX = 3
};

enum EDeviceCablePortDataType
{
    Scalar = 0,
    Note = 1,
    Audio = 2,
    Texture = 3,
    Mesh = 4,
    Any = 5,
    EDeviceCablePortDataType_MAX = 6
};

enum EDeviceCablePortFlowType
{
    Input = 0,
    Output = 1,
    Any = 2,
    EDeviceCablePortFlowType_MAX = 3
};

enum EDeviceCablePortSelectableState
{
    Selectable = 0,
    Unselectable = 1,
    EDeviceCablePortSelectableState_MAX = 2
};

enum EDeviceFireVolumeFireOption
{
    None = 0,
    UseIslandSettings = 1,
    Yes = 2,
    No = 3,
    EDeviceFireVolumeFireOption_MAX = 4
};

enum EDeviceTrackingFilterType
{
    Undefined = 0,
    Unfiltered = 1,
    WithEventsOrFunctions = 2,
    WithFunctions = 3,
    WithEvents = 4,
    WithOnlyFunctions = 5,
    WithOnlyEvents = 6,
    WithBindings = 7,
    Favorites = 8,
    EDeviceTrackingFilterType_MAX = 9
};

enum EDeviceTrackingSortingType
{
    Undefined = 0,
    Default = 1,
    Alphabetical = 2,
    ReverseAlphabetical = 3,
    Favorites = 4,
    MostBindingsToLeast = 5,
    LeastBindingsToMost = 6,
    EDeviceTrackingSortingType_MAX = 7
};

enum EDialogMarkerInteractionState
{
    Conversation = 0,
    InteractionRange = 1,
    IndicatorRange = 2,
    None = 3,
    EDialogMarkerInteractionState_MAX = 4
};

enum EDirection
{
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Front = 4,
    Back = 5,
    EDirection_MAX = 6
};

enum EDiscoCaptureIconState
{
    None = 0,
    Hidden = 1,
    Neutral = 2,
    AllyCaptured = 3,
    EnemyCaptured = 4,
    EDiscoCaptureIconState_MAX = 5
};

enum EDiscoCaptureProgressState
{
    None = 0,
    AllyProgress = 1,
    EnemyProgress = 2,
    EDiscoCaptureProgressState_MAX = 3
};

enum EDiscoCaptureUIState
{
    None = 0,
    Hidden = 1,
    Dance = 2,
    Capturing = 3,
    Contested = 4,
    EDiscoCaptureUIState_MAX = 5
};

enum EDiscoScoreProgressTypes
{
    None = 0,
    ProgressSoundMild = 1,
    ProgressSoundMedium = 2,
    ProgressSoundStrong = 3,
    CountdownSoundNormal = 4,
    CountdownSoundStrong = 5,
    EDiscoScoreProgressTypes_MAX = 6
};

enum EDiscoverSearchMode
{
    Island = 0,
    Creator = 1,
    Unset = 2,
    EDiscoverSearchMode_MAX = 3
};

enum EDisplaceMeshToolChannelType
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EDisplaceMeshToolChannelType_MAX = 4
};

enum EDisplaceMeshToolDisplaceType
{
    Constant = 0,
    DisplacementMap = 1,
    RandomNoise = 2,
    PerlinNoise = 3,
    SineWave = 4,
    EDisplaceMeshToolDisplaceType_MAX = 5
};

enum EDisplaceMeshToolSubdivisionType
{
    Flat = 0,
    PNTriangles = 1,
    EDisplaceMeshToolSubdivisionType_MAX = 2
};

enum EDisplaceMeshToolTriangleSelectionType
{
    None = 0,
    Material = 1,
    EDisplaceMeshToolTriangleSelectionType_MAX = 2
};

enum EDistanceFieldComputeMode
{
    NarrowBand = 0,
    FullGrid = 1,
    EDistanceFieldComputeMode_MAX = 2
};

enum EDistanceFieldUnits
{
    NumberOfVoxels = 0,
    Distance = 1,
    EDistanceFieldUnits_MAX = 2
};

enum EDistanceMode
{
    DistItemToContext = 0,
    DistItemGoalActorToContext = 1,
    DistItemToItemGoalActor = 2,
    EDistanceMode_MAX = 3
};

enum EDistanceTravelDirection
{
    Any = 0,
    Vertical = 1,
    Horizontal = 2,
    SingleAxis = 3,
    EDistanceTravelDirection_MAX = 4
};

enum EDistanceTravelMode
{
    Any = 0,
    Ballooning = 1,
    Crouch = 2,
    DBNOCarried = 3,
    Driving = 4,
    Falling = 5,
    Floating = 6,
    Flying = 7,
    Goop = 8,
    Grinding = 9,
    Hover = 10,
    Parachuting = 11,
    Passenger = 12,
    RemoteControl_Flying = 13,
    Running = 14,
    Skating = 15,
    SkydiveFollowing = 16,
    SkyDiving = 17,
    Sliding = 18,
    SurfaceSwimming = 19,
    Swimming = 20,
    Ziplining = 21,
    ZipliningOnSpline = 22,
    Sprinting = 23,
    Jumping = 24,
    EDistanceTravelMode_MAX = 25
};

enum EDistortionTypeV1
{
    Clean = 0,
    Warm = 1,
    Dirty = 2,
    Soft = 3,
    Asymmetric = 4,
    Num = 5,
    EDistortionTypeV1_MAX = 6
};

enum EDistortionTypeV2
{
    Clean = 0,
    Warm = 1,
    Clip = 2,
    Soft = 3,
    Asymmetric = 4,
    Cruncher = 5,
    CaptCrunch = 6,
    Rectifier = 7,
    Num = 8,
    EDistortionTypeV2_MAX = 9
};

enum EDistributionVectorLockFlags
{
    EDVLF_None = 0,
    EDVLF_XY = 1,
    EDVLF_XZ = 2,
    EDVLF_YZ = 3,
    EDVLF_XYZ = 4,
    EDVLF_MAX = 5
};

enum EDistributionVectorMirrorFlags
{
    EDVMF_Same = 0,
    EDVMF_Different = 1,
    EDVMF_Mirror = 2,
    EDVMF_MAX = 3
};

enum EDoghouseControlMode
{
    GroundControls = 0,
    AirControls = 1,
    MaxCount = 2,
    EDoghouseControlMode_MAX = 3
};

enum EDoorOpenStyle
{
    Open = 0,
    SlamOpen = 1,
    SmashOpen = 2,
    Close = 3,
    EDoorOpenStyle_MAX = 4
};

enum EDoughnutFillingSetting
{
    CeilingAngle = 0,
    CeilingTimeDelay = 1,
    CeilingReleaseInput = 2,
    Never = 3,
    Always = 4,
    EDoughnutFillingSetting_MAX = 5
};

enum EDragPivot
{
    MouseDown = 0,
    TopLeft = 1,
    TopCenter = 2,
    TopRight = 3,
    CenterLeft = 4,
    CenterCenter = 5,
    CenterRight = 6,
    BottomLeft = 7,
    BottomCenter = 8,
    BottomRight = 9,
    EDragPivot_MAX = 10
};

enum EDrawDebugItemType
{
    DirectionalArrow = 0,
    Sphere = 1,
    Line = 2,
    OnScreenMessage = 3,
    CoordinateSystem = 4,
    Point = 5,
    Circle = 6,
    Cone = 7,
    InWorldMessage = 8,
    Capsule = 9,
    EDrawDebugItemType_MAX = 10
};

enum EDrawDebugTrace
{
    None = 0,
    ForOneFrame = 1,
    ForDuration = 2,
    Persistent = 3,
    EDrawDebugTrace_MAX = 4
};

enum EDrawPolyPathExtrudeDirection
{
    SelectionNormal = 0,
    WorldX = 1,
    WorldY = 2,
    WorldZ = 3,
    LocalX = 4,
    LocalY = 5,
    LocalZ = 6,
    EDrawPolyPathExtrudeDirection_MAX = 7
};

enum EDrawPolyPathExtrudeMode
{
    Flat = 0,
    Fixed = 1,
    Interactive = 2,
    RampFixed = 3,
    RampInteractive = 4,
    EDrawPolyPathExtrudeMode_MAX = 5
};

enum EDrawPolyPathRadiusMode
{
    Fixed = 0,
    Interactive = 1,
    EDrawPolyPathRadiusMode_MAX = 2
};

enum EDrawPolyPathWidthMode
{
    Fixed = 0,
    Interactive = 1,
    EDrawPolyPathWidthMode_MAX = 2
};

enum EDrawPolygonDrawMode
{
    Freehand = 0,
    Circle = 1,
    Square = 2,
    Rectangle = 3,
    RoundedRectangle = 4,
    Ring = 5,
    EDrawPolygonDrawMode_MAX = 6
};

enum EDrawPolygonExtrudeMode
{
    Flat = 0,
    Fixed = 1,
    Interactive = 2,
    EDrawPolygonExtrudeMode_MAX = 3
};

enum EDrivenBoneModificationMode
{
    AddToInput = 0,
    ReplaceComponent = 1,
    AddToRefPose = 2,
    EDrivenBoneModificationMode_MAX = 3
};

enum EDrivenDestinationMode
{
    Bone = 0,
    MorphTarget = 1,
    MaterialParameter = 2,
    EDrivenDestinationMode_MAX = 3
};

enum EDroneFacingLocationMode
{
    NotFacingLocation = 0,
    FindingPoint = 1,
    TrackingPoint = 2,
    EDroneFacingLocationMode_MAX = 3
};

enum EDroneFocusActorMode
{
    NoActor = 0,
    FindingActor = 1,
    TrackingActor = 2,
    EDroneFocusActorMode_MAX = 3
};

enum EDroneFollowMode
{
    None = 0,
    ForceFacingLocation = 1,
    ForceFacingFollowedPlayer = 2,
    TetherToFollowedPlayer = 3,
    MAX = 4
};

enum EDrumMidiNoteEvent
{
    None = 0,
    KickHit_RightFoot = 1,
    HiHatPedalUp_LeftFoot = 2,
    SnareHit_LeftHand = 3,
    SnareHit_RightHand = 4,
    HiHatHit_LeftHand = 5,
    HiHatHit_RightHand = 6,
    Percussion_RightHand = 7,
    Crash1HardHit_LeftHand = 8,
    Crash1SoftHit_LeftHand = 9,
    Crash1Hardhit_RightHand = 10,
    Crash1SoftHit_RightHand = 11,
    Crash2HardHit_RightHand = 12,
    Crash2SoftHit_RightHand = 13,
    Crash1Choke = 14,
    Crash2Choke = 15,
    RideCymbalHit_RightHand = 16,
    RideCymbalHit_LeftHand = 17,
    Crash2Hit_LeftHand = 18,
    Crash2SoftHit_LeftHand = 19,
    Tom1Hit_LeftHand = 20,
    Tom1Hit_RightHand = 21,
    Tom2Hit_LeftHand = 22,
    Tom2Hit_RightHand = 23,
    FloorTomHit_LeftHand = 24,
    FloorTomHit_RightHand = 25,
    SticksHeld = 26,
    SnareHit_LeftHand_Soft = 27,
    SnareHit_RightHand_Soft = 28,
    EDrumMidiNoteEvent_MAX = 29
};

enum EDrumMidiTextEvent
{
    None = 0,
    PlayingMellow = 1,
    PlayingStandard = 2,
    PlayingIntense = 3,
    IdleRhythmMellow = 4,
    IdleRhythmStandard = 5,
    IdleRhythmIntense = 6,
    IdleRealtime = 7,
    Pickup = 8,
    EDrumMidiTextEvent_MAX = 9
};

enum EDualWeaponHand
{
    LEFT = 0,
    RIGHT = 1,
    MAX = 2
};

enum EDuelState
{
    Started = 0,
    Won = 1,
    Lost = 2,
    EDuelState_MAX = 3
};

enum EDynamicBackgroudKey
{
    Lobby = 0,
    Vault = 1,
    Max_None = 2,
    EDynamicBackgroudKey_MAX = 3
};

enum EDynamicBoxType
{
    Horizontal = 0,
    Vertical = 1,
    Wrap = 2,
    VerticalWrap = 3,
    Radial = 4,
    Overlay = 5,
    EDynamicBoxType_MAX = 6
};

enum EDynamicBuildingPlacementType
{
    CountsTowardsBounds = 0,
    DestroyIfColliding = 1,
    DestroyAnythingThatCollides = 2,
    EDynamicBuildingPlacementType_MAX = 3
};

enum EDynamicDestructionResourceType
{
    Invalid = 0,
    Wood = 1,
    Stone = 2,
    Metal = 3,
    Foliage = 4,
    Unused_5 = 5,
    Unused_6 = 6,
    Unused_7 = 7,
    Unused_8 = 8,
    EDynamicDestructionResourceType_MAX = 9
};

enum EDynamicEntryPatternDirection
{
    FirstToLast = 0,
    LastToFirst = 1,
    EDynamicEntryPatternDirection_MAX = 2
};

enum EDynamicForceFeedbackAction
{
    Start = 0,
    Update = 1,
    Stop = 2,
    EDynamicForceFeedbackAction_MAX = 3
};

enum EDynamicFoundationEnabledState
{
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
    EDynamicFoundationEnabledState_MAX = 3
};

enum EDynamicFoundationType
{
    Static = 0,
    StartEnabled_Stationary = 1,
    StartEnabled_Dynamic = 2,
    StartDisabled = 3,
    EDynamicFoundationType_MAX = 4
};

enum EDynamicGlobalIlluminationMethod
{
    None = 0,
    Lumen = 1,
    ScreenSpace = 2,
    Plugin = 3,
    EDynamicGlobalIlluminationMethod_MAX = 4
};

enum EDynamicMeshAttributeChangeFlags
{
    Unknown = 0,
    MeshTopology = 1,
    VertexPositions = 2,
    NormalsTangents = 3,
    VertexColors = 4,
    UVs = 5,
    TriangleGroups = 6,
    EDynamicMeshAttributeChangeFlags_MAX = 7
};

enum EDynamicMeshChangeType
{
    GeneralEdit = 0,
    MeshChange = 1,
    MeshReplacementChange = 2,
    MeshVertexChange = 3,
    DeformationEdit = 4,
    AttributeEdit = 5,
    EDynamicMeshChangeType_MAX = 6
};

enum EDynamicMeshComponentColorOverrideMode
{
    None = 0,
    VertexColors = 1,
    Polygroups = 2,
    Constant = 3,
    EDynamicMeshComponentColorOverrideMode_MAX = 4
};

enum EDynamicMeshComponentDistanceFieldMode
{
    NoDistanceField = 0,
    AsyncCPUDistanceField = 1,
    EDynamicMeshComponentDistanceFieldMode_MAX = 2
};

enum EDynamicMeshComponentRenderUpdateMode
{
    NoUpdate = 0,
    FullUpdate = 1,
    FastUpdate = 2,
    EDynamicMeshComponentRenderUpdateMode_MAX = 3
};

enum EDynamicMeshComponentTangentsMode
{
    NoTangents = 0,
    AutoCalculated = 1,
    ExternallyProvided = 2,
    Default = 3,
    EDynamicMeshComponentTangentsMode_MAX = 4
};

enum EDynamicMeshDrawPath
{
    DynamicDraw = 0,
    StaticDraw = 1,
    EDynamicMeshDrawPath_MAX = 2
};

enum EDynamicMeshSculptBrushType
{
    Move = 0,
    PullKelvin = 1,
    PullSharpKelvin = 2,
    Smooth = 3,
    Offset = 4,
    SculptView = 5,
    SculptMax = 6,
    Inflate = 7,
    ScaleKelvin = 8,
    Pinch = 9,
    TwistKelvin = 10,
    Flatten = 11,
    Plane = 12,
    PlaneViewAligned = 13,
    FixedPlane = 14,
    Resample = 15,
    LastValue = 16,
    EDynamicMeshSculptBrushType_MAX = 17
};

enum EDynamicMeshVertexColorTransformMode
{
    NoTransform = 0,
    LinearToSRGB = 1,
    SRGBToLinear = 2,
    EDynamicMeshVertexColorTransformMode_MAX = 3
};

enum EDynamicSoundOverride
{
    Cue = 0,
    Wave = 1,
    Class = 2,
    EDynamicSoundOverride_MAX = 3
};

enum EDynamicUIAnchor
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    CenterLeft = 3,
    CenterCenter = 4,
    CenterRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    MAX = 9
};

enum EDynamicUIAspectRatioType
{
    AspectRatio_1_1 = 0,
    AspectRatio_4_3 = 1,
    AspectRatio_5_4 = 2,
    AspectRatio_16_9 = 3,
    AspectRatio_16_10 = 4,
    AspectRatio_21_9 = 5,
    Custom = 6,
    EDynamicUIAspectRatioType_MAX = 7
};

enum EDynamicUIDebugDisplayMode
{
    Hide = 0,
    ShowSelected = 1,
    ShowAll = 2,
    EDynamicUIDebugDisplayMode_MAX = 3
};

enum EDynamicUISizeMatch
{
    Both = 0,
    Width = 1,
    Height = 2,
    EDynamicUISizeMatch_MAX = 3
};

enum EDynamicUIStrength
{
    Weak = 0,
    Medium = 1,
    Strong = 2,
    Required = 3,
    EDynamicUIStrength_MAX = 4
};

enum EDynamicUIUnallowLayerComparison
{
    Equal = 0,
    NotEqual = 1,
    Less = 2,
    LessOrEqual = 3,
    Greater = 4,
    GreaterOrEqual = 5,
    EDynamicUIUnallowLayerComparison_MAX = 6
};

enum EDynamicUIUnallowedBehavior
{
    Hide = 0,
    Collapse = 1,
    Destroy = 2,
    EDynamicUIUnallowedBehavior_MAX = 3
};

enum EDynamicUIZOrder
{
    Back = 0,
    Middle = 1,
    Front = 2,
    Custom = 3,
    CustomMin = 4,
    CustomMax = 5,
    Loading = 6,
    Top = 7,
    EDynamicUIZOrder_MAX = 8
};

enum EDynamicXpCalibrationPhase
{
    None = 0,
    DataGathering = 1,
    DataAnalysis = 2,
    LiveXpOnceApproved = 3,
    LiveXp = 4,
    Failed = 5,
    EDynamicXpCalibrationPhase_MAX = 6
};

enum EDynamicXpReportingStatus
{
    NotSet = 0,
    Creative = 1,
    VkPlayXps = 2,
    VkPlayDisabled = 3,
    VkPlayXpsNotAvail = 4,
    VkPlayXpsNoData = 5,
    VkPlayXpsPlayerNotCached = 6,
    VkPlayXpsUpdateFailed = 7,
    EDynamicXpReportingStatus_MAX = 8
};

enum EEQSActorSpawnerSpawnType
{
    Actor = 0,
    AIPawn = 1,
    Pickup = 2,
    EEQSActorSpawnerSpawnType_MAX = 3
};

enum EEQSActorSpawnerStopSpawningReason
{
    Success = 0,
    ManualStop = 1,
    Requeued = 2,
    RanOutOfRetries = 3,
    EEQSActorSpawnerStopSpawningReason_MAX = 4
};

enum EEQSActorSpawnerTriggerType
{
    Manual = 0,
    SafeZoneState = 1,
    EEQSActorSpawnerTriggerType_MAX = 2
};

enum EEQSNormalizationType
{
    Absolute = 0,
    RelativeToScores = 1,
    EEQSNormalizationType_MAX = 2
};

enum EEarlyZPass
{
    None = 0,
    OpaqueOnly = 1,
    OpaqueAndMasked = 2,
    Auto = 3,
    EEarlyZPass_MAX = 4
};

enum EEasingFunc
{
    Linear = 0,
    Step = 1,
    SinusoidalIn = 2,
    SinusoidalOut = 3,
    SinusoidalInOut = 4,
    EaseIn = 5,
    EaseOut = 6,
    EaseInOut = 7,
    ExpoIn = 8,
    ExpoOut = 9,
    ExpoInOut = 10,
    CircularIn = 11,
    CircularOut = 12,
    CircularInOut = 13,
    EEasingFunc_MAX = 14
};

enum EEasingFuncType
{
    Linear = 0,
    Sinusoidal = 1,
    Cubic = 2,
    QuadraticInOut = 3,
    CubicInOut = 4,
    HermiteCubic = 5,
    QuarticInOut = 6,
    QuinticInOut = 7,
    CircularIn = 8,
    CircularOut = 9,
    CircularInOut = 10,
    ExpIn = 11,
    ExpOut = 12,
    ExpInOut = 13,
    CustomCurve = 14,
    EEasingFuncType_MAX = 15
};

enum EEdGraphPinDirection
{
    EGPD_Input = 0,
    EGPD_Output = 1,
    EGPD_MAX = 2
};

enum EEdgeLoopInsertionMode
{
    Retriangulate = 0,
    PlaneCut = 1,
    EEdgeLoopInsertionMode_MAX = 2
};

enum EEdgeLoopPositioningMode
{
    Even = 0,
    ProportionOffset = 1,
    DistanceOffset = 2,
    EEdgeLoopPositioningMode_MAX = 3
};

enum EEditAutoConfirmation
{
    None = 0,
    Edit = 1,
    Reset = 2,
    Both = 3,
    EEditAutoConfirmation_MAX = 4
};

enum EEditMeshPolygonsToolActions
{
    NoAction = 0,
    AcceptCurrent = 1,
    CancelCurrent = 2,
    Extrude = 3,
    PushPull = 4,
    Offset = 5,
    Inset = 6,
    Outset = 7,
    BevelFaces = 8,
    InsertEdge = 9,
    InsertEdgeLoop = 10,
    Complete = 11,
    PlaneCut = 12,
    Merge = 13,
    Delete = 14,
    CutFaces = 15,
    RecalculateNormals = 16,
    FlipNormals = 17,
    Retriangulate = 18,
    Decompose = 19,
    Disconnect = 20,
    Duplicate = 21,
    CollapseEdge = 22,
    WeldEdges = 23,
    StraightenEdge = 24,
    FillHole = 25,
    BridgeEdges = 26,
    ExtrudeEdges = 27,
    BevelEdges = 28,
    SimplifyAlongEdges = 29,
    PlanarProjectionUV = 30,
    SimplifyByGroups = 31,
    RegenerateExtraCorners = 32,
    PokeSingleFace = 33,
    SplitSingleEdge = 34,
    FlipSingleEdge = 35,
    CollapseSingleEdge = 36,
    BevelAuto = 37,
    EEditMeshPolygonsToolActions_MAX = 38
};

enum EEditMeshPolygonsToolSelectionMode
{
    Faces = 0,
    Edges = 1,
    Vertices = 2,
    Loops = 3,
    Rings = 4,
    FacesEdgesVertices = 5,
    EEditMeshPolygonsToolSelectionMode_MAX = 6
};

enum EEditPivotSnapDragRotationMode
{
    Ignore = 0,
    Align = 1,
    AlignFlipped = 2,
    LastValue = 3,
    EEditPivotSnapDragRotationMode_MAX = 4
};

enum EEditPivotToolActions
{
    NoAction = 0,
    Center = 1,
    Bottom = 2,
    Top = 3,
    Left = 4,
    Right = 5,
    Front = 6,
    Back = 7,
    WorldOrigin = 8,
    EEditPivotToolActions_MAX = 9
};

enum EEliminationKillType
{
    Player = 0,
    NPC = 1,
    Wildlife = 2,
    EEliminationKillType_MAX = 3
};

enum EEmissionPatternTypeEnum
{
    Chaos_Emission_Pattern_First_Frame = 0,
    Chaos_Emission_Pattern_On_Demand = 1,
    Chaos_Max = 2
};

enum EEmitterDynamicParameterValue
{
    EDPV_UserSet = 0,
    EDPV_AutoSet = 1,
    EDPV_VelocityX = 2,
    EDPV_VelocityY = 3,
    EDPV_VelocityZ = 4,
    EDPV_VelocityMag = 5,
    EDPV_MAX = 6
};

enum EEmitterNormalsMode
{
    ENM_CameraFacing = 0,
    ENM_Spherical = 1,
    ENM_Cylindrical = 2,
    ENM_MAX = 3
};

enum EEmitterRenderMode
{
    ERM_Normal = 0,
    ERM_Point = 1,
    ERM_Cross = 2,
    ERM_LightsOnly = 3,
    ERM_None = 4,
    ERM_MAX = 5
};

enum EEncampmentRole
{
    Guard = 0,
    Build = 1,
    Count = 2,
    EEncampmentRole_MAX = 3
};

enum EEncounterMobSpawnType
{
    VolumeBased = 0,
    StaticPointBased = 1,
    EEncounterMobSpawnType_MAX = 2
};

enum EEncounterSuccessState
{
    Passed = 0,
    Failed = 1,
    Any = 2,
    EEncounterSuccessState_MAX = 3
};

enum EEndOfMatchQuestCategoryType
{
    Completed = 0,
    InProgress = 1,
    EEndOfMatchQuestCategoryType_MAX = 2
};

enum EEndOfMatchReason
{
    LastManStanding = 0,
    ScoreReached = 1,
    TimeRanOut = 2,
    WinEventOccurred = 3,
    AllLoggedOut = 4,
    AllEliminated = 5,
    EEndOfMatchReason_MAX = 6
};

enum EEndPlayReason
{
    Destroyed = 0,
    LevelTransition = 1,
    EndPlayInEditor = 2,
    RemovedFromWorld = 3,
    Quit = 4,
    EEndPlayReason_MAX = 5
};

enum EEntityActorReplicationOverrideType
{
    AutoReplication = 0,
    DoNotReplicate = 1,
    ReplicateAlways = 2,
    Static_Spatial = 3,
    Dynamic_Spatial = 4,
    Dormancy_Spatial = 5,
    EEntityActorReplicationOverrideType_MAX = 6
};

enum EEntityActorReplicationRelevancyBucketType
{
    UseVisualCullDistanceForReplicationRelevancy = 0,
    SmallReplicationRelevancy = 1,
    MediumReplicationRelevancy = 2,
    LargeReplicationRelevancy = 3,
    MaxTargetRangeReplicationRelevancy = 4,
    ImportantReplicationRelevancy = 5,
    CustomReplicationRelevancy = 6,
    EEntityActorReplicationRelevancyBucketType_MAX = 7
};

enum EEntityEndPlayReason
{
    RemoveFromWorld = 0,
    RemoveFromEntity = 1,
    Destroy = 2,
    EEntityEndPlayReason_MAX = 3
};

enum EEntityNotificationState
{
    Created = 0,
    Initializing = 1,
    Initialized = 2,
    AddingToScene = 3,
    AddedToScene = 4,
    BeginningSimulation = 5,
    BeganSimulation = 6,
    EndingSimulation = 7,
    EndedSimulation = 8,
    RemovingFromScene = 9,
    RemovedFromScene = 10,
    Uninitializing = 11,
    Uninitialized = 12,
    TearingDown = 13,
    TearedDown = 14,
    ClientDenied = 15,
    Disposing = 16,
    Disposed = 17,
    ReInstantiated = 18,
    RemovingChild = 19,
    EEntityNotificationState_MAX = 20
};

enum EEntityProxyFeature
{
    Selection = 0,
    PropertyChanges = 1,
    Duplication = 2,
    CopyPaste = 3,
    Deletion = 4,
    DetailsPanel = 5,
    Outliner = 6,
    SelectionRender = 7,
    UndoRedo = 8,
    Gizmo = 9,
    Groups = 10,
    Naming = 11,
    ActorFactory = 12,
    Sync = 13,
    Transform = 14,
    _Reserved = 15,
    EEntityProxyFeature_MAX = 16
};

enum EEnumColumnCellValueComparison
{
    MatchEqual = 0,
    MatchNotEqual = 1,
    MatchAny = 2,
    Modulus = 3,
    EEnumColumnCellValueComparison_MAX = 4
};

enum EEnvDirection
{
    TwoPoints = 0,
    Rotation = 1,
    EEnvDirection_MAX = 2
};

enum EEnvOverlapShape
{
    Box = 0,
    Sphere = 1,
    Capsule = 2,
    EEnvOverlapShape_MAX = 3
};

enum EEnvQueryHightlightMode
{
    All = 0,
    Best5Pct = 1,
    Best25Pct = 2,
    EEnvQueryHightlightMode_MAX = 3
};

enum EEnvQueryParam
{
    Float = 0,
    Int = 1,
    Bool = 2,
    EEnvQueryParam_MAX = 3
};

enum EEnvQueryRunMode
{
    SingleResult = 0,
    RandomBest5Pct = 1,
    RandomBest25Pct = 2,
    AllMatching = 3,
    EEnvQueryRunMode_MAX = 4
};

enum EEnvQueryStatus
{
    Processing = 0,
    Success = 1,
    Failed = 2,
    Aborted = 3,
    OwnerLost = 4,
    MissingParam = 5,
    EEnvQueryStatus_MAX = 6
};

enum EEnvQueryTestClamping
{
    None = 0,
    SpecifiedValue = 1,
    FilterThreshold = 2,
    EEnvQueryTestClamping_MAX = 3
};

enum EEnvQueryTrace
{
    None = 0,
    Navigation = 1,
    GeometryByChannel = 2,
    GeometryByProfile = 3,
    NavigationOverLedges = 4,
    EEnvQueryTrace_MAX = 5
};

enum EEnvTestCost
{
    Low = 0,
    Medium = 1,
    High = 2,
    EEnvTestCost_MAX = 3
};

enum EEnvTestDistance
{
    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    DistanceAbsoluteZ = 3,
    EEnvTestDistance_MAX = 4
};

enum EEnvTestDot
{
    Dot3D = 0,
    Dot2D = 1,
    EEnvTestDot_MAX = 2
};

enum EEnvTestFilterOperator
{
    AllPass = 0,
    AnyPass = 1,
    EEnvTestFilterOperator_MAX = 2
};

enum EEnvTestFilterType
{
    Minimum = 0,
    Maximum = 1,
    Range = 2,
    Match = 3,
    EEnvTestFilterType_MAX = 4
};

enum EEnvTestPathfinding
{
    PathExist = 0,
    PathCost = 1,
    PathLength = 2,
    EEnvTestPathfinding_MAX = 3
};

enum EEnvTestPurpose
{
    Filter = 0,
    Score = 1,
    FilterAndScore = 2,
    EEnvTestPurpose_MAX = 3
};

enum EEnvTestScoreEquation
{
    Linear = 0,
    Square = 1,
    InverseLinear = 2,
    SquareRoot = 3,
    Constant = 4,
    EEnvTestScoreEquation_MAX = 5
};

enum EEnvTestScoreOperator
{
    AverageScore = 0,
    MinScore = 1,
    MaxScore = 2,
    Multiply = 3,
    EEnvTestScoreOperator_MAX = 4
};

enum EEnvTestWeight
{
    None = 0,
    Square = 1,
    Inverse = 2,
    Unused = 3,
    Constant = 4,
    Skip = 5,
    EEnvTestWeight_MAX = 6
};

enum EEnvTraceShape
{
    Line = 0,
    Box = 1,
    Sphere = 2,
    Capsule = 3,
    EEnvTraceShape_MAX = 4
};

enum EEnvelopeFollowerPeakMode
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    EEnvelopeFollowerPeakMode_MAX = 4
};

enum EEnvironmentDamageFilter
{
    Off = 0,
    PlayerBuiltOnly = 1,
    All = 2,
    EEnvironmentDamageFilter_MAX = 3
};

enum EEnvironmentalItemEndReason
{
    None = 0,
    PlayerExit = 1,
    PlayerDeath = 2,
    ObjectDestroyed = 3,
    EEnvironmentalItemEndReason_MAX = 4
};

enum EEpicLeaderboardDataType
{
    Integer = 0,
    Double = 1,
    EEpicLeaderboardDataType_MAX = 2
};

enum EEpicLeaderboardTimeWindow
{
    Daily = 0,
    Weekly = 1,
    Monthly = 2,
    AllTime = 3,
    EEpicLeaderboardTimeWindow_MAX = 4
};

enum EEpicLeaderboardUpdateFunction
{
    Min = 0,
    Max = 1,
    Sum = 2,
    MostRecent = 3
};

enum EEpicMediaPriorityType
{
    Primary = 0,
    Secondary = 1,
    Music = 2,
    EEpicMediaPriorityType_MAX = 3
};

enum EEpicMediaScheduleRepeat
{
    None = 0,
    Hourly = 1,
    Daily = 2,
    EEpicMediaScheduleRepeat_MAX = 3
};

enum EEquipItemLimitHitBehaviour
{
    UnequipLeastRecentlyUsed = 0,
    Block = 1,
    EEquipItemLimitHitBehaviour_MAX = 2
};

enum EEquippedWeaponDisplay
{
    None = 0,
    Resource = 1,
    Magazine = 2,
    Utility = 3,
    Chargeable = 4,
    EEquippedWeaponDisplay_MAX = 5
};

enum EEulerRotationOrder
{
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
    EEulerRotationOrder_MAX = 6
};

enum EEvaluateCurveTableResult
{
    RowFound = 0,
    RowNotFound = 1,
    EEvaluateCurveTableResult_MAX = 2
};

enum EEvaluationMethod
{
    Static = 0,
    Swept = 1,
    EEvaluationMethod_MAX = 2
};

enum EEvaluatorDataSource
{
    EDS_SourcePose = 0,
    EDS_DestinationPose = 1,
    EDS_MAX = 2
};

enum EEvaluatorMode
{
    EM_Standard = 0,
    EM_Freeze = 1,
    EM_DelayedFreeze = 2,
    EM_MAX = 3
};

enum EEvasiveManeuverType
{
    Crouch = 0,
    Dodge = 1,
    Jump = 2,
    JetpackStrafe = 3,
    None = 4,
    EEvasiveManeuverType_MAX = 5
};

enum EEventBubblingRule
{
    None = 0,
    Down = 1,
    Up = 2,
    EEventBubblingRule_MAX = 3
};

enum EEventMatchScreen
{
    None = 0,
    MatchStatus = 1,
    Scoreboard = 2,
    EEventMatchScreen_MAX = 3
};

enum EEventResponderEventType
{
    OneShotEvent = 0,
    PersistentEventJoinInProgress = 1,
    PersistentEventStart = 2,
    PersistentEventChange = 3,
    PersistentEventEnd = 4,
    EEventResponderEventType_MAX = 5
};

enum EEventScreenRewardPreviewType
{
    None = 0,
    RewardTrack = 1,
    SpecialItem = 2,
    SpecialPremiumItem = 3,
    EEventScreenRewardPreviewType_MAX = 4
};

enum EEventScreenView
{
    None = 0,
    LandingPage = 1,
    RewardPreview = 2,
    MoreInfo = 3,
    PurchaseLevels = 4,
    PurchasePremiumTrack = 5,
    LoadError = 6,
    EEventScreenView_MAX = 7
};

enum EEventTokenType
{
    Invite = 0,
    Creation = 1,
    EEventTokenType_MAX = 2
};

enum EEventTournamentRound
{
    Open = 0,
    Qualifiers = 1,
    SemiFinals = 2,
    Finals = 3,
    Unknown = 4,
    Arena = 5,
    EEventTournamentRound_MAX = 6
};

enum EEventTournamentType
{
    Online = 0,
    Onsite = 1,
    Test = 2,
    Unknown = 3,
    EEventTournamentType_MAX = 4
};

enum EExecutionStatus
{
    ExecutionError = 0,
    ExecutionDenied = 1,
    ExecutionSuccess = 2,
    ExecutionPending = 3,
    ExecutionAllowed = 4,
    EExecutionStatus_MAX = 5
};

enum EExitCraftState
{
    None = 0,
    Spawned = 1,
    Landed = 2,
    SpawnBalloon = 3,
    GettingIntoPosition = 4,
    GettingIntoPosition_Simple = 5,
    WaitingForPawns = 6,
    Exiting = 7,
    EExitCraftState_MAX = 8
};

enum EExperimentBucket
{
    Baseline = 0,
    Variation1 = 1,
    NotInExperiment = 2,
    EExperimentBucket_MAX = 3
};

enum EExternalAccountType
{
    None = 0,
    Facebook = 1,
    Google = 2,
    Epic_PSN = 3,
    Epic_XBL = 4,
    Epic_Erebus = 5,
    Epic_Facebook = 6,
    Epic_Google = 7,
    Epic_Portal = 8,
    EExternalAccountType_MAX = 9
};

enum EExtractCollisionOutputType
{
    Simple = 0,
    Complex = 1,
    EExtractCollisionOutputType_MAX = 2
};

enum EExtrudeMeshSelectionInteractionMode
{
    Interactive = 0,
    Fixed = 1,
    EExtrudeMeshSelectionInteractionMode_MAX = 2
};

enum EExtrudeMeshSelectionRegionModifierMode
{
    OriginalShape = 0,
    FlattenToPlane = 1,
    RaycastToPlane = 2,
    EExtrudeMeshSelectionRegionModifierMode_MAX = 3
};

enum EEyeTrackerStatus
{
    NotConnected = 0,
    NotTracking = 1,
    Tracking = 2,
    EEyeTrackerStatus_MAX = 3
};

enum EFBIKBoneLimitType
{
    Free = 0,
    Limit = 1,
    Locked = 2,
    EFBIKBoneLimitType_MAX = 3
};

enum EFCRP_LoopBehavior
{
    StopAtEnd = 0,
    PingPong = 1,
    WrapAround = 2,
    EFCRP_MAX = 3
};

enum EFFTPeakInterpolationMethod
{
    NearestNeighbor = 0,
    Linear = 1,
    Quadratic = 2,
    ConstantQ = 3,
    EFFTPeakInterpolationMethod_MAX = 4
};

enum EFFTSize
{
    DefaultSize = 0,
    Min = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    VeryLarge = 5,
    Max = 6
};

enum EFFTWindowType
{
    None = 0,
    Hamming = 1,
    Hann = 2,
    Blackman = 3,
    EFFTWindowType_MAX = 4
};

enum EFMDeviceCableAnimationQuality
{
    High = 0,
    Med = 1,
    Low = 2,
    EFMDeviceCableAnimationQuality_MAX = 3
};

enum EFMDeviceCablePortComponentAllowMultipleConnections
{
    NoPreference = 0,
    ForceMultiple = 1,
    ForceSingle = 2,
    EFMDeviceCablePortComponentAllowMultipleConnections_MAX = 3
};

enum EFMDeviceCableWildcardOrderingState
{
    Inactive = 0,
    Pending = 1,
    Active = 2,
    EFMDeviceCableWildcardOrderingState_MAX = 3
};

enum EFMJamLoopType
{
    Lead = 0,
    Misc = 1,
    Bass = 2,
    Beat = 3,
    Num = 4,
    EFMJamLoopType_MAX = 5
};

enum EFMJamSongCatalogSortDirection
{
    Ascending = 0,
    Descending = 1,
    Num = 2,
    EFMJamSongCatalogSortDirection_MAX = 3
};

enum EFMJamSongCatalogSortMethod
{
    Artist = 0,
    Title = 1,
    Year = 2,
    Num = 3,
    EFMJamSongCatalogSortMethod_MAX = 4
};

enum EFNEVolumeShapeTypeEnum
{
    BoxVolume = 0,
    CylinderVolume = 1,
    SphereVolume = 2,
    CustomVolume = 3,
    EFNEVolumeShapeTypeEnum_MAX = 4
};

enum EFNE_UIBlockInstantTransitionState
{
    Invalid = 0,
    InstantEnabled = 1,
    InstantDisabled = 2,
    InstantSelected = 3,
    InstantDeselected = 4,
    InstantLocked = 5,
    InstantUnlocked = 6,
    EFNE_MAX = 7
};

enum EFNE_UIBlockVisualState
{
    Invalid = 0,
    Hovered = 1,
    Unhovered = 2,
    Focused = 3,
    Unfocused = 4,
    Pressed = 5,
    Released = 6,
    Disabled = 7,
    Enabled = 8,
    Selected = 9,
    DeselectedIdle = 10,
    DeselectedFocused = 11,
    EFNE_MAX = 12
};

enum EFOVScalingType
{
    Standard = 0,
    UE4_BackCompat = 1,
    EFOVScalingType_MAX = 2
};

enum EFXType
{
    GenericAnimNotify = 0,
    TrailAnimNotify = 1,
    WeaponImpactEffect = 2,
    WeaponMeleeImpactEffect = 3,
    Contrail = 4,
    Emote = 5,
    Trap = 6,
    Skin = 7,
    Glider = 8,
    Vehicle = 9,
    BackpackBling = 10,
    Water = 11,
    LootChest = 12,
    EnvironmentalAmbient = 13,
    WeaponRangedBeam = 14,
    WeaponBulletShells = 15,
    WeaponMuzzleFlashes = 16,
    PickAxe = 17,
    Curie = 18,
    Projectile = 19,
    Land = 20,
    EFXType_MAX = 21
};

enum EFabricCloneTransformBehavior
{
    None = 0,
    Uniform = 1,
    Stepped = 2,
    SteppedCentered = 3,
    SteppedExponential = 4,
    EFabricCloneTransformBehavior_MAX = 5
};

enum EFabricContinuousInteractionDirection
{
    Vertical = 0,
    Horizontal = 1,
    EFabricContinuousInteractionDirection_MAX = 2
};

enum EFabricFloatProviderType
{
    Continuous = 0,
    Instantaneous = 1,
    EFabricFloatProviderType_MAX = 2
};

enum EFabricInteractableType
{
    Momentary = 0,
    Continuous = 1,
    Cable = 2,
    None = 3,
    EFabricInteractableType_MAX = 4
};

enum EFabricInteractionToolStates
{
    Equipped = 0,
    HoveredControl = 1,
    HoveredValidCablePort = 2,
    HoveredInvalid = 3,
    ContinuousSelected = 4,
    MomentarySelected = 5,
    CableSelected = 6,
    None = 7,
    EFabricInteractionToolStates_MAX = 8
};

enum EFabricIslandSettingsMemoryModeType
{
    Cables = 0,
    SequencerSquares = 1,
    TopperVFX = 2,
    EFabricIslandSettingsMemoryModeType_MAX = 3
};

enum EFabricMetaSoundPatchWrapperQuality
{
    High = 0,
    Low = 1,
    EFabricMetaSoundPatchWrapperQuality_MAX = 2
};

enum EFabricMetaSoundPinDirection
{
    Input = 0,
    Output = 1,
    EFabricMetaSoundPinDirection_MAX = 2
};

enum EFabricMetasoundClock
{
    Metronome = 0,
    MidiTempoMap = 1,
    EFabricMetasoundClock_MAX = 2
};

enum EFabricMetasoundInputType
{
    ModulatedUserOption = 0,
    NonModulatedUserOption = 1,
    DirectInput = 2,
    EFabricMetasoundInputType_MAX = 3
};

enum EFabricMetasoundMusicEventPriority
{
    AboveEmotes = 0,
    BelowEmotes = 1,
    EFabricMetasoundMusicEventPriority_MAX = 2
};

enum EFabricMetasoundPlayPriority
{
    Normal = 0,
    High = 1,
    Highest = 2,
    EFabricMetasoundPlayPriority_MAX = 3
};

enum EFabricMetasoundPlayState
{
    Playing = 0,
    Rebuilding = 1,
    Paused = 2,
    Stopped = 3,
    EFabricMetasoundPlayState_MAX = 4
};

enum EFabricMetasoundPlayStrategy
{
    Delayed = 0,
    Instant = 1,
    EFabricMetasoundPlayStrategy_MAX = 2
};

enum EFabricMetasoundUtilityLoadedBroadcastBy
{
    Never = 0,
    UtilityPatchAsyncLoad = 1,
    LiveUpdateGraphInit = 2,
    AddMusicProviderPatch = 3,
    AddTempoClockProviderPatch = 4,
    AddMetronomeClockPatch = 5,
    AddHarmonixTransportPatch = 6,
    EFabricMetasoundUtilityLoadedBroadcastBy_MAX = 7
};

enum EFabricMidiPlayerLoopType
{
    None = 0,
    MidiLength = 1,
    SequenceLength = 2,
    EFabricMidiPlayerLoopType_MAX = 3
};

enum EFabricNoteStyle
{
    Straight = 0,
    Triplet = 1,
    Dotted = 2,
    EFabricNoteStyle_MAX = 3
};

enum EFabricSongSyncClockState
{
    Playing = 0,
    WillRestartInitiator = 1,
    WillRestartFollower = 2,
    EFabricSongSyncClockState_MAX = 3
};

enum EFabricSongSyncControlTempoState
{
    Disabled = 0,
    Enabled = 1,
    Active = 2,
    Blocked = 3,
    EFabricSongSyncControlTempoState_MAX = 4
};

enum EFabricSongSyncPlaybackType
{
    ControlsTempo = 0,
    FromCurrentTime = 1,
    FromStart = 2,
    EFabricSongSyncPlaybackType_MAX = 3
};

enum EFabricSongSyncTimingType
{
    Immediate = 0,
    NextBeat = 1,
    NextBar = 2,
    EFabricSongSyncTimingType_MAX = 3
};

enum EFabricUserOptionConversionType
{
    Linear = 0,
    Exponential = 1,
    Lookup = 2,
    EFabricUserOptionConversionType_MAX = 3
};

enum EFabricUserOptionType
{
    Boolean = 0,
    Integer = 1,
    Float = 2,
    String = 3,
    Enum = 4,
    None = 5,
    EFabricUserOptionType_MAX = 6
};

enum EFabricValueSetterTransitionTiming
{
    Immediate = 0,
    NextBeat = 1,
    NextBar = 2,
    NextPhrase = 3,
    EFabricValueSetterTransitionTiming_MAX = 4
};

enum EFabricWaveShape
{
    Sine = 0,
    Triangle = 1,
    Saw = 2,
    Square = 3,
    RandomStepped = 4,
    RandomSmooth = 5,
    EFabricWaveShape_MAX = 6
};

enum EFabricWaveSyncType
{
    Free = 0,
    BeatSync = 1,
    EFabricWaveSyncType_MAX = 2
};

enum EFakeKillRelevancyPlayerKillStep
{
    Initiated = 0,
    BlueprintNotified = 1,
    VisualsPerformed = 2,
    EFakeKillRelevancyPlayerKillStep_MAX = 3
};

enum EFastArraySerializerDeltaFlags
{
    None = 0,
    HasBeenSerialized = 1,
    HasDeltaBeenRequested = 2,
    IsUsingDeltaSerialization = 3,
    EFastArraySerializerDeltaFlags_MAX = 4
};

enum EFieldConnectResult
{
    NoConnection = 0,
    Rejection = 1,
    FixedConnection = 2,
    FreeConnection = 3,
    HingeConnection = 4,
    CardanConnection = 5,
    BallConnection = 6,
    PrismaticConnection = 7,
    CylindricalConnection = 8,
    PrismaticAPerpendicularHingeConnection = 9,
    PrismaticBPerpendicularHingeConnection = 10,
    ConnectResultMax = 11,
    FirstConnection = 12,
    LastConnection = 13,
    EFieldConnectResult_MAX = 14
};

enum EFieldCullingOperationType
{
    Field_Culling_Inside = 0,
    Field_Culling_Outside = 1,
    Field_Culling_Operation_Max = 2,
    Field_Culling_MAX = 3
};

enum EFieldFalloffType
{
    Field_FallOff_None = 0,
    Field_Falloff_Linear = 1,
    Field_Falloff_Inverse = 2,
    Field_Falloff_Squared = 3,
    Field_Falloff_Logarithmic = 4,
    Field_Falloff_Max = 5
};

enum EFieldFilterType
{
    Field_Filter_Dynamic = 0,
    Field_Filter_Kinematic = 1,
    Field_Filter_Static = 2,
    Field_Filter_All = 3,
    Field_Filter_Sleeping = 4,
    Field_Filter_Disabled = 5,
    Field_Filter_Max = 6
};

enum EFieldIntegerType
{
    Integer_DynamicState = 0,
    Integer_ActivateDisabled = 1,
    Integer_CollisionGroup = 2,
    Integer_PositionAnimated = 3,
    Integer_PositionStatic = 4,
    Integer_TargetMax = 5,
    Integer_MAX = 6
};

enum EFieldObjectType
{
    Field_Object_Rigid = 0,
    Field_Object_Cloth = 1,
    Field_Object_Destruction = 2,
    Field_Object_Character = 3,
    Field_Object_All = 4,
    Field_Object_Max = 5
};

enum EFieldOperationType
{
    Field_Multiply = 0,
    Field_Divide = 1,
    Field_Add = 2,
    Field_Substract = 3,
    Field_Operation_Max = 4
};

enum EFieldOutputType
{
    Field_Output_Vector = 0,
    Field_Output_Scalar = 1,
    Field_Output_Integer = 2,
    Field_Output_Max = 3
};

enum EFieldPhysicsDefaultFields
{
    Field_RadialIntMask = 0,
    Field_RadialFalloff = 1,
    Field_UniformVector = 2,
    Field_RadialVector = 3,
    Field_RadialVectorFalloff = 4,
    Field_EFieldPhysicsDefaultFields_Max = 5
};

enum EFieldPhysicsType
{
    Field_None = 0,
    Field_DynamicState = 1,
    Field_LinearForce = 2,
    Field_ExternalClusterStrain = 3,
    Field_Kill = 4,
    Field_LinearVelocity = 5,
    Field_AngularVelociy = 6,
    Field_AngularTorque = 7,
    Field_InternalClusterStrain = 8,
    Field_DisableThreshold = 9,
    Field_SleepingThreshold = 10,
    Field_PositionStatic = 11,
    Field_PositionAnimated = 12,
    Field_PositionTarget = 13,
    Field_DynamicConstraint = 14,
    Field_CollisionGroup = 15,
    Field_ActivateDisabled = 16,
    Field_InitialLinearVelocity = 17,
    Field_InitialAngularVelocity = 18,
    Field_LinearImpulse = 19,
    Field_PhysicsType_Max = 20
};

enum EFieldPositionType
{
    Field_Position_CenterOfMass = 0,
    Field_Position_PivotPoint = 1,
    Field_Position_Max = 2
};

enum EFieldResolutionType
{
    Field_Resolution_Minimal = 0,
    Field_Resolution_DisabledParents = 1,
    Field_Resolution_Maximum = 2,
    Field_Resolution_Max = 3
};

enum EFieldScalarType
{
    Scalar_ExternalClusterStrain = 0,
    Scalar_Kill = 1,
    Scalar_DisableThreshold = 2,
    Scalar_SleepingThreshold = 3,
    Scalar_InternalClusterStrain = 4,
    Scalar_DynamicConstraint = 5,
    Scalar_TargetMax = 6,
    Scalar_MAX = 7
};

enum EFieldVectorType
{
    Vector_LinearForce = 0,
    Vector_LinearVelocity = 1,
    Vector_AngularVelocity = 2,
    Vector_AngularTorque = 3,
    Vector_PositionTarget = 4,
    Vector_InitialLinearVelocity = 5,
    Vector_InitialAngularVelocity = 6,
    Vector_LinearImpulse = 7,
    Vector_TargetMax = 8,
    Vector_MAX = 9
};

enum EFillSuggestion
{
    None = 0,
    Fill = 1,
    NoFill = 2,
    EFillSuggestion_MAX = 3
};

enum EFilterInterpolationType
{
    BSIT_Average = 0,
    BSIT_Linear = 1,
    BSIT_Cubic = 2,
    BSIT_EaseInOut = 3,
    BSIT_ExponentialDecay = 4,
    BSIT_SpringDamper = 5,
    BSIT_MAX = 6
};

enum EFilterType
{
    All = 0,
    Party = 1,
    EFilterType_MAX = 2
};

enum EFinalBlowAllowance
{
    WhenPassingFilter = 0,
    Always = 1,
    Never = 2,
    EFinalBlowAllowance_MAX = 3
};

enum EFireEventsAtPosition
{
    AtStartOfEvaluation = 0,
    AtEndOfEvaluation = 1,
    AfterSpawn = 2,
    EFireEventsAtPosition_MAX = 3
};

enum EFireModeType
{
    Unset = 0,
    TapToShoot = 1,
    FireButton = 2,
    AutoFire = 3,
    ForceTouch = 4,
    Custom = 5,
    MAX = 6
};

enum EFixedFoveationLevels
{
    Disabled = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    HighTop = 4,
    EFixedFoveationLevels_MAX = 5
};

enum EFlagStatus
{
    FlagPresent = 0,
    FlagNotPresent = 1,
    EFlagStatus_MAX = 2
};

enum EFlareProfileType
{
    SinMode = 0,
    SinSquaredMode = 1,
    TriangleMode = 2,
    EFlareProfileType_MAX = 3
};

enum EFlattenCurveMethod
{
    DoNotFlatten = 0,
    ToBestFitPlane = 1,
    AlongX = 2,
    AlongY = 3,
    AlongZ = 4,
    EFlattenCurveMethod_MAX = 5
};

enum EFlightSpeedPresetOverride
{
    FlightSpeed0 = 0,
    FlightSpeed1 = 1,
    FlightSpeed2 = 2,
    FlightSpeed3 = 3,
    FlightSpeed4 = 4,
    FlightSpeed5 = 5,
    FlightSpeed6 = 6,
    EFlightSpeedPresetOverride_MAX = 7
};

enum EFlipbookCollisionMode
{
    NoCollision = 0,
    FirstFrameCollision = 1,
    EachFrameCollision = 2,
    EFlipbookCollisionMode_MAX = 3
};

enum EFloatRangeType
{
    Linear = 0,
    Exponential = 1,
    EFloatRangeType_MAX = 2
};

enum EFloorPatternType
{
    None = 0,
    DefaultPiece = 1,
    LPiece = 2,
    HalfPiece = 3,
    DiagonalPiece = 4,
    CornerPiece = 5,
    EFloorPatternType_MAX = 6
};

enum EFlowDirectionPreference
{
    Inherit = 0,
    Culture = 1,
    LeftToRight = 2,
    RightToLeft = 3,
    EFlowDirectionPreference_MAX = 4
};

enum EFlowRiderElement
{
    AutoReadyUp = 0,
    Button_NextMatch = 1,
    Button_PlayWithNewTeam = 2,
    Button_PlayWithNewSquad = 3,
    Button_ReadyUp = 4,
    EFlowRiderElement_MAX = 5
};

enum EFlowState
{
    NotExecuted = 0,
    InProgress = 1,
    Success = 2,
    SuccessWithWarnings = 3,
    Canceled = 4,
    Failed = 5,
    EFlowState_MAX = 6
};

enum EFocusCause
{
    Mouse = 0,
    Navigation = 1,
    SetDirectly = 2,
    Cleared = 3,
    OtherWidgetLostFocus = 4,
    WindowActivate = 5,
    EFocusCause_MAX = 6
};

enum EFocusingBehavior
{
    FocusCurrentTarget = 0,
    IgnoreThreatAfterTimer = 1,
    IgnoreThreatAlways = 2,
    IgnoreThreatToFlee = 3,
    LookAtInvestigate = 4,
    LookAtAmbush = 5,
    LookAtHeardSound = 6,
    LookAtScanAround = 7,
    LookAtScanAroundOnly = 8,
    Invalid = 9,
    EFocusingBehavior_MAX = 10
};

enum EFoliageScaling
{
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    LockXZ = 3,
    LockYZ = 4,
    EFoliageScaling_MAX = 5
};

enum EFollicleMaskChannel
{
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    EFollicleMaskChannel_MAX = 4
};

enum EFontCacheType
{
    Offline = 0,
    Runtime = 1,
    EFontCacheType_MAX = 2
};

enum EFontDPI
{
    Standard = 0,
    Unreal = 1,
    Custom = 2,
    EFontDPI_MAX = 3
};

enum EFontHinting
{
    Default = 0,
    Auto = 1,
    AutoLight = 2,
    Monochrome = 3,
    None = 4,
    EFontHinting_MAX = 5
};

enum EFontImportCharacterSet
{
    FontICS_Default = 0,
    FontICS_Ansi = 1,
    FontICS_Symbol = 2,
    FontICS_MAX = 3
};

enum EFontLayoutMethod
{
    Metrics = 0,
    BoundingBox = 1,
    EFontLayoutMethod_MAX = 2
};

enum EFontLoadingPolicy
{
    LazyLoad = 0,
    Stream = 1,
    Inline = 2,
    EFontLoadingPolicy_MAX = 3
};

enum EFontRasterizationMode
{
    Bitmap = 0,
    Msdf = 1,
    Sdf = 2,
    SdfApproximation = 3,
    EFontRasterizationMode_MAX = 4
};

enum EFootPlacementLockType
{
    Unlocked = 0,
    PivotAroundBall = 1,
    PivotAroundAnkle = 2,
    LockRotation = 3,
    EFootPlacementLockType_MAX = 4
};

enum EForLockerCategorySlotPriority
{
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    EForLockerCategorySlotPriority_MAX = 3
};

enum EForceKickAfterDeathMode
{
    Disabled = 0,
    KickAll = 1,
    KickPrivate = 2,
    EForceKickAfterDeathMode_MAX = 3
};

enum EForcedIntroTextDisplayState
{
    Initialized = 0,
    WaitingForPlaylistPlugin = 1,
    WaitingForMatchmakingStartTime = 2,
    InitialDelay = 3,
    Matchmaking = 4,
    Success = 5,
    Failure = 6,
    EForcedIntroTextDisplayState_MAX = 7
};

enum EFormatArgumentType
{
    Int = 0,
    UInt = 1,
    Float = 2,
    Double = 3,
    Text = 4,
    Gender = 5,
    EFormatArgumentType_MAX = 6
};

enum EFormatStyle
{
    Percentage = 0,
    Raw = 1,
    EFormatStyle_MAX = 2
};

enum EForstStateTreeFireWeaponBehavior
{
    HoldFire = 0,
    HoldFireForPattern = 1,
    FireSingleAndSucceed = 2,
    FireSingleAndRun = 3,
    EForstStateTreeFireWeaponBehavior_MAX = 4
};

enum EFortAIDirectorEvent
{
    PlayerAIEnemies = 0,
    PlayerTakeDamage = 1,
    PlayerHealth = 2,
    PlayerDeath = 3,
    PlayerLookAtAIEnemy = 4,
    PlayerDamageAIEnemy = 5,
    PlayerKillAIEnemy = 6,
    PlayerHealingPotential = 7,
    PlayerAmmoLight = 8,
    PlayerAmmoMedium = 9,
    PlayerAmmoHeavy = 10,
    PlayerAmmoShells = 11,
    PlayerAmmoEnergy = 12,
    PlayerAINear = 13,
    PlayerMovement = 14,
    ObjectiveTakeDamage = 15,
    ObjectiveHealth = 16,
    ObjectiveDestroyed = 17,
    TrapFired = 18,
    TrapDamagedAIEnemy = 19,
    ObjectivePathCost = 20,
    PlayerPathCost = 21,
    ObjectiveNearbyBuildingDamaged = 22,
    Max_None = 23,
    EFortAIDirectorEvent_MAX = 24
};

enum EFortAIDirectorEventContribution
{
    Increment = 0,
    Set = 1,
    EFortAIDirectorEventContribution_MAX = 2
};

enum EFortAIDirectorEventParticipant
{
    Target = 0,
    Source = 1,
    Either = 2,
    Max_None = 3,
    EFortAIDirectorEventParticipant_MAX = 4
};

enum EFortAIDirectorFactor
{
    PlayerDamageThreat = 0,
    ObjectiveDamageThreat = 1,
    ObjectivePathCost = 2,
    PlayerPathCost = 3,
    PlayerMovement = 4,
    TrapsEffective = 5,
    PlayerWander = 6,
    NearbyEnemyPresence = 7,
    OffensiveResources = 8,
    DefensiveResources = 9,
    Boredom = 10,
    ArtilleryVulnerability = 11,
    Max_None = 12,
    EFortAIDirectorFactor_MAX = 13
};

enum EFortAIDirectorFactorContribution
{
    Direct = 0,
    Inverse = 1,
    EFortAIDirectorFactorContribution_MAX = 2
};

enum EFortAILODLevel
{
    Invalid = 0,
    MIN = 1,
    Dormant = 2,
    BelowLower = 3,
    Lower = 4,
    AboveLower = 5,
    BelowNormal = 6,
    Normal = 7,
    AboveNormal = 8,
    MAX = 9
};

enum EFortAILevelRatingDisplayType
{
    DisplayRatingBasedOnDifficulty = 0,
    DisplayAIDifficultyAsRating = 1,
    DontDisplayRating = 2,
    EFortAILevelRatingDisplayType_MAX = 3
};

enum EFortAIPawnGender
{
    FAPG_Default = 0,
    FAPG_Female = 1,
    FAPG_Male = 2,
    FAPG_MAX = 3
};

enum EFortAIUtility
{
    KillPlayersMelee = 0,
    KillPlayersRanged = 1,
    KillPlayersArtillery = 2,
    DestroyBuildingsMelee = 3,
    DestroyBuildingsRanged = 4,
    DestroyBuildingsArtillery = 5,
    DestroyTraps = 6,
    Tank = 7,
    Infiltrate = 8,
    Mob = 9,
    Support = 10,
    Kiting = 11,
    AreaOfDenial = 12,
    DisableTraps = 13,
    Dormant = 14,
    Assassin = 15,
    MAX = 16
};

enum EFortAIWaveProgressSection
{
    SectionOne = 0,
    SectionTwo = 1,
    Max_None = 2,
    EFortAIWaveProgressSection_MAX = 3
};

enum EFortAIWeaponUsage
{
    NoWeaponUsage = 0,
    UsesRangedWeapon = 1,
    UsesMeleeWeapon = 2,
    EFortAIWeaponUsage_MAX = 3
};

enum EFortAbilityChargeState
{
    None = 0,
    ChargingUp = 1,
    MaxCharge = 2,
    Discharge = 3,
    ChargingDown = 4,
    EFortAbilityChargeState_MAX = 5
};

enum EFortAbilityCostSource
{
    Stamina = 0,
    Durability = 1,
    AmmoMagazine = 2,
    AmmoPrimary = 3,
    Item = 4,
    EFortAbilityCostSource_MAX = 5
};

enum EFortAbilityTargetDataPolicy
{
    ReplicateToServer = 0,
    SimulateOnServer = 1,
    EFortAbilityTargetDataPolicy_MAX = 2
};

enum EFortAbilityTargetSelectionUsage
{
    BothTargetingAndCanHit = 0,
    OnlyTargeting = 1,
    OnlyCanHit = 2,
    EFortAbilityTargetSelectionUsage_MAX = 3
};

enum EFortAbilityTargetingSource
{
    Camera = 0,
    PawnForward = 1,
    PawnTowardsFocus = 2,
    WeaponForward = 3,
    WeaponTowardsFocus = 4,
    Custom = 5,
    Max_None = 6,
    EFortAbilityTargetingSource_MAX = 7
};

enum EFortAbilityTask_PlayContextualAnimMode
{
    StartContextualAnim = 0,
    TransitionContextualAnim = 1,
    EFortAbilityTask_MAX = 2
};

enum EFortAccoladeSource
{
    Mission = 0,
    Quest = 1,
    EFortAccoladeSource_MAX = 2
};

enum EFortAccoladeSubtype
{
    NotSet = 0,
    Action = 1,
    Discovery = 2,
    XpToken = 3,
    EFortAccoladeSubtype_MAX = 4
};

enum EFortAccoladeTierType
{
    None = 0,
    Tier1 = 1,
    Tier2 = 2,
    Tier3 = 3,
    EFortAccoladeTierType_MAX = 4
};

enum EFortAccoladeType
{
    Acknowledgement = 0,
    Accolade = 1,
    Medal = 2,
    EFortAccoladeType_MAX = 3
};

enum EFortAccountLinkingUIConfig
{
    Disabled = 0,
    Default = 1,
    ExternalViewerOnly = 2,
    FullExternal = 3,
    EFortAccountLinkingUIConfig_MAX = 4
};

enum EFortActivityBrowserTagType
{
    Default = 0,
    EpicOriginal = 1,
    SquadSize = 2,
    MaxPlayers = 3,
    XP = 4,
    PurchaseRequired = 5,
    DownloadRequired = 6,
    LinkCategory = 7,
    EFortActivityBrowserTagType_MAX = 8
};

enum EFortActivityContextFeedbackReason
{
    None = 0,
    PartyLargerThanTeam = 1,
    EFortActivityContextFeedbackReason_MAX = 2
};

enum EFortActivityDetailsModalExitPath
{
    Undefined = 0,
    Discover = 1,
    Lobby = 2,
    Creator = 3,
    Attributions = 4,
    MAX_NUM = 5,
    EFortActivityDetailsModalExitPath_MAX = 6
};

enum EFortActivityIsLockedReason
{
    None = 0,
    AgeRating = 1,
    K3SAllowCreateSetting = 2,
    K3SOtherSetting = 3,
    EFortActivityIsLockedReason_MAX = 4
};

enum EFortActivityLinkCategory
{
    None = 0,
    LEGO = 1,
    RocketRacing = 2,
    FallGuys = 3,
    EFortActivityLinkCategory_MAX = 4
};

enum EFortActivityLockStatus
{
    Locked = 0,
    Unlocked = 1,
    EFortActivityLockStatus_MAX = 2
};

enum EFortActivityLockStatusReason
{
    None = 0,
    RatingThreshold = 1,
    Override = 2,
    Legacy = 3,
    Invalidated = 4,
    Unrated = 5,
    FailedToCheckContentGating = 6,
    EFortActivityLockStatusReason_MAX = 7
};

enum EFortActivityValidationResult
{
    NotFound = 0,
    InvalidKeyTooShort = 1,
    InvalidKeyCharacters = 2,
    IneligibleParty = 3,
    IslandPrivate = 4,
    Success = 5,
    EFortActivityValidationResult_MAX = 6
};

enum EFortActorIndicatorContainerWidget
{
    Top = 0,
    Middle = 1,
    Bottom = 2,
    EFortActorIndicatorContainerWidget_MAX = 3
};

enum EFortActorSpawnerAuthority
{
    ServerAuthoritative = 0,
    ClientAuthoritative = 1,
    EFortActorSpawnerAuthority_MAX = 2
};

enum EFortActorTemplateCostUpdateMethod
{
    Latest = 0,
    Smallest = 1,
    OnlyNew = 2,
    Double = 3,
    EFortActorTemplateCostUpdateMethod_MAX = 4
};

enum EFortAllowBackgroundAudioSetting
{
    Off = 0,
    NotificationsOnly = 1,
    AllSounds = 2,
    Num = 3,
    EFortAllowBackgroundAudioSetting_MAX = 4
};

enum EFortAllowCosmeticStreaming
{
    CodeSet_Enabled = 0,
    CodeSet_Disabled = 1,
    UserSet_Enabled = 2,
    UserSet_Disabled = 3,
    Default = 4,
    EFortAllowCosmeticStreaming_MAX = 5
};

enum EFortAllowDownloadHighResMipsBehavior
{
    Disabled_Permanent = 0,
    Disabled_Temp = 1,
    Enabled = 2,
    EFortAllowDownloadHighResMipsBehavior_MAX = 3
};

enum EFortAlteration
{
    AttributeSlot = 0,
    GameplaySlot = 1,
    ComplexCosmeticSlot = 2,
    UserPickedCosmeticSlot = 3,
    ColorSlot = 4,
    HeroSpecializationTier1Slot = 5,
    HeroSpecializationTier2Slot = 6,
    HeroSpecializationTier3Slot = 7,
    HeroSpecializationTier4Slot = 8,
    HeroSpecializationTier5Slot = 9,
    EFortAlteration_MAX = 10
};

enum EFortAlterationOptionType
{
    Upgrade = 0,
    Replacement = 1,
    Max_NONE = 2,
    EFortAlterationOptionType_MAX = 3
};

enum EFortAlterationWidgetState
{
    Normal = 0,
    Upgrade = 1,
    Evolution = 2,
    EFortAlterationWidgetState_MAX = 3
};

enum EFortAmmoType
{
    Pistol = 0,
    Shotgun = 1,
    Assault = 2,
    Sniper = 3,
    Energy = 4,
    EFortAmmoType_MAX = 5
};

enum EFortAnalyticsClientEngagementEventType
{
    None = 0,
    DamageReceivedFromPlayerPawn = 1,
    DamageDealtToPlayerPawn = 2,
    DamageDealtToPlayerBuild = 3,
    DamageDealtToOther = 4,
    EngagementTimeout = 5,
    PlayerWon = 6,
    PlayerDeathOnWin = 7,
    TeamWon = 8,
    TeamLost = 9,
    PlayerLost = 10,
    PlayerKilledPlayer = 11,
    PlayerFiredWeapon = 12,
    ManagerStopped = 13,
    PlayerPawnDied = 14,
    PlayerPawnSpawned = 15,
    Count = 16,
    EFortAnalyticsClientEngagementEventType_MAX = 17
};

enum EFortAnalyticsEventDenylistPlaylistKey
{
    PlaylistType = 0,
    PlaylistName = 1,
    All = 2,
    EFortAnalyticsEventDenylistPlaylistKey_MAX = 3
};

enum EFortAnimNode_NoBlendCurveSlot_Mode
{
    FullFromSourceWhileActive = 0,
    FullFromLatestMontage = 1,
    Blended = 2,
    EFortAnimNode_NoBlendCurveSlot_MAX = 3
};

enum EFortAnimSpeed
{
    Instant = 0,
    Fast = 1,
    Normal = 2,
    EFortAnimSpeed_MAX = 3
};

enum EFortAnnouncementChannel
{
    Primary = 0,
    Conversation = 1,
    Tutorial = 2,
    Max_None = 3,
    EFortAnnouncementChannel_MAX = 4
};

enum EFortAnnouncementDelivery
{
    Created = 0,
    Received = 1,
    Ignored = 2,
    Active = 3,
    Stopped = 4,
    Max_None = 5,
    EFortAnnouncementDelivery_MAX = 6
};

enum EFortAnnouncementDisplayPreference
{
    Default_HUD = 0,
    QuestIntroduction = 1,
    QuestJournal = 2,
    EFortAnnouncementDisplayPreference_MAX = 3
};

enum EFortAnnouncerTeamVocalChords
{
    Team1 = 0,
    Team2 = 1,
    Max_None = 2,
    EFortAnnouncerTeamVocalChords_MAX = 3
};

enum EFortAntiAliasingMethod
{
    Disabled = 0,
    FXAA = 1,
    TAA = 2,
    TSRLow = 3,
    TSRMedium = 4,
    TSRHigh = 5,
    TSREpic = 6,
    TSR = 7,
    DLSS = 8,
    Num = 9,
    Default = 10,
    EFortAntiAliasingMethod_MAX = 11
};

enum EFortAppliedSwapItemAndVariantState
{
    None = 0,
    Active = 1,
    Inactive = 2,
    EFortAppliedSwapItemAndVariantState_MAX = 3
};

enum EFortAreaFlag
{
    Default = 0,
    Obstacle = 1,
    Smashable = 2,
    Unwalkable = 3,
    Interactable = 4,
    EFortAreaFlag_MAX = 5
};

enum EFortArrayElementPosition
{
    None = 0,
    First = 1,
    Last = 2,
    Random = 3,
    EFortArrayElementPosition_MAX = 4
};

enum EFortAthenaAICanMoveState
{
    None = 0,
    Failed_AgentOffNavmesh = 1,
    Failed_GoalOffNavmesh = 2,
    Failed_Falling = 3,
    Success = 4,
    Success_Partial = 5,
    EFortAthenaAICanMoveState_MAX = 6
};

enum EFortAthenaAIObjectTrackerQueryOrder
{
    None = 0,
    Distance = 1,
    EFortAthenaAIObjectTrackerQueryOrder_MAX = 2
};

enum EFortAthenaAISpawnerDataComponentTriBool
{
    Yes = 0,
    No = 1,
    DoNotModify = 2,
    EFortAthenaAISpawnerDataComponentTriBool_MAX = 3
};

enum EFortAthenaArithmeticOperation
{
    Add = 0,
    Subtract = 1,
    Multiply = 2,
    Divide = 3,
    EFortAthenaArithmeticOperation_MAX = 4
};

enum EFortAthenaBTServiceTokenQueryAction
{
    None = 0,
    RequestToken = 1,
    ReleaseToken = 2,
    EFortAthenaBTServiceTokenQueryAction_MAX = 3
};

enum EFortAthenaLivingWorldEventRuntimeDeactivationReason
{
    None = 0,
    NoValidEventData = 1,
    RandomDeactivation = 2,
    CalendarEvent = 3,
    MatchedPrefabAndNormalActor = 4,
    ActorDescDoesntMatchAnySpawnerData = 5,
    EFortAthenaLivingWorldEventRuntimeDeactivationReason_MAX = 6
};

enum EFortAthenaLivingWorldEventToDebugStopBehavior
{
    Once = 0,
    UntilEventSuccess = 1,
    EFortAthenaLivingWorldEventToDebugStopBehavior_MAX = 2
};

enum EFortAthenaMutator_VoiceChatChannelType
{
    Default = 0,
    None = 1,
    SquadOnly = 2,
    TeamOnly = 3,
    WholeServer = 4,
    ScopeOnly = 5,
    ScopeSquadOnly = 6,
    ScopeTeamOnly = 7,
    EFortAthenaMutator_MAX = 8
};

enum EFortAthenaPlayContextualAnimExecutionMethod
{
    StartInteraction = 0,
    JoinInteraction = 1,
    TransitionAllActors = 2,
    TransitionSingleActor = 3,
    EFortAthenaPlayContextualAnimExecutionMethod_MAX = 4
};

enum EFortAthenaPlaylist
{
    AthenaSolo = 0,
    AthenaDuo = 1,
    AthenaSquad = 2,
    EFortAthenaPlaylist_MAX = 3
};

enum EFortAthenaRewardState
{
    LevelAchieved = 0,
    Claimed = 1,
    ForceLocked = 2,
    Owned = 3,
    Max_None = 4,
    EFortAthenaRewardState_MAX = 5
};

enum EFortAthenaSmartObjectPriority
{
    Lowest = 0,
    Lower = 1,
    Low = 2,
    BelowNormal = 3,
    Normal = 4,
    AboveNormal = 5,
    High = 6,
    Higher = 7,
    Highest = 8,
    MIN = 9,
    MAX = 10
};

enum EFortAthenaSmartObjectUrgency
{
    Low = 0,
    Normal = 1,
    High = 2,
    EFortAthenaSmartObjectUrgency_MAX = 3
};

enum EFortAthenaStateTreeTaskFeatureExecutionMode
{
    DoNotExecute = 0,
    ExecuteOnEnter = 1,
    ExecuteOnExit = 2,
    EFortAthenaStateTreeTaskFeatureExecutionMode_MAX = 3
};

enum EFortAthenaSurvivorTierBadgeSize
{
    Small = 0,
    Large = 1,
    Count = 2,
    EFortAthenaSurvivorTierBadgeSize_MAX = 3
};

enum EFortAthenaTutorialScreenExtraWidget
{
    None = 0,
    DragToTurn = 1,
    Completed = 2,
    Count = 3,
    EFortAthenaTutorialScreenExtraWidget_MAX = 4
};

enum EFortAthenaTutorialStep
{
    Look = 0,
    Move = 1,
    Harvest = 2,
    Clamber = 3,
    Pickup = 4,
    Shoot = 5,
    Ambush = 6,
    Heal = 7,
    Build = 8,
    Chest = 9,
    Scoping = 10,
    Completed = 11,
    Count = 12,
    EFortAthenaTutorialStep_MAX = 13
};

enum EFortAthenaTutorialSubstep
{
    ScreenSwipeToLook = 0,
    ScreenFindMarker = 1,
    ScreenUseLeftStick = 2,
    ScreenMoveToBuilding = 3,
    ScreenJump = 4,
    ScreenCrouch = 5,
    ScreenReachMarker = 6,
    ScreenUsePickaxe = 7,
    ScreenReachClamber = 8,
    ScreenClamber = 9,
    ScreenReachPickUp = 10,
    ScreenPickUpItems = 11,
    ScreenEquipItem = 12,
    ScreenShootTargets = 13,
    ScreenReload = 14,
    ScreenReachLocation = 15,
    ScreenDefendYourself = 16,
    ScreenHealthAlert = 17,
    ScreenDestroyEnemies = 18,
    ScreenCollectLoot = 19,
    ScreenUseMedkit = 20,
    ScreenUseShield = 21,
    ScreenShieldInfo = 22,
    ScreenLookForChest = 23,
    ScreenChestFound = 24,
    ScreenSelectBuildMode = 25,
    ScreenShowMaterials = 26,
    ScreenShowBuildPieces = 27,
    ScreenSelectStairs = 28,
    ScreenPlaceStairs = 29,
    ScreenReachChest = 30,
    ScreenExitBuildMode = 31,
    ScreenLootChest = 32,
    ScreenCollectLootChest = 33,
    ScreenEquipRifle = 34,
    ScreenUseScope = 35,
    ScreenShootTargetsScoping = 36,
    ScreenCompleted = 37,
    HealingInterrupted = 38,
    Count = 39,
    EFortAthenaTutorialSubstep_MAX = 40
};

enum EFortAthenaTutorial_StandaloneStep
{
    None = 0,
    HealingInterrupted = 1,
    Count = 2,
    EFortAthenaTutorial_MAX = 3
};

enum EFortAttributeDisplay
{
    BasicInt = 0,
    NegativeImpliesInfiniteInt = 1,
    BasicFloat = 2,
    NegativeImpliesInfiniteFloat = 3,
    BasicString = 4,
    NormalizedPercentage = 5,
    StringArray = 6,
    SlateBrush = 7,
    DoNotDisplay = 8,
    None_Max = 9,
    EFortAttributeDisplay_MAX = 10
};

enum EFortAudioAffiliation
{
    Local = 0,
    Friendly = 1,
    Enemy = 2,
    Neutral = 3,
    EFortAudioAffiliation_MAX = 4
};

enum EFortAudioTODScheduleMode
{
    RelativeToDayPhaseChange = 0,
    RandomTimeDuringDayPhase = 1,
    PlayInTimeRange = 2,
    Count = 3,
    EFortAudioTODScheduleMode_MAX = 4
};

enum EFortAutoMulchCategory
{
    Invalid = 0,
    Weapon = 1,
    Trap = 2,
    Survivor = 3,
    Defender = 4,
    Hero = 5,
    Num = 6,
    EFortAutoMulchCategory_MAX = 7
};

enum EFortAutoMulchMode
{
    Off = 0,
    Common = 1,
    Uncommon = 2,
    Rare = 3,
    Epic = 4,
    Num = 5,
    EFortAutoMulchMode_MAX = 6
};

enum EFortAutoTestState
{
    InitialLoad = 0,
    Login = 1,
    FrontendLoad = 2,
    FrontendPvELoad = 3,
    FrontendPvETest = 4,
    PvEMatchmaking = 5,
    ZoneLoad = 6,
    ZoneTest = 7,
    Finished = 8,
    MAX = 9
};

enum EFortBRAugmentSystemCastResult
{
    Valid = 0,
    Invalid = 1,
    EFortBRAugmentSystemCastResult_MAX = 2
};

enum EFortBadMatchTriggerOperation
{
    LessThan = 0,
    LessThanOrEqual = 1,
    Equal = 2,
    GreaterThan = 3,
    GreaterThanOrEqual = 4,
    EFortBadMatchTriggerOperation_MAX = 5
};

enum EFortBadMatchTriggerType
{
    Unspecified = 0,
    SmallTeam = 1,
    LargeTeam = 2,
    LetoTeam = 3,
    EFortBadMatchTriggerType_MAX = 4
};

enum EFortBanHammerNotificationAction
{
    BanAndKick = 0,
    Kick = 1,
    EFortBanHammerNotificationAction_MAX = 2
};

enum EFortBangSize
{
    XXS = 0,
    XS = 1,
    S = 2,
    M = 3,
    L = 4,
    XL = 5,
    EFortBangSize_MAX = 6
};

enum EFortBangType
{
    Invalid = 0,
    Custom = 1,
    PlayTab = 2,
    VaultTab = 3,
    StoreTab = 4,
    QuestsTab = 5,
    SubGameAccessChanged = 6,
    QuestsButton = 7,
    MainMenu = 8,
    VaultSchematics = 9,
    VaultLeadSurvivors = 10,
    VaultSurvivors = 11,
    VaultHeroes = 12,
    VaultDefenders = 13,
    VaultResources = 14,
    VaultMelee = 15,
    VaultRanged = 16,
    VaultConsumables = 17,
    VaultIngredients = 18,
    VaultTraps = 19,
    BattlePassTab = 20,
    SpecialEventTab = 21,
    WinterfestTab = 22,
    CosmeticsTab = 23,
    AthenaDirectedAcquisitionTab = 24,
    MultiProductItemShop = 25,
    AthenaChallengesTab = 26,
    AthenaCareerTab = 27,
    STWCommand = 28,
    STWCommand_Heroes = 29,
    STWCommand_Heroes_Manage = 30,
    STWCommand_Heroes_HeroLoadout = 31,
    STWCommand_Heroes_Defenders = 32,
    STWCommand_Heroes_Expeditions = 33,
    STWCommand_Survivors = 34,
    STWCommand_Survivors_Manage = 35,
    STWCommand_Survivors_Squads = 36,
    STWCommand_Upgrades = 37,
    STWCommand_Research = 38,
    STWCommand_AccountXP = 39,
    STWArmory = 40,
    STWArmory_Schematics = 41,
    STWArmory_Backpack = 42,
    STWArmory_Storage = 43,
    STWArmory_CollectionBook = 44,
    STWArmory_Transform = 45,
    STWArmory_Resources = 46,
    STWLocker = 47,
    SocialButton = 48,
    EFortBangType_MAX = 49
};

enum EFortBaseWeaponDamage
{
    Combat = 0,
    Environmental = 1,
    EFortBaseWeaponDamage_MAX = 2
};

enum EFortBounceType
{
    Hit = 0,
    Interact = 1,
    EditPlaced = 2,
    EFortBounceType_MAX = 3
};

enum EFortBrushSize
{
    VeryVerySmall = 0,
    VerySmall = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    VeryLarge = 5,
    EFortBrushSize_MAX = 6
};

enum EFortBudgetCategory
{
    Memory = 0,
    Simulation = 1,
    Rendering = 2,
    Network = 3,
    Audio = 4,
    Max = 5
};

enum EFortBudgetType
{
    Live = 0,
    Preview = 1,
    Max = 2
};

enum EFortBuffState
{
    NoChange = 0,
    Better = 1,
    Worse = 2,
    EFortBuffState_MAX = 3
};

enum EFortBuildPreviewMarkerOptionalAdjustment
{
    None = 0,
    FreeWallPieceOnTop = 1,
    FreeWallPieceOnBottom = 2,
    EFortBuildPreviewMarkerOptionalAdjustment_MAX = 3
};

enum EFortBuildingDestroyedReason
{
    Unknown = 0,
    WeaponDamage = 1,
    LostSupport = 2,
    Edit = 3,
    FireDirect = 4,
    FireIndirect = 5,
    EFortBuildingDestroyedReason_MAX = 6
};

enum EFortBuildingHealthDisplayRule
{
    Never = 0,
    Allowed = 1,
    Always = 2,
    EFortBuildingHealthDisplayRule_MAX = 3
};

enum EFortBuildingInitializationReason
{
    StaticallyPlaced = 0,
    Spawned = 1,
    Replaced = 2,
    LoadedFromSave = 3,
    DynamicBuilderPlaced = 4,
    PlacementTool = 5,
    TrapTool = 6,
    None = 7,
    EFortBuildingInitializationReason_MAX = 8
};

enum EFortBuildingInteraction
{
    None = 0,
    Build = 1,
    Repair = 2,
    Upgrade = 3,
    Edit = 4,
    BeingModified = 5,
    ConfirmEdit = 6,
    Creative = 7,
    EFortBuildingInteraction_MAX = 8
};

enum EFortBuildingPersistentState
{
    Default = 0,
    New = 1,
    Constructed = 2,
    Destroyed = 3,
    Searched = 4,
    None = 5,
    EFortBuildingPersistentState_MAX = 6
};

enum EFortBuildingSoundType
{
    Construction = 0,
    GenericDestruction = 1,
    PlayerBuiltDestruction = 2,
    None = 3,
    EFortBuildingSoundType_MAX = 4
};

enum EFortBuildingState
{
    Placement = 0,
    EditMode = 1,
    None = 2,
    EFortBuildingState_MAX = 3
};

enum EFortBuildingType
{
    Wall = 0,
    Floor = 1,
    Corner = 2,
    Deco = 3,
    Prop = 4,
    Stairs = 5,
    Roof = 6,
    Pillar = 7,
    SpawnedItem = 8,
    Container = 9,
    Trap = 10,
    GenericCenterCellActor = 11,
    StructuralCorner = 12,
    RoofSpacer = 13,
    None = 14,
    EFortBuildingType_MAX = 15
};

enum EFortCameraAxisConstraintRule
{
    None = 0,
    LockedTo = 1,
    LessThan = 2,
    GreaterThan = 3,
    EFortCameraAxisConstraintRule_MAX = 4
};

enum EFortCardinalDirection
{
    North = 0,
    East = 1,
    South = 2,
    West = 3,
    EFortCardinalDirection_MAX = 4
};

enum EFortChallengeBundleInfoLockedReasonCode
{
    Unlocked = 0,
    NoKnownUnlockMethod = 1,
    PurchaseTheBattlePass = 2,
    ReachSpecificTier = 3,
    TimeLeftBeforeUnlock = 4,
    EFortChallengeBundleInfoLockedReasonCode_MAX = 5
};

enum EFortCheatMissionGenType
{
    NewGeneration = 0,
    OldGeneration = 1,
    Max_None = 2,
    EFortCheatMissionGenType_MAX = 3
};

enum EFortClampState
{
    NoClamp = 0,
    MinClamp = 1,
    MaxClamp = 2,
    EFortClampState_MAX = 3
};

enum EFortClientAnnouncementQueueType
{
    Toasts = 0,
    Stickies = 1,
    Max = 2
};

enum EFortClientUpdateType
{
    Client = 0,
    ContentOnly = 1,
    EFortClientUpdateType_MAX = 2
};

enum EFortCollectedState
{
    Unknown = 0,
    New = 1,
    Known = 2,
    NewlyCollected = 3,
    Collected = 4,
    NewBest = 5,
    NewRecord = 6,
    NewLocation = 7,
    NewlyCompleted = 8,
    Complete = 9,
    EFortCollectedState_MAX = 10
};

enum EFortCollectedVariantClientUpdate
{
    NewVariant = 0,
    CollectedCount = 1,
    Improvement = 2,
    HiddenImprovement = 3,
    EFortCollectedVariantClientUpdate_MAX = 4
};

enum EFortCollectionBookPopupButtonType
{
    Invalid = 0,
    SelectItem = 1,
    Preview = 2,
    Purchase = 3,
    Unslot = 4,
    Back = 5,
    EFortCollectionBookPopupButtonType_MAX = 6
};

enum EFortCollectionBookState
{
    Active = 0,
    Completed = 1,
    Claimed = 2,
    EFortCollectionBookState_MAX = 3
};

enum EFortCombatEventContribution
{
    Linear = 0,
    Inverse = 1,
    Accumulator = 2,
    Max_None = 3,
    EFortCombatEventContribution_MAX = 4
};

enum EFortCombatEvents
{
    HuskFollowing = 0,
    SmasherFollowing = 1,
    TrollFollowing = 2,
    FlingerFollowing = 3,
    TakerFollowing = 4,
    HuskCombatNearby = 5,
    SmasherCombatNearby = 6,
    TrollCombatNearby = 7,
    FlingerCombatNearby = 8,
    TakerCombatNearby = 9,
    PlayerTakeDamage = 10,
    PlayerHealth = 11,
    PlayerLookAtEnemy = 12,
    PlayerDamageEnemy = 13,
    PlayerKilledEnemy = 14,
    AtlasTakeDamage = 15,
    AtlasHealth = 16,
    AtlasDestroyed = 17,
    TrapFiring = 18,
    BuildingTakeDamage = 19,
    FoodHealingPotential = 20,
    PlayerAmmo = 21,
    EnemiesNear = 22,
    PlayerMovement = 23,
    BuildingDamagedNearObjective = 24,
    TrapDamageEnemy = 25,
    ObjectivePathCost = 26,
    PlayerPathCost = 27,
    Max_None = 28,
    EFortCombatEvents_MAX = 29
};

enum EFortCombatFactors
{
    PlayerDamageThreat = 0,
    ObjectiveDamageThreat = 1,
    ObjectivePathCost = 2,
    PlayerPathCost = 3,
    PlayerMovement = 4,
    TrapsEffective = 5,
    PlayerWander = 6,
    NearbyEnemyPresence = 7,
    OffensiveResources = 8,
    DefensiveResources = 9,
    Boredom = 10,
    ArtilleryVulnerability = 11,
    Max_None = 12,
    EFortCombatFactors_MAX = 13
};

enum EFortCombatThresholds
{
    Low = 0,
    Medium = 1,
    High = 2,
    Extreme = 3,
    Max_None = 4,
    EFortCombatThresholds_MAX = 5
};

enum EFortCompare
{
    EFC_LessThan = 0,
    EFC_LessThanOrEqual = 1,
    EFC_GreaterThan = 2,
    EFC_GreaterThanOrEqual = 3,
    EFC_Equals = 4,
    EFC_MAX = 5
};

enum EFortComparisonType
{
    None = 0,
    HigherValue = 1,
    LowerValue = 2,
    Upgrade = 3,
    EFortComparisonType_MAX = 4
};

enum EFortCompletionResult
{
    Win = 0,
    Loss = 1,
    Draw = 2,
    Undefined = 3,
    EFortCompletionResult_MAX = 4
};

enum EFortConditionalResourceItemTest
{
    CanEarnMtx = 0,
    EFortConditionalResourceItemTest_MAX = 1
};

enum EFortConnectivityCubeFace
{
    Front = 0,
    Left = 1,
    Back = 2,
    Right = 3,
    Upper = 4,
    Lower = 5,
    MAX = 6
};

enum EFortContentBrowserQuickbarState
{
    Disabled = 0,
    Creative = 1,
    Primary = 2,
    Trap = 3,
    EFortContentBrowserQuickbarState_MAX = 4
};

enum EFortContentEncryptionAllowedReferences
{
    None = 0,
    SoftOnly = 1,
    Any = 2,
    EFortContentEncryptionAllowedReferences_MAX = 3
};

enum EFortContentEncryptionCollectionGrouping
{
    Individual = 0,
    Combined = 1,
    ByCosmeticSet = 2,
    EFortContentEncryptionCollectionGrouping_MAX = 3
};

enum EFortContentEncryptionGroupType
{
    Root = 0,
    Explicit = 1,
    EFortContentEncryptionGroupType_MAX = 2
};

enum EFortContentManagementState
{
    Locked = 0,
    Unlocked = 1,
    WaitingForResponse = 2,
    EFortContentManagementState_MAX = 3
};

enum EFortContentQualityLevel
{
    Unset = 0,
    Quality_Base = 1,
    Quality_Medium = 2,
    Quality_High = 3,
    Num = 4,
    EFortContentQualityLevel_MAX = 5
};

enum EFortContentRating
{
    IARC_Everyone = 0,
    IARC_TenPlus = 1,
    IARC_Teen = 2,
    IARC_MAX = 3
};

enum EFortContextualReticleTypes
{
    FCR_GenericFailure = 0,
    FCR_Upgrade = 1,
    FCR_Repair = 2,
    FCR_Locked = 3,
    FCR_Placement = 4,
    FCR_Edit = 5,
    FCR_NoTarget = 6,
    FCR_InProgress = 7,
    FCR_None = 8,
    FCR_MAX = 9
};

enum EFortContextualTutorialPlatform
{
    Any = 0,
    PcAndConsole = 1,
    Mobile = 2,
    EFortContextualTutorialPlatform_MAX = 3
};

enum EFortContrailsState
{
    NotActive = 0,
    ActivationPending = 1,
    AwaitingLoad = 2,
    Active = 3,
    EFortContrailsState_MAX = 4
};

enum EFortContributionGraphElements
{
    ProportionalLine = 0,
    IntegralLine = 1,
    TotalLine = 2,
    PendingLine = 3,
    ActionLine = 4,
    Max_None = 5,
    EFortContributionGraphElements_MAX = 6
};

enum EFortControlRecoveryBehavior
{
    DefaultControl = 0,
    LimitedControl = 1,
    ChainControl = 2,
    EFortControlRecoveryBehavior_MAX = 3
};

enum EFortControlType
{
    None = 0,
    CameraAndMovement = 1,
    Picking = 2,
    COUNT = 3,
    EFortControlType_MAX = 4
};

enum EFortCosmeticHabaneroProgressionType
{
    CurrentProgress = 0,
    HighestProgress = 1,
    EFortCosmeticHabaneroProgressionType_MAX = 2
};

enum EFortCosmeticItemBlockedTextFlags
{
    None = 0,
    ItemShop = 1,
    EFortCosmeticItemBlockedTextFlags_MAX = 2
};

enum EFortCosmeticRestrictionTagType
{
    ItemTags = 0,
    MetaTags = 1,
    Both = 2,
    EFortCosmeticRestrictionTagType_MAX = 3
};

enum EFortCostInfoTypes
{
    Placement = 0,
    Repair = 1,
    Conversion = 2,
    Ability = 3,
    None = 4,
    EFortCostInfoTypes_MAX = 5
};

enum EFortCraftFailCause
{
    Unknown = 0,
    NotEnoughResources = 1,
    InventoryFull = 2,
    InsufficientTeamLevel = 3,
    CraftingQueueFull = 4,
    CurrentlyLocked = 5,
    OverflowSchematic = 6,
    EFortCraftFailCause_MAX = 7
};

enum EFortCraftObjectiveIncrementType
{
    Single = 0,
    MatchingIngredientCount = 1,
    ItemCount = 2,
    EFortCraftObjectiveIncrementType_MAX = 3
};

enum EFortCreativeAdColorPreset
{
    Default = 0,
    Emphasized = 1,
    Common = 2,
    Uncommon = 3,
    Rare = 4,
    Epic = 5,
    Legendary = 6,
    EFortCreativeAdColorPreset_MAX = 7
};

enum EFortCreativeAdType
{
    Default = 0,
    Playset = 1,
    Toy = 2,
    Game = 3,
    Island = 4,
    Knob = 5,
    EFortCreativeAdType_MAX = 6
};

enum EFortCreativeAutoPickupSetting
{
    IsFalse = 0,
    IsTrue = 1,
    AutoOnly = 2,
    Unset = 3,
    EFortCreativeAutoPickupSetting_MAX = 4
};

enum EFortCreativeDiscoveryDeterminism
{
    Always = 0,
    Random = 1,
    PlayerDeterministic = 2,
    PartyDeterministic = 3,
    EpicEmployee = 4,
    Never = 5,
    EFortCreativeDiscoveryDeterminism_MAX = 6
};

enum EFortCreativeDiscoveryPanelOrdering
{
    Locked = 0,
    Floating = 1,
    EFortCreativeDiscoveryPanelOrdering_MAX = 2
};

enum EFortCreativeDiscoveryPanelType
{
    CuratedList = 0,
    MetricDriven = 1,
    Recommendations = 2,
    PlayHistory = 3,
    AnalyticsList = 4,
    Tournaments = 5,
    EFortCreativeDiscoveryPanelType_MAX = 6
};

enum EFortCreativeDiscoveryPlayHistoryType
{
    RecentlyPlayed = 0,
    Favorites = 1,
    RecentlyPlayedAndFavorites = 2,
    Queued = 3,
    EFortCreativeDiscoveryPlayHistoryType_MAX = 4
};

enum EFortCreativeDiscoverySkippedEntries
{
    None = 0,
    ByCount = 1,
    ByPercent = 2,
    EFortCreativeDiscoverySkippedEntries_MAX = 3
};

enum EFortCreativeEventSystemType
{
    Channels = 0,
    ChannelsWithEvents = 1,
    DirectBinding = 2,
    EFortCreativeEventSystemType_MAX = 3
};

enum EFortCreativeHeatmapDrawState
{
    Visible = 0,
    VisibleWithValues = 1,
    NotVisible = 2,
    Count = 3,
    EFortCreativeHeatmapDrawState_MAX = 4
};

enum EFortCreativeIslandLinkCategory
{
    Default = 0,
    Favorite = 1,
    Published = 2,
    Recent = 3,
    EFortCreativeIslandLinkCategory_MAX = 4
};

enum EFortCreativeIslandSelectTabType
{
    IslandCode = 0,
    ListView = 1,
    EFortCreativeIslandSelectTabType_MAX = 2
};

enum EFortCreativeItemDropAmount
{
    All = 0,
    FlatAmount = 1,
    Percentage = 2,
    EFortCreativeItemDropAmount_MAX = 3
};

enum EFortCreativeItemType
{
    Chest = 0,
    Item = 1,
    Collection = 2,
    SubItems = 3,
    NoCreativeItems = 4,
    EFortCreativeItemType_MAX = 5
};

enum EFortCreativeLinearMoverCollisionBehavior
{
    EFCLMCB_None = 0,
    EFCLMCB_Stop = 1,
    EFCLMCB_Reverse = 2,
    EFCLMCB_Push = 3,
    EFCLMCB_MAX = 4
};

enum EFortCreativeLinearMoverMode
{
    EFCLMM_Translation = 0,
    EFCLMM_Rotation = 1,
    EFCLMM_MAX = 2
};

enum EFortCreativeLinearMoverMovementCompleteBehavior
{
    EFCLMMS_None = 0,
    EFCLMMS_Repeat = 1,
    EFCLMMS_PingPong = 2,
    EFCLMMS_Reset = 3,
    EFCLMMS_MAX = 4
};

enum EFortCreativeLinearMoverRotationAxis
{
    EFCLMRA_Roll = 0,
    EFCLMRA_Pitch = 1,
    EFCLMRA_Yaw = 2,
    EFCLMRA_MAX = 3
};

enum EFortCreativeLinearMoverRotationDirection
{
    EFCLMRD_Clockwise = 0,
    EFCLMRD_CounterClockwise = 1,
    EFCLMRD_MAX = 2
};

enum EFortCreativeLinearMoverTranslationType
{
    EFCLMTT_None = 0,
    EFCLMTT_Forward = 1,
    EFCLMTT_Reverse = 2,
    EFCLMTT_MAX = 3
};

enum EFortCreativePatrolPathGroup
{
    Group_None = 0,
    Group_1 = 1,
    Group_2 = 2,
    Group_3 = 3,
    Group_4 = 4,
    Group_5 = 5,
    Group_6 = 6,
    Group_7 = 7,
    Group_8 = 8,
    Group_9 = 9,
    Group_10 = 10,
    Group_11 = 11,
    Group_12 = 12,
    Group_13 = 13,
    Group_14 = 14,
    Group_15 = 15,
    Group_16 = 16,
    Group_17 = 17,
    Group_18 = 18,
    Group_19 = 19,
    Group_20 = 20,
    Group_21 = 21,
    Group_22 = 22,
    Group_23 = 23,
    Group_24 = 24,
    Group_25 = 25,
    Group_26 = 26,
    Group_27 = 27,
    Group_28 = 28,
    Group_29 = 29,
    Group_30 = 30,
    Group_31 = 31,
    Group_32 = 32,
    Group_33 = 33,
    Group_34 = 34,
    Group_35 = 35,
    Group_36 = 36,
    Group_37 = 37,
    Group_38 = 38,
    Group_39 = 39,
    Group_40 = 40,
    Group_41 = 41,
    Group_42 = 42,
    Group_43 = 43,
    Group_44 = 44,
    Group_45 = 45,
    Group_46 = 46,
    Group_47 = 47,
    Group_48 = 48,
    Group_49 = 49,
    Group_50 = 50,
    Group_51 = 51,
    Group_52 = 52,
    Group_53 = 53,
    Group_54 = 54,
    Group_55 = 55,
    Group_56 = 56,
    Group_57 = 57,
    Group_58 = 58,
    Group_59 = 59,
    Group_60 = 60,
    Group_61 = 61,
    Group_62 = 62,
    Group_63 = 63,
    Group_64 = 64,
    Group_65 = 65,
    Group_66 = 66,
    Group_67 = 67,
    Group_68 = 68,
    Group_69 = 69,
    Group_70 = 70,
    Group_71 = 71,
    Group_72 = 72,
    Group_73 = 73,
    Group_74 = 74,
    Group_75 = 75,
    Group_76 = 76,
    Group_77 = 77,
    Group_78 = 78,
    Group_79 = 79,
    Group_80 = 80,
    Group_81 = 81,
    Group_82 = 82,
    Group_83 = 83,
    Group_84 = 84,
    Group_85 = 85,
    Group_86 = 86,
    Group_87 = 87,
    Group_88 = 88,
    Group_89 = 89,
    Group_90 = 90,
    Group_91 = 91,
    Group_92 = 92,
    Group_93 = 93,
    Group_94 = 94,
    Group_95 = 95,
    Group_96 = 96,
    Group_97 = 97,
    Group_98 = 98,
    Group_99 = 99,
    Group_100 = 100,
    Group_MAX = 101
};

enum EFortCreativePlotPermission
{
    Private = 0,
    Public = 1,
    EFortCreativePlotPermission_MAX = 2
};

enum EFortCreativeResourceNodeDepletionMode
{
    Destroy = 0,
    RestockOnDelay = 1,
    RestockOverTime = 2,
    StayEmpty = 3,
    None = 4,
    EFortCreativeResourceNodeDepletionMode_MAX = 5
};

enum EFortCreativeServerPrivacySetting
{
    Unknown = 0,
    Private = 1,
    Public = 2,
    EFortCreativeServerPrivacySetting_MAX = 3
};

enum EFortCreativeTeleporterEvent
{
    Entered = 0,
    Exited = 1,
    Enabled = 2,
    Disabled = 3,
    None = 4,
    EFortCreativeTeleporterEvent_MAX = 5
};

enum EFortCreativeTeleporterGroup
{
    Group_A = 0,
    Group_B = 1,
    Group_C = 2,
    Group_D = 3,
    Group_E = 4,
    Group_F = 5,
    Group_G = 6,
    Group_H = 7,
    Group_I = 8,
    Group_J = 9,
    Group_K = 10,
    Group_L = 11,
    Group_M = 12,
    Group_N = 13,
    Group_O = 14,
    Group_P = 15,
    Group_Q = 16,
    Group_R = 17,
    Group_S = 18,
    Group_T = 19,
    Group_U = 20,
    Group_V = 21,
    Group_W = 22,
    Group_X = 23,
    Group_Y = 24,
    Group_Z = 25,
    Group_None = 26,
    Group_MAX = 27
};

enum EFortCrucibleControlType
{
    Gamepad = 0,
    KBM = 1,
    Touch = 2,
    Count = 3,
    EFortCrucibleControlType_MAX = 4
};

enum EFortCrucibleLeaderboardId
{
    GlobalGamepad = 0,
    GlobalKBM = 1,
    GlobalTouch = 2,
    GlobalAll = 3,
    FriendsGamepad = 4,
    FriendsKBM = 5,
    FriendsTouch = 6,
    FriendsAll = 7,
    Count = 8,
    EFortCrucibleLeaderboardId_MAX = 9
};

enum EFortCrucibleLeaderboardState
{
    Disabled = 0,
    ReadyForQuery = 1,
    WaitingForQueryResults = 2,
    NeedsUserInfoQueried = 3,
    Complete = 4,
    EFortCrucibleLeaderboardState_MAX = 5
};

enum EFortCrucibleStatId
{
    Gamepad_CourseOverall = 0,
    Gamepad_CourseSegment1 = 1,
    Gamepad_CourseSegment2 = 2,
    Gamepad_CourseSegment3 = 3,
    Gamepad_CourseSegment4 = 4,
    Gamepad_CourseSegment5 = 5,
    KBM_CourseOverall = 6,
    KBM_CourseSegment1 = 7,
    KBM_CourseSegment2 = 8,
    KBM_CourseSegment3 = 9,
    KBM_CourseSegment4 = 10,
    KBM_CourseSegment5 = 11,
    Touch_CourseOverall = 12,
    Touch_CourseSegment1 = 13,
    Touch_CourseSegment2 = 14,
    Touch_CourseSegment3 = 15,
    Touch_CourseSegment4 = 16,
    Touch_CourseSegment5 = 17,
    Count = 18,
    EFortCrucibleStatId_MAX = 19
};

enum EFortCrucibleStatSource
{
    None = 0,
    Backend = 1,
    CurrentSession = 2,
    EFortCrucibleStatSource_MAX = 3
};

enum EFortCrucibleStatType
{
    CourseOverall = 0,
    CourseSegment1 = 1,
    CourseSegment2 = 2,
    CourseSegment3 = 3,
    CourseSegment4 = 4,
    CourseSegment5 = 5,
    Count = 6,
    EFortCrucibleStatType_MAX = 7
};

enum EFortCrucibleWhitelistLevel
{
    None = 0,
    Basic = 1,
    Advanced = 2,
    EFortCrucibleWhitelistLevel_MAX = 3
};

enum EFortCrucibleWorkType
{
    Invalid = 0,
    SetupPlayer = 1,
    GetFriendsList = 2,
    GetFriendsStats = 3,
    GetGlobalLeaderboard = 4,
    GetDisplayNames = 5,
    EFortCrucibleWorkType_MAX = 6
};

enum EFortCurieApplicationEvent
{
    OnHit = 0,
    OnBeginOverlap = 1,
    OnEndOverlap = 2,
    MaxValue = 3,
    EFortCurieApplicationEvent_MAX = 4
};

enum EFortCurieExecutionType
{
    Application = 0,
    Interaction = 1,
    EFortCurieExecutionType_MAX = 2
};

enum EFortCurieNativeFXType
{
    None = 0,
    Electricity = 1,
    Fire = 2,
    Charred = 3,
    Max = 4
};

enum EFortCurieToggleComponentActivationBehavior
{
    OnValidAttachment = 0,
    EFortCurieToggleComponentActivationBehavior_MAX = 1
};

enum EFortCurieToggleComponentDeactivationBehavior
{
    NeverDeactivate = 0,
    TimedDeactivationAllowRefresh = 1,
    TimedDeactivationNoRefresh = 2,
    EFortCurieToggleComponentDeactivationBehavior_MAX = 3
};

enum EFortCustomBodyType
{
    NONE = 0,
    Small = 1,
    Medium = 2,
    MediumAndSmall = 3,
    Large = 4,
    LargeAndSmall = 5,
    LargeAndMedium = 6,
    All = 7,
    Deprecated = 8,
    EFortCustomBodyType_MAX = 9
};

enum EFortCustomGender
{
    Invalid = 0,
    Male = 1,
    Female = 2,
    Both = 3,
    EFortCustomGender_MAX = 4
};

enum EFortCustomMovement
{
    Default = 0,
    Driving = 1,
    Passenger = 2,
    Parachuting = 3,
    Skydiving = 4,
    SkydiveFollowing = 5,
    Hover = 6,
    RemoteControl_Flying = 7,
    Ziplining = 8,
    ZipliningOnSpline = 9,
    Grinding = 10,
    Ballooning = 11,
    SurfaceSwimming = 12,
    DBNOCarried = 13,
    Floating = 14,
    Goop = 15,
    DeimosPreFall = 16,
    Sliding = 17,
    Skating = 18,
    Swinging = 19,
    SwingingGrounded = 20,
    SynchedAction = 21,
    Ridden = 22,
    FlyingRidden = 23,
    MovementExtension = 24,
    Count = 25,
    EFortCustomMovement_MAX = 26
};

enum EFortCustomPartType
{
    Head = 0,
    Body = 1,
    Hat = 2,
    Backpack = 3,
    MiscOrTail = 4,
    Face = 5,
    Gameplay = 6,
    NumTypes = 7,
    EFortCustomPartType_MAX = 8
};

enum EFortCustomTickComponentCondition
{
    WasRecentlyRendered = 0,
    CameraDistance = 1,
    LocalPlayerDistance = 2,
    Count = 3,
    EFortCustomTickComponentCondition_MAX = 4
};

enum EFortCustomizationAssetLoaderFlags
{
    None = 0,
    ForceSynchronousLoad = 1,
    CustomizationDestroy = 2,
    CustomizationStart = 3,
    LoadNewAssets = 4,
    EndPlay = 5,
    Destroyed = 6,
    LevelTransition = 7,
    EndPlayInEditor = 8,
    RemovedFromWorld = 9,
    Quit = 10,
    EFortCustomizationAssetLoaderFlags_MAX = 11
};

enum EFortDBNOCarryEvent
{
    PickedUp = 0,
    Interrogating = 1,
    Dropped = 2,
    Thrown = 3,
    EFortDBNOCarryEvent_MAX = 4
};

enum EFortDagwoodSimEvent
{
    EnterLandscape = 0,
    ExitLandscape = 1,
    EnterRoad = 2,
    ExitRoad = 3,
    Explode = 4,
    FlipImpact = 5,
    StartBoost = 6,
    FinishBoost = 7,
    EFortDagwoodSimEvent_MAX = 8
};

enum EFortDamageNumberType
{
    None = 0,
    Pawn = 1,
    Building = 2,
    Player = 3,
    Shield = 4,
    Score = 5,
    DBNO = 6,
    Percent = 7,
    EFortDamageNumberType_MAX = 8
};

enum EFortDamageVisualsState
{
    UnDamaged = 0,
    DamagedAndAnimating = 1,
    DamagedAndStatic = 2,
    EFortDamageVisualsState_MAX = 3
};

enum EFortDamageZone
{
    Light = 0,
    Normal = 1,
    Critical = 2,
    Vulnerability = 3,
    Invulnerability = 4,
    Max = 5
};

enum EFortDateTimeStyle
{
    Default = 0,
    Short = 1,
    Medium = 2,
    Long = 3,
    Full = 4,
    EFortDateTimeStyle_MAX = 5
};

enum EFortDayPhase
{
    Morning = 0,
    Day = 1,
    Evening = 2,
    Night = 3,
    NumPhases = 4,
    EFortDayPhase_MAX = 5
};

enum EFortDayPhasePrio
{
    Default = 0,
    DailySummary = 1,
    EFortDayPhasePrio_MAX = 2
};

enum EFortDebugInfoCategory
{
    Info = 0,
    Positive = 1,
    Negative = 2,
    Warning = 3,
    Deemphasize = 4,
    EFortDebugInfoCategory_MAX = 5
};

enum EFortDecoPlacementQueryResults
{
    CanAdd = 0,
    ExistingTrap = 1,
    ExistingObject = 2,
    Obstructed = 3,
    NoLocation = 4,
    WrongType = 5,
    WrongShape = 6,
    BeingModified = 7,
    WrongTeam = 8,
    BlueprintFailure = 9,
    AbilityFailure = 10,
    RequiresPlayerBuildableActor = 11,
    NoEditPermission = 12,
    WrongZone = 13,
    EFortDecoPlacementQueryResults_MAX = 14
};

enum EFortDefenderInteractionError
{
    None = 0,
    Obstructed = 1,
    NoEditPermission = 2,
    UsedByAnotherPlayer = 3,
    EFortDefenderInteractionError_MAX = 4
};

enum EFortDefenderSlotType
{
    Invalid = 0,
    Defender = 1,
    Weapon = 2,
    EFortDefenderSlotType_MAX = 3
};

enum EFortDefenderSubtype
{
    AssaultRifle = 0,
    Pistol = 1,
    Melee = 2,
    Sniper = 3,
    Shotgun = 4,
    Invalid = 5,
    EFortDefenderSubtype_MAX = 6
};

enum EFortDelayedQuickBarAction
{
    Add = 0,
    Remove = 1,
    Replace = 2,
    Invalid = 3,
    EFortDelayedQuickBarAction_MAX = 4
};

enum EFortDeliveryInfoBuildingActorSpecification
{
    All = 0,
    PlayerBuildable = 1,
    NonPlayerBuildable = 2,
    EFortDeliveryInfoBuildingActorSpecification_MAX = 3
};

enum EFortDialogFeedbackType
{
    FriendRequestSent = 0,
    FriendRequestReceived = 1,
    FriendRequestAccepted = 2,
    Default = 3,
    EFortDialogFeedbackType_MAX = 4
};

enum EFortDialogResult
{
    Confirmed = 0,
    Declined = 1,
    Ignored = 2,
    Killed = 3,
    TimedOut = 4,
    Unknown = 5,
    EFortDialogResult_MAX = 6
};

enum EFortDiscoverLabelStyle
{
    Utility = 0,
    Attention = 1,
    Social = 2,
    Deal = 3,
    Quiet = 4,
    Max_NONE = 5,
    EFortDiscoverLabelStyle_MAX = 6
};

enum EFortDiscoveryDisabledFeatures
{
    Undefined = 0,
    AllWrites = 1,
    Favorites = 2,
    PlayHistory = 3,
    Queues = 4,
    ForCabin = 5,
    DiscoverySurface = 6,
    EFortDiscoveryDisabledFeatures_MAX = 7
};

enum EFortDiscoveryOptionsOverride
{
    Undefined = 0,
    Privacy = 1,
    FillOnly = 2,
    OnlyFillSolo = 3,
    EFortDiscoveryOptionsOverride_MAX = 4
};

enum EFortDisplayGender
{
    Unknown = 0,
    Male = 1,
    Female = 2,
    NumTypes = 3,
    EFortDisplayGender_MAX = 4
};

enum EFortDisplayTier
{
    Invalid = 0,
    Handmade = 1,
    Copper = 2,
    Silver = 3,
    Malachite = 4,
    Obsidian = 5,
    Brightcore = 6,
    Spectrolite = 7,
    Shadowshard = 8,
    Sunbeam = 9,
    Moonglow = 10,
    EFortDisplayTier_MAX = 11
};

enum EFortDonutIdleGameObject
{
    UnsetObject = 0,
    Tree = 1,
    Mound = 2,
    SmallMound = 3,
    JumpPad = 4,
    Torch = 5,
    PeelMonster = 6,
    Chimichanga = 7,
    Arm = 8,
    EFortDonutIdleGameObject_MAX = 9
};

enum EFortDualWieldDataSource
{
    BaseConfiguration = 0,
    DataDriven = 1,
    EFortDualWieldDataSource_MAX = 2
};

enum EFortDualWieldSwingState
{
    None = 0,
    MainHand = 1,
    OffHand = 2,
    BothHands = 3,
    EFortDualWieldSwingState_MAX = 4
};

enum EFortDynamicNodeType
{
    AI = 0,
    PhysicsObject = 1,
    Vehicle = 2,
    NumTypes = 3,
    EFortDynamicNodeType_MAX = 4
};

enum EFortEarnedSubRewardType
{
    XP = 0,
    Bars = 1,
    EFortEarnedSubRewardType_MAX = 2
};

enum EFortElementalDamageType
{
    None = 0,
    Fire = 1,
    Ice = 2,
    Lightning = 3,
    Energy = 4,
    MAX = 5
};

enum EFortEmotePlayMode
{
    CheckIfOwned = 0,
    ForcePlay = 1,
    EFortEmotePlayMode_MAX = 2
};

enum EFortEmporiumItemFilterMode
{
    Price = 0,
    License = 1,
    EFortEmporiumItemFilterMode_MAX = 2
};

enum EFortEmporiumItemLicense
{
    Invalid = 0,
    CC0 = 1,
    CC_BY = 2,
    CC_BY_SA = 3,
    CC_BY_NC = 4,
    CC_BY_NC_SA = 5,
    CC_BY_ND = 6,
    CC_BY_NC_ND = 7,
    Standard = 8,
    All = 9,
    EFortEmporiumItemLicense_MAX = 10
};

enum EFortEmporiumItemPriceFilter
{
    Invalid = 0,
    Free = 1,
    Premium = 2,
    All = 3,
    EFortEmporiumItemPriceFilter_MAX = 4
};

enum EFortEmporiumItemSortMode
{
    MCP = 0,
    AtoZ = 1,
    ZtoA = 2,
    PriceLowToHigh = 3,
    PriceHighToLow = 4,
    SizeLowToHigh = 5,
    SizeHighToLow = 6,
    EFortEmporiumItemSortMode_MAX = 7
};

enum EFortEmporiumItemTagFilterMode
{
    MatchAny = 0,
    MatchAll = 1,
    EFortEmporiumItemTagFilterMode_MAX = 2
};

enum EFortEmporiumLayoutVersion
{
    Original = 0,
    Version_2 = 1,
    EFortEmporiumLayoutVersion_MAX = 2
};

enum EFortEncounterDirection
{
    North = 0,
    NorthEast = 1,
    East = 2,
    SouthEast = 3,
    South = 4,
    SouthWest = 5,
    West = 6,
    NorthWest = 7,
    Max_None = 8,
    EFortEncounterDirection_MAX = 9
};

enum EFortEncounterPacingMode
{
    SpawnPointsPercentageCurve = 0,
    IntensityCurve = 1,
    Burst = 2,
    Fixed = 3,
    EFortEncounterPacingMode_MAX = 4
};

enum EFortEncounterPacingState
{
    Ramp = 0,
    Peak = 1,
    Fade = 2,
    Rest = 3,
    Max_None = 4,
    EFortEncounterPacingState_MAX = 5
};

enum EFortEncounterSequenceResult
{
    Success = 0,
    FailedEncounterInProgress = 1,
    Failed = 2,
    EFortEncounterSequenceResult_MAX = 3
};

enum EFortEncounterSpawnLimitType
{
    NoLimit = 0,
    NumPawnsLimit = 1,
    SpawnPointLimit = 2,
    UserDefined = 3,
    MAX = 4
};

enum EFortEncounterSpawnLocationManagementMode
{
    Spawn = 0,
    Search = 1,
    EFortEncounterSpawnLocationManagementMode_MAX = 2
};

enum EFortEncounterSpawnLocationPlacementMode
{
    Directional = 0,
    Ring = 1,
    Volume = 2,
    Custom = 3,
    Max_None = 4,
    EFortEncounterSpawnLocationPlacementMode_MAX = 5
};

enum EFortEncounterState
{
    Uninitialized = 0,
    InitializingProperties = 1,
    InitializingRiftManager = 2,
    AwaitingActivation = 3,
    Active = 4,
    ReplacingRifts = 5,
    Max_None = 6,
    EFortEncounterState_MAX = 7
};

enum EFortEncounterUtilitiesMode
{
    LockedOnly = 0,
    LockedAndFree = 1,
    EFortEncounterUtilitiesMode_MAX = 2
};

enum EFortEncounterUtilityDesire
{
    Low = 0,
    Medium = 1,
    High = 2,
    VeryHigh = 3,
    Max_None = 4,
    EFortEncounterUtilityDesire_MAX = 5
};

enum EFortEncryptionStatus
{
    ENCRYPTED = 0,
    RELEASED = 1,
    EFortEncryptionStatus_MAX = 2
};

enum EFortEntitlementState
{
    NotRequested = 0,
    Requesting = 1,
    RequestError = 2,
    NotGranted = 3,
    Granted = 4,
    DevGranted = 5,
    EFortEntitlementState_MAX = 6
};

enum EFortErrorSeverity
{
    Unspecified = 0,
    Silent = 1,
    Passive = 2,
    Blocking = 3,
    SevereBlocking = 4,
    EFortErrorSeverity_MAX = 5
};

enum EFortEventConditionType
{
    EFEC_StatCompare = 0,
    EFEC_MAX = 1
};

enum EFortEventModeEmoteToPlay
{
    Emote1 = 0,
    Emote2 = 1,
    Emote3 = 2,
    RandomEmote = 3,
    QuickEmotes = 4,
    EFortEventModeEmoteToPlay_MAX = 5
};

enum EFortEventNameType
{
    Mission = 0,
    Client = 1,
    EFortEventNameType_MAX = 2
};

enum EFortEventRepeat
{
    EFER_Inactive = 0,
    EFER_Always = 1,
    EFER_OncePerPlayer = 2,
    EFER_OncePerCampaign = 3,
    EFER_OncePerMap = 4,
    EFER_MAX = 5
};

enum EFortEventWindowEligibility
{
    Unknown = 0,
    Public = 1,
    Private = 2,
    Locked = 3,
    EFortEventWindowEligibility_MAX = 4
};

enum EFortExitRequirements
{
    AnyPlayer = 0,
    WholeSquad = 1,
    EFortExitRequirements_MAX = 2
};

enum EFortExpeditionListSort
{
    ByRating = 0,
    ByDuration = 1,
    ByName = 2,
    EFortExpeditionListSort_MAX = 3
};

enum EFortExposedAssetExposureType
{
    PublicAlias = 0,
    InternalOnly = 1,
    Deprecated = 2,
    ForceDelete = 3,
    EFortExposedAssetExposureType_MAX = 4
};

enum EFortExposedAssetPathCustomizationType
{
    FullPath = 0,
    RelativeTo = 1,
    NameOnly = 2,
    EFortExposedAssetPathCustomizationType_MAX = 3
};

enum EFortFacialAnimTypes
{
    Default = 0,
    FaceOnly = 1,
    FullHead = 2,
    FromAmplitude = 3,
    Max = 4
};

enum EFortFactionAttitude
{
    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
    MAX = 3
};

enum EFortFactorContributionType
{
    CurrentValue_Direct = 0,
    CurrentValue_Inverse = 1,
    AverageValue_Direct = 2,
    AverageValue_Inverse = 3,
    EFortFactorContributionType_MAX = 4
};

enum EFortFeedbackAddressee
{
    FFA_Instigator = 0,
    FFA_Recipient = 1,
    FFA_All = 2,
    FFA_MAX = 3
};

enum EFortFeedbackBroadcastFilter
{
    FFBF_Speaker = 0,
    FFBF_SpeakerTeam = 1,
    FFBF_SpeakerAdressee = 2,
    FFBF_HumanPvP_Team1 = 3,
    FFBF_HumanPvP_Team2 = 4,
    FFBF_None_Max = 5,
    FFBF_MAX = 6
};

enum EFortFeedbackContext
{
    FFC_Instigator = 0,
    FFC_Recipient = 1,
    FFC_TeamWitness = 2,
    FFC_EnemyWitness = 3,
    FFC_AllPawns = 4,
    FFC_Announcer = 5,
    FFC_None_Max = 6,
    FFC_MAX = 7
};

enum EFortFeedbackSelectionMethod
{
    FFSM_Instigator = 0,
    FFSM_Recipient = 1,
    FFSM_TeamWitness = 2,
    FFSM_EnemyWitness = 3,
    FFSM_Random = 4,
    FFSM_Priority_IRTE = 5,
    FFSM_AllPawns = 6,
    FFSM_Announcer = 7,
    FFSM_MAX = 8
};

enum EFortFootstepAudioType
{
    Crouch = 0,
    CrouchSprint = 1,
    Walk = 2,
    Sprint = 3,
    Jump = 4,
    Land = 5,
    LandHard = 6,
    Max_None = 7,
    EFortFootstepAudioType_MAX = 8
};

enum EFortFootstepPlayerRelation
{
    LocalPlayer = 0,
    Friendly = 1,
    Enemy = 2,
    Max_None = 3,
    EFortFootstepPlayerRelation_MAX = 4
};

enum EFortFootstepPosition
{
    Parallel = 0,
    Above = 1,
    Below = 2,
    AboveOrBelowAndVisible = 3,
    Max_None = 4,
    EFortFootstepPosition_MAX = 5
};

enum EFortFootstepStanceType
{
    Walk = 0,
    Run = 1,
    Sprint = 2,
    CrouchWalk = 3,
    CrouchRun = 4,
    Max_None = 5,
    EFortFootstepStanceType_MAX = 6
};

enum EFortFootstepSurface
{
    Dirt = 0,
    Grass = 1,
    Metal = 2,
    Sand = 3,
    Snow = 4,
    Ice = 5,
    Stone = 6,
    Water = 7,
    Wood = 8,
    Chrome = 9,
    ChromePetrified = 10,
    Mud = 11,
    WetConcrete = 12,
    TreeCanopy = 13,
    Max_None = 14,
    EFortFootstepSurface_MAX = 15
};

enum EFortFootstepSurfaceType
{
    Default = 0,
    Wood = 1,
    Stone = 2,
    Metal = 3,
    Water = 4,
    Snow = 5,
    Ice = 6,
    Lava = 7,
    Dirt = 8,
    Grass = 9,
    Sand = 10,
    Cube = 11,
    Chrome = 12,
    ChromePetrified = 13,
    Mud = 14,
    WetConcrete = 15,
    TreeCanopy = 16,
    Max_None = 17,
    EFortFootstepSurfaceType_MAX = 18
};

enum EFortFortMobileShareButtonOS
{
    Android = 0,
    iOS = 1,
    EFortFortMobileShareButtonOS_MAX = 2
};

enum EFortFriendRequestStatus
{
    None = 0,
    Accepted = 1,
    PendingReceived = 2,
    PendingSent = 3,
    EFortFriendRequestStatus_MAX = 4
};

enum EFortFrontEndFeature
{
    ShowHomeBase = 0,
    ShowHeroList = 1,
    ShowVault = 2,
    ShowStore = 3,
    PlayZone = 4,
    ShowHeroSelect = 5,
    RecruitHero = 6,
    ShowHomeBaseOverview = 7,
    STWArmory_Transform = 8,
    STWArmory_CollectionBook = 9,
    MAX_None = 10,
    EFortFrontEndFeature_MAX = 11
};

enum EFortFrontEndFeatureState
{
    Enabled = 0,
    Disabled = 1,
    Hidden = 2,
    Invalid = 3,
    EFortFrontEndFeatureState_MAX = 4
};

enum EFortFrontEndFeatureStateReason
{
    Default = 0,
    NoHeroes = 1,
    Tutorial = 2,
    BROnly = 3,
    NoPlayerController = 4,
    UnexpectedFeature = 5,
    Invalid = 6,
    EFortFrontEndFeatureStateReason_MAX = 7
};

enum EFortFrontendInventoryFilter
{
    Schematics = 0,
    WorldItems = 1,
    WorldItemsInGame = 2,
    WorldItemsStorage = 3,
    WorldItemsTransfer = 4,
    ConsumablesAndAccountResources = 5,
    Heroes = 6,
    Defenders = 7,
    Survivors = 8,
    AthenaCharacter = 9,
    AthenaBackpack = 10,
    AthenaPickaxe = 11,
    AthenaGliders = 12,
    AthenaContrails = 13,
    AthenaEmotes = 14,
    AthenaItemWraps = 15,
    AthenaLoadingScreens = 16,
    AthenaLobbyMusic = 17,
    HestiaWeapons = 18,
    HestiaResources = 19,
    StarlightInventory = 20,
    Invisible = 21,
    Max_None = 22,
    EFortFrontendInventoryFilter_MAX = 23
};

enum EFortFuelGadgetVisualType
{
    FuelMeter = 0,
    ChargeText = 1,
    Invalid = 2,
    EFortFuelGadgetVisualType_MAX = 3
};

enum EFortGameActivityType
{
    Undefined = 0,
    STW = 1,
    BR = 2,
    LTM = 3,
    CreativePublishedIsland = 4,
    CreativePersonalIsland = 5,
    Valkyrie = 6,
    ModeSet = 7,
    Reference = 8,
    EFortGameActivityType_MAX = 9
};

enum EFortGameFeature
{
    EarlyStartup = 0,
    DedicatedServer = 1,
    DanceRoyale = 2,
    Frontend = 3,
    MinimalLobby = 4,
    GameplayAthena = 5,
    GameplayCampaignTutorial = 6,
    GameplayCampaign = 7,
    GameplayCreative = 8,
    PredownloadedCosmetics = 9,
    Invalid = 10,
    Count = 11,
    EFortGameFeature_MAX = 12
};

enum EFortGameFeatureActionAddComponentMode
{
    None = 0,
    Game = 1,
    Editor = 2,
    EFortGameFeatureActionAddComponentMode_MAX = 3
};

enum EFortGameFeatureState
{
    Unknown = 0,
    UninstallFailled = 1,
    Uninstalled = 2,
    Uninstalling = 3,
    Unavailable = 4,
    Downloading = 5,
    DownloadingPaused = 6,
    DownloadFailed = 7,
    Available = 8,
    Preloading = 9,
    PreloadingFailed = 10,
    Preloaded = 11,
    Loading = 12,
    Loaded = 13,
    Count = 14,
    EFortGameFeatureState_MAX = 15
};

enum EFortGameServiceHotConfigResult
{
    Success_ReplacedDomain = 0,
    Success_DomainAlreadySet = 1,
    Failure_ConfigSectionNotFound = 2,
    Failure_PlatformNotFound = 3,
    Failure_GameServiceNotFound = 4,
    Failure_EpicAppNotFound = 5,
    Failure_ConfigParsingFailed = 6,
    Unknown = 7,
    EFortGameServiceHotConfigResult_MAX = 8
};

enum EFortGameType
{
    BR = 0,
    ZeroBuild = 1,
    Creative = 2,
    CreativeLTM = 3,
    Playground = 4,
    STW = 5,
    BRArena = 6,
    BRLTM = 7,
    Social = 8,
    VKEdit = 9,
    VKPlay = 10,
    DelMar = 11,
    Festival = 12,
    FestivalMainStage = 13,
    FestivalJamStage = 14,
    Juno = 15,
    FestivalBattleStage = 16,
    BlastBerry = 17,
    MAX = 18
};

enum EFortGamepadLookInputCurve
{
    Linear = 0,
    Exponential = 1,
    EFortGamepadLookInputCurve_MAX = 2
};

enum EFortGamepadSensitivity
{
    Invalid = 0,
    Slow = 1,
    SlowPlus = 2,
    SlowPlusPlus = 3,
    Normal = 4,
    NormalPlus = 5,
    NormalPlusPlus = 6,
    Fast = 7,
    FastPlus = 8,
    FastPlusPlus = 9,
    Insane = 10,
    MAX = 11
};

enum EFortGameplayAbilityActivation
{
    Passive = 0,
    Triggered = 1,
    Active = 2,
    EFortGameplayAbilityActivation_MAX = 3
};

enum EFortGameplayAbilityMontageSectionToPlay
{
    FirstSection = 0,
    RandomSection = 1,
    TestedRandomSection = 2,
    EFortGameplayAbilityMontageSectionToPlay_MAX = 3
};

enum EFortGameplayAbilityTagChangedActionType
{
    Cancel = 0,
    EFortGameplayAbilityTagChangedActionType_MAX = 1
};

enum EFortGameplayAbilityTagChangedEvent
{
    NewlyAdded = 0,
    Increased = 1,
    FullyRemoved = 2,
    Decreased = 3,
    EFortGameplayAbilityTagChangedEvent_MAX = 4
};

enum EFortGameplayCueAttachType
{
    AttachToTarget = 0,
    DoNotAttach = 1,
    EFortGameplayCueAttachType_MAX = 2
};

enum EFortGameplayCueSourceCondition
{
    AnySource = 0,
    LocalPlayerSource = 1,
    NonLocalPlayerSource = 2,
    EFortGameplayCueSourceCondition_MAX = 3
};

enum EFortGameplayDataTrackerEventContributionType
{
    Accumulate = 0,
    Set = 1,
    EFortGameplayDataTrackerEventContributionType_MAX = 2
};

enum EFortGameplayEventReferenceType
{
    None = 0,
    EventDescriptor = 1,
    EventFunction = 2,
    EFortGameplayEventReferenceType_MAX = 3
};

enum EFortGameplayState
{
    NormalGameplay = 0,
    WaitingToStart = 1,
    EndOfZone = 2,
    EnteringZone = 3,
    LeavingZone = 4,
    Invalid = 5,
    EFortGameplayState_MAX = 6
};

enum EFortGetPlayerPawnExecutions
{
    ValidFortPlayerPawn = 0,
    AvatarCastFailed = 1,
    EFortGetPlayerPawnExecutions_MAX = 2
};

enum EFortGiftWrapType
{
    System = 0,
    UserFree = 1,
    UserUnlock = 2,
    UserConsumable = 3,
    Message = 4,
    Ungift = 5,
    EFortGiftWrapType_MAX = 6
};

enum EFortGliderType
{
    Glider = 0,
    Umbrella = 1,
    EFortGliderType_MAX = 2
};

enum EFortGlobalAction
{
    TrapConfirm = 0,
    TrapPicker = 1,
    BuildConfirm = 2,
    PerformBuildingEditInteraction = 3,
    PerformBuildingImprovementInteraction = 4,
    SwitchQuickBar = 5,
    Use = 6,
    Reload = 7,
    InventoryOrChatHold = 8,
    GamepadChangeMaterialOrHarvestHold = 9,
    GamepadNextWeaponOrHarvestHold = 10,
    GamepadNextWeaponOrAltInteractOrHarvestHold = 11,
    ChangeMaterial = 12,
    Fire = 13,
    RotatePrimitiveClockwise = 14,
    Gadget1 = 15,
    Gadget2 = 16,
    Ability1 = 17,
    Ability2 = 18,
    Ability3 = 19,
    ToggleFullScreenMap = 20,
    ToggleInventory = 21,
    Jump = 22,
    Crouch = 23,
    ShoppingCartCoast = 24,
    GolfCartEBrake = 25,
    GolfCartForward = 26,
    GolfCartReverse = 27,
    GolfCartHonk = 28,
    GamepadToggleHarvestOrHoldCreativePhone = 29,
    GamepadToggleCreativePhoneWeapon = 30,
    Count = 31,
    EFortGlobalAction_MAX = 32
};

enum EFortHUDElementVisibiltyOption
{
    DoNotOverride = 0,
    ShowElement = 1,
    HideElement = 2,
    EFortHUDElementVisibiltyOption_MAX = 3
};

enum EFortHUDElementVisibiltyPriority
{
    Lowest = 0,
    VeryLow = 1,
    Low = 2,
    Normal = 3,
    High = 4,
    VeryHigh = 5,
    Highest = 6,
    COUNT = 7,
    EFortHUDElementVisibiltyPriority_MAX = 8
};

enum EFortHandIKOverrideType
{
    UseDefault = 0,
    ForceFK = 1,
    ForceIK = 2,
    ForceFKSnap = 3,
    EFortHandIKOverrideType_MAX = 4
};

enum EFortHardcoreModifierTier
{
    Bronze = 0,
    Silver = 1,
    Gold = 2,
    Platinum = 3,
    Diamond = 4,
    EFortHardcoreModifierTier_MAX = 5
};

enum EFortHealingIncrementType
{
    Single = 0,
    HealingAmount = 1,
    HealthOverHealing = 2,
    PercentHealed = 3,
    TotalHealingDone = 4,
    EFortHealingIncrementType_MAX = 5
};

enum EFortHelpContentLocation
{
    Top = 0,
    Bottom = 1,
    Max = 2
};

enum EFortHelpItemType
{
    Header = 0,
    Entry = 1,
    Max = 2
};

enum EFortHeroLoadoutPerkType
{
    Commander = 0,
    Standard = 1,
    EFortHeroLoadoutPerkType_MAX = 2
};

enum EFortHeroPerkDisplayType
{
    CommanderPerk = 0,
    TeamPerk = 1,
    ClassPerk = 2,
    StandardPerk = 3,
    Max_None = 4,
    EFortHeroPerkDisplayType_MAX = 5
};

enum EFortHexTileAdjacency
{
    North = 0,
    NorthEast = 1,
    SouthEast = 2,
    South = 3,
    SouthWest = 4,
    NorthWest = 5,
    Max_None = 6,
    EFortHexTileAdjacency_MAX = 7
};

enum EFortHitNotifyAudioPerspective
{
    Invalid = 0,
    Instigate = 1,
    Receive = 2,
    Observe = 3,
    EFortHitNotifyAudioPerspective_MAX = 4
};

enum EFortHitNotifyAudioType
{
    Invalid = 0,
    Body = 1,
    BodyCrit = 2,
    Shield = 3,
    ShieldCrit = 4,
    Death = 5,
    DeathCrit = 6,
    Fall = 7,
    FallDeath = 8,
    EFortHitNotifyAudioType_MAX = 9
};

enum EFortHitPointModificationReason
{
    Invalid = 0,
    InitalSet = 1,
    AutoRegen = 2,
    ItemRegen = 3,
    DamageOverTime = 4,
    DamageReceived = 5,
    EFortHitPointModificationReason_MAX = 6
};

enum EFortHomebaseSquadType
{
    AttributeSquad = 0,
    CombatSquad = 1,
    DefenderSquad = 2,
    ExpeditionSquad = 3,
    Max_None = 4,
    EFortHomebaseSquadType_MAX = 5
};

enum EFortHomingOffsetStyle
{
    Auto = 0,
    Absolute = 1,
    Relative = 2,
    EFortHomingOffsetStyle_MAX = 3
};

enum EFortHomingStyle
{
    None = 0,
    LockOn = 1,
    LaserTargeted = 2,
    LaserTargeted_NoTrace = 3,
    DrunkArtillery = 4,
    EFortHomingStyle_MAX = 5
};

enum EFortHotSpotDirection
{
    PositiveX = 0,
    NegativeX = 1,
    PositiveY = 2,
    NegativeY = 3,
    PositiveZ = 4,
    NegativeZ = 5,
    Any = 6,
    EFortHotSpotDirection_MAX = 7
};

enum EFortHotSpotPreview
{
    None = 0,
    Smashing = 1,
    Shooting = 2,
    EFortHotSpotPreview_MAX = 3
};

enum EFortHotSpotSlot
{
    Melee = 0,
    MeleeHuge = 1,
    Ranged = 2,
    None = 3,
    EFortHotSpotSlot_MAX = 4
};

enum EFortHuskAnimType
{
    Basic = 0,
    Dwarf = 1,
    BlasterBig = 2,
    Weak = 3,
    TinyHead = 4,
    Beehive = 5,
    Husky = 6,
    Sploder = 7,
    Zapper = 8,
    EFortHuskAnimType_MAX = 9
};

enum EFortIdleCheckResult
{
    Invalid = 0,
    ActivityDetected = 1,
    Idle = 2,
    IdlePastMaxTime = 3,
    EFortIdleCheckResult_MAX = 4
};

enum EFortIdleDetectionState
{
    Disabled = 0,
    Default = 1,
    Suspicious = 2,
    Problematic = 3,
    Inactive = 4,
    EFortIdleDetectionState_MAX = 5
};

enum EFortIndicatorState
{
    Hidden = 0,
    OnlyFriendsVisible = 1,
    Visible = 2,
    EFortIndicatorState_MAX = 3
};

enum EFortInputActionGroup
{
    AllModes = 0,
    Combat = 1,
    Building = 2,
    Movement = 3,
    Edit = 4,
    Death = 5,
    Cinematic = 6,
    Picker = 7,
    Other = 8,
    Interaction = 9,
    AthenaLTMAbilities = 10,
    ShoppingCart = 11,
    ShoppingCartDriver = 12,
    ShoppingCartPassenger = 13,
    Cannon = 14,
    CannonDriver = 15,
    CannonPassenger = 16,
    GolfCart = 17,
    GolfCartDriver = 18,
    GolfCartPassenger = 19,
    QuadCrasher = 20,
    QuadCrasherDriver = 21,
    QuadCrasherPassenger = 22,
    Biplane = 23,
    BiplaneDriver = 24,
    BiplaneGroundDriver = 25,
    BiplanePassenger = 26,
    Hamsterball = 27,
    Jackal = 28,
    Ostrich = 29,
    OstrichDriver = 30,
    OstrichPassenger = 31,
    Meatball = 32,
    MeatballDriver = 33,
    MeatballPassenger = 34,
    HoagieDriver = 35,
    Dagwood = 36,
    DagwoodDriver = 37,
    DagwoodPassenger = 38,
    Nevada = 39,
    NevadaDriver = 40,
    MountedTurret = 41,
    Spectating = 42,
    FullscreenMap = 43,
    CreativeAll = 44,
    CreativeModeratorMode = 45,
    CreativeMoveToolEquipped = 46,
    CreativeMoveObjectsFreely = 47,
    CreativeMoveBuildingsOnGrid = 48,
    CreativeFlying = 49,
    CreativeIslandPanel = 50,
    CreativeChair = 51,
    PropSelectorEquipped = 52,
    CreativeInputDevice = 53,
    DBNOCarryStart = 54,
    DBNOCarryStop = 55,
    DBNOCarry = 56,
    InteractionStart = 57,
    InteractionStop = 58,
    BattleLab = 59,
    RemoteControl = 60,
    SuperDuper = 61,
    Tether = 62,
    Riding = 63,
    Tank = 64,
    TankDriver = 65,
    TankPassenger = 66,
    RockVehicle = 67,
    RockVehicleB = 68,
    Dirtbike = 69,
    DirtbikeDriver = 70,
    DirtbikePassenger = 71,
    Sportbike = 72,
    SportbikeDriver = 73,
    SportbikePassenger = 74,
    PlayerAugments = 75,
    Targeting = 76,
    CombatAndBuilding = 77,
    CombatAndAthenaLTMAbilities = 78,
    CombatBuildingAndAthenaLTMAbilities = 79,
    MAX = 80
};

enum EFortInputActionType
{
    Press = 0,
    Click = 1,
    Hold = 2,
    Release = 3,
    EFortInputActionType_MAX = 4
};

enum EFortInputDevice
{
    Mouse = 0,
    Keyboard = 1,
    Gamepad = 2,
    Touch = 3,
    EFortInputDevice_MAX = 4
};

enum EFortInputFilterLevel
{
    None = 0,
    Touch = 1,
    Gamepad = 2,
    Mouse = 3,
    EFortInputFilterLevel_MAX = 4
};

enum EFortInputGameMode
{
    SaveTheWorld = 0,
    Athena = 1,
    EFortInputGameMode_MAX = 2
};

enum EFortInputMode
{
    Frontend = 0,
    InGame = 1,
    InGameCursor = 2,
    EFortInputMode_MAX = 3
};

enum EFortInputMouseAxis
{
    X = 0,
    Y = 1,
    Both = 2,
    EFortInputMouseAxis_MAX = 3
};

enum EFortInputStickOption
{
    Move = 0,
    Look = 1,
    EFortInputStickOption_MAX = 2
};

enum EFortIntensityCurveSequenceType
{
    Sequence = 0,
    Loop = 1,
    Random = 2,
    Max_None = 3,
    EFortIntensityCurveSequenceType_MAX = 4
};

enum EFortIntensityGraphElements
{
    ActualIntensity = 0,
    DesiredIntensity = 1,
    Max_None = 2,
    EFortIntensityGraphElements_MAX = 3
};

enum EFortInteractContextInfoType
{
    Standard = 0,
    Crafting = 1,
    EFortInteractContextInfoType_MAX = 2
};

enum EFortInvalidActivityReason
{
    None = 0,
    PartyTooBig = 1,
    NotPartyLeader = 2,
    MatchmakingAlready = 3,
    PlaylistDisabled = 4,
    PlayerIsLfg = 5,
    InvalidData = 6,
    EFortInvalidActivityReason_MAX = 7
};

enum EFortInventoryContext
{
    Game = 0,
    Lobby = 1,
    FrontEnd = 2,
    Pickup = 3,
    EFortInventoryContext_MAX = 4
};

enum EFortInventoryCustomFilter
{
    Mythic = 0,
    Legendary = 1,
    Epic = 2,
    Rare = 3,
    Uncommon = 4,
    Common = 5,
    EFortInventoryCustomFilter_MAX = 6
};

enum EFortInventoryFilter
{
    WeaponMelee = 0,
    WeaponRanged = 1,
    WeaponMod = 2,
    Ammo = 3,
    Traps = 4,
    Consumables = 5,
    Ingredients = 6,
    PlayerAugment = 7,
    Gadget = 8,
    Decorations = 9,
    Badges = 10,
    Heroes = 11,
    LeadSurvivors = 12,
    Survivors = 13,
    Defenders = 14,
    Resources = 15,
    ConversionControl = 16,
    AthenaCosmetics = 17,
    Playset = 18,
    CreativePlot = 19,
    TeamPerk = 20,
    Workers = 21,
    Invisible = 22,
    Max_None = 23,
    EFortInventoryFilter_MAX = 24
};

enum EFortInventoryType
{
    World = 0,
    Account = 1,
    Outpost = 2,
    MAX = 3
};

enum EFortIsFinalXpUpdate
{
    Uninitialized = 0,
    NotFinal = 1,
    Final = 2,
    EFortIsFinalXpUpdate_MAX = 3
};

enum EFortItemCardSize
{
    XXS = 0,
    XS = 1,
    Wide_S = 2,
    S = 3,
    M = 4,
    L = 5,
    Wide_L = 6,
    XL = 7,
    XXL = 8,
    EFortItemCardSize_MAX = 9
};

enum EFortItemCategoryOrdinal
{
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    EFortItemCategoryOrdinal_MAX = 3
};

enum EFortItemCollectorBehavior
{
    FirstToGoal = 0,
    FreeForAll = 1,
    EFortItemCollectorBehavior_MAX = 2
};

enum EFortItemCollectorState
{
    CanInteract = 0,
    Active = 1,
    Inactive = 2,
    Captured = 3,
    Invalid = 4,
    EFortItemCollectorState_MAX = 5
};

enum EFortItemCollectorTrackingType
{
    Player = 0,
    Team = 1,
    EFortItemCollectorTrackingType_MAX = 2
};

enum EFortItemCooldownType
{
    None = 0,
    AmmoRegeneration = 1,
    ItemActivation = 2,
    WeaponReloading = 3,
    Death = 4,
    AthenaWeaponFireCooldown = 5,
    AbilitySetActivateByInputAbility = 6,
    DirectProgressUpdate = 7,
    EFortItemCooldownType_MAX = 8
};

enum EFortItemCountStyle
{
    StackCount = 0,
    OverrideCount = 1,
    StackCountOverOverride = 2,
    EFortItemCountStyle_MAX = 3
};

enum EFortItemEntryState
{
    NoneState = 0,
    NewItemCount = 1,
    ShouldShowItemToast = 2,
    DurabilityInitialized = 3,
    DoNotShowSpawnParticles = 4,
    FromRecoveredBackpack = 5,
    FromGift = 6,
    PendingUpgradeCriteriaProgress = 7,
    OwnerBuildingHandle = 8,
    FromDroppedPickup = 9,
    JustCrafted = 10,
    CraftAndSlotTarget = 11,
    GenericAttributeValueSet = 12,
    PickupInstigatorHandle = 13,
    RechargingWeaponServerTime = 14,
    DisallowSwapOnNextPickUpAttempt = 15,
    DroppedFromQuestSource = 16,
    Tossed = 17,
    Loaded = 18,
    SaveMagazineAmmo = 19,
    MultiItemLevel = 20,
    MultiItemXP = 21,
    FromAugment = 22,
    PreventDropping = 23,
    PreventDroppingExceptFromDeath = 24,
    PreventDroppingExceptFromDeathWithCount = 25,
    ReAddedItem = 26,
    WeaponAmmoOverride = 27,
    DurabilityCooldownTimeRemainingOnUpdate = 28,
    LoadedAmmoHasBeenSet = 29,
    EFortItemEntryState_MAX = 30
};

enum EFortItemInspectionMode
{
    Overview = 0,
    Details = 1,
    View = 2,
    Evolution = 3,
    Upgrade = 4,
    UpgradeRarity = 5,
    Promotion = 6,
    EFortItemInspectionMode_MAX = 7
};

enum EFortItemManagementMode
{
    Details = 0,
    Comparison = 1,
    Mulch = 2,
    EFortItemManagementMode_MAX = 3
};

enum EFortItemShopCMSMaterialParameterType
{
    Invalid = 0,
    Texture = 1,
    Scalar = 2,
    Vector = 3,
    MAX = 4
};

enum EFortItemShopLoadingState
{
    Ready = 0,
    CatalogRefreshing = 1,
    ContentUpdating = 2,
    EFortItemShopLoadingState_MAX = 3
};

enum EFortItemShopOfferDisplayType
{
    TileGrid = 0,
    ExpandableList = 1,
    Billboard = 2,
    EFortItemShopOfferDisplayType_MAX = 3
};

enum EFortItemShopScrollDirection
{
    NoScroll = 0,
    ScrolledDown = 1,
    ScrolledUp = 2,
    EFortItemShopScrollDirection_MAX = 3
};

enum EFortItemShopShowIneligibleOffers
{
    Always = 0,
    OnlyGiftable = 1,
    Never = 2,
    EFortItemShopShowIneligibleOffers_MAX = 3
};

enum EFortItemShopTileImageRuleset
{
    Default = 0,
    ScaledStandard = 1,
    ScaledHalfStep = 2,
    Bundle = 3,
    FullSquare = 4,
    Basic = 5,
    ScaledFull = 6,
    EFortItemShopTileImageRuleset_MAX = 7
};

enum EFortItemTier
{
    No_Tier = 0,
    I = 1,
    II = 2,
    III = 3,
    IV = 4,
    V = 5,
    VI = 6,
    VII = 7,
    VIII = 8,
    IX = 9,
    X = 10,
    NumItemTierValues = 11,
    EFortItemTier_MAX = 12
};

enum EFortItemType
{
    WorldItem = 0,
    Ammo = 1,
    Badge = 2,
    BackpackPickup = 3,
    BuildingPiece = 4,
    CharacterPart = 5,
    Consumable = 6,
    Deco = 7,
    EditTool = 8,
    Ingredient = 9,
    ItemCache = 10,
    Food = 11,
    Gadget = 12,
    AthenaGadget = 13,
    HomebaseGadget = 14,
    BattleLabDevice = 15,
    SpyTechPerk = 16,
    HeroAbility = 17,
    MissionItem = 18,
    Trap = 19,
    MultiItem = 20,
    Weapon = 21,
    WeaponMelee = 22,
    WeaponRanged = 23,
    WeaponHarvest = 24,
    WeaponCreativePhone = 25,
    WeaponMod = 26,
    WorldResource = 27,
    CreativeUserPrefab = 28,
    CreativePlayset = 29,
    Vehicle = 30,
    Npc = 31,
    PlayerAugment = 32,
    AccountItem = 33,
    AccountResource = 34,
    CollectedResource = 35,
    Alteration = 36,
    CardPack = 37,
    Currency = 38,
    Hero = 39,
    Schematic = 40,
    Worker = 41,
    TeamPerk = 42,
    PlayerTech = 43,
    Token = 44,
    DailyRewardScheduleToken = 45,
    CodeToken = 46,
    Stat = 47,
    Buff = 48,
    BuffCredit = 49,
    Quest = 50,
    Accolades = 51,
    FriendChest = 52,
    MedalsPunchCard = 53,
    RepeatableDailiesCard = 54,
    ChallengeBundle = 55,
    ChallengeBundleSchedule = 56,
    ChallengeBundleCompletionToken = 57,
    GameplayModifier = 58,
    Outpost = 59,
    HomebaseNode = 60,
    Defender = 61,
    ConversionControl = 62,
    DeployableBaseCloudSave = 63,
    ConsumableAccountItem = 64,
    Quota = 65,
    Expedition = 66,
    HomebaseBannerIcon = 67,
    HomebaseBannerColor = 68,
    AthenaSkyDiveContrail = 69,
    PersonalVehicle = 70,
    AthenaGlider = 71,
    AthenaPickaxe = 72,
    AthenaBackpack = 73,
    AthenaCharacter = 74,
    AthenaDance = 75,
    AthenaLoadingScreen = 76,
    AthenaBattleBus = 77,
    AthenaVehicleCosmetic = 78,
    AthenaItemWrap = 79,
    AthenaMusicPack = 80,
    AthenaPetCosmetic = 81,
    AthenaSeasonTreasure = 82,
    AthenaSeason = 83,
    AthenaRewardGraph = 84,
    AthenaExtResource = 85,
    EventDescription = 86,
    BattleLabDeviceAccount = 87,
    AthenaEventToken = 88,
    EventPurchaseTracker = 89,
    CosmeticVariantToken = 90,
    CampaignHeroLoadout = 91,
    Playset = 92,
    PrerollData = 93,
    CreativePlot = 94,
    PlayerSurveyToken = 95,
    CosmeticLocker = 96,
    BannerToken = 97,
    RestedXpBoosterToken = 98,
    RewardEventGraphPurchaseToken = 99,
    HardcoreModifier = 100,
    EventDependentItem = 101,
    ItemAccessToken = 102,
    STWAccoladeReward = 103,
    Campsite = 104,
    VictoryCrown = 105,
    RealitySapling = 106,
    Apparel = 107,
    ApparelLayout = 108,
    PlayerAugmentsPersistence = 109,
    SparksAura = 110,
    SparksGuitar = 111,
    SparksBass = 112,
    SparksKeyboard = 113,
    SparksMicrophone = 114,
    SparksDrums = 115,
    SparksSpotlightAnim = 116,
    SparksSong = 117,
    JunoBuildingSet = 118,
    JunoBuildingProp = 119,
    SpecialItem = 120,
    Emote = 121,
    Stack = 122,
    CollectionBookPage = 123,
    BGAConsumableWrapper = 124,
    GiftBox = 125,
    GiftBoxUnlock = 126,
    PlaysetProp = 127,
    RegCosmeticDef = 128,
    Profile = 129,
    Max_None = 130,
    EFortItemType_MAX = 131
};

enum EFortItemViewRotationMode
{
    None = 0,
    BoundsPivot = 1,
    World = 2,
    Relative = 3,
    Self = 4,
    EFortItemViewRotationMode_MAX = 5
};

enum EFortJackalSimEvent
{
    Jumped = 0,
    EFortJackalSimEvent_MAX = 1
};

enum EFortJumpStaminaCost
{
    None = 0,
    Trigger = 1,
    SprintTrigger = 2,
    SprintAir = 3,
    EFortJumpStaminaCost_MAX = 4
};

enum EFortKatanaPrimaryAttackVariation
{
    OnGroundFirst = 0,
    OnGroundSecond = 1,
    InAir = 2,
    EFortKatanaPrimaryAttackVariation_MAX = 3
};

enum EFortKeybindForcedHoldStatus
{
    NoForcedHold = 0,
    ForcedHold = 1,
    NeverShowHold = 2,
    EFortKeybindForcedHoldStatus_MAX = 3
};

enum EFortKeyframedMovementMovementMode
{
    EFKMMM_OneShot = 0,
    EFKMMM_Loop = 1,
    EFKMMM_PingPong = 2,
    EFKMMM_MAX = 3
};

enum EFortKeyframedMovementNetCommand
{
    EFKMNC_PlayFrom = 0,
    EFKMNC_HaltAt = 1,
    EFKMNC_MAX = 2
};

enum EFortKickReason
{
    NotKicked = 0,
    GenericKick = 1,
    WasBanned = 2,
    EncryptionRequired = 3,
    CrossPlayRestriction = 4,
    ClientIdRestriction = 5,
    EFortKickReason_MAX = 6
};

enum EFortLabelOverrideForceFixUpMode
{
    NONE = 0,
    FROM_LABEL_OVERRIDE = 1,
    FROM_BASE_LABEL = 2,
    EFortLabelOverrideForceFixUpMode_MAX = 3
};

enum EFortLeaderboardMetric
{
    Score = 0,
    Kills = 1,
    TeamScore = 2,
    EFortLeaderboardMetric_MAX = 3
};

enum EFortLegacySlateWidget
{
    None = 0,
    Minimap = 1,
    MAX = 2
};

enum EFortLevelStreamingState
{
    LSS_Unloaded = 0,
    LSS_Loaded = 1,
    LSS_UnconditionalFoundationsUpdated = 2,
    LSS_AllFoundationsUpdated = 3,
    LSS_NewActorsCreatedButNotUpdated = 4,
    LSS_AllUpdated = 5,
    LSS_Ready = 6,
    LSS_MAX = 7
};

enum EFortLimeGameplayAnalyticsEvents
{
    None = 0,
    Core_StartZone = 1,
    PlayerContextLocationPerMinute = 2,
    EFortLimeGameplayAnalyticsEvents_MAX = 3
};

enum EFortLimeUefnAnalyticsEvents
{
    None = 0,
    UEFN_Heartbeat = 1,
    UEFN_ProjectSessionSummary = 2,
    EFortLimeUefnAnalyticsEvents_MAX = 3
};

enum EFortLoadoutActionType
{
    Rename = 0,
    Overwrite = 1,
    SaveNew = 2,
    Clear = 3,
    Delete = 4,
    EFortLoadoutActionType_MAX = 5
};

enum EFortLobbyType
{
    Default = 0,
    Tournament = 1,
    Creative = 2,
    Division = 3,
    EFortLobbyType_MAX = 4
};

enum EFortLockDeviceVisibilityDuringGames
{
    No = 0,
    Yes = 1,
    HologramOnly = 2,
    EFortLockDeviceVisibilityDuringGames_MAX = 3
};

enum EFortLockerAnalyticAction
{
    Locker_SaveChanges = 0,
    Locker_CreateNew = 1,
    Locker_Clear = 2,
    Locker_Revert = 3,
    Locker_Randomize = 4,
    Preset_Delete = 5,
    Preset_ChangeActive = 6,
    Preset_ChangeName = 7,
    InGame_Warmup = 8,
    EFortLockerAnalyticAction_MAX = 9
};

enum EFortLoginDisplay
{
    LoginStatus = 0,
    SplashScreen = 1,
    LoginInteractions = 2,
    SafeZoneEditor = 3,
    HealthWarning = 4,
    QualityPresetSelection = 5,
    EFortLoginDisplay_MAX = 6
};

enum EFortLoginInteraction
{
    Begin = 0,
    StartLogin = 1,
    CredentialSelect = 2,
    NamePassword = 3,
    AccountNotFound = 4,
    CreateDisplayName = 5,
    MultiFactorAuth = 6,
    EULA = 7,
    AccountLink = 8,
    AccountPinLink = 9,
    WebLogin = 10,
    WebAccountCreation = 11,
    AgeGateHeadless = 12,
    CorrectiveAction = 13,
    EFortLoginInteraction_MAX = 14
};

enum EFortMantisBranchPath
{
    Default = 0,
    Path_1 = 1,
    Path_2 = 2,
    Path_3 = 3,
    Path_4 = 4,
    Path_5 = 5,
    Blocked = 6,
    EFortMantisBranchPath_MAX = 7
};

enum EFortMantisBranchRule
{
    Off = 0,
    Any = 1,
    Starter = 2,
    EFortMantisBranchRule_MAX = 3
};

enum EFortMantisNotifyEvent
{
    Invalid = 0,
    Branch = 1,
    EndTechnique = 2,
    AllowInterruption = 3,
    EFortMantisNotifyEvent_MAX = 4
};

enum EFortMantisNotifyRotationWarpRateRule
{
    Snap = 0,
    WindowDurationLerp = 1,
    EFortMantisNotifyRotationWarpRateRule_MAX = 2
};

enum EFortMantisNotifyTranslationWarpLimitRule
{
    None = 0,
    Window = 1,
    Animation = 2,
    Custom = 3,
    EFortMantisNotifyTranslationWarpLimitRule_MAX = 4
};

enum EFortMantisNotifyWindow
{
    Invalid = 0,
    Input = 1,
    Execution = 2,
    Damage = 3,
    RootMotionWarp = 4,
    EFortMantisNotifyWindow_MAX = 5
};

enum EFortMantisTechniqueActivationInputType
{
    None = 0,
    Primary = 1,
    Secondary = 2,
    Max_Invalid = 3,
    EFortMantisTechniqueActivationInputType_MAX = 4
};

enum EFortMantisTechniqueActivationTimingType
{
    None = 0,
    Pressed = 1,
    Released = 2,
    EFortMantisTechniqueActivationTimingType_MAX = 3
};

enum EFortMantisTechniqueAnimationType
{
    SingleMontage = 0,
    DynamicMontage = 1,
    AnimInstance = 2,
    EFortMantisTechniqueAnimationType_MAX = 3
};

enum EFortMantisTechniqueRootMotionType
{
    None = 0,
    ExtractFromMontageAndWarp = 1,
    HoldPosition = 2,
    EFortMantisTechniqueRootMotionType_MAX = 3
};

enum EFortMantisWarpRotationMethod
{
    None = 0,
    FaceTargetActor = 1,
    StaticRotation = 2,
    EFortMantisWarpRotationMethod_MAX = 3
};

enum EFortMantisWarpTranslationMethod
{
    None = 0,
    OffsetFromTargetActor = 1,
    StaticLocation = 2,
    Reorient = 3,
    ScaledBasedOnInput = 4,
    ReorientAndScaledBasedOnInput = 5,
    EFortMantisWarpTranslationMethod_MAX = 6
};

enum EFortMapDisplayType
{
    None = 0,
    Capture = 1,
    CustomMaterial = 2,
    CustomTexture = 3,
    Count = 4,
    EFortMapDisplayType_MAX = 5
};

enum EFortMapNavigationDirection
{
    North = 0,
    NorthEast = 1,
    East = 2,
    SouthEast = 3,
    South = 4,
    SouthWest = 5,
    West = 6,
    NorthWest = 7,
    Invalid = 8,
    EFortMapNavigationDirection_MAX = 9
};

enum EFortMarkedActorScreenClamping
{
    Default = 0,
    Clamp = 1,
    ClampWhileNew = 2,
    DontClamp = 3,
    EFortMarkedActorScreenClamping_MAX = 4
};

enum EFortMarkerActions
{
    None = 0,
    Cancel = 1,
    Confirm = 2,
    CancelAndReturnNPC = 3,
    Unconfirm = 4,
    EFortMarkerActions_MAX = 5
};

enum EFortMarkerIncrementType
{
    Single = 0,
    Distance = 1,
    StackSize = 2,
    EFortMarkerIncrementType_MAX = 3
};

enum EFortMatchmakingPool
{
    Any = 0,
    Desktop = 1,
    PS4 = 2,
    XboxOne = 3,
    Mobile = 4,
    Test = 5,
    Switch = 6,
    Console = 7,
    All = 8,
    EFortMatchmakingPool_MAX = 9
};

enum EFortMatchmakingPrivacyConfiguration
{
    UserPartyConfigured = 0,
    ForcePrivate = 1,
    ForcePublic = 2,
    EFortMatchmakingPrivacyConfiguration_MAX = 3
};

enum EFortMatchmakingTileStyle
{
    None = 0,
    Special = 1,
    HighStakes = 2,
    Showdown = 3,
    EFortMatchmakingTileStyle_MAX = 4
};

enum EFortMatchmakingType
{
    Gathering = 0,
    CriticalMission = 1,
    QuickPlay = 2,
    Session = 3,
    EFortMatchmakingType_MAX = 4
};

enum EFortMatchmakingViolatorStyle
{
    None = 0,
    Basic = 1,
    HighStakes = 2,
    Showdown = 3,
    FirstTimeUser = 4,
    EFortMatchmakingViolatorStyle_MAX = 5
};

enum EFortMaterialProgressBarSection
{
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    Negative = 3,
    MAX_PROGRESS_BAR_SECTIONS = 4,
    EFortMaterialProgressBarSection_MAX = 5
};

enum EFortMaterialProgressBarSectionColorNumber
{
    Color1 = 0,
    Color2 = 1,
    EFortMaterialProgressBarSectionColorNumber_MAX = 2
};

enum EFortMaterialProgressBarSectionOverflowBehavior
{
    PreserveValues = 0,
    ReverseCollapse = 1,
    EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};

enum EFortMediaGlobalEventsPlayerType
{
    Primary = 0,
    Secondary = 1,
    BackgroundAudio = 2,
    EFortMediaGlobalEventsPlayerType_MAX = 3
};

enum EFortMeleeFX
{
    Idle = 0,
    Swing = 1,
    AnimTrail = 2,
    EFortMeleeFX_MAX = 3
};

enum EFortMemberConnectionState
{
    Open = 0,
    Connecting = 1,
    Connected = 2,
    Invalid = 3,
    EFortMemberConnectionState_MAX = 4
};

enum EFortMetaSoundAutoInterfaceTypes
{
    None = 0,
    Movement = 1,
    Time = 2,
    ActiveSound = 3,
    EFortMetaSoundAutoInterfaceTypes_MAX = 4
};

enum EFortMiniMapContext
{
    EFMC_MiniMap = 0,
    EFMC_FullScreenMap = 1,
    EFMC_MAX = 2
};

enum EFortMiniMapDrawCategory
{
    AthenaBackground = 0,
    MapLocation = 1,
    SafeZone = 2,
    BusPath = 3,
    SpecialActorIcon = 4,
    SquadPin = 5,
    MapIndicator = 6,
    MapCursor = 7,
    Elimination = 8,
    MAX = 9
};

enum EFortMiniMapHeight
{
    EFMH_Equal = 0,
    EFMH_Below = 1,
    EFMH_Above = 2,
    EFMH_MAX = 3
};

enum EFortMiniMapIconRotation
{
    EFMMIR_None = 0,
    EFMMIR_Absolute = 1,
    EFMMIR_Relative = 2,
    EFMMIR_MAX = 3
};

enum EFortMinigameClassResetType
{
    Never = 0,
    RoundEnd = 1,
    GameEnd = 2,
    PlayerDeath = 3,
    EFortMinigameClassResetType_MAX = 4
};

enum EFortMinigameClassSlot
{
    ZeroIndex = 0,
    None = 1,
    EFortMinigameClassSlot_MAX = 2
};

enum EFortMinigameEnd
{
    Teardown = 0,
    AbandonGame = 1,
    EndGame = 2,
    EndRound = 3,
    EFortMinigameEnd_MAX = 4
};

enum EFortMinigameExec
{
    Yes = 0,
    No = 1,
    EFortMinigameExec_MAX = 2
};

enum EFortMinigamePlayerSpawnLocationSetting
{
    SpawnPads = 0,
    Device = 1,
    Preplaced = 2,
    Air = 3,
    CurrentLocation = 4,
    DoNotSpawn = 5,
    EFortMinigamePlayerSpawnLocationSetting_MAX = 6
};

enum EFortMinigamePostGameSpawnLocationSetting
{
    IslandStart = 0,
    PreGameLocation = 1,
    EFortMinigamePostGameSpawnLocationSetting_MAX = 2
};

enum EFortMinigameSpawnPadSelection
{
    Random = 0,
    NearTeammates = 1,
    EFortMinigameSpawnPadSelection_MAX = 2
};

enum EFortMinigameStatOperation
{
    Equal = 0,
    Less = 1,
    Greater = 2,
    LessOrEqual = 3,
    GreaterOrEqual = 4,
    EFortMinigameStatOperation_MAX = 5
};

enum EFortMinigameStatScope
{
    Group = 0,
    Team = 1,
    Player = 2,
    EFortMinigameStatScope_MAX = 3
};

enum EFortMinigameState
{
    PreGame = 0,
    Setup = 1,
    Transitioning = 2,
    WaitingForCameras = 3,
    Warmup = 4,
    InProgress = 5,
    PostGameTimeDilation = 6,
    PostRoundEnd = 7,
    PostGameEnd = 8,
    PostGameAbandon = 9,
    PostGameReset = 10,
    Teardown = 11,
    EFortMinigameState_MAX = 12
};

enum EFortMinigameTimeAliveStartPoint
{
    RoundStart = 0,
    PawnCreated = 1,
    EFortMinigameTimeAliveStartPoint_MAX = 2
};

enum EFortMinigameTimeAliveTeamTrackingMethod
{
    Accumulate = 0,
    Max = 1,
    Min = 2
};

enum EFortMinimapLayer
{
    EFML_PrePOIText = 0,
    EFML_PostStorm = 1,
    EFML_PostSpecialActors = 2,
    EFML_PostSquadIcons = 3,
    EFML_MAX = 4
};

enum EFortMissionActivationWidgetSTWState
{
    Default = 0,
    StartObjective = 1,
    IncreaseDifficulty = 2,
    Invalid = 3,
    EFortMissionActivationWidgetSTWState_MAX = 4
};

enum EFortMissionActivationWidgetState
{
    Default = 0,
    StartObjective = 1,
    IncreaseDifficulty = 2,
    Invalid = 3,
    EFortMissionActivationWidgetState_MAX = 4
};

enum EFortMissionAudibility
{
    UseVisibility = 0,
    Audible = 1,
    Inaudible = 2,
    EFortMissionAudibility_MAX = 3
};

enum EFortMissionQuestValidityResult
{
    Invalid = 0,
    InvalidNotPlayable = 1,
    ValidLinked = 2,
    ValidObjectiveCondition = 3,
    ValidFallback = 4,
    EFortMissionQuestValidityResult_MAX = 5
};

enum EFortMissionStatus
{
    Created = 0,
    InProgress = 1,
    Succeeded = 2,
    Failed = 3,
    NeutralCompletion = 4,
    Quit = 5,
    Max_None = 6,
    EFortMissionStatus_MAX = 7
};

enum EFortMissionType
{
    Primary = 0,
    Secondary = 1,
    Max_None = 2,
    EFortMissionType_MAX = 3
};

enum EFortMissionVisibilityOverride
{
    Visible = 0,
    Invisible = 1,
    Max_None = 2,
    EFortMissionVisibilityOverride_MAX = 3
};

enum EFortMobileFPSMode
{
    Mode_20Fps = 0,
    Mode_30Fps = 1,
    Mode_45Fps = 2,
    Mode_60Fps = 3,
    Mode_90Fps = 4,
    Mode_120Fps = 5,
    Num = 6,
    EFortMobileFPSMode_MAX = 7
};

enum EFortModifiedStatus
{
    IsDefault = 0,
    IsModified = 1,
    Unsupported = 2,
    EFortModifiedStatus_MAX = 3
};

enum EFortMontageInputType
{
    WindowClickOrHold = 0,
    WindowHoldOnly = 1,
    InstantClick = 2,
    EFortMontageInputType_MAX = 3
};

enum EFortMotionMatchingLocomotionState
{
    Idle = 0,
    Start = 1,
    Loop = 2,
    Pivot = 3,
    Stop = 4,
    EFortMotionMatchingLocomotionState_MAX = 5
};

enum EFortMotionMatchingLocomotionStyle
{
    Idle = 0,
    Walk = 1,
    Run = 2,
    Sprint = 3,
    EFortMotionMatchingLocomotionStyle_MAX = 4
};

enum EFortMotionYawAxis
{
    Yaw = 0,
    Roll = 1,
    EFortMotionYawAxis_MAX = 2
};

enum EFortMotorcycleAirTrickType
{
    None = 0,
    Default = 1,
    Left = 2,
    Right = 3,
    EFortMotorcycleAirTrickType_MAX = 4
};

enum EFortMotorcycleWheelTraceMode
{
    None = 0,
    BoxSweep = 1,
    LineTrace = 2,
    EFortMotorcycleWheelTraceMode_MAX = 3
};

enum EFortMovementModeExt_PhysUpdateResult
{
    Continue = 0,
    AbortIteration = 1,
    AbortPhysUpdate = 2,
    EFortMovementModeExt_MAX = 3
};

enum EFortMovementModeExt_UpdateResult
{
    Updating = 0,
    Active = 1,
    Active_Layered = 2,
    Ended = 3,
    EFortMovementModeExt_MAX = 4
};

enum EFortMovementMode_GrindingState
{
    Created = 0,
    Active = 1,
    AnchorJump = 2,
    RequestToEnd = 3,
    EFortMovementMode_GrindingState_MAX = 4
};

enum EFortMovementMode_SlidingState
{
    Created = 0,
    AwaitsActivationOnLanding = 1,
    LandedProceedToActivation = 2,
    LandedFailedAbort = 3,
    ActiveStartBoost = 4,
    ActiveNoBoost = 5,
    ActiveSlideFalling = 6,
    FallingPostPendingLaunch = 7,
    RequestToEnd = 8,
    EFortMovementMode_SlidingState_MAX = 9
};

enum EFortMovementStyle
{
    Running = 0,
    Walking = 1,
    Charging = 2,
    Sprinting = 3,
    PersonalVehicle = 4,
    Flying = 5,
    Tethered = 6,
    Invalid = 7,
    EFortMovementStyle_MAX = 8
};

enum EFortMovementUrgency
{
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    NumLevels = 4,
    EFortMovementUrgency_MAX = 5
};

enum EFortMtxOfferDisplaySize
{
    Small = 0,
    Medium = 1,
    Large = 2,
    EFortMtxOfferDisplaySize_MAX = 3
};

enum EFortMtxPlatform
{
    Epic = 0,
    PSN = 1,
    Live = 2,
    Shared = 3,
    EpicPC = 4,
    EpicPCKorea = 5,
    IOSAppStore = 6,
    EpicAndroid = 7,
    Nintendo = 8,
    WeGame = 9,
    Samsung = 10,
    GooglePlay = 11,
    EpicIOS = 12,
    EFortMtxPlatform_MAX = 13
};

enum EFortMtxStoreOfferType
{
    FoundersPack = 0,
    CurrencyPack = 1,
    Unknown = 2,
    Max_None = 3,
    EFortMtxStoreOfferType_MAX = 4
};

enum EFortMusicCombatIntensity
{
    Low = 0,
    Medium = 1,
    High = 2,
    VeryHigh = 3,
    Max_None = 4,
    EFortMusicCombatIntensity_MAX = 5
};

enum EFortMusicPlaybackType
{
    Normal = 0,
    Preview = 1,
    Stems = 2,
    EFortMusicPlaybackType_MAX = 3
};

enum EFortMusicSectionStopBehavior
{
    Crossfade = 0,
    AllowFadeOut = 1,
    EFortMusicSectionStopBehavior_MAX = 2
};

enum EFortMusicSectionType
{
    Intro = 0,
    Loop = 1,
    Outro = 2,
    Max_None = 3,
    EFortMusicSectionType_MAX = 4
};

enum EFortMutatorOverridePriority
{
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    EFortMutatorOverridePriority_MAX = 4
};

enum EFortMutatorReturnValue
{
    Ignore = 0,
    Override = 1,
    OverrideReturn = 2,
    EFortMutatorReturnValue_MAX = 3
};

enum EFortNamedBundle
{
    Menu = 0,
    MenuCampaign = 1,
    MenuAthena = 2,
    Zone = 3,
    ZoneCampaign = 4,
    ZoneAthena = 5,
    Client = 6,
    ClientCampaign = 7,
    ClientAthena = 8,
    EFortNamedBundle_MAX = 9
};

enum EFortNamedNavmesh
{
    Husk = 0,
    Smasher = 1,
    MAX = 2
};

enum EFortNativeCurieFXCueResponse
{
    IgnoreCue = 0,
    AllowCue = 1,
    OverrideCue = 2,
    EFortNativeCurieFXCueResponse_MAX = 3
};

enum EFortNavLinkPattern
{
    Floor = 0,
    Stairs = 1,
    Roof = 2,
    Manual = 3,
    EFortNavLinkPattern_MAX = 4
};

enum EFortNearbyActorsTypes
{
    None = 0,
    RealPlayers = 1,
    Bots = 2,
    NPCs = 3,
    AIPawns = 4,
    All = 5,
    EFortNearbyActorsTypes_MAX = 6
};

enum EFortNetworkScope
{
    Neither = 0,
    Client = 1,
    Server = 2,
    Both = 3,
    EFortNetworkScope_MAX = 4
};

enum EFortNotificationEntryCompletionStatus
{
    New = 0,
    Active = 1,
    Completed = 2,
    MAX = 3
};

enum EFortNotificationPriority
{
    Vote = 0,
    Friend = 1,
    BoostedXP = 2,
    GeneralSendNotification = 3,
    Max = 4
};

enum EFortNotificationQueueType
{
    Toasts = 0,
    Stickies = 1,
    Messages = 2,
    Max = 3
};

enum EFortNotificationType
{
    Default = 0,
    Power = 1,
    HealthWarning = 2,
    Error = 3,
    GiftSent = 4,
    VoiceChannel = 5,
    DonutChallenge = 6,
    SocialNotification = 7,
    BattlePassPageUnlock = 8,
    DownloadOnDemandError = 9,
    CompeteStart = 10,
    Max = 11
};

enum EFortNotifyAudioParamsStoreSource
{
    Weapon = 0,
    Pawn = 1,
    Controller = 2,
    EFortNotifyAudioParamsStoreSource_MAX = 3
};

enum EFortObjectiveRequirement
{
    Optional = 0,
    Required = 1,
    RequiredButCanFail = 2,
    EFortObjectiveRequirement_MAX = 3
};

enum EFortObjectiveStatus
{
    Created = 0,
    InProgress = 1,
    Succeeded = 2,
    Failed = 3,
    NeutralCompletion = 4,
    Max_None = 5,
    EFortObjectiveStatus_MAX = 6
};

enum EFortOctopusSimEvent
{
    BeginBoostCooldown = 0,
    EFortOctopusSimEvent_MAX = 1
};

enum EFortOfferSeenLevel
{
    Unseen = 0,
    Notification = 1,
    ItemShopVisited = 2,
    OfferSectionVisited = 3,
    Purchased = 4,
    EFortOfferSeenLevel_MAX = 5
};

enum EFortOptionGenerationResult
{
    NoOptionsGenerated = 0,
    NewOptionsGenerated = 1,
    ExistingOptionsGenerated = 2,
    EFortOptionGenerationResult_MAX = 3
};

enum EFortPCTutorialCompletedState
{
    Unknown = 0,
    Incomplete = 1,
    Complete = 2,
    EFortPCTutorialCompletedState_MAX = 3
};

enum EFortPIDValueGraphElements
{
    Proportional = 0,
    Integral = 1,
    Max_None = 2,
    EFortPIDValueGraphElements_MAX = 3
};

enum EFortPartVisibility
{
    Visible = 0,
    Hidden = 1,
    HiddenCastShadow = 2,
    EFortPartVisibility_MAX = 3
};

enum EFortPartialPathUsage
{
    Always = 0,
    OnlyGoalsOnDestructible = 1,
    Never = 2,
    EFortPartialPathUsage_MAX = 3
};

enum EFortPartyMemberDisplayState
{
    Open = 0,
    Connecting = 1,
    Connected = 2,
    Max = 3
};

enum EFortPartyMemberInGameMode
{
    None = 0,
    InBattleRoyale = 1,
    InCreative = 2,
    InSaveTheWorld = 3,
    EFortPartyMemberInGameMode_MAX = 4
};

enum EFortPartyMemberLocation
{
    PreLobby = 0,
    ConnectingToLobby = 1,
    Lobby = 2,
    JoiningGame = 3,
    ProcessingRejoin = 4,
    InGame = 5,
    Spectating = 6,
    WatchingReplay = 7,
    ReturningToFrontEnd = 8,
    EFortPartyMemberLocation_MAX = 9
};

enum EFortPartyMemberReadyCheckStatus
{
    None = 0,
    InProgress = 1,
    Complete = 2,
    Canceled = 3,
    EFortPartyMemberReadyCheckStatus_MAX = 4
};

enum EFortPartyState
{
    Undetermined = 0,
    WorldView = 1,
    TheaterView = 2,
    Matchmaking = 3,
    PostMatchmaking = 4,
    ReturningToFrontEnd = 5,
    BattleRoyaleView = 6,
    BattleRoyalePreloading = 7,
    BattleRoyaleMatchmaking = 8,
    BattleRoyalePostMatchmaking = 9,
    EFortPartyState_MAX = 10
};

enum EFortPawnComponent_DisguiseRevealReason
{
    ByDamage = 0,
    ByConversation = 1,
    ByProximity = 2,
    Unknown = 3,
    EFortPawnComponent_MAX = 4
};

enum EFortPawnDisplayContext
{
    BattleRoyale = 0,
    VaultItemsFromOffer = 1,
    VaultItem = 2,
    VaultItems = 3,
    VaultItemFromDefinition = 4,
    CampaignFrontEndPlayer = 5,
    CampaignNPC = 6,
    CampaignHeroInspect = 7,
    CampaignHeroLoadoutSupport = 8,
    CampaignOutfitPicker = 9,
    EFortPawnDisplayContext_MAX = 10
};

enum EFortPawnMaterialOverrideFlags
{
    None = 0,
    HideParticleSystems = 1,
    ApplyToWeapon = 2,
    ApplyToEmoteProps = 3,
    RespectPartOverrides = 4,
    EFortPawnMaterialOverrideFlags_MAX = 5
};

enum EFortPawnPushSize
{
    FFPS_Normal = 0,
    FPPS_Player = 1,
    FPPS_Large = 2,
    FPPS_SuperLarge = 3,
    EFortPawnPushSize_MAX = 4
};

enum EFortPawnStasisMode
{
    None = 0,
    NoMovement = 1,
    NoMovementOrTurning = 2,
    NoMovementOrFalling = 3,
    NoMovement_EmotesEnabled = 4,
    NoMovementOrTurning_EmotesEnabled = 5,
    NoMovementOrFalling_EmotesEnabled = 6,
    EFortPawnStasisMode_MAX = 7
};

enum EFortPawnState
{
    Default = 0,
    InCombat = 1,
    DBNO = 2,
    IsReviving = 3,
    BeingRevived = 4,
    Dead = 5,
    EFortPawnState_MAX = 6
};

enum EFortPerModeInputType
{
    KeyboardMouse = 0,
    Controller = 1,
    EFortPerModeInputType_MAX = 2
};

enum EFortPerksWidgetState
{
    Normal = 0,
    Upgrade = 1,
    Evolution = 2,
    EFortPerksWidgetState_MAX = 3
};

enum EFortPhysicsObjectActivationType
{
    Unset = 0,
    Normal = 1,
    Lazy = 2,
    AlwaysInstant = 3,
    EFortPhysicsObjectActivationType_MAX = 4
};

enum EFortPhysicsObjectAwakeState
{
    Invalid = 0,
    Awake = 1,
    Asleep = 2,
    EFortPhysicsObjectAwakeState_MAX = 3
};

enum EFortPhysicsObjectImpactDamageType
{
    Environment = 0,
    Pawn = 1,
    Vehicle = 2,
    Wildlife = 3,
    EFortPhysicsObjectImpactDamageType_MAX = 4
};

enum EFortPhysicsObjectMovementState
{
    None = 0,
    Flying = 1,
    Rolling = 2,
    Sliding = 3,
    Floating = 4,
    EFortPhysicsObjectMovementState_MAX = 5
};

enum EFortPhysicsObjectType
{
    Invalid = 0,
    StaticObject = 1,
    PhysicsObject = 2,
    Vehicle = 3,
    Pawn = 4,
    Projectile = 5,
    Player = 6,
    EFortPhysicsObjectType_MAX = 7
};

enum EFortPhysicsSimSize
{
    Small = 0,
    Average = 1,
    Medium = 2,
    Large = 3,
    Huge = 4,
    Giant = 5,
    Enormous = 6,
    Invalid = 7,
    EFortPhysicsSimSize_MAX = 8
};

enum EFortPickerMode
{
    BuildingCategory = 0,
    TrapCategory = 1,
    WeaponCategory = 2,
    SocialCategory = 3,
    Building = 4,
    Trap = 5,
    TrapRadial = 6,
    Weapon = 7,
    Social = 8,
    DirectPickEmote = 9,
    DirectPickSpray = 10,
    SquadQuickChat = 11,
    WeaponsSlotted = 12,
    MusicSource = 13,
    NPCCommand = 14,
    SquadRequest = 15,
    EFortPickerMode_MAX = 16
};

enum EFortPickerToDisplay
{
    TrapPicker = 0,
    SocialPicker = 1,
    ChatPicker = 2,
    NotePicker = 3,
    EmotePicker = 4,
    SquadQuickChatPicker = 5,
    MusicSourcePicker = 6,
    NPCCommandPicker = 7,
    SquadRequestPicker = 8,
    EFortPickerToDisplay_MAX = 9
};

enum EFortPickupSourceTypeFlag
{
    Other = 0,
    Player = 1,
    Destruction = 2,
    Container = 3,
    AI = 4,
    Tossed = 5,
    FloorLoot = 6,
    Fishing = 7,
    NPCService = 8,
    EFortPickupSourceTypeFlag_MAX = 9
};

enum EFortPickupSpawnSource
{
    Unset = 0,
    PlayerElimination = 1,
    Chest = 2,
    SupplyDrop = 3,
    AmmoBox = 4,
    Drone = 5,
    ItemSpawner = 6,
    BotElimination = 7,
    NPCElimination = 8,
    LootDrop = 9,
    TossedByPlayer = 10,
    NPC = 11,
    NPCGift = 12,
    CraftingBench = 13,
    VendingMachine = 14,
    QuestReward = 15,
    EFortPickupSpawnSource_MAX = 16
};

enum EFortPickupTossState
{
    NotTossed = 0,
    InProgress = 1,
    AtRest = 2,
    EFortPickupTossState_MAX = 3
};

enum EFortPlayerAnimBodyType
{
    Small = 0,
    Medium = 1,
    Large = 2,
    All = 3,
    EFortPlayerAnimBodyType_MAX = 4
};

enum EFortPlayerFeedbackFlags
{
    SubscreenFlow_ForceDisplayFreeText = 0,
    SubscreenFlow_IncludeScreenshotSubscreen = 1,
    SubscreenFlow_VoiceReportSubmit = 2,
    SubscreenFlow_OverlandNavigator = 3,
    DoNotDisplay_SaveTheWorld = 4,
    DoNotDisplay_Athena = 5,
    DoNotDisplay_Creative = 6,
    DoNotDisplay_Juno = 7,
    Submit_TryDisplayBlockUser = 8,
    Submit_TryDisplayCommunityRulesURL = 9,
    Submit_TryDisplayUnfollowCreator = 10,
    EFortPlayerFeedbackFlags_MAX = 11
};

enum EFortPlayerMannequinFlowgraphMode
{
    Unsupported = 0,
    Supported = 1,
    EFortPlayerMannequinFlowgraphMode_MAX = 2
};

enum EFortPlayerMannequinLoadingMode
{
    Asynchronous = 0,
    Synchronous = 1,
    EFortPlayerMannequinLoadingMode_MAX = 2
};

enum EFortPlayerPartState
{
    NeverInitalized = 0,
    AssetsPreloading = 1,
    QueuedForInitialization = 2,
    CurrentlyInitializing = 3,
    InitializationComplete = 4,
    InitializationComplete_EmptyPart = 5,
    InitializationComplete_Cancelled = 6,
    InitializationFailed_NoParts = 7,
    NumTypes = 8,
    EFortPlayerPartState_MAX = 9
};

enum EFortPlayerPawnType
{
    Fortnite = 0,
    Bean = 1,
    EFortPlayerPawnType_MAX = 2
};

enum EFortPlayerPowerRatingType
{
    Auto = 0,
    Campaign = 1,
    Phoenix = 2,
    Max_None = 3,
    EFortPlayerPowerRatingType_MAX = 4
};

enum EFortPlayerRole
{
    Player = 0,
    LiveSpectator = 1,
    ReplaySpectator = 2,
    InactivePlayer = 3,
    EFortPlayerRole_MAX = 4
};

enum EFortPlayerSurveyQuestionType
{
    SingleChoice = 0,
    MultipleChoice = 1,
    Rating = 2,
    EFortPlayerSurveyQuestionType_MAX = 3
};

enum EFortPlayerSurveyResponseChoiceType
{
    CheckBox = 0,
    Radio = 1,
    EFortPlayerSurveyResponseChoiceType_MAX = 2
};

enum EFortPlayerWorkOverFramesMode
{
    NotProcessing = 0,
    PreInitializeComponents = 1,
    DefaultPartsWhileWaiting = 2,
    UpdateCharacterCustomization = 3,
    NumTypes = 4,
    EFortPlayerWorkOverFramesMode_MAX = 5
};

enum EFortPlayerWorkOverFramesStage
{
    NotProcessing = 0,
    PreloadingParts = 1,
    QueuePostLoad = 2,
    PostLoad = 3,
    InitializeCharacterParts = 4,
    FinishUpdatingParts = 5,
    FinishedCustomization = 6,
    NumTypes = 7,
    EFortPlayerWorkOverFramesStage_MAX = 8
};

enum EFortPlaylistTeamSizeType
{
    Solo = 0,
    Duo = 1,
    Trio = 2,
    Squad = 3,
    LargeTeam = 4,
    MAX = 5
};

enum EFortPlaylistType
{
    Default = 0,
    Playground = 1,
    Creative = 2,
    Creative_LTM = 3,
    EFortPlaylistType_MAX = 4
};

enum EFortPlayspaceMatchmakingRules
{
    AllPlaylists = 0,
    SpecificPlaylists = 1,
    EFortPlayspaceMatchmakingRules_MAX = 2
};

enum EFortPlayspaceUserAcceptanceType
{
    CustomLogic = 0,
    Matchmaking = 1,
    VolumeBased = 2,
    EFortPlayspaceUserAcceptanceType_MAX = 3
};

enum EFortPointsFromNavGraphGoalPathDistanceFilterOperator
{
    AllGoalsInRange = 0,
    AnyGoalInRange = 1,
    EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2
};

enum EFortPowerRatingComparison
{
    InRange = 0,
    OverLevel = 1,
    UnderLevel = 2,
    Unknown = 3,
    EFortPowerRatingComparison_MAX = 4
};

enum EFortPreferredItemSlotItemType
{
    Unassigned = 0,
    AssaultRifle = 1,
    Shotgun = 2,
    SMG = 3,
    Pistol = 4,
    SniperAndBow = 5,
    Launcher = 6,
    Utility = 7,
    Consumable = 8,
    Num = 9,
    EFortPreferredItemSlotItemType_MAX = 10
};

enum EFortPrioritizedWidgetContestedBehavior
{
    QueueBehind = 0,
    StompOther = 1,
    EFortPrioritizedWidgetContestedBehavior_MAX = 2
};

enum EFortPrioritizedWidgetInterruptedBehavior
{
    RemainInQueue = 0,
    Drop = 1,
    EFortPrioritizedWidgetInterruptedBehavior_MAX = 2
};

enum EFortPrioritizedWidgetPriority
{
    Priority_0 = 0,
    Priority_1 = 1,
    Priority_2 = 2,
    Priority_3 = 3,
    Priority_4 = 4,
    Priority_5 = 5,
    NumberOfPrios = 6,
    EFortPrioritizedWidgetPriority_MAX = 7
};

enum EFortProgressiveContentInterfaceCloseReason
{
    Normal = 0,
    SubscriptionPurchased = 1,
    EFortProgressiveContentInterfaceCloseReason_MAX = 2
};

enum EFortProgressiveContentType
{
    ProgressiveTableOfContentsScreen = 0,
    ProgressiveItemScreen = 1,
    EFortProgressiveContentType_MAX = 2
};

enum EFortProjectileDetachReason
{
    HostDied = 0,
    HostEndedPlay = 1,
    Ejected = 2,
    EFortProjectileDetachReason_MAX = 3
};

enum EFortPrototypingStatus
{
    Unknown = 0,
    Disabled = 1,
    Enabled = 2,
    EFortPrototypingStatus_MAX = 3
};

enum EFortProximityBasedGEApplicationType
{
    ApplyOnProximityPulse = 0,
    ApplyOnProximityTouch = 1,
    ApplyOnlyDuringProximityTouch = 2,
    ApplyOnProximityExit = 3,
    ApplyOnProximityPrePulse = 4,
    EFortProximityBasedGEApplicationType_MAX = 5
};

enum EFortPurchaseHistoryRefundType
{
    CancelPurchase = 0,
    ReturnTicket = 1,
    TokenlessRefund = 2,
    NonRefundable = 3,
    EFortPurchaseHistoryRefundType_MAX = 4
};

enum EFortQueryGeneratorFloodfillBehavior
{
    PolyCenter = 0,
    RandomPositionOnPoly = 1,
    DistributedByPolyArea = 2,
    EFortQueryGeneratorFloodfillBehavior_MAX = 3
};

enum EFortQuestAnalyticState
{
    None = 0,
    Granted = 1,
    Claimed = 2,
    EFortQuestAnalyticState_MAX = 3
};

enum EFortQuestMapNodeLabelPosition
{
    Top = 0,
    Bottom = 1,
    EFortQuestMapNodeLabelPosition_MAX = 2
};

enum EFortQuestMapNodeType
{
    MandatoryQuest = 0,
    SideQuest = 1,
    EFortQuestMapNodeType_MAX = 2
};

enum EFortQuestObjectiveItemEvent
{
    Craft = 0,
    Collect = 1,
    Acquire = 2,
    Consume = 3,
    OpenCardPack = 4,
    PurchaseCardPack = 5,
    Convert = 6,
    Upgrade = 7,
    UpgradeRarity = 8,
    QuestComplete = 9,
    AssignWorker = 10,
    LevelUpCollectionBook = 11,
    LevelUpAthenaSeason = 12,
    LevelUpBattlePass = 13,
    GainAthenaSeasonXp = 14,
    HasItem = 15,
    HasAccumulatedItem = 16,
    SlotInCollection = 17,
    AlterationRespec = 18,
    AlterationUpgrade = 19,
    HasCompletedQuest = 20,
    HasAssignedWorker = 21,
    HasUpgraded = 22,
    HasConverted = 23,
    HasUpgradedRarity = 24,
    HasLeveledUpCollectionBook = 25,
    SlotHeroInLoadout = 26,
    HasLeveledUpAthenaSeason = 27,
    HasLeveledUpBattlePass = 28,
    HasGainedAthenaSeasonXp = 29,
    MinigameTime = 30,
    Max_None = 31,
    EFortQuestObjectiveItemEvent_MAX = 32
};

enum EFortQuestObjectiveStatEvent
{
    Kill = 0,
    TeamKill = 1,
    KillContribution = 2,
    Damage = 3,
    SquadDamage = 4,
    Visit = 5,
    VisitDiscoverPOI = 6,
    Land = 7,
    Emote = 8,
    Spray = 9,
    Toy = 10,
    Build = 11,
    BuildingEdit = 12,
    BuildingRepair = 13,
    BuildingUpgrade = 14,
    PlaceTrap = 15,
    Complete = 16,
    Craft = 17,
    Collect = 18,
    Win = 19,
    Interact = 20,
    TeamInteract = 21,
    Destroy = 22,
    Ability = 23,
    WaveComplete = 24,
    Custom = 25,
    ComplexCustom = 26,
    Client = 27,
    AthenaRank = 28,
    AthenaOutlive = 29,
    RevivePlayer = 30,
    Heal = 31,
    EarnVehicleTrickPoints = 32,
    VehicleAirTime = 33,
    TimeElapsed = 34,
    Death = 35,
    AthenaMarker = 36,
    PlacementUpdate = 37,
    StormPhase = 38,
    DistanceTraveled = 39,
    DownOrElim = 40,
    Accolade = 41,
    TakeDamage = 42,
    AthenaCollection = 43,
    AthenaCollectionFoundItem = 44,
    UsedNPCService = 45,
    ReceivedNPCGift = 46,
    InitiatedNPCConversation = 47,
    AthenaCraft = 48,
    AthenaTurnInQuest = 49,
    AthenaVehicleMod = 50,
    AthenaOpenedFriendChest = 51,
    AthenaAcquire = 52,
    InitiatedServiceStationConversation = 53,
    AthenaAccumulatedItem = 54,
    AthenaVehicleFlip = 55,
    AthenaVehicleTirePopped = 56,
    RevealedPawnDisguise = 57,
    ManuallyCompleted = 58,
    SpentBarsOnNPCService = 59,
    Hit = 60,
    CreativeDevice = 61,
    Feed = 62,
    HitWeakpoint = 63,
    PlaceTent = 64,
    ConvertNPC = 65,
    DiscoverLoot = 66,
    GlideDistance = 67,
    Throw = 68,
    Repair = 69,
    Ignite = 70,
    Refuel = 71,
    AthenaVehiclePartDisabled = 72,
    RevivedFromDBNO = 73,
    AthenaGainXp = 74,
    AthenaDistanceTraveled = 75,
    MatchStarted = 76,
    Finish = 77,
    TeammateDealtDamage = 78,
    CurrencyCollected = 79,
    ScoredPlayerElimination = 80,
    SquadScoredPlayerElimination = 81,
    SlayWildlife = 82,
    TeamScoredPlayerElimination = 83,
    AthenaLevelUp = 84,
    AugmentAttached = 85,
    AthenaEarnMiniGameScore = 86,
    AugmentsAvailable = 87,
    HatchedAI = 88,
    KillWhileMounted = 89,
    DistanceTraveledWhileMounted = 90,
    NumGameplayEvents = 91,
    Acquire = 92,
    Consume = 93,
    OpenCardPack = 94,
    PurchaseCardPack = 95,
    Convert = 96,
    Upgrade = 97,
    UpgradeRarity = 98,
    QuestComplete = 99,
    AssignWorker = 100,
    CollectExpedition = 101,
    CollectSuccessfulExpedition = 102,
    LevelUpCollectionBook = 103,
    LevelUpAthenaSeason = 104,
    LevelUpBattlePass = 105,
    GainAthenaSeasonXp = 106,
    HasItem = 107,
    HasAccumulatedItem = 108,
    SlotInCollection = 109,
    AlterationRespec = 110,
    AlterationUpgrade = 111,
    HasCompletedQuest = 112,
    HasAssignedWorker = 113,
    HasUpgraded = 114,
    HasConverted = 115,
    HasUpgradedRarity = 116,
    HasLeveledUpCollectionBook = 117,
    SlotHeroInLoadout = 118,
    HasLeveledUpAthenaSeason = 119,
    HasLeveledUpBattlePass = 120,
    HasGainedAthenaSeasonXp = 121,
    MinigameDynamicEvent = 122,
    MinigameComplete = 123,
    MinigameDeath = 124,
    MinigameAssist = 125,
    Max_None = 126,
    EFortQuestObjectiveStatEvent_MAX = 127
};

enum EFortQuestRewardType
{
    BasicRewards = 0,
    BasicPlusSingleChoice = 1,
    EFortQuestRewardType_MAX = 2
};

enum EFortQuestState
{
    Inactive = 0,
    Active = 1,
    Completed = 2,
    Claimed = 3,
    EFortQuestState_MAX = 4
};

enum EFortQuestSubtype
{
    None = 0,
    WeeklyChallenge = 1,
    PunchCard = 2,
    QuickChallenge = 3,
    Milestone = 4,
    MilestoneCapper = 5,
    UrgentQuest = 6,
    Autofill = 7,
    EFortQuestSubtype_MAX = 8
};

enum EFortQuestType
{
    Task = 0,
    Optional = 1,
    DailyQuest = 2,
    TransientQuest = 3,
    SurvivorQuest = 4,
    Achievement = 5,
    Onboarding = 6,
    Athena = 7,
    AthenaDailyQuest = 8,
    AthenaEvent = 9,
    AthenaChallengeBundleQuest = 10,
    AthenaLooseQuest = 11,
    All = 12,
    EFortQuestType_MAX = 13
};

enum EFortQueuedActionUserStatus
{
    Succeeded = 0,
    Failed = 1,
    WaitingForCloudRequest = 2,
    WaitingForProfileSave = 3,
    EFortQueuedActionUserStatus_MAX = 4
};

enum EFortQuickBars
{
    Primary = 0,
    Secondary = 1,
    Creative = 2,
    Max_None = 3,
    EFortQuickBars_MAX = 4
};

enum EFortQuickTimeEventResult
{
    None = 0,
    Miss = 1,
    Good = 2,
    Great = 3,
    Perfect = 4,
    EFortQuickTimeEventResult_MAX = 5
};

enum EFortRadialControllingStick
{
    Right = 0,
    Left = 1,
    EFortRadialControllingStick_MAX = 2
};

enum EFortRarity
{
    Common = 0,
    Uncommon = 1,
    Rare = 2,
    Epic = 3,
    Legendary = 4,
    Mythic = 5,
    Transcendent = 6,
    Unattainable = 7,
    NumRarityValues = 8,
    EFortRarity_MAX = 9
};

enum EFortRecoilCurveType
{
    WithTime = 0,
    WithOverheat = 1,
    EFortRecoilCurveType_MAX = 2
};

enum EFortReloadFXState
{
    ReloadStart = 0,
    ReloadCartridge = 1,
    ReloadEnd = 2,
    Max_None = 3,
    EFortReloadFXState_MAX = 4
};

enum EFortReloadMontageSection
{
    Intro = 0,
    Loop = 1,
    Outro = 2,
    EFortReloadMontageSection_MAX = 3
};

enum EFortRepairIncrementType
{
    Single = 0,
    RepairAmount = 1,
    PercentRepaired = 2,
    EFortRepairIncrementType_MAX = 3
};

enum EFortReplayEventType
{
    Elimination = 0,
    Eliminated = 1,
    DBNO = 2,
    UserPlaced = 3,
    MAX = 4
};

enum EFortReplenishmentType
{
    Restricted = 0,
    ClampMin = 1,
    Add = 2,
    Ability = 3,
    EFortReplenishmentType_MAX = 4
};

enum EFortReplicatedStat
{
    MonsterKills = 0,
    MonsterDamagePoints = 1,
    PlayerKills = 2,
    WoodGathered = 3,
    StoneGathered = 4,
    MetalGathered = 5,
    Deaths = 6,
    BluGloActivity = 7,
    BuildingsBuilt = 8,
    BuildingsBuilt_Wood = 9,
    BuildingsBuilt_Stone = 10,
    BuildingsBuilt_Metal = 11,
    BuildingsUpgraded_Wood2 = 12,
    BuildingsUpgraded_Wood3 = 13,
    BuildingsUpgraded_Stone2 = 14,
    BuildingsUpgraded_Stone3 = 15,
    BuildingsUpgraded_Metal2 = 16,
    BuildingsUpgraded_Metal3 = 17,
    BuildingsDestroyed = 18,
    Repair_Wood = 19,
    Repair_Stone = 20,
    Repair_Metal = 21,
    FlagsCaptured = 22,
    FlagsReturned = 23,
    ContainersLooted = 24,
    CraftingPoints = 25,
    TrapPlacementPoints = 26,
    TrapActivationPoints = 27,
    TotalScore = 28,
    OldTotalScore = 29,
    CombatScore = 30,
    BuildingScore = 31,
    UtilityScore = 32,
    BadgesScore = 33,
    None = 34,
    MAX = 35
};

enum EFortReportDayPhase
{
    Dawn = 0,
    Dusk = 1,
    ZoneFinished = 2,
    PlayerLogout = 3,
    EFortReportDayPhase_MAX = 4
};

enum EFortRequestedGameplayAction
{
    ContinuePlaying = 0,
    StartPlaying = 1,
    StopPlaying = 2,
    EnterZone = 3,
    LeaveZone = 4,
    ReturnToMainMenu = 5,
    QuitGame = 6,
    Invalid = 7,
    EFortRequestedGameplayAction_MAX = 8
};

enum EFortResourceLevel
{
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    Fifth = 4,
    Sixth = 5,
    NumLevels = 6,
    Invalid = 7,
    EFortResourceLevel_MAX = 8
};

enum EFortResourceType
{
    Wood = 0,
    Stone = 1,
    Metal = 2,
    Permanite = 3,
    GoldCurrency = 4,
    Ingredient = 5,
    None = 6,
    EFortResourceType_MAX = 7
};

enum EFortReticleColor
{
    Red = 0,
    Orange = 1,
    Yellow = 2,
    Green = 3,
    Cyan = 4,
    Blue = 5,
    Purple = 6,
    Magenta = 7,
    EFortReticleColor_MAX = 8
};

enum EFortReticleVisibiltyOption
{
    DoNotOverride = 0,
    ShowAlways = 1,
    ShowPickaxeOnly = 2,
    ShowNonPickaxeOnly = 3,
    HideAlways = 4,
    EFortReticleVisibiltyOption_MAX = 5
};

enum EFortRewardActivityType
{
    General = 0,
    MissionPrimary = 1,
    MissionSecondary = 2,
    AccountLevelUp = 3,
    Max_None = 4,
    EFortRewardActivityType_MAX = 5
};

enum EFortRewardItemType
{
    RewardedBadges = 0,
    MissedBadges = 1,
    RewardedItems = 2,
    RewardedAccountItems = 3,
    EFortRewardItemType_MAX = 4
};

enum EFortRewardItemTypeSTW
{
    RewardedBadges = 0,
    MissedBadges = 1,
    RewardedItems = 2,
    RewardedAccountItems = 3,
    EFortRewardItemTypeSTW_MAX = 4
};

enum EFortRewardType
{
    Default = 0,
    Missed = 1,
    Max_None = 2,
    EFortRewardType_MAX = 3
};

enum EFortRichColorConflictResolutionRules
{
    NoConflictsAllowed = 0,
    BlackOrWhiteCannotConflict = 1,
    MinimumDistanceBlackOrWhite = 2,
    MinimumContrast = 3,
    MinimumContrastOrHueSaturationShift = 4,
    MinimumContrastGrayscale = 5,
    EFortRichColorConflictResolutionRules_MAX = 6
};

enum EFortRiftSlotStatus
{
    Reserved = 0,
    Occupied = 1,
    Max_None = 2,
    EFortRiftSlotStatus_MAX = 3
};

enum EFortRiftSpawnSlotSelectionMode
{
    Random = 0,
    BestScore = 1,
    EFortRiftSpawnSlotSelectionMode_MAX = 2
};

enum EFortRigUnitTraceType
{
    SingleTrace = 0,
    MultiTrace = 1,
    EFortRigUnitTraceType_MAX = 2
};

enum EFortRpcCategory
{
    ActorInfo = 0,
    SocialActions = 1,
    GameplayActions = 2,
    ProjectActions = 3,
    WaspActions = 4,
    CheatCommands = 5,
    PilotCommands = 6,
    RecordingCommands = 7,
    UICommands = 8,
    Unknown = 9,
    EFortRpcCategory_MAX = 10
};

enum EFortRuntimeOptionTabState
{
    Default = 0,
    Disabled = 1,
    Hidden = 2,
    EFortRuntimeOptionTabState_MAX = 3
};

enum EFortRuntimeOptionTabStateTarget
{
    All = 0,
    Primary = 1,
    Secondary = 2,
    EFortRuntimeOptionTabStateTarget_MAX = 3
};

enum EFortSTWMatchmakingPrivacyType
{
    Public = 0,
    FriendsOnly = 1,
    Private = 2,
    EFortSTWMatchmakingPrivacyType_MAX = 3
};

enum EFortSafeZoneState
{
    None = 0,
    Starting = 1,
    Holding = 2,
    Shrinking = 3,
    EFortSafeZoneState_MAX = 4
};

enum EFortSawBladeSpinningDirection
{
    Clockwise = 0,
    Counterclockwise = 1,
    SnapToCustomDirections = 2,
    EFortSawBladeSpinningDirection_MAX = 3
};

enum EFortScalabilityMode
{
    LowPower = 0,
    Frontend = 1,
    EFortScalabilityMode_MAX = 2
};

enum EFortScoutDroneTargetStatus
{
    None = 0,
    TooFar = 1,
    Pending = 2,
    Confirmed = 3,
    EFortScoutDroneTargetStatus_MAX = 4
};

enum EFortScriptedActionEnvironment
{
    FrontEnd = 0,
    GameServer = 1,
    GameClient = 2,
    Max_None = 3,
    EFortScriptedActionEnvironment_MAX = 4
};

enum EFortScriptedActionSource
{
    Quest = 0,
    Token = 1,
    Manual = 2,
    Max_None = 3,
    EFortScriptedActionSource_MAX = 4
};

enum EFortSelfHealingHandling
{
    Allowed = 0,
    Required = 1,
    Prohibited = 2,
    EFortSelfHealingHandling_MAX = 3
};

enum EFortSentenceAudioPreference
{
    AudioAsset = 0,
    FeedbackBank = 1,
    EFortSentenceAudioPreference_MAX = 2
};

enum EFortServerBrowserAction
{
    BattleLabServerCreate = 0,
    PlaygroundServerCreate = 1,
    CreativeServerCreate = 2,
    Play = 3,
    CreativeIslandCode = 4,
    CreativeDiscovery = 5,
    EFortServerBrowserAction_MAX = 6
};

enum EFortServerContentRestartReason
{
    None = 0,
    CreativeCuratedHubChanged = 1,
    CreativeFeaturedIslandsChanged = 2,
    CreativePreloadRevisionChanged = 3,
    CreativePlaylistConditionalFlagsChanged = 4,
    GameFeaturePluginDisabled = 5,
    ForceRestartEventFlagsChanged = 6,
    ForceRestartFlagActiveStateChanged = 7,
    EFortServerContentRestartReason_MAX = 8
};

enum EFortServerGameMode
{
    Idle = 0,
    LobbyPvE = 1,
    LobbyPvP = 2,
    ZonePvP = 3,
    ZonePvE = 4,
    EFortServerGameMode_MAX = 5
};

enum EFortServerItemIneligibleReason
{
    None = 0,
    PartyTooBig = 1,
    PartyTooSmall = 2,
    NotPartyLeader = 3,
    MatchmakingAlready = 4,
    NotSupportedByLeto = 5,
    InvalidData = 6,
    EFortServerItemIneligibleReason_MAX = 7
};

enum EFortServerStatus
{
    Launching = 0,
    Idle = 1,
    StartingMode = 2,
    Running = 3,
    ServerTravel = 4,
    ShuttingDown = 5,
    Restarting = 6,
    UpdateCheck = 7,
    EFortServerStatus_MAX = 8
};

enum EFortServerTickRate
{
    UseDefault = 0,
    Twenty = 1,
    Thirty = 2,
    Sixty = 3,
    EFortServerTickRate_MAX = 4
};

enum EFortSessionHelperJoinResult
{
    NoResult = 0,
    ReservationSuccess = 1,
    ReservationFailure_PartyLimitReached = 2,
    ReservationFailure_IncorrectPlayerCount = 3,
    ReservationFailure_RequestTimedOut = 4,
    ReservationFailure_ReservationNotFound = 5,
    ReservationFailure_ReservationDenied = 6,
    ReservationFailure_ReservationDenied_Banned = 7,
    ReservationFailure_ReservationRequestCanceled = 8,
    ReservationFailure_ReservationInvalid = 9,
    ReservationFailure_BadSessionId = 10,
    ReservationFailure_ReservationDenied_ContainsExistingPlayers = 11,
    ReservationFailure_GeneralError = 12,
    ReservationFailure_NoSubsystem = 13,
    ReservationFailure_NoIdentity = 14,
    ReservationFailure_InvalidSession = 15,
    ReservationFailure_InvalidUser = 16,
    ReservationFailure_EncryptionKey = 17,
    ReservationFailure_RefreshAuth = 18,
    ReservationFailure_AlreadyJoiningDuringReserve = 19,
    ReservationFailure_AlreadyJoiningDuringSkip = 20,
    JoinSessionSuccess = 21,
    JoinSessionFailure_SessionIsFull = 22,
    JoinSessionFailure_SessionDoesNotExist = 23,
    JoinSessionFailure_CouldNotRetrieveAddress = 24,
    JoinSessionFailure_AlreadyInSession = 25,
    JoinSessionFailure_UnknownError = 26,
    JoinSessionFailure_InvalidSession = 27,
    JoinSessionFailure_InvalidSearchResultIndex = 28,
    JoinSessionFailure_AlreadyJoiningDuringJoin = 29,
    SearchPassFailure_NoSessionHelper = 30,
    SearchPassFailure_InvalidUser = 31,
    SearchPassFailure_NoIdentity = 32,
    SearchPassFailure_InvalidSearchResult = 33,
    SearchPassFailure_InvalidSearchResultIndex = 34,
    JoinSessionCanceled = 35,
    EFortSessionHelperJoinResult_MAX = 36
};

enum EFortSessionHelperJoinState
{
    NotJoining = 0,
    RequestingReservation = 1,
    FailedReservation = 2,
    WaitingOnGame = 3,
    AttemptingJoin = 4,
    JoiningSession = 5,
    FailedJoin = 6,
    CanceledJoin = 7,
    EFortSessionHelperJoinState_MAX = 8
};

enum EFortSettingChangeReason
{
    Change = 0,
    DependencyChanged = 1,
    ResetToDefault = 2,
    RestoreToInitial = 3,
    Refresh = 4,
    EFortSettingChangeReason_MAX = 5
};

enum EFortSettingGameVisibility
{
    None = 0,
    Campaign = 1,
    Athena = 2,
    EFortSettingGameVisibility_MAX = 3
};

enum EFortSharedAnimationState
{
    Anim_Walk = 0,
    Anim_Run = 1,
    Anim_Turn = 2,
    Anim_Attack = 3,
    Anim_Death = 4,
    Anim_Knockback = 5,
    Anim_FullBodyHit = 6,
    Anim_Pushed = 7,
    Anim_Dance = 8,
    Anim_Idle = 9,
    Anim_RangedAttack = 10,
    Anim_MAX = 11
};

enum EFortShieldGainIncrementType
{
    Single = 0,
    ShieldGainAmount = 1,
    ShieldGainedOverFull = 2,
    ShieldGainPercent = 3,
    TotalShieldGained = 4,
    EFortShieldGainIncrementType_MAX = 5
};

enum EFortShowdownEventState
{
    Unknown = 0,
    FutureTBD = 1,
    FutureScheduled = 2,
    FutureNext = 3,
    Live = 4,
    LiveParticipating = 5,
    LiveNotParticipating = 6,
    Completed = 7,
    CompletedParticipated = 8,
    CompletedNotPartipated = 9,
    Cancelled = 10,
    EFortShowdownEventState_MAX = 11
};

enum EFortShowdownMatchType
{
    Unknown = 0,
    Solo = 1,
    Duos = 2,
    Squads = 3,
    EFortShowdownMatchType_MAX = 4
};

enum EFortShowdownPinState
{
    None = 0,
    Locked = 1,
    Unlocked = 2,
    EFortShowdownPinState_MAX = 3
};

enum EFortSidebarButtonType
{
    PartyUp = 0,
    FindFriends = 1,
    VoiceChat = 2,
    Settings = 3,
    More = 4,
    YourProfile = 5,
    Tags = 6,
    Exit = 7,
    Cilantro = 8,
    EFortSidebarButtonType_MAX = 9
};

enum EFortSidebarSocialInteractionArrow
{
    None = 0,
    Up = 1,
    Down = 2,
    Left = 3,
    Right = 4,
    EFortSidebarSocialInteractionArrow_MAX = 5
};

enum EFortSidebarSpecialNavType
{
    None = 0,
    GoPrevious = 1,
    GoRebootRally = 2,
    GoPartyUp = 3,
    EFortSidebarSpecialNavType_MAX = 4
};

enum EFortSimulatedXPSize
{
    None = 0,
    VerySmall = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    VeryLarge = 5,
    EFortSimulatedXPSize_MAX = 6
};

enum EFortSnapOnSurfaceBehavior
{
    None = 0,
    Landscape = 1,
    Navmesh = 2,
    Trace = 3,
    AttachTo = 4,
    SphereTrace = 5,
    EFortSnapOnSurfaceBehavior_MAX = 6
};

enum EFortSocialFriendRequestMethod
{
    LobbySuggestion = 0,
    LobbyPlayerPanel = 1,
    MassImportPlatformFriends = 2,
    AutoImportPlatformFriends = 3,
    PartyContextRewriteHelper = 4,
    SocialInteraction_AddFriend = 5,
    SocialInteraction_AddPlatformFriend = 6,
    EFortSocialFriendRequestMethod_MAX = 7
};

enum EFortSocialPanelTab
{
    PartyInvitations = 0,
    Friends = 1,
    RecentPlayers = 2,
    Max = 3
};

enum EFortSocialPanelType
{
    Join = 0,
    Invite = 1,
    Max = 2
};

enum EFortSocialPlatformTagDisplayRule
{
    Never = 0,
    OnlyIfDifferent = 1,
    Always = 2,
    EFortSocialPlatformTagDisplayRule_MAX = 3
};

enum EFortSocialUserEntryType
{
    None = 0,
    PartyMember = 1,
    TeamMember = 2,
    VoiceChatMember = 3,
    UserSearchResult = 4,
    SuggestedFriend = 5,
    JoinRequest = 6,
    RecentPlayer = 7,
    SocialUser = 8,
    FriendInvite = 9,
    JoinableParty = 10,
    EFortSocialUserEntryType_MAX = 11
};

enum EFortSoundIndicatorTypes
{
    Generic = 0,
    FootStep = 1,
    Gunshot = 2,
    Chest = 3,
    Glider = 4,
    Vehicle = 5,
    Infected = 6,
    Healing = 7,
    COUNT = 8,
    EFortSoundIndicatorTypes_MAX = 9
};

enum EFortSourDropperColorType
{
    None = 0,
    Bright = 1,
    MidBright = 2,
    MidDark = 3,
    Dark = 4,
    EFortSourDropperColorType_MAX = 5
};

enum EFortSpawnActorTime
{
    PostPlaylistLoad = 0,
    StartOfStormHoldTime = 1,
    EFortSpawnActorTime_MAX = 2
};

enum EFortSpectatorBlendType
{
    None = 0,
    Orbit = 1,
    Default = 2,
    EFortSpectatorBlendType_MAX = 3
};

enum EFortSpectatorRackFocusState
{
    Started = 0,
    Running = 1,
    Paused = 2,
    Finished = 3,
    EFortSpectatorRackFocusState_MAX = 4
};

enum EFortSquadSlottingRestrictionReason
{
    ItemIsInInventoryOverflow = 0,
    MandatorySlotWouldBeEmptied = 1,
    ItemIsOnActiveExpedition = 2,
    HeroRequiresMissingGameplayTag = 3,
    HeroAlreadyEquippedInLoadout = 4,
    EFortSquadSlottingRestrictionReason_MAX = 5
};

enum EFortStartupPhase
{
    InitializingEngine = 0,
    EarlyStartupLoading = 1,
    EarlyStartupFinished = 2,
    GameStartupLoading = 3,
    GameStartupFinished = 4,
    Invalid = 5,
    Count = 6,
    EFortStartupPhase_MAX = 7
};

enum EFortStatDisplayType
{
    Category = 0,
    Buff = 1,
    Debuff = 2,
    Neutral = 3,
    DoNotDisplay = 4,
    EFortStatDisplayType_MAX = 5
};

enum EFortStatType
{
    Fortitude = 0,
    Offense = 1,
    Resistance = 2,
    Technology = 3,
    Fortitude_Team = 4,
    Offense_Team = 5,
    Resistance_Team = 6,
    Technology_Team = 7,
    Invalid = 8,
    EFortStatType_MAX = 9
};

enum EFortStatValueDisplayType
{
    BasicPaired = 0,
    BasicSingle = 1,
    Unique = 2,
    ElementalFire = 3,
    ElementalIce = 4,
    ElementalElectric = 5,
    EFortStatValueDisplayType_MAX = 6
};

enum EFortStoreState
{
    Error = 0,
    Closed = 1,
    CardPackStore = 2,
    CurrencyStore = 3,
    WebPayment = 4,
    PurchaseOpen = 5,
    PackOpen = 6,
    CardEnter = 7,
    CardBackReveal = 8,
    CardFlip = 9,
    CardFrontReveal = 10,
    CardExit = 11,
    SummaryAdd = 12,
    PackDestroy = 13,
    Summary = 14,
    PresentChoice = 15,
    ChoiceMade = 16,
    SummaryAddTransition = 17,
    MAX_None = 18,
    EFortStoreState_MAX = 19
};

enum EFortStreamLimits
{
    None = 0,
    Discovery = 1,
    InWorld = 2,
    Creative = 3,
    PiP = 4,
    FNEvents = 5,
    EFortStreamLimits_MAX = 6
};

enum EFortStreamingVideoDeviceState
{
    No_Stream = 0,
    Controller = 1,
    Listener = 2,
    EFortStreamingVideoDeviceState_MAX = 3
};

enum EFortStreamingVideoSelectionMode
{
    Priority = 0,
    Device_Override = 1,
    Mirror = 2,
    EFortStreamingVideoSelectionMode_MAX = 3
};

enum EFortStructuralGridQueryResults
{
    CanAdd = 0,
    ExistingActor = 1,
    Obstructed = 2,
    NoStructuralSupport = 3,
    InvalidActor = 4,
    ReachedLimit = 5,
    NoEditPermission = 6,
    PatternNotPermittedByLayoutRequirement = 7,
    ResourceTypeNotPermittedByLayoutRequirement = 8,
    BuildingAtRequirementsDisabled = 9,
    BuildingOtherThanRequirementsDisabled = 10,
    EFortStructuralGridQueryResults_MAX = 11
};

enum EFortSubscriptionContentInterfaceCloseReason
{
    Normal = 0,
    SubscriptionPurchased = 1,
    EFortSubscriptionContentInterfaceCloseReason_MAX = 2
};

enum EFortSupportBonusType
{
    Normal = 0,
    Tactical = 1,
    Max_None = 2,
    EFortSupportBonusType_MAX = 3
};

enum EFortSwimmingAudioType
{
    Normal = 0,
    Sprint = 1,
    SprintStart = 2,
    PickaxeSwing = 3,
    NormalDBNO = 4,
    SprintBoostStart = 5,
    SwimStart = 6,
    SwimEnd = 7,
    Max_None = 8,
    EFortSwimmingAudioType_MAX = 9
};

enum EFortSynchedActionEndMovementMode
{
    PhysFalling = 0,
    PhysWalking = 1,
    EFortSynchedActionEndMovementMode_MAX = 2
};

enum EFortTODMPostProcess
{
    Morning = 0,
    Day = 1,
    Evening = 2,
    Night = 3,
    Classic = 4,
    NumPostprocess = 5,
    EFortTODMPostProcess_MAX = 6
};

enum EFortTargetSelectionFilter
{
    Damageable = 0,
    Everything = 1,
    Pawns = 2,
    Buildings = 3,
    Walls = 4,
    Traps = 5,
    Players = 6,
    AIPawns = 7,
    Instigator = 8,
    WeakSpots = 9,
    World = 10,
    Max = 11
};

enum EFortTargetSelectionShape
{
    Sphere = 0,
    Cone = 1,
    Box = 2,
    Capsule = 3,
    Line = 4,
    Cylinder = 5,
    Custom = 6,
    CustomOnSource = 7,
    EFortTargetSelectionShape_MAX = 8
};

enum EFortTargetSelectionTestType
{
    Overlap = 0,
    Swept = 1,
    Ballistic = 2,
    EFortTargetSelectionTestType_MAX = 3
};

enum EFortTargetingFXState
{
    TargetingStart = 0,
    TargetingEnd = 1,
    Max_None = 2,
    EFortTargetingFXState_MAX = 3
};

enum EFortTeam
{
    Spectator = 0,
    HumanCampaign = 1,
    Monster = 2,
    HumanPvP_Team1 = 3,
    HumanPvP_Team2 = 4,
    MAX = 5
};

enum EFortTeamAffiliation
{
    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
    EFortTeamAffiliation_MAX = 3
};

enum EFortTemplateAccess
{
    Normal = 0,
    Trusted = 1,
    Private = 2,
    EFortTemplateAccess_MAX = 3
};

enum EFortTemporalSuperResolutionSetting
{
    Recommended = 0,
    Performance = 1,
    Balanced = 2,
    Quality = 3,
    Native = 4,
    Custom = 5,
    Num = 6,
    Default = 7,
    EFortTemporalSuperResolutionSetting_MAX = 8
};

enum EFortTestGoalActorDot
{
    Dot3D = 0,
    Dot2D = 1,
    EFortTestGoalActorDot_MAX = 2
};

enum EFortTextChatChannelType
{
    ALL = 0,
    Party = 1,
    Game = 2,
    Whisper = 3,
    MAX_NUM = 4,
    EFortTextChatChannelType_MAX = 5
};

enum EFortTextChatCurrentUIContext
{
    Unknown = 0,
    STW = 1,
    STW_InMatch = 2,
    Frontend = 3,
    InMatch = 4,
    MAX_NUM = 5,
    EFortTextChatCurrentUIContext_MAX = 6
};

enum EFortTextChatMessageType
{
    Sent = 0,
    ReceivedFromPlayer = 1,
    System = 2,
    Game = 3,
    Killfeed = 4,
    MAX_NUM = 5,
    EFortTextChatMessageType_MAX = 6
};

enum EFortTextureDataSlot
{
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    Fourth = 3,
    NumSlots = 4,
    EFortTextureDataSlot_MAX = 5
};

enum EFortTextureDataType
{
    Any = 0,
    OuterWall = 1,
    InnerWall = 2,
    Corner = 3,
    Floor = 4,
    Ceiling = 5,
    Trim = 6,
    Roof = 7,
    Pillar = 8,
    Shingle = 9,
    None = 10,
    EFortTextureDataType_MAX = 11
};

enum EFortTheaterMapTileType
{
    Normal = 0,
    CriticalMission = 1,
    AlwaysActive = 2,
    Outpost = 3,
    NonMission = 4,
    PvPFOB = 5,
    EFortTheaterMapTileType_MAX = 6
};

enum EFortTheaterType
{
    Standard = 0,
    Elder = 1,
    PvP = 2,
    PvP2 = 3,
    Tutorial = 4,
    TutorialGate = 5,
    Max_None = 6,
    EFortTheaterType_MAX = 7
};

enum EFortThreatDeactivationType
{
    Off = 0,
    Dormant = 1,
    EFortThreatDeactivationType_MAX = 2
};

enum EFortTileEdgeType
{
    Undefined = 0,
    Outer_1 = 1,
    Transition_2 = 2,
    Inner_3 = 3,
    Border_4 = 4,
    BorderTransitionSingle_5 = 5,
    BorderTransitionDouble_6 = 6,
    MAX = 7
};

enum EFortTipDisplayPlatformGroup
{
    None = 0,
    Desktop = 1,
    Console = 2,
    Switch = 3,
    Mobile = 4,
    EFortTipDisplayPlatformGroup_MAX = 5
};

enum EFortToastType
{
    Default = 0,
    Subdued = 1,
    Impactful = 2,
    EFortToastType_MAX = 3
};

enum EFortTopBarTabButtonGroup
{
    Discover = 0,
    Core = 1,
    Game = 2,
    PinnedRight = 3,
    EFortTopBarTabButtonGroup_MAX = 4
};

enum EFortTouchControlRegion
{
    MovePlayer = 0,
    RotateCamera = 1,
    NoRegion = 2,
    COUNT = 3,
    EFortTouchControlRegion_MAX = 4
};

enum EFortTournamentAlertType
{
    Warning = 0,
    Info = 1,
    EFortTournamentAlertType_MAX = 2
};

enum EFortTrickIncrementType
{
    Single = 0,
    AirDistance = 1,
    AirHeight = 2,
    AirTime = 3,
    TrickCount = 4,
    TrickPoints = 5,
    EFortTrickIncrementType_MAX = 6
};

enum EFortTutorialGlowType
{
    None = 0,
    Look = 1,
    Click = 2,
    EFortTutorialGlowType_MAX = 3
};

enum EFortUICameraFrameTargetBoundingBehavior
{
    NoBounds = 0,
    AllBounds = 1,
    TopBoundOnly = 2,
    EFortUICameraFrameTargetBoundingBehavior_MAX = 3
};

enum EFortUIFeature
{
    ShowHome = 0,
    ShowPlay = 1,
    ShowCommand = 2,
    ShowHeros = 3,
    ShowSquads = 4,
    ShowArmory = 5,
    ShowLocker = 6,
    ShowMultiProductLocker = 7,
    ShowMyLoadout = 8,
    ShowSkillTree = 9,
    ShowStore = 10,
    ShowQuests = 11,
    ShowMainStore = 12,
    ShowContextHelpMenu = 13,
    ShowCampaign = 14,
    ShowActiveBoost = 15,
    ShowJournal = 16,
    ShowPartyBar = 17,
    ShowChatWindow = 18,
    ShowFriendsMenu = 19,
    ShowObjectives = 20,
    ShowRatingIconsInTopbar = 21,
    ShowAntiAddictionMessage = 22,
    ShowMinorShutdownMessage = 23,
    ShowHealthWarningScreen = 24,
    ShowSimplifiedHUD = 25,
    LargeHeaderFooterButtons = 26,
    ShowAthenaFavoriting = 27,
    ShowAthenaItemRandomization = 28,
    ShowAthenaQuests = 29,
    ShowBattlePass = 30,
    ShowNewBattlePass = 31,
    ShowDynamicBattlePass = 32,
    ShowBattlePassFAQ = 33,
    ShowPoblano = 34,
    ShowReplays = 35,
    ShowProfileStatsUI = 36,
    ShowAthenaItemShop = 37,
    ShowMultiProductItemShop = 38,
    ShowShowdown = 39,
    SpecialEventsStart = 40,
    ShowSpecialEvent = 41,
    ShowSpecialEventTeaser = 42,
    ShowSparksSpecialEvent = 43,
    ShowJunoSpecialEvent = 44,
    ShowDelMarSpecialEvent = 45,
    ShowWinterfest = 46,
    SpecialEventsEnd = 47,
    ShowSpatialUI = 48,
    ShowSocial = 49,
    ShowAccountBoosts = 50,
    ShowCustomerSupport = 51,
    ShowGlobalChat = 52,
    ShowEULA = 53,
    ShowEndOfZoneCinematic = 54,
    ShowOnboardingCinematics = 55,
    ShowFounderBannerIcons = 56,
    ShowCurrentRegionInLobby = 57,
    ShowPrerollLlamas = 58,
    EnableFoundersDailyRewards = 59,
    EnableMatchmakingRegionSetting = 60,
    EnableLanguageSetting = 61,
    EnableFriendCodeSetting = 62,
    EnableEarlyAccessLoadingScreenBanner = 63,
    EnableAlterationModifications = 64,
    EnableSchematicRarityUpgrade = 65,
    EnableMissionActivationVote = 66,
    EnableLtmRetrieveTheData = 67,
    EnableUpgradesVideos = 68,
    ShowPreviewTestTab = 69,
    EnableSearchTabInTopNavigationBar = 70,
    EnableDiscoverTabInTopNavigationBar = 71,
    EnableLibraryTabInTopNavigationBar = 72,
    PlaceholderUIFeature1 = 73,
    PlaceholderUIFeature2 = 74,
    PlaceholderUIFeature3 = 75,
    PlaceholderUIFeature4 = 76,
    PlaceholderUIFeature5 = 77,
    Max_None = 78,
    EFortUIFeature_MAX = 79
};

enum EFortUIFeatureState
{
    Enabled = 0,
    Disabled = 1,
    Hidden = 2,
    Invalid = 3,
    EFortUIFeatureState_MAX = 4
};

enum EFortUIFeatureStateReason
{
    Default = 0,
    Tutorial = 1,
    ContentInstall = 2,
    AccountRestrictions = 3,
    Platform = 4,
    SeasonOrEventNotActive = 5,
    NoPlayerController = 6,
    UnexpectedFeature = 7,
    Invalid = 8,
    EFortUIFeatureStateReason_MAX = 9
};

enum EFortUIFriendNotificationType
{
    Default = 0,
    FriendRequest = 1,
    PartyInviteSent = 2,
    PartyInvite = 3,
    InviteFriendToParty = 4,
    PartyRequest = 5,
    AutoImportFriendSuggestion = 6,
    PartyMemberCreated = 7,
    PartyMemberLeft = 8,
    EFortUIFriendNotificationType_MAX = 9
};

enum EFortUIMatchmakingError
{
    WaitingForIslandRefresh = 0,
    PartyTooLarge = 1,
    SmallSquadSizeForPrivateMatch = 2,
    CannotUseWhileLookingForParty = 3,
    CannotUseWhileUsingPartySignal = 4,
    CannotPlayCampaign = 5,
    DownloadingData = 6,
    ModeUnavailable = 7,
    CabinRestricted = 8,
    GenericIslandLocked = 9,
    NotAvailableInSplitScreen = 10,
    MatchCapHit = 11,
    RegionMismatch = 12,
    TooManyPartyMembers = 13,
    NotEnoughPartyMembers = 14,
    EventBlackedOut = 15,
    IneligibleEvent = 16,
    Unauthorized = 17,
    GameLocked = 18,
    OutfitForbiddenByIslandRating = 19,
    Num = 20,
    EFortUIMatchmakingError_MAX = 21
};

enum EFortUIMatchmakingStatus
{
    Unready = 0,
    WaitingForPlayersReadyUp = 1,
    FindingServer = 2,
    DownloadingContent = 3,
    MatchFound = 4,
    EFortUIMatchmakingStatus_MAX = 5
};

enum EFortUINavigationOp
{
    PopContentStack = 0,
    FeatureSwitch = 1,
    NavigateToSkillTree = 2,
    NavigateToSquadSlot = 3,
    NavigateToQuest = 4,
    NavigateToItemManagement = 5,
    NavigateToExpeditions = 6,
    NavigateToCollectionBook = 7,
    None = 8,
    EFortUINavigationOp_MAX = 9
};

enum EFortUIScoreType
{
    Combat = 0,
    Building = 1,
    Utility = 2,
    Badges = 3,
    Bonus = 4,
    Total = 5,
    Max_None = 6,
    EFortUIScoreType_MAX = 7
};

enum EFortUISpecialEvents
{
    NoEvent = 0,
    FritTemp = 1,
    EFortUISpecialEvents_MAX = 2
};

enum EFortUIState
{
    Invalid = 0,
    Login = 1,
    JoinServer = 2,
    SubgameSelect = 3,
    FrontEnd = 4,
    InGame_Custom = 5,
    UNUSED = 6,
    InGame_STW = 7,
    Cinematic = 8,
    InGame_BR = 9,
    AthenaSpectator = 10,
    Replay = 11,
    InGame_STW_Custom = 12,
    MAX = 13
};

enum EFortUISurvivorSquadMatchType
{
    Multi = 0,
    Single = 1,
    Summary = 2,
    Max_None = 3,
    EFortUISurvivorSquadMatchType_MAX = 4
};

enum EFortUrlType
{
    NormalWebLink = 0,
    AccountCreationLink = 1,
    HelpLink = 2,
    EULALink = 3,
    EFortUrlType_MAX = 4
};

enum EFortUserCloudRequestResult
{
    Success = 0,
    Failure_CloudStorageDisabled = 1,
    Failure_CloudStorageError = 2,
    Failure_FileNotFoundInUserFileList = 3,
    Failure_SavingNotAllowedForSpecifiedUser = 4,
    EFortUserCloudRequestResult_MAX = 5
};

enum EFortUserCloudRequestType
{
    LoadCloudFile = 0,
    SaveCloudFile = 1,
    EFortUserCloudRequestType_MAX = 2
};

enum EFortValetVehicleType
{
    Default = 0,
    Sport = 1,
    BasicTruck = 2,
    EFortValetVehicleType_MAX = 3
};

enum EFortVariantTokenEquipRule
{
    EquipBaseVariantOnly = 0,
    AlsoEquipAdditionalGrants = 1,
    AlsoEquipPreviewGrantsIfOwned = 2,
    EquipAllExceptUnowned = 3,
    EFortVariantTokenEquipRule_MAX = 4
};

enum EFortViewModelsDestructionType
{
    AfterLastUsage = 0,
    Manual = 1,
    EFortViewModelsDestructionType_MAX = 2
};

enum EFortVisibilityBehavior
{
    Proximity = 0,
    OnceSeenAlwaysSeen = 1,
    AlwaysSeen = 2,
    Invalid = 3,
    EFortVisibilityBehavior_MAX = 4
};

enum EFortVoiceChatMethod
{
    OpenMic = 0,
    PTT = 1,
    Mute = 2,
    EFortVoiceChatMethod_MAX = 3
};

enum EFortVolumeType
{
    None = 0,
    Island = 1,
    Published = 2,
    Featured = 3,
    Hub = 4,
    EFortVolumeType_MAX = 5
};

enum EFortVoteArbitratorType
{
    Invalid = 0,
    Majority = 1,
    Unanimous = 2,
    EFortVoteArbitratorType_MAX = 3
};

enum EFortVoteStatus
{
    Begin = 0,
    Update = 1,
    End = 2,
    BeginLockout = 3,
    EndLockout = 4,
    EFortVoteStatus_MAX = 5
};

enum EFortVoteType
{
    SurvivalVote = 0,
    DifficultyIncrease = 1,
    MissionActivation = 2,
    ContinueOrExtract = 3,
    TierSelection = 4,
    EFortVoteType_MAX = 5
};

enum EFortWaitForTimeOfDayManagerUpdatedBehavior
{
    ContextAware = 0,
    GlobalOnly = 1,
    LocalOnly = 2,
    EFortWaitForTimeOfDayManagerUpdatedBehavior_MAX = 3
};

enum EFortWeakPointState
{
    Uninitialized = 0,
    Inactive = 1,
    Active = 2,
    Destroyed = 3,
    EFortWeakPointState_MAX = 4
};

enum EFortWeaponAbilityRemovalPolicy
{
    GameDefault = 0,
    Remove = 1,
    Persist = 2,
    EFortWeaponAbilityRemovalPolicy_MAX = 3
};

enum EFortWeaponAbilityRemovalReason
{
    RemovedFromInventory = 0,
    EndPlay = 1,
    Unequipped = 2,
    INVALID_MAX = 3,
    EFortWeaponAbilityRemovalReason_MAX = 4
};

enum EFortWeaponChargeStateForFireFX
{
    Partial = 0,
    Full = 1,
    Over = 2,
    Max_None = 3,
    EFortWeaponChargeStateForFireFX_MAX = 4
};

enum EFortWeaponCoreAnimation
{
    Melee = 0,
    Pistol = 1,
    Shotgun = 2,
    PaperBlueprint = 3,
    Rifle = 4,
    MeleeOneHand = 5,
    MachinePistol = 6,
    RocketLauncher = 7,
    GrenadeLauncher = 8,
    GoingCommando = 9,
    AssaultRifle = 10,
    TacticalShotgun = 11,
    SniperRifle = 12,
    TrapPlacement = 13,
    ShoulderLauncher = 14,
    AbilityDecoTool = 15,
    Crossbow = 16,
    C4 = 17,
    RemoteControl = 18,
    DualWield = 19,
    AR_BullPup = 20,
    AR_ForwardGrip = 21,
    MedPackPaddles = 22,
    SMG_P90 = 23,
    AR_DrumGun = 24,
    Consumable_Small = 25,
    Consumable_Large = 26,
    Balloon = 27,
    MountedTurret = 28,
    CreativeTool = 29,
    ExplosiveBow = 30,
    AshtonIndigo = 31,
    AshtonChicago = 32,
    MeleeDualWield = 33,
    Unarmed = 34,
    MAX = 35
};

enum EFortWeaponHandGripType
{
    Default = 0,
    OneHand = 1,
    TwoHand = 2,
    EFortWeaponHandGripType_MAX = 3
};

enum EFortWeaponListRemovalBehavior
{
    DestroyImmediately = 0,
    DeferredLifespan = 1,
    DoNotDestroy = 2,
    EFortWeaponListRemovalBehavior_MAX = 3
};

enum EFortWeaponOverheatState
{
    None = 0,
    Heating = 1,
    Cooling = 2,
    Overheated = 3,
    EFortWeaponOverheatState_MAX = 4
};

enum EFortWeaponReduceMeshWorkSetting
{
    DisableTick = 0,
    DontReduceWork = 1,
    HandledInAnimInstance = 2,
    EFortWeaponReduceMeshWorkSetting_MAX = 3
};

enum EFortWeaponReloadType
{
    ReloadWholeClip = 0,
    ReloadIndividualBullets = 1,
    ReloadBasedOnAmmoCostPerFire = 2,
    ReloadBasedOnCartridgePerFire = 3,
    EFortWeaponReloadType_MAX = 4
};

enum EFortWeaponReticleBehaviour
{
    Center = 0,
    FocusTarget = 1,
    Never = 2,
    EFortWeaponReticleBehaviour_MAX = 3
};

enum EFortWeaponReticleSourceDistanceLocation
{
    Character = 0,
    Camera = 1,
    EFortWeaponReticleSourceDistanceLocation_MAX = 2
};

enum EFortWeaponSoundChannel
{
    NormalA = 0,
    NormalB = 1,
    LowAmmo = 2,
    Degraded = 3,
    Max_None = 4,
    EFortWeaponSoundChannel_MAX = 5
};

enum EFortWeaponSoundState
{
    Normal = 0,
    LowAmmo = 1,
    Degraded = 2,
    Max_None = 3,
    EFortWeaponSoundState_MAX = 4
};

enum EFortWeaponTriggerType
{
    OnPress = 0,
    Automatic = 1,
    OnRelease = 2,
    OnPressAndRelease = 3,
    Custom = 4,
    EFortWeaponTriggerType_MAX = 5
};

enum EFortWeaponType
{
    None = 0,
    RangedAny = 1,
    Pistol = 2,
    Shotgun = 3,
    Rifle = 4,
    SMG = 5,
    Sniper = 6,
    GrenadeLauncher = 7,
    RocketLauncher = 8,
    Bow = 9,
    Minigun = 10,
    LMG = 11,
    BiplaneGun = 12,
    MeleeAny = 13,
    Harvesting = 14,
    MAX = 15
};

enum EFortWeaponUpgradeCosts
{
    NotSet = 0,
    WoodUncommon = 1,
    WoodRare = 2,
    WoodVeryRare = 3,
    WoodSuperRare = 4,
    MetalUncommon = 5,
    MetalRare = 6,
    MetalVeryRare = 7,
    MetalSuperRare = 8,
    BrickUncommon = 9,
    BrickRare = 10,
    BrickVeryRare = 11,
    BrickSuperRare = 12,
    HorizontalWoodCommon = 13,
    HorizontalWoodUncommon = 14,
    HorizontalWoodRare = 15,
    HorizontalWoodVeryRare = 16,
    HorizontalWoodSuperRare = 17,
    HorizontalMetalCommon = 18,
    HorizontalMetalUncommon = 19,
    HorizontalMetalRare = 20,
    HorizontalMetalVeryRare = 21,
    HorizontalMetalSuperRare = 22,
    HorizontalBrickCommon = 23,
    HorizontalBrickUncommon = 24,
    HorizontalBrickRare = 25,
    HorizontalBrickVeryRare = 26,
    HorizontalBrickSuperRare = 27,
    EFortWeaponUpgradeCosts_MAX = 28
};

enum EFortWeaponUpgradeDirection
{
    NotSet = 0,
    Vertical = 1,
    Horizontal = 2,
    EFortWeaponUpgradeDirection_MAX = 3
};

enum EFortWeaponUpgradeInteractionResult
{
    Upgradable = 0,
    NotEnoughResources = 1,
    CannotUpgrade = 2,
    CannotInteract = 3,
    EFortWeaponUpgradeInteractionResult_MAX = 4
};

enum EFortWorldConditionPlayerHasConvertedNPCCondition
{
    HasReachedConvertedNPCLimit = 0,
    HasAnotherConvertedNPC = 1,
    EFortWorldConditionPlayerHasConvertedNPCCondition_MAX = 2
};

enum EFortWorldManagerState
{
    WMS_Created = 0,
    WMS_QueryingWorld = 1,
    WMS_WorldQueryComplete = 2,
    WMS_CreatingNewWorld = 3,
    WMS_LoadingExistingWorld = 4,
    WMS_Running = 5,
    WMS_Failed = 6,
    WMS_MAX = 7
};

enum EFortWorldMarkerType
{
    None = 0,
    Location = 1,
    Enemy = 2,
    Item = 3,
    Elimination = 4,
    SpecialLocal = 5,
    SpecialServer = 6,
    Teammate = 7,
    PingGROUPSTART = 8,
    PingGoTo = 9,
    PingHoldPosition = 10,
    PingNoIcon = 11,
    PingAttack = 12,
    PingGROUPEND = 13,
    SquadComsGROUPSTART = 14,
    SquadComsWatchArea = 15,
    SquadComsDefend = 16,
    SquadComsSomeonesHere = 17,
    SquadComsLootArea = 18,
    SquadComsAttack = 19,
    SquadComsHelp = 20,
    SquadComsGROUPEND = 21,
    MAX = 22
};

enum EFortWorldPartitionActorDescMutatorRuleLogicalOperator
{
    Or = 0,
    And = 1,
    Not = 2,
    EFortWorldPartitionActorDescMutatorRuleLogicalOperator_MAX = 3
};

enum EFortWorldRecordAction
{
    LoadWorldOnly = 0,
    SaveWorldOnly = 1,
    SaveZoneAndWorld = 2,
    LoadZoneAndWorld = 3,
    SaveDeployableBasesAndWorld = 4,
    Max_None = 5,
    EFortWorldRecordAction_MAX = 6
};

enum EFortWorldRecordState
{
    StartProcessing = 0,
    WaitingForResponse = 1,
    RetrievingTheaterInformation = 2,
    RetrievingZoneInformation = 3,
    LoadingWorldRecord = 4,
    LoadingZoneRecord = 5,
    SavingZoneRecord = 6,
    SavingPlayerProfiles = 7,
    SavingPlayerDeployableBases = 8,
    Succeeded = 9,
    Failed = 10,
    Max_None = 11,
    EFortWorldRecordState_MAX = 12
};

enum EFortXPPropagationRule
{
    Self = 0,
    Party = 1,
    Squad = 2,
    EFortXPPropagationRule_MAX = 3
};

enum EFortZoneType
{
    PVE = 0,
    PVP = 1,
    Keep = 2,
    SingleZone = 3,
    Max_None = 4,
    EFortZoneType_MAX = 5
};

enum EFortressAIType
{
    FAT_Dormant = 0,
    FAT_Cleaner = 1,
    FAT_DayWanderer = 2,
    FAT_NightWanderer = 3,
    FAT_DebugOnly = 4,
    FAT_Encounter = 5,
    FAT_MAX = 6
};

enum EFourPlayerSplitScreenType
{
    Grid = 0,
    Vertical = 1,
    Horizontal = 2,
    EFourPlayerSplitScreenType_MAX = 3
};

enum EFrameNumberDisplayFormats
{
    NonDropFrameTimecode = 0,
    DropFrameTimecode = 1,
    Seconds = 2,
    Frames = 3,
    MAX_Count = 4,
    EFrameNumberDisplayFormats_MAX = 5
};

enum EFreeFallingMode
{
    Idle = 0,
    Random = 1,
    TowardNearestAlly = 2,
    PatrolPath = 3,
    EFreeFallingMode_MAX = 4
};

enum EFreelookMode
{
    None = 0,
    Mouse = 1,
    Analog = 2,
    Touch = 3,
    EFreelookMode_MAX = 4
};

enum EFrictionCombineMode
{
    Average = 0,
    Min = 1,
    Multiply = 2,
    Max = 3
};

enum EFriendChestInstancedType
{
    ItemDefinition = 0,
    FreshDripCounter = 1,
    GrantXp = 2,
    Undefined = 3,
    EFriendChestInstancedType_MAX = 4
};

enum EFriendChestTimePeriod
{
    Daily = 0,
    Weekly = 1,
    EFriendChestTimePeriod_MAX = 2
};

enum EFriendLinkShareButtonType
{
    IOS = 0,
    Android = 1,
    Generic = 2,
    EFriendLinkShareButtonType_MAX = 3
};

enum EFriendlyFireType
{
    Off = 0,
    On = 1,
    EFriendlyFireType_MAX = 2
};

enum EFrontEndCamera
{
    Invalid = 0,
    Command = 1,
    Command_HeroLoadout = 2,
    LegacyHeroLoadout = 3,
    Cosmetics = 4,
    Expeditions = 5,
    FrontendDefault = 6,
    Heroes = 7,
    HeroSelect = 8,
    HeroLoadout = 9,
    Home = 10,
    HomeBase = 11,
    Login = 12,
    Manage1 = 13,
    Manage2 = 14,
    Manage3 = 15,
    Manage4 = 16,
    MissionControl = 17,
    Party = 18,
    Play = 19,
    Research = 20,
    SkillTrees = 21,
    SmallCosmetics = 22,
    SpatialUI = 23,
    SpecialEvent = 24,
    SpecialEvent2 = 25,
    SpecialEvent3 = 26,
    Store = 27,
    StoreItemInspect = 28,
    StwFrontendDefault = 29,
    SurvivorSquadBuilding1 = 30,
    SurvivorSquadBuilding2 = 31,
    SurvivorSquadBuilding3 = 32,
    SurvivorSquadBuilding4 = 33,
    TutorialPhaseOne = 34,
    TutorialPhaseTwo = 35,
    TutorialPhaseThree = 36,
    Upgrades = 37,
    Vault = 38,
    WorldMap = 39,
    LobbyCentered = 40,
    CosmeticDisplay = 41,
    BattlePass = 42,
    Rewards = 43,
    SpecialEventRewards = 44,
    Armory = 45,
    DM_Customization = 46,
    DiscoveryHome = 47,
    MultipleSquads = 48,
    EFrontEndCamera_MAX = 49
};

enum EFrontEndRewardType
{
    Mission = 0,
    Quest = 1,
    EpicNewQuest = 2,
    Expedition = 3,
    CollectionBook = 4,
    MissionAlert = 5,
    DifficultyIncrease = 6,
    GiftBox = 7,
    ItemCache = 8,
    PhoenixLevelUp = 9,
    EFrontEndRewardType_MAX = 10
};

enum EFrontendLobbyLocationOrigin
{
    Pedestal = 0,
    EFrontendLobbyLocationOrigin_MAX = 1
};

enum EFrontendRequirement
{
    None = 0,
    RequireFrontend = 1,
    RequireNotFrontend = 2,
    EFrontendRequirement_MAX = 3
};

enum EFrontendVisibilityMode
{
    Normal = 0,
    HideTopTabsOnly = 1,
    HideTopTabsOnlyWithoutBottomBar = 2,
    OnlyBottom = 3,
    OnlyTop = 4,
    OnlyTitleBar = 5,
    Empty = 6,
    EFrontendVisibilityMode_MAX = 7
};

enum EFuelTankState
{
    Empty = 0,
    LowFuel = 1,
    RegularFuel = 2,
    TankFull = 3,
    EFuelTankState_MAX = 4
};

enum EFullyLoadPackageType
{
    FULLYLOAD_Map = 0,
    FULLYLOAD_Game_PreLoadClass = 1,
    FULLYLOAD_Game_PostLoadClass = 2,
    FULLYLOAD_Always = 3,
    FULLYLOAD_Mutator = 4,
    FULLYLOAD_MAX = 5
};

enum EFunctionInputType
{
    FunctionInput_Scalar = 0,
    FunctionInput_Vector2 = 1,
    FunctionInput_Vector3 = 2,
    FunctionInput_Vector4 = 3,
    FunctionInput_Texture2D = 4,
    FunctionInput_TextureCube = 5,
    FunctionInput_Texture2DArray = 6,
    FunctionInput_VolumeTexture = 7,
    FunctionInput_StaticBool = 8,
    FunctionInput_MaterialAttributes = 9,
    FunctionInput_TextureExternal = 10,
    FunctionInput_Bool = 11,
    FunctionInput_Substrate = 12,
    FunctionInput_MAX = 13
};

enum EFusionPatchAudioLoadResult
{
    Success = 0,
    Fail = 1,
    Cancelled = 2,
    EFusionPatchAudioLoadResult_MAX = 3
};

enum EGBufferFormat
{
    Force8BitsPerChannel = 0,
    Default = 1,
    HighPrecisionNormals = 2,
    Force16BitsPerChannel = 3,
    EGBufferFormat_MAX = 4
};

enum EGainParamMode
{
    Linear = 0,
    Decibels = 1,
    EGainParamMode_MAX = 2
};

enum EGameFeatureTargetState
{
    Installed = 0,
    Registered = 1,
    Loaded = 2,
    Active = 3,
    Count = 4,
    EGameFeatureTargetState_MAX = 5
};

enum EGameFrameworkAddComponentFlags
{
    None = 0,
    AddUnique = 1,
    AddIfNotChild = 2,
    UseAutoGeneratedName = 3,
    EGameFrameworkAddComponentFlags_MAX = 4
};

enum EGameModePauseWarmupMaskId
{
    None = 0,
    Debug = 1,
    Mutator = 2,
    BroadcastController = 3,
    PlayerBotsSpawning = 4,
    DownloadOnDemand = 5,
    Minigame = 6,
    EGameModePauseWarmupMaskId_MAX = 7
};

enum EGameReadiness
{
    NotReady = 0,
    Ready = 1,
    Reevaluating = 2,
    SittingOut = 3,
    NUM = 4,
    EGameReadiness_MAX = 5
};

enum EGameReadiness_Repl
{
    N = 0,
    Y = 1,
    R = 2,
    S = 3,
    NUM = 4,
    EGameReadiness_MAX = 5
};

enum EGameplayAbilityActivationMode
{
    Authority = 0,
    NonAuthority = 1,
    Predicting = 2,
    Confirmed = 3,
    Rejected = 4,
    EGameplayAbilityActivationMode_MAX = 5
};

enum EGameplayAbilityInputBinds
{
    Ability1 = 0,
    Ability2 = 1,
    Ability3 = 2,
    Ability4 = 3,
    Ability5 = 4,
    Ability6 = 5,
    Ability7 = 6,
    Ability8 = 7,
    Ability9 = 8,
    EGameplayAbilityInputBinds_MAX = 9
};

enum EGameplayAbilityInstancingPolicy
{
    NonInstanced = 0,
    InstancedPerActor = 1,
    InstancedPerExecution = 2,
    EGameplayAbilityInstancingPolicy_MAX = 3
};

enum EGameplayAbilityNetExecutionPolicy
{
    LocalPredicted = 0,
    LocalOnly = 1,
    ServerInitiated = 2,
    ServerOnly = 3,
    EGameplayAbilityNetExecutionPolicy_MAX = 4
};

enum EGameplayAbilityNetSecurityPolicy
{
    ClientOrServer = 0,
    ServerOnlyExecution = 1,
    ServerOnlyTermination = 2,
    ServerOnly = 3,
    EGameplayAbilityNetSecurityPolicy_MAX = 4
};

enum EGameplayAbilityReplicationPolicy
{
    ReplicateNo = 0,
    ReplicateYes = 1,
    EGameplayAbilityReplicationPolicy_MAX = 2
};

enum EGameplayAbilityTargetingLocationType
{
    LiteralTransform = 0,
    ActorTransform = 1,
    SocketTransform = 2,
    EGameplayAbilityTargetingLocationType_MAX = 3
};

enum EGameplayAbilityTriggerSource
{
    GameplayEvent = 0,
    OwnedTagAdded = 1,
    OwnedTagPresent = 2,
    EGameplayAbilityTriggerSource_MAX = 3
};

enum EGameplayBehaviorInstantiationPolicy
{
    Instantiate = 0,
    ConditionallyInstantiate = 1,
    DontInstantiate = 2,
    EGameplayBehaviorInstantiationPolicy_MAX = 3
};

enum EGameplayContainerMatchType
{
    Any = 0,
    All = 1,
    EGameplayContainerMatchType_MAX = 2
};

enum EGameplayCueEvent
{
    OnActive = 0,
    WhileActive = 1,
    Executed = 2,
    Removed = 3,
    EGameplayCueEvent_MAX = 4
};

enum EGameplayCueNotify_AttachPolicy
{
    DoNotAttach = 0,
    AttachToTarget = 1,
    EGameplayCueNotify_MAX = 2
};

enum EGameplayCueNotify_EffectPlaySpace
{
    WorldSpace = 0,
    CameraSpace = 1,
    EGameplayCueNotify_MAX = 2
};

enum EGameplayCueNotify_LocallyControlledPolicy
{
    Always = 0,
    LocalOnly = 1,
    NotLocal = 2,
    EGameplayCueNotify_MAX = 3
};

enum EGameplayCueNotify_LocallyControlledSource
{
    InstigatorActor = 0,
    TargetActor = 1,
    EGameplayCueNotify_MAX = 2
};

enum EGameplayCuePayloadType
{
    CueParameters = 0,
    FromSpec = 1,
    EGameplayCuePayloadType_MAX = 2
};

enum EGameplayDebugState
{
    Unset = 0,
    Show = 1,
    Hide = 2,
    EGameplayDebugState_MAX = 3
};

enum EGameplayDebuggerOverrideMode
{
    Enable = 0,
    Disable = 1,
    UseDefault = 2,
    EGameplayDebuggerOverrideMode_MAX = 3
};

enum EGameplayDebuggerShape
{
    Invalid = 0,
    Point = 1,
    Segment = 2,
    Box = 3,
    Cone = 4,
    Cylinder = 5,
    Circle = 6,
    Rectangle = 7,
    Capsule = 8,
    Polygon = 9,
    Polyline = 10,
    Arrow = 11,
    EGameplayDebuggerShape_MAX = 12
};

enum EGameplayEffectAttributeCaptureSource
{
    Source = 0,
    Target = 1,
    EGameplayEffectAttributeCaptureSource_MAX = 2
};

enum EGameplayEffectDurationType
{
    Instant = 0,
    Infinite = 1,
    HasDuration = 2,
    EGameplayEffectDurationType_MAX = 3
};

enum EGameplayEffectGrantedAbilityRemovePolicy
{
    CancelAbilityImmediately = 0,
    RemoveAbilityOnEnd = 1,
    DoNothing = 2,
    EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

enum EGameplayEffectMagnitudeCalculation
{
    ScalableFloat = 0,
    AttributeBased = 1,
    CustomCalculationClass = 2,
    SetByCaller = 3,
    EGameplayEffectMagnitudeCalculation_MAX = 4
};

enum EGameplayEffectPeriodInhibitionRemovedPolicy
{
    NeverReset = 0,
    ResetPeriod = 1,
    ExecuteAndResetPeriod = 2,
    EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

enum EGameplayEffectReplicationMode
{
    Minimal = 0,
    Mixed = 1,
    Full = 2,
    EGameplayEffectReplicationMode_MAX = 3
};

enum EGameplayEffectScopedModifierAggregatorType
{
    CapturedAttributeBacked = 0,
    Transient = 1,
    EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

enum EGameplayEffectStackingDurationPolicy
{
    RefreshOnSuccessfulApplication = 0,
    NeverRefresh = 1,
    EGameplayEffectStackingDurationPolicy_MAX = 2
};

enum EGameplayEffectStackingExpirationPolicy
{
    ClearEntireStack = 0,
    RemoveSingleStackAndRefreshDuration = 1,
    RefreshDuration = 2,
    EGameplayEffectStackingExpirationPolicy_MAX = 3
};

enum EGameplayEffectStackingPeriodPolicy
{
    ResetOnSuccessfulApplication = 0,
    NeverReset = 1,
    EGameplayEffectStackingPeriodPolicy_MAX = 2
};

enum EGameplayEffectStackingType
{
    None = 0,
    AggregateBySource = 1,
    AggregateByTarget = 2,
    EGameplayEffectStackingType_MAX = 3
};

enum EGameplayEffectVersion
{
    Monolithic = 0,
    Modular53 = 1,
    AbilitiesComponent53 = 2,
    Current = 3,
    EGameplayEffectVersion_MAX = 4
};

enum EGameplayEventNetPolicy
{
    ServerOnly = 0,
    ClientOrServer = 1,
    EGameplayEventNetPolicy_MAX = 2
};

enum EGameplayInteractionAbortReason
{
    Unset = 0,
    ExternalAbort = 1,
    InternalAbort = 2,
    EGameplayInteractionAbortReason_MAX = 3
};

enum EGameplayInteractionMatchSlotTagSource
{
    ActivityTags = 0,
    RuntimeTags = 1,
    EGameplayInteractionMatchSlotTagSource_MAX = 2
};

enum EGameplayInteractionModifyGameplayTagOperation
{
    Add = 0,
    Remove = 1,
    EGameplayInteractionModifyGameplayTagOperation_MAX = 2
};

enum EGameplayInteractionSlotReferenceType
{
    ByActivityTag = 0,
    ByLinkTag = 1,
    EGameplayInteractionSlotReferenceType_MAX = 2
};

enum EGameplayInteractionSyncSlotTransitionState
{
    WaitingForFromTag = 0,
    WaitingForToTag = 1,
    Completed = 2,
    EGameplayInteractionSyncSlotTransitionState_MAX = 3
};

enum EGameplayInteractionTaskModify
{
    OnEnterStateUndoOnExitState = 0,
    OnEnterState = 1,
    OnExitState = 2,
    OnExitStateFailed = 3,
    OnExitStateSucceeded = 4,
    EGameplayInteractionTaskModify_MAX = 5
};

enum EGameplayInteractionTaskTrigger
{
    OnEnterState = 0,
    OnExitState = 1,
    OnExitStateFailed = 2,
    OnExitStateSucceeded = 3,
    EGameplayInteractionTaskTrigger_MAX = 4
};

enum EGameplayMessageMatchType
{
    ExactMatch = 0,
    PartialMatch = 1,
    EGameplayMessageMatchType_MAX = 2
};

enum EGameplayModEvaluationChannel
{
    Channel0 = 0,
    Channel1 = 1,
    Channel2 = 2,
    Channel3 = 3,
    Channel4 = 4,
    Channel5 = 5,
    Channel6 = 6,
    Channel7 = 7,
    Channel8 = 8,
    Channel9 = 9,
    Channel_MAX = 10,
    EGameplayModEvaluationChannel_MAX = 11
};

enum EGameplayModOp
{
    AddBase = 0,
    MultiplyAdditive = 1,
    DivideAdditive = 2,
    MultiplyCompound = 3,
    AddFinal = 4,
    Max = 5,
    Additive = 6,
    Multiplicitive = 7,
    Division = 8,
    Override = 9
};

enum EGameplayTagEventType
{
    NewOrRemoved = 0,
    AnyCountChange = 1,
    EGameplayTagEventType_MAX = 2
};

enum EGameplayTagGateBehavior
{
    OpenOnAdded = 0,
    CloseOnAdded = 1,
    OpenOnRemoved = 2,
    CloseOnRemoved = 3,
    EGameplayTagGateBehavior_MAX = 4
};

enum EGameplayTagListenBehavior
{
    Added = 0,
    Removed = 1,
    EGameplayTagListenBehavior_MAX = 2
};

enum EGameplayTagQueryExprType
{
    Undefined = 0,
    AnyTagsMatch = 1,
    AllTagsMatch = 2,
    NoTagsMatch = 3,
    AnyExprMatch = 4,
    AllExprMatch = 5,
    NoExprMatch = 6,
    EGameplayTagQueryExprType_MAX = 7
};

enum EGameplayTagSelectionType
{
    None = 0,
    NonRestrictedOnly = 1,
    RestrictedOnly = 2,
    All = 3,
    EGameplayTagSelectionType_MAX = 4
};

enum EGameplayTagSourceType
{
    Native = 0,
    DefaultTagList = 1,
    TagList = 2,
    RestrictedTagList = 3,
    DataTable = 4,
    Invalid = 5,
    EGameplayTagSourceType_MAX = 6
};

enum EGameplayTargetingConfirmation
{
    Instant = 0,
    UserConfirmed = 1,
    Custom = 2,
    CustomMulti = 3,
    EGameplayTargetingConfirmation_MAX = 4
};

enum EGameplayTaskActuationResult
{
    None = 0,
    RequestFailed = 1,
    Failed = 2,
    Succeeded = 3,
    EGameplayTaskActuationResult_MAX = 4
};

enum EGameplayTaskRunResult
{
    Error = 0,
    Failed = 1,
    Success_Paused = 2,
    Success_Active = 3,
    Success_Finished = 4,
    EGameplayTaskRunResult_MAX = 5
};

enum EGameplayTaskState
{
    Uninitialized = 0,
    AwaitingActivation = 1,
    Paused = 2,
    Active = 3,
    Finished = 4,
    EGameplayTaskState_MAX = 5
};

enum EGateCheckType
{
    RequireAll = 0,
    RequireAny = 1,
    RequireSequentialOrder = 2,
    EGateCheckType_MAX = 3
};

enum EGateOpenState
{
    Open = 0,
    Closed = 1,
    EGateOpenState_MAX = 2
};

enum EGateResetBehavior
{
    DoesNotReset = 0,
    ResetObjectiveOnGateClose = 1,
    ResetObjectiveAndDataOnGateClose = 2,
    ResetQuestOnGateClose = 3,
    ResetObjectiveAndDataOnGateClose_NoToast = 4,
    EGateResetBehavior_MAX = 5
};

enum EGateType
{
    SingleEvent = 0,
    GameplayAbility = 1,
    Verb = 2,
    GameplayTag = 3,
    ObjectiveUpdated = 4,
    GuidBlocker = 5,
    EGateType_MAX = 6
};

enum EGemHitMethod
{
    Press = 0,
    Release = 1,
    EGemHitMethod_MAX = 2
};

enum EGemReleaseHandlingBehavior
{
    DefaultProcessing = 0,
    ForceRelease = 1,
    EGemReleaseHandlingBehavior_MAX = 2
};

enum EGender
{
    Male = 0,
    Female = 1,
    Other = 2,
    EGender_MAX = 3
};

enum EGenerateConvexMethod
{
    ExternalCollision = 0,
    ComputedFromGeometry = 1,
    IntersectExternalWithComputed = 2,
    EGenerateConvexMethod_MAX = 3
};

enum EGeneratePOIResult
{
    Success = 0,
    Failure = 1,
    EGeneratePOIResult_MAX = 2
};

enum EGenericAICheck
{
    Less = 0,
    LessOrEqual = 1,
    Equal = 2,
    NotEqual = 3,
    GreaterOrEqual = 4,
    Greater = 5,
    IsTrue = 6,
    MAX = 7
};

enum EGenericPinFailureReason
{
    InvalidPin = 0,
    PinAttemptsExceeded = 1,
    UnknownError = 2,
    EGenericPinFailureReason_MAX = 3
};

enum EGeometryCollectionCacheType
{
    None = 0,
    Record = 1,
    Play = 2,
    RecordAndPlay = 3,
    EGeometryCollectionCacheType_MAX = 4
};

enum EGeometryCollectionDebugDrawActorHideGeometry
{
    HideNone = 0,
    HideWithCollision = 1,
    HideSelected = 2,
    HideWholeCollection = 3,
    HideAll = 4,
    EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

enum EGeometryCollectionPhysicsTypeEnum
{
    Chaos_AngularVelocity = 0,
    Chaos_DynamicState = 1,
    Chaos_LinearVelocity = 2,
    Chaos_InitialAngularVelocity = 3,
    Chaos_InitialLinearVelocity = 4,
    Chaos_CollisionGroup = 5,
    Chaos_LinearForce = 6,
    Chaos_AngularTorque = 7,
    Chaos_DisableThreshold = 8,
    Chaos_SleepingThreshold = 9,
    Chaos_ExternalClusterStrain = 10,
    Chaos_InternalClusterStrain = 11,
    Chaos_LinearImpulse = 12,
    Chaos_Max = 13
};

enum EGeometryScriptAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    EGeometryScriptAxis_MAX = 3
};

enum EGeometryScriptBakeBitDepth
{
    ChannelBits8 = 0,
    ChannelBits16 = 1,
    EGeometryScriptBakeBitDepth_MAX = 2
};

enum EGeometryScriptBakeCurvatureClampMode
{
    None = 0,
    OnlyPositive = 1,
    OnlyNegative = 2,
    EGeometryScriptBakeCurvatureClampMode_MAX = 3
};

enum EGeometryScriptBakeCurvatureColorMode
{
    Grayscale = 0,
    RedBlue = 1,
    RedGreenBlue = 2,
    EGeometryScriptBakeCurvatureColorMode_MAX = 3
};

enum EGeometryScriptBakeCurvatureTypeMode
{
    Mean = 0,
    Max = 1,
    Min = 2,
    Gaussian = 3
};

enum EGeometryScriptBakeFilteringType
{
    BSpline = 0,
    Box = 1,
    EGeometryScriptBakeFilteringType_MAX = 2
};

enum EGeometryScriptBakeNormalSpace
{
    Tangent = 0,
    Object = 1,
    EGeometryScriptBakeNormalSpace_MAX = 2
};

enum EGeometryScriptBakeOutputMode
{
    RGBA = 0,
    PerChannel = 1,
    EGeometryScriptBakeOutputMode_MAX = 2
};

enum EGeometryScriptBakeResolution
{
    Resolution16 = 0,
    Resolution32 = 1,
    Resolution64 = 2,
    Resolution128 = 3,
    Resolution256 = 4,
    Resolution512 = 5,
    Resolution1024 = 6,
    Resolution2048 = 7,
    Resolution4096 = 8,
    Resolution8192 = 9,
    EGeometryScriptBakeResolution_MAX = 10
};

enum EGeometryScriptBakeSamplesPerPixel
{
    Sample1 = 0,
    Sample4 = 1,
    Sample16 = 2,
    Sample64 = 3,
    Samples256 = 4,
    EGeometryScriptBakeSamplesPerPixel_MAX = 5
};

enum EGeometryScriptBakeTypes
{
    None = 0,
    TangentSpaceNormal = 1,
    ObjectSpaceNormal = 2,
    FaceNormal = 3,
    BentNormal = 4,
    Position = 5,
    Curvature = 6,
    AmbientOcclusion = 7,
    Texture = 8,
    MultiTexture = 9,
    VertexColor = 10,
    MaterialID = 11,
    Constant = 12,
    EGeometryScriptBakeTypes_MAX = 13
};

enum EGeometryScriptBlurColorMode
{
    Uniform = 0,
    EdgeLength = 1,
    CotanWeights = 2,
    EGeometryScriptBlurColorMode_MAX = 3
};

enum EGeometryScriptBooleanOperation
{
    Union = 0,
    Intersection = 1,
    Subtract = 2,
    EGeometryScriptBooleanOperation_MAX = 3
};

enum EGeometryScriptCollisionGenerationMethod
{
    AlignedBoxes = 0,
    OrientedBoxes = 1,
    MinimalSpheres = 2,
    Capsules = 3,
    ConvexHulls = 4,
    SweptHulls = 5,
    MinVolumeShapes = 6,
    LevelSets = 7,
    EGeometryScriptCollisionGenerationMethod_MAX = 8
};

enum EGeometryScriptCombineAttributesMode
{
    EnableAllMatching = 0,
    UseTarget = 1,
    UseSource = 2,
    EGeometryScriptCombineAttributesMode_MAX = 3
};

enum EGeometryScriptCombineSelectionMode
{
    Add = 0,
    Subtract = 1,
    Intersection = 2,
    EGeometryScriptCombineSelectionMode_MAX = 3
};

enum EGeometryScriptContainmentOutcomePins
{
    Inside = 0,
    Outside = 1,
    EGeometryScriptContainmentOutcomePins_MAX = 2
};

enum EGeometryScriptConvexHullSimplifyMethod
{
    MeshQSlim = 0,
    AngleTolerance = 1,
    EGeometryScriptConvexHullSimplifyMethod_MAX = 2
};

enum EGeometryScriptCoordinateSpace
{
    Local = 0,
    World = 1,
    EGeometryScriptCoordinateSpace_MAX = 2
};

enum EGeometryScriptDebugMessageType
{
    ErrorMessage = 0,
    WarningMessage = 1,
    EGeometryScriptDebugMessageType_MAX = 2
};

enum EGeometryScriptEmptySelectionBehavior
{
    FullMeshSelection = 0,
    EmptySelection = 1,
    EGeometryScriptEmptySelectionBehavior_MAX = 2
};

enum EGeometryScriptErrorType
{
    NoError = 0,
    UnknownError = 1,
    InvalidInputs = 2,
    OperationFailed = 3,
    EGeometryScriptErrorType_MAX = 4
};

enum EGeometryScriptEvaluateSplineRange
{
    FullSpline = 0,
    DistanceRange = 1,
    TimeRange_ConstantSpeed = 2,
    TimeRange_VariableSpeed = 3,
    EGeometryScriptEvaluateSplineRange_MAX = 4
};

enum EGeometryScriptFillHolesMethod
{
    Automatic = 0,
    MinimalFill = 1,
    PolygonTriangulation = 2,
    TriangleFan = 3,
    PlanarProjection = 4,
    EGeometryScriptFillHolesMethod_MAX = 5
};

enum EGeometryScriptFlareType
{
    SinMode = 0,
    SinSquaredMode = 1,
    TriangleMode = 2,
    EGeometryScriptFlareType_MAX = 3
};

enum EGeometryScriptGridSizingMethod
{
    GridCellSize = 0,
    GridResolution = 1,
    EGeometryScriptGridSizingMethod_MAX = 2
};

enum EGeometryScriptIndexType
{
    Any = 0,
    Triangle = 1,
    Edge = 2,
    Vertex = 3,
    MaterialID = 4,
    PolygroupID = 5,
    EGeometryScriptIndexType_MAX = 6
};

enum EGeometryScriptInitKMeansMethod
{
    Random = 0,
    UniformSpacing = 1,
    EGeometryScriptInitKMeansMethod_MAX = 2
};

enum EGeometryScriptLODType
{
    MaxAvailable = 0,
    HiResSourceModel = 1,
    SourceModel = 2,
    RenderData = 3,
    EGeometryScriptLODType_MAX = 4
};

enum EGeometryScriptLinearExtrudeDirection
{
    FixedDirection = 0,
    AverageFaceNormal = 1,
    EGeometryScriptLinearExtrudeDirection_MAX = 2
};

enum EGeometryScriptMathWarpType
{
    SinWave1D = 0,
    SinWave2D = 1,
    SinWave3D = 2,
    EGeometryScriptMathWarpType_MAX = 3
};

enum EGeometryScriptMeshBevelSelectionMode
{
    TriangleArea = 0,
    AllPolygroupEdges = 1,
    SharedPolygroupEdges = 2,
    EGeometryScriptMeshBevelSelectionMode_MAX = 3
};

enum EGeometryScriptMeshEditPolygroupMode
{
    PreserveExisting = 0,
    AutoGenerateNew = 1,
    SetConstant = 2,
    EGeometryScriptMeshEditPolygroupMode_MAX = 3
};

enum EGeometryScriptMeshSelectionConversionType
{
    NoConversion = 0,
    ToVertices = 1,
    ToTriangles = 2,
    ToPolygroups = 3,
    EGeometryScriptMeshSelectionConversionType_MAX = 4
};

enum EGeometryScriptMeshSelectionType
{
    Vertices = 0,
    Triangles = 1,
    Polygroups = 2,
    EGeometryScriptMeshSelectionType_MAX = 3
};

enum EGeometryScriptMorphologicalOpType
{
    Dilate = 0,
    Contract = 1,
    Close = 2,
    Open = 3,
    EGeometryScriptMorphologicalOpType_MAX = 4
};

enum EGeometryScriptOffsetFacesType
{
    VertexNormal = 0,
    FaceNormal = 1,
    ParallelFaceOffset = 2,
    EGeometryScriptOffsetFacesType_MAX = 3
};

enum EGeometryScriptOutcomePins
{
    Failure = 0,
    Success = 1,
    EGeometryScriptOutcomePins_MAX = 2
};

enum EGeometryScriptPathOffsetEndType
{
    Butt = 0,
    Square = 1,
    Round = 2,
    EGeometryScriptPathOffsetEndType_MAX = 3
};

enum EGeometryScriptPixelSamplingMethod
{
    Bilinear = 0,
    Nearest = 1,
    EGeometryScriptPixelSamplingMethod_MAX = 2
};

enum EGeometryScriptPolyOffsetJoinType
{
    Square = 0,
    Round = 1,
    Miter = 2,
    EGeometryScriptPolyOffsetJoinType_MAX = 3
};

enum EGeometryScriptPolyOperationArea
{
    EntireSelection = 0,
    PerPolygroup = 1,
    PerTriangle = 2,
    EGeometryScriptPolyOperationArea_MAX = 3
};

enum EGeometryScriptPolygonFillMode
{
    All = 0,
    Solid = 1,
    PositiveWinding = 2,
    NonZeroWinding = 3,
    NegativeWinding = 4,
    OddWinding = 5,
    EGeometryScriptPolygonFillMode_MAX = 6
};

enum EGeometryScriptPrimitiveOriginMode
{
    Center = 0,
    Base = 1,
    EGeometryScriptPrimitiveOriginMode_MAX = 2
};

enum EGeometryScriptPrimitivePolygroupMode
{
    SingleGroup = 0,
    PerFace = 1,
    PerQuad = 2,
    EGeometryScriptPrimitivePolygroupMode_MAX = 3
};

enum EGeometryScriptPrimitiveUVMode
{
    Uniform = 0,
    ScaleToFill = 1,
    EGeometryScriptPrimitiveUVMode_MAX = 2
};

enum EGeometryScriptRemeshEdgeConstraintType
{
    Fixed = 0,
    Refine = 1,
    Free = 2,
    Ignore = 3,
    EGeometryScriptRemeshEdgeConstraintType_MAX = 4
};

enum EGeometryScriptRemeshSmoothingType
{
    Uniform = 0,
    UVPreserving = 1,
    Mixed = 2,
    EGeometryScriptRemeshSmoothingType_MAX = 3
};

enum EGeometryScriptRemoveHiddenTrianglesMethod
{
    FastWindingNumber = 0,
    RaycastOcclusionTest = 1,
    EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2
};

enum EGeometryScriptRemoveMeshSimplificationType
{
    StandardQEM = 0,
    VolumePreserving = 1,
    AttributeAware = 2,
    EGeometryScriptRemoveMeshSimplificationType_MAX = 3
};

enum EGeometryScriptRepairMeshMode
{
    DeleteOnly = 0,
    RepairOrDelete = 1,
    RepairOrSkip = 2,
    EGeometryScriptRepairMeshMode_MAX = 3
};

enum EGeometryScriptSampleSpacing
{
    UniformDistance = 0,
    UniformTime = 1,
    ErrorTolerance = 2,
    EGeometryScriptSampleSpacing_MAX = 3
};

enum EGeometryScriptSamplingDistributionMode
{
    Uniform = 0,
    Smaller = 1,
    Larger = 2,
    EGeometryScriptSamplingDistributionMode_MAX = 3
};

enum EGeometryScriptSamplingWeightMode
{
    WeightToRadius = 0,
    FilledWeightToRadius = 1,
    WeightedRandom = 2,
    EGeometryScriptSamplingWeightMode_MAX = 3
};

enum EGeometryScriptSearchOutcomePins
{
    Found = 0,
    NotFound = 1,
    EGeometryScriptSearchOutcomePins_MAX = 2
};

enum EGeometryScriptSmoothBoneWeightsType
{
    DirectDistance = 0,
    GeodesicVoxel = 1,
    EGeometryScriptSmoothBoneWeightsType_MAX = 2
};

enum EGeometryScriptSweptHullAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    SmallestBoxDimension = 3,
    SmallestVolume = 4,
    EGeometryScriptSweptHullAxis_MAX = 5
};

enum EGeometryScriptTangentTypes
{
    FastMikkT = 0,
    PerTriangle = 1,
    EGeometryScriptTangentTypes_MAX = 2
};

enum EGeometryScriptTopologyConnectionType
{
    Geometric = 0,
    Polygroup = 1,
    MaterialID = 2,
    EGeometryScriptTopologyConnectionType_MAX = 3
};

enum EGeometryScriptUVFlattenMethod
{
    ExpMap = 0,
    Conformal = 1,
    SpectralConformal = 2,
    EGeometryScriptUVFlattenMethod_MAX = 3
};

enum EGeometryScriptUVIslandSource
{
    PolyGroups = 0,
    UVIslands = 1,
    EGeometryScriptUVIslandSource_MAX = 2
};

enum EGeometryScriptUniformRemeshTargetType
{
    TriangleCount = 0,
    TargetEdgeLength = 1,
    EGeometryScriptUniformRemeshTargetType_MAX = 2
};

enum EGeometrySelectionElementType
{
    Vertex = 0,
    Edge = 1,
    Face = 2,
    EGeometrySelectionElementType_MAX = 3
};

enum EGeometrySelectionTopologyType
{
    Triangle = 0,
    Polygroup = 1,
    EGeometrySelectionTopologyType_MAX = 2
};

enum EGetCommonPartDescriptionResult
{
    Valid = 0,
    Invalid = 1,
    EGetCommonPartDescriptionResult_MAX = 2
};

enum EGfaCvarPriority
{
    PluginLowPriority = 0,
    DeviceProfile = 1,
    PluginHighPriority = 2,
    Code = 3,
    EGfaCvarPriority_MAX = 4
};

enum EGiftingPresentationMode
{
    ConfirmPurchase = 0,
    WrapOptions = 1,
    GiftingProcess = 2,
    GiftingError = 3,
    GiftConfirmed = 4,
    None = 5,
    EGiftingPresentationMode_MAX = 6
};

enum EGiftingPricePresentationMode
{
    MtxCurrency = 0,
    RealMoney = 1,
    Hidden = 2,
    EGiftingPricePresentationMode_MAX = 3
};

enum EGiftingScreenPresentationMode
{
    ItemList = 0,
    NoContent = 1,
    EGiftingScreenPresentationMode_MAX = 2
};

enum EGizmoElementArrowHeadType
{
    Cone = 0,
    Cube = 1,
    EGizmoElementArrowHeadType_MAX = 2
};

enum EGizmoElementInteractionState
{
    None = 0,
    Hovering = 1,
    Interacting = 2,
    EGizmoElementInteractionState_MAX = 3
};

enum EGizmoElementPartialType
{
    None = 0,
    Partial = 1,
    PartialViewDependent = 2,
    EGizmoElementPartialType_MAX = 3
};

enum EGizmoElementState
{
    None = 0,
    Visible = 1,
    Hittable = 2,
    VisibleAndHittable = 3,
    EGizmoElementState_MAX = 4
};

enum EGizmoElementViewAlignType
{
    None = 0,
    PointOnly = 1,
    PointEye = 2,
    PointScreen = 3,
    Axial = 4,
    EGizmoElementViewAlignType_MAX = 5
};

enum EGizmoElementViewDependentType
{
    None = 0,
    Axis = 1,
    Plane = 2,
    EGizmoElementViewDependentType_MAX = 3
};

enum EGlideBehavior
{
    GlideFocusOnDestination = 0,
    GlideSurveyArea = 1,
    EGlideBehavior_MAX = 2
};

enum EGlideMovementType
{
    GlideMovementLinear = 0,
    GlideMovementSpiral = 1,
    GlideMovementSerpentine = 2,
    EGlideMovementType_MAX = 3
};

enum EGliderTrailActivationMode
{
    None = 0,
    AutoActivate = 1,
    FullyDeployed = 2,
    EGliderTrailActivationMode_MAX = 3
};

enum EGliderTrailAttachmentMode
{
    GliderMesh = 0,
    PlayerPawn = 1,
    EGliderTrailAttachmentMode_MAX = 2
};

enum EGliderType
{
    HangGlider = 0,
    Umbrella = 1,
    Surfing = 2,
    SurfingSimple = 3,
    Cape = 4,
    Stairs = 5,
    NoGlider = 6,
    EGliderType_MAX = 7
};

enum EGlobalWeatherState
{
    Inactive = 0,
    Active = 1,
    BlendingIn = 2,
    BlendingOut = 3,
    EGlobalWeatherState_MAX = 4
};

enum EGoalCardOrientation
{
    Vertical = 0,
    Horizontal = 1,
    EGoalCardOrientation_MAX = 2
};

enum EGotBeatAndTimeFrom
{
    Invalid = 0,
    None = 1,
    PreviewBPM = 2,
    MusicClock = 3,
    EGotBeatAndTimeFrom_MAX = 4
};

enum EGrammaticalGender
{
    Neuter = 0,
    Masculine = 1,
    Feminine = 2,
    Mixed = 3,
    EGrammaticalGender_MAX = 4
};

enum EGrammaticalNumber
{
    Singular = 0,
    Plural = 1,
    EGrammaticalNumber_MAX = 2
};

enum EGranularSynthEnvelopeType
{
    Rectangular = 0,
    Triangle = 1,
    DownwardTriangle = 2,
    UpwardTriangle = 3,
    ExponentialDecay = 4,
    ExponentialIncrease = 5,
    Gaussian = 6,
    Hanning = 7,
    Lanczos = 8,
    Cosine = 9,
    CosineSquared = 10,
    Welch = 11,
    Blackman = 12,
    BlackmanHarris = 13,
    Count = 14,
    EGranularSynthEnvelopeType_MAX = 15
};

enum EGranularSynthSeekType
{
    FromBeginning = 0,
    FromCurrentPosition = 1,
    Count = 2,
    EGranularSynthSeekType_MAX = 3
};

enum EGraphAxisStyle
{
    Lines = 0,
    Notches = 1,
    Grid = 2,
    EGraphAxisStyle_MAX = 3
};

enum EGraphDataStyle
{
    Lines = 0,
    Filled = 1,
    EGraphDataStyle_MAX = 2
};

enum EGraphElementType
{
    Node = 0,
    Edge = 1,
    Island = 2,
    Unknown = 3,
    EGraphElementType_MAX = 4
};

enum EGraphIslandConnectivityChange
{
    VertexAdd = 0,
    SplitFrom = 1,
    SplitTo = 2,
    Other = 3,
    EGraphIslandConnectivityChange_MAX = 4
};

enum EGraphIslandOperations
{
    None = 0,
    Add = 1,
    Split = 2,
    Merge = 3,
    Destroy = 4,
    All = 5,
    EGraphIslandOperations_MAX = 6
};

enum EGraphType
{
    GT_Function = 0,
    GT_Ubergraph = 1,
    GT_Macro = 2,
    GT_Animation = 3,
    GT_StateMachine = 4,
    GT_MAX = 5
};

enum EGrassScaling
{
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    EGrassScaling_MAX = 3
};

enum EGravityGunHolderObjectType
{
    Invalid = 0,
    PhysicsObject = 1,
    Vehicle = 2,
    Projectile = 3,
    PickUp = 4,
    EGravityGunHolderObjectType_MAX = 5
};

enum EGravityGunHolderRotationAxis
{
    XZ = 0,
    YZ = 1,
    ZX = 2,
    MAX = 3
};

enum EGravityGunHolderState
{
    Invalid = 0,
    Unrooting = 1,
    Catching = 2,
    Holding = 3,
    Detached = 4,
    EGravityGunHolderState_MAX = 5
};

enum EGravityPresetOverride
{
    Normal = 0,
    Low = 1,
    VeryLow = 2,
    High = 3,
    VeryHigh = 4,
    EGravityPresetOverride_MAX = 5
};

enum EGridScale
{
    OneHundredPercent = 0,
    FiftyPercent = 1,
    TwentyFivePercent = 2,
    EGridScale_MAX = 3
};

enum EGridSortKind
{
    None = 0,
    ByNumber = 1,
    ByString = 2,
    ByNumberThenString = 3,
    ByStringThenNumber = 4,
    EGridSortKind_MAX = 5
};

enum EGrindRailBoosterMode
{
    SpeedUp = 0,
    SlowDown = 1,
    NoEffect = 2,
    EGrindRailBoosterMode_MAX = 3
};

enum EGroomBasisType
{
    NoBasis = 0,
    BezierBasis = 1,
    BsplineBasis = 2,
    CatmullromBasis = 3,
    HermiteBasis = 4,
    PowerBasis = 5,
    EGroomBasisType_MAX = 6
};

enum EGroomBindingAsyncProperties
{
    None = 0,
    GroomBindingType = 1,
    Groom = 2,
    SourceSkeletalMesh = 3,
    TargetSkeletalMesh = 4,
    SourceGeometryCache = 5,
    TargetGeometryCache = 6,
    NumInterpolationPoints = 7,
    MatchingSection = 8,
    GroupInfos = 9,
    HairGroupResources = 10,
    HairGroupPlatformData = 11,
    All = 12,
    EGroomBindingAsyncProperties_MAX = 13
};

enum EGroomBindingMeshType
{
    SkeletalMesh = 0,
    GeometryCache = 1,
    EGroomBindingMeshType_MAX = 2
};

enum EGroomBindingType
{
    NoneBinding = 0,
    Rigid = 1,
    Skinning = 2,
    EGroomBindingType_MAX = 3
};

enum EGroomCacheAttributes
{
    None = 0,
    Position = 1,
    Width = 2,
    Color = 3,
    PositionWidth = 4,
    PositionColor = 5,
    WidthColor = 6,
    PositionWidthColor = 7,
    EGroomCacheAttributes_MAX = 8
};

enum EGroomCacheImportType
{
    None = 0,
    Strands = 1,
    Guides = 2,
    All = 3,
    EGroomCacheImportType_MAX = 4
};

enum EGroomCacheType
{
    None = 0,
    Strands = 1,
    Guides = 2,
    EGroomCacheType_MAX = 3
};

enum EGroomCurveType
{
    Cubic = 0,
    Linear = 1,
    VariableOrder = 2,
    EGroomCurveType_MAX = 3
};

enum EGroomGeometryType
{
    Strands = 0,
    Cards = 1,
    Meshes = 2,
    EGroomGeometryType_MAX = 3
};

enum EGroomGuideType
{
    Imported = 0,
    Generated = 1,
    Rigged = 2,
    EGroomGuideType_MAX = 3
};

enum EGroomInterpolationQuality
{
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EGroomInterpolationQuality_MAX = 4
};

enum EGroomInterpolationType
{
    None = 0,
    RigidTransform = 1,
    OffsetTransform = 2,
    SmoothTransform = 3,
    EGroomInterpolationType_MAX = 4
};

enum EGroomInterpolationWeight
{
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
    EGroomInterpolationWeight_MAX = 4
};

enum EGroomLODMode
{
    Default = 0,
    Manual = 1,
    Auto = 2,
    EGroomLODMode_MAX = 3
};

enum EGroomNiagaraSolvers
{
    None = 0,
    CosseratRods = 1,
    AngularSprings = 2,
    CustomSolver = 3,
    EGroomNiagaraSolvers_MAX = 4
};

enum EGroomOverrideType
{
    Auto = 0,
    Enable = 1,
    Disable = 2,
    EGroomOverrideType_MAX = 3
};

enum EGroomStrandsSize
{
    None = 0,
    Size2 = 1,
    Size4 = 2,
    Size8 = 3,
    Size16 = 4,
    Size32 = 5,
    EGroomStrandsSize_MAX = 6
};

enum EGroupBoundaryConstraint
{
    Fixed = 0,
    Refine = 1,
    Free = 2,
    Ignore = 3,
    EGroupBoundaryConstraint_MAX = 4
};

enum EGroupEdgeInsertionMode
{
    Retriangulate = 0,
    PlaneCut = 1,
    EGroupEdgeInsertionMode_MAX = 2
};

enum EGroupTopologyDeformationStrategy
{
    Linear = 0,
    Laplacian = 1,
    EGroupTopologyDeformationStrategy_MAX = 2
};

enum EGuitarMidiNoteEvent
{
    None = 0,
    FretPosition1 = 1,
    FretPosition2 = 2,
    FretPosition3 = 3,
    FretPosition4 = 4,
    FretPosition5 = 5,
    FretPosition6 = 6,
    FretPosition7 = 7,
    FretPosition8 = 8,
    FretPosition9 = 9,
    FretPosition10 = 10,
    FretPosition11 = 11,
    FretPosition12 = 12,
    FretPosition13 = 13,
    FretPosition14 = 14,
    FretPosition15 = 15,
    FretPosition16 = 16,
    FretPosition17 = 17,
    FretPosition18 = 18,
    FretPosition19 = 19,
    FretPosition20 = 20,
    StrumDown = 21,
    StrumUp = 22,
    ChordShape = 23,
    EGuitarMidiNoteEvent_MAX = 24
};

enum EGuitarMidiTextEvent
{
    None = 0,
    PlayingMellow = 1,
    PlayingStandard = 2,
    PlayingIntense = 3,
    IdleRhythmMellow = 4,
    IdleRhythmStandard = 5,
    IdleRhythmIntense = 6,
    IdleRealtime = 7,
    UsingInstrumentGuitar = 8,
    UsingInstrumentKeytar = 9,
    Pickup = 10,
    EGuitarMidiTextEvent_MAX = 11
};

enum EGyroAcceleration
{
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Custom = 4,
    Legacy = 5,
    EGyroAcceleration_MAX = 6
};

enum EGyroActiveBuildMode
{
    None = 0,
    Edit = 1,
    All = 2,
    EGyroActiveBuildMode_MAX = 3
};

enum EGyroActiveMode
{
    None = 0,
    ScopeOnly = 1,
    ScopeADS = 2,
    ScopeADSHarvesting = 3,
    ScopeADSHarvestingFiring = 4,
    All = 5,
    EGyroActiveMode_MAX = 6
};

enum EGyroButton
{
    Custom = 0,
    ReloadInteract = 1,
    TogglePickaxe = 2,
    CrouchSlide = 3,
    ResetCamera = 4,
    Touch = 5,
    EGyroButton_MAX = 6
};

enum EGyroButtonResponse
{
    NoChange = 0,
    Disable = 1,
    Trackball = 2,
    Invert = 3,
    Enable = 4,
    EGyroButtonResponse_MAX = 5
};

enum EGyroSpace
{
    Local = 0,
    Player = 1,
    EGyroSpace_MAX = 2
};

enum EGyroStickMode
{
    None = 0,
    Disables = 1,
    Enables = 2,
    EGyroStickMode_MAX = 3
};

enum EGyroTouchMode
{
    None = 0,
    Disables = 1,
    Enables = 2,
    EGyroTouchMode_MAX = 3
};

enum EHDRCaptureGamut
{
    HCGM_Rec709 = 0,
    HCGM_P3DCI = 1,
    HCGM_Rec2020 = 2,
    HCGM_ACES = 3,
    HCGM_ACEScg = 4,
    HCGM_Linear = 5,
    HCGM_MAX = 6
};

enum EHISMViewRelevanceType
{
    Grass = 0,
    Foliage = 1,
    HISM = 2,
    EHISMViewRelevanceType_MAX = 3
};

enum EHLODBatchingPolicy
{
    None = 0,
    MeshSection = 1,
    Instancing = 2,
    EHLODBatchingPolicy_MAX = 3
};

enum EHLODLayerType
{
    Instancing = 0,
    MeshMerge = 1,
    MeshSimplify = 2,
    MeshApproximate = 3,
    Custom = 4,
    EHLODLayerType_MAX = 5
};

enum EHLODLevelExclusion
{
    HLOD0 = 0,
    HLOD1 = 1,
    HLOD2 = 2,
    HLOD3 = 3,
    HLOD4 = 4,
    HLOD5 = 5,
    HLOD6 = 6,
    HLOD7 = 7,
    EHLODLevelExclusion_MAX = 8
};

enum EHMDTrackingOrigin
{
    View = 0,
    LocalFloor = 1,
    Local = 2,
    Stage = 3,
    CustomOpenXR = 4,
    EHMDTrackingOrigin_MAX = 5
};

enum EHMDWornState
{
    Unknown = 0,
    Worn = 1,
    NotWorn = 2,
    EHMDWornState_MAX = 3
};

enum EHUDLayoutToolPopupType
{
    Warning = 0,
    Generic = 1,
    EHUDLayoutToolPopupType_MAX = 2
};

enum EHUDLayoutToolTextInputPopupType
{
    Rename = 0,
    ImportLayoutID = 1,
    EHUDLayoutToolTextInputPopupType_MAX = 2
};

enum EHUDLayoutToolTheme
{
    None = 0,
    Default = 1,
    Dark = 2,
    EHUDLayoutToolTheme_MAX = 3
};

enum EHUDLayoutToolToasterType
{
    Success = 0,
    Failure = 1,
    LocalFailure = 2,
    CloudFailure = 3,
    EHUDLayoutToolToasterType_MAX = 4
};

enum EHUDMessagePlacement
{
    None = 0,
    BottomCenter = 1,
    TopCenter = 2,
    CenterRight = 3,
    EHUDMessagePlacement_MAX = 4
};

enum EHabaneroAnimatedMessage
{
    None = 0,
    HabaneroEngaged = 1,
    ReadyUp = 2,
    EHabaneroAnimatedMessage_MAX = 3
};

enum EHabaneroDisplayState
{
    Solo = 0,
    Party = 1,
    Hidden = 2,
    EHabaneroDisplayState_MAX = 3
};

enum EHabaneroProgressError
{
    None = 0,
    MissingHabaneroComponent = 1,
    HabaneroComponentSocialUserNotBound = 2,
    HabaneroComponentUnableToQueryProgress = 3,
    EmptyRankType = 4,
    InitialProgressMapInvalid = 5,
    CurrentProgressMapInvalid = 6,
    InvalidCurrentTrack = 7,
    InitialProgressEntryNotFound = 8,
    CurrentProgressEntryNotFound = 9,
    GameModeNotFound = 10,
    CurrentTierLessThanZero = 11,
    NotEnoughTiersForInitialTier = 12,
    NotEnoughTiersForCurrentTier = 13,
    FailedToFindUnrankedTier = 14,
    UnknownError = 15,
    EHabaneroProgressError_MAX = 16
};

enum EHabaneroTierType
{
    HabaneroSauce0 = 0,
    HabaneroSauce1 = 1,
    HabaneroSauce2 = 2,
    HabaneroSauce3 = 3,
    HabaneroSauce4 = 4,
    HabaneroSauce5 = 5,
    HabaneroSauce6 = 6,
    HabaneroSauce7 = 7,
    HabaneroSauce8 = 8,
    EHabaneroTierType_MAX = 9
};

enum EHairAtlasTextureType
{
    Depth = 0,
    Tangent = 1,
    Attribute = 2,
    Coverage = 3,
    AuxilaryData = 4,
    Material = 5,
    EHairAtlasTextureType_MAX = 6
};

enum EHairCardsGuideType
{
    Generated = 0,
    GuideBased = 1,
    EHairCardsGuideType_MAX = 2
};

enum EHairCardsSourceType
{
    Procedural = 0,
    Imported = 1,
    EHairCardsSourceType_MAX = 2
};

enum EHairInterpolationQuality
{
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EHairInterpolationQuality_MAX = 4
};

enum EHairInterpolationWeight
{
    Parametric = 0,
    Root = 1,
    Index = 2,
    Distance = 3,
    Unknown = 4,
    EHairInterpolationWeight_MAX = 5
};

enum EHairTextureLayout
{
    Layout0 = 0,
    Layout1 = 1,
    Layout2 = 2,
    Layout3 = 3,
    EHairTextureLayout_MAX = 4
};

enum EHandKeypoint
{
    Palm = 0,
    Wrist = 1,
    ThumbMetacarpal = 2,
    ThumbProximal = 3,
    ThumbDistal = 4,
    ThumbTip = 5,
    IndexMetacarpal = 6,
    IndexProximal = 7,
    IndexIntermediate = 8,
    IndexDistal = 9,
    IndexTip = 10,
    MiddleMetacarpal = 11,
    MiddleProximal = 12,
    MiddleIntermediate = 13,
    MiddleDistal = 14,
    MiddleTip = 15,
    RingMetacarpal = 16,
    RingProximal = 17,
    RingIntermediate = 18,
    RingDistal = 19,
    RingTip = 20,
    LittleMetacarpal = 21,
    LittleProximal = 22,
    LittleIntermediate = 23,
    LittleDistal = 24,
    LittleTip = 25,
    EHandKeypoint_MAX = 26
};

enum EHandleEvent
{
    LocalTransformUpdated = 0,
    GlobalTransformUpdated = 1,
    ComponentUpdated = 2,
    UpperDependencyUpdated = 3,
    Max = 4
};

enum EHandleSourcesMethod
{
    DeleteSources = 0,
    HideSources = 1,
    KeepSources = 2,
    KeepFirstSource = 3,
    KeepLastSource = 4,
    EHandleSourcesMethod_MAX = 5
};

enum EHardwareDevicePrimaryType
{
    Unspecified = 0,
    KeyboardAndMouse = 1,
    Gamepad = 2,
    Touch = 3,
    MotionTracking = 4,
    RacingWheel = 5,
    FlightStick = 6,
    Camera = 7,
    Instrument = 8,
    CustomTypeA = 9,
    CustomTypeB = 10,
    CustomTypeC = 11,
    CustomTypeD = 12,
    EHardwareDevicePrimaryType_MAX = 13
};

enum EHardwareDeviceSupportedFeatures
{
    Unspecified = 0,
    Keypress = 1,
    Pointer = 2,
    Gamepad = 3,
    Touch = 4,
    Camera = 5,
    MotionTracking = 6,
    Lights = 7,
    TriggerHaptics = 8,
    ForceFeedback = 9,
    AudioBasedVibrations = 10,
    Acceleration = 11,
    Virtual = 12,
    Microphone = 13,
    Orientation = 14,
    Guitar = 15,
    Drums = 16,
    CustomA = 17,
    CustomB = 18,
    CustomC = 19,
    CustomD = 20,
    All = 21,
    EHardwareDeviceSupportedFeatures_MAX = 22
};

enum EHarmonicProgression
{
    NegI = 0,
    NegII = 1,
    NegIII = 2,
    NegIV = 3,
    NegV = 4,
    NegVI = 5,
    NegVII = 6,
    I = 7,
    II = 8,
    III = 9,
    IV = 10,
    V = 11,
    VI = 12,
    VII = 13,
    PlusI = 14,
    Num = 15,
    EHarmonicProgression_MAX = 16
};

enum EHarmonixAudioAnalysisType
{
    FFT = 0,
    Arbitrary = 1,
    Count = 2,
    EHarmonixAudioAnalysisType_MAX = 3
};

enum EHarmonixTextureFilterMode
{
    Point = 0,
    Linear = 1,
    Count = 2,
    Invalid = 3,
    EHarmonixTextureFilterMode_MAX = 4
};

enum EHarvestResult
{
    None = 0,
    InProgress = 1,
    Success = 2,
    Fail = 3,
    EHarvestResult_MAX = 4
};

enum EHarvestStyleOverride
{
    None = 0,
    Creative = 1,
    BattleRoyale = 2,
    SaveTheWorld = 3,
    EHarvestStyleOverride_MAX = 4
};

enum EHarvestSwingPhase
{
    Swing = 0,
    End = 1,
    EHarvestSwingPhase_MAX = 2
};

enum EHarvesterSwingTagType
{
    Hit = 0,
    Combo = 1,
    EHarvesterSwingTagType_MAX = 2
};

enum EHasCustomNavigableGeometry
{
    No = 0,
    Yes = 1,
    EvenIfNotCollidable = 2,
    DontExport = 3,
    EHasCustomNavigableGeometry_MAX = 4
};

enum EHasMatchingGameplayTagContainerTestType
{
    Any = 0,
    All = 1,
    EHasMatchingGameplayTagContainerTestType_MAX = 2
};

enum EHeadingAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    Num = 3,
    EHeadingAxis_MAX = 4
};

enum EHealthBarType
{
    Health = 0,
    Shield = 1,
    Overshield = 2,
    Armor = 3,
    Stamina = 4,
    VehicleHealth = 5,
    SignalInStorm = 6,
    EHealthBarType_MAX = 7
};

enum EHeightFieldRenderMode
{
    Solid = 0,
    Walkable = 1,
    EHeightFieldRenderMode_MAX = 2
};

enum EHeightmapRTType
{
    HeightmapRT_CombinedAtlas = 0,
    HeightmapRT_CombinedNonAtlas = 1,
    HeightmapRT_Scratch1 = 2,
    HeightmapRT_Scratch2 = 3,
    HeightmapRT_Scratch3 = 4,
    HeightmapRT_BoundaryNormal = 5,
    HeightmapRT_Mip1 = 6,
    HeightmapRT_Mip2 = 7,
    HeightmapRT_Mip3 = 8,
    HeightmapRT_Mip4 = 9,
    HeightmapRT_Mip5 = 10,
    HeightmapRT_Mip6 = 11,
    HeightmapRT_Mip7 = 12,
    HeightmapRT_Count = 13,
    HeightmapRT_MAX = 14
};

enum EHeistBlingIconState
{
    None = 0,
    SupplyDrop = 1,
    PickupItem = 2,
    CarriedEnemy = 3,
    CarriedAlly = 4,
    EHeistBlingIconState_MAX = 5
};

enum EHeistExitCraftIconState
{
    None = 0,
    Incoming = 1,
    Spawned = 2,
    Exited = 3,
    EHeistExitCraftIconState_MAX = 4
};

enum EHeistExitCraftState
{
    None = 0,
    Incoming = 1,
    Spawned = 2,
    Exited = 3,
    EHeistExitCraftState_MAX = 4
};

enum EHeistExitCraftUIState
{
    None = 0,
    OnTheWay = 1,
    Incoming = 2,
    Arrived = 3,
    EHeistExitCraftUIState_MAX = 4
};

enum EHeldObjectState
{
    Unheld = 0,
    Held = 1,
    Thrown = 2,
    Placed = 3,
    Dropped = 4,
    HeldInVehicle = 5,
    EHeldObjectState_MAX = 6
};

enum EHeroLoadoutSlotType
{
    CommanderSlot = 0,
    TeamPerkSlot = 1,
    CrewSlot = 2,
    GadgetSlot = 3,
    EHeroLoadoutSlotType_MAX = 4
};

enum EHierarchicalSimplificationMethod
{
    None = 0,
    Merge = 1,
    Simplify = 2,
    Approximate = 3,
    EHierarchicalSimplificationMethod_MAX = 4
};

enum EHighResTexturesChangeReason
{
    UserGameSettings = 0,
    QualityLevelSelectScreenSettings = 1,
    ContentOnDemandFreedUpMemorySelection = 2,
    ContentOnDemandDisplayOutOfMemory = 3,
    ContentOnDemandOutOfMemoryErrorClosed = 4,
    EHighResTexturesChangeReason_MAX = 5
};

enum EHighlightFeatures
{
    INVALID = 0,
    FollowingPlayerKill = 1,
    FollowingPlayerDeath = 2,
    InterestingDeathCause = 3,
    BusyBuilder = 4,
    FastMover = 5,
    LongDistanceKill = 6,
    Multikill = 7,
    StormCloudAction = 8,
    WinningMoment = 9,
    PlacementScore = 10,
    FollowingPlayerKillDBNO = 11,
    FollowingPlayerDBNOFinished = 12,
    MaxLongKillDistance = 13,
    VehicleMultikill = 14,
    VehiclePlayerLaunchDistance = 15,
    VehicleKills = 16,
    MaxMidFallKillTime = 17,
    MaxMidFallNoScopeKillTime = 18,
    MaxMidFallKillSpeed = 19,
    MaxMidFallNoScopeSpeed = 20,
    FallingElimination = 21,
    VehicleUsage = 22,
    COUNT = 23,
    EHighlightFeatures_MAX = 24
};

enum EHighlightReelIds
{
    INVALID = 0,
    MainHighlightReel = 1,
    ShortHighlightReel = 2,
    MicroHighlights = 3,
    EntireGameReel = 4,
    ShortExtendedHighlightReel = 5,
    MediumHighlightReel = 6,
    MediumExtendedHighlightReel = 7,
    ShorterHighlightReel = 8,
    PlayerSpotlightReel = 9,
    PlayerSpotlightNoDeathsReel = 10,
    VATReel = 11,
    COUNT = 12,
    EHighlightReelIds_MAX = 13
};

enum EHighlightReelTypes
{
    Generic = 0,
    GameSummary = 1,
    ExtendedGameSummary = 2,
    Builder = 3,
    FastMover = 4,
    LongDistance = 5,
    Multikill = 6,
    StormCloud = 7,
    EHighlightReelTypes_MAX = 8
};

enum EHighlightSignificances
{
    NotSignificant = 0,
    SomewhatSignificant = 1,
    Significant = 2,
    VerySignificant = 3,
    Critical = 4,
    EHighlightSignificances_MAX = 5
};

enum EHighlightType
{
    ESquareHighlight = 0,
    ECircleHighlight_Big = 1,
    ECircleHighlight_Small = 2,
    EHighlightType_MAX = 3
};

enum EHijackingStatus
{
    WaitingForTarget = 0,
    AttachedToVehicle = 1,
    EHijackingStatus_MAX = 2
};

enum EHitFeedbackMode
{
    Invalid = 0,
    HitAndIcon = 1,
    HitOnly = 2,
    Off = 3,
    Num = 4,
    EHitFeedbackMode_MAX = 5
};

enum EHitNumbersMode
{
    Invalid = 0,
    Cumulative = 1,
    List = 2,
    Num = 3,
    EHitNumbersMode_MAX = 4
};

enum EHitProxyPriority
{
    HPP_World = 0,
    HPP_Wireframe = 1,
    HPP_Foreground = 2,
    HPP_UI = 3,
    HPP_MAX = 4
};

enum EHitTraceRule
{
    Visibility = 0,
    Terrain = 1,
    None = 2,
    EHitTraceRule_MAX = 3
};

enum EHitTraceType
{
    Single = 0,
    Multi = 1,
    EHitTraceType_MAX = 2
};

enum EHoagieBoostState
{
    Unknown = 0,
    Ready = 1,
    Started = 2,
    Finished = 3,
    Failed = 4,
    EHoagieBoostState_MAX = 5
};

enum EHoagieState
{
    STARTUP = 0,
    STARTUP_LIFT = 1,
    FLIGHT = 2,
    AUTO_LANDING = 3,
    SPIN_CRASHING = 4,
    CRASHING_NO_SPIN = 5,
    CRASH_LANDED = 6,
    LANDED = 7,
    EXPLODING = 8,
    NONE = 9,
    EHoagieState_MAX = 10
};

enum EHoleFillOpFillType
{
    TriangleFan = 0,
    PolygonEarClipping = 1,
    Planar = 2,
    Minimal = 3,
    Smooth = 4,
    EHoleFillOpFillType_MAX = 5
};

enum EHoleFillToolActions
{
    NoAction = 0,
    SelectAll = 1,
    ClearSelection = 2,
    EHoleFillToolActions_MAX = 3
};

enum EHomebaseNodeType
{
    Gadget = 0,
    Utility = 1,
    Hidden = 2,
    EHomebaseNodeType_MAX = 3
};

enum EHomerClipEventType
{
    Emote = 0,
    Elimination = 1,
    COUNT = 2,
    EHomerClipEventType_MAX = 3
};

enum EHordeTierStartStatus
{
    ReadyToStart = 0,
    WaitingForPlayer = 1,
    WaitingForDBM = 2,
    GenericNotReadyToStart = 3,
    EHordeTierStartStatus_MAX = 4
};

enum EHordeWaveStingerType
{
    WaveSuccess = 0,
    WaveFailure = 1,
    WaveIncoming = 2,
    WaveStarted = 3,
    EHordeWaveStingerType_MAX = 4
};

enum EHorizTextAligment
{
    EHTA_Left = 0,
    EHTA_Center = 1,
    EHTA_Right = 2,
    EHTA_MAX = 3
};

enum EHorizontalAlignment
{
    HAlign_Fill = 0,
    HAlign_Left = 1,
    HAlign_Center = 2,
    HAlign_Right = 3,
    HAlign_MAX = 4
};

enum EHotfixResult
{
    Failed = 0,
    Success = 1,
    SuccessNoChange = 2,
    SuccessNeedsReload = 3,
    SuccessNeedsRelaunch = 4,
    EHotfixResult_MAX = 5
};

enum EHotspotTypeConfigMode
{
    AlwaysAdd = 0,
    WhenNotDefined = 1,
    WhenNotValid = 2,
    EHotspotTypeConfigMode_MAX = 3
};

enum EHttpReplayResult
{
    Success = 0,
    FailedJsonParse = 1,
    DataUnavailable = 2,
    InvalidHttpResponse = 3,
    CompressionFailed = 4,
    DecompressionFailed = 5,
    InvalidPayload = 6,
    Unknown = 7,
    EHttpReplayResult_MAX = 8
};

enum EHudVisibilityState
{
    FullyVisible = 0,
    FullyHidden = 1,
    GameOnly = 2,
    ReplayOnly = 3,
    MAX = 4
};

enum EHurdleState
{
    Inactive = 0,
    Targeting = 1,
    HurdleOver = 2,
    HurdleOn = 3,
    EHurdleState_MAX = 4
};

enum EHurdleType
{
    Invalid = 0,
    HurdleOver = 1,
    HurdleOnTop = 2,
    EHurdleType_MAX = 3
};

enum EIDScannerResult
{
    Success_PlayerBelongsToFaction = 0,
    Success_DownedPlayer = 1,
    Success_DownedGuard = 2,
    Success_PlayerIsDisguised = 3,
    Failure_NotFromFaction = 4,
    Other = 5,
    EIDScannerResult_MAX = 6
};

enum EIKRigGoalSpace
{
    Component = 0,
    Additive = 1,
    World = 2,
    EIKRigGoalSpace_MAX = 3
};

enum EIKRigGoalTransformSource
{
    Manual = 0,
    Bone = 1,
    ActorComponent = 2,
    EIKRigGoalTransformSource_MAX = 3
};

enum EImpactOrDamage_ExecutionPin
{
    LocalImpact = 0,
    LocalDamage = 1,
    OtherDamage = 2,
    EImpactOrDamage_MAX = 3
};

enum EImplicitTypeEnum
{
    Chaos_Implicit_Box = 0,
    Chaos_Implicit_Sphere = 1,
    Chaos_Implicit_Capsule = 2,
    Chaos_Implicit_LevelSet = 3,
    Chaos_Implicit_None = 4,
    Chaos_Implicit_Convex = 5,
    Chaos_Max = 6
};

enum EImportanceLevel
{
    IL_Off = 0,
    IL_Lowest = 1,
    IL_Low = 2,
    IL_Normal = 3,
    IL_High = 4,
    IL_Highest = 5,
    TEMP_BROKEN2 = 6,
    EImportanceLevel_MAX = 7
};

enum EImportanceWeight
{
    Luminance = 0,
    Red = 1,
    Green = 2,
    Blue = 3,
    Alpha = 4,
    EImportanceWeight_MAX = 5
};

enum EInAppPurchaseState
{
    Unknown = 0,
    Success = 1,
    Failed = 2,
    Cancelled = 3,
    Invalid = 4,
    NotAllowed = 5,
    Restored = 6,
    AlreadyOwned = 7,
    EInAppPurchaseState_MAX = 8
};

enum EInAppPurchaseStatus
{
    Invalid = 0,
    Failed = 1,
    Deferred = 2,
    Canceled = 3,
    Purchased = 4,
    Restored = 5,
    EInAppPurchaseStatus_MAX = 6
};

enum EInBoundsState
{
    NoBounds = 0,
    NotInBounds = 1,
    InBounds = 2,
    EInBoundsState_MAX = 3
};

enum EInGameLinkType
{
    BattleRoyale = 0,
    CreativeIsland = 1,
    Competitive = 2,
    UEFN = 3,
    UNDEFINED = 4,
    NUM = 5,
    EInGameLinkType_MAX = 6
};

enum EInGameLinkType_Repl
{
    B = 0,
    I = 1,
    C = 2,
    U = 3,
    X = 4,
    NUM = 5,
    EInGameLinkType_MAX = 6
};

enum EInGameReadyCheckStatus
{
    None = 0,
    Initiated = 1,
    Finished = 2,
    EInGameReadyCheckStatus_MAX = 3
};

enum EIndexNavigationResult
{
    Succeeded = 0,
    Modified = 1,
    Clamped = 2,
    StepOff = 3,
    NoMove = 4,
    EIndexNavigationResult_MAX = 5
};

enum EIndexObjectRegisterLogType
{
    Off = 0,
    On = 1,
    Verbose = 2,
    EIndexObjectRegisterLogType_MAX = 3
};

enum EIndicatorDisplayMode
{
    Default = 0,
    Always = 1,
    Never = 2,
    MiniMap = 3,
    Custom = 4,
    EIndicatorDisplayMode_MAX = 5
};

enum EIndicatorLineOfSightMode
{
    AlwaysShow = 0,
    HideBehindObstacles = 1,
    EIndicatorLineOfSightMode_MAX = 2
};

enum EIndicatorStateImage
{
    FIRST_FRIENDLY_STATE = 0,
    Default = 1,
    InCombat = 2,
    DBNO = 3,
    BeingRevived = 4,
    Dead = 5,
    LAST_FRIENDLY_STATE = 6,
    FIRST_CHAT_MESSAGE = 7,
    NeedAmmoHeavy = 8,
    NeedAmmoLight = 9,
    NeedAmmoMedium = 10,
    NeedAmmoShells = 11,
    NeedAmmoRocket = 12,
    ChatBubble = 13,
    EnemySpotted = 14,
    NeedBandages = 15,
    NeedMaterials = 16,
    NeedShields = 17,
    NeedWeapon = 18,
    LAST_CHAT_MESSAGE = 19,
    FIRST_MATE_STATE = 20,
    Squadmate = 21,
    Teammate = 22,
    LAST_MATE_STATE = 23,
    FIRST_ENEMY_STATE = 24,
    Enemy = 25,
    LAST_ENEMY_STATE = 26,
    FIRST_NPC_STATE = 27,
    FriendlyNPC = 28,
    EnemyNPC = 29,
    EliteFriendlyNPC = 30,
    EliteEnemyNPC = 31,
    LAST_NPC_STATE = 32,
    FIRST_WORLDITEM_STATE = 33,
    Interactable = 34,
    InteractableLarge = 35,
    GameplayItem = 36,
    TreasureChest = 37,
    LAST_WORLDITEM_STATE = 38,
    FIRST_HARDCORE_STATE = 39,
    HardCoreBeacon = 40,
    LAST_HARDCORE_STATE = 41,
    LAST_STATE = 42,
    None = 43,
    MAX = 44
};

enum EIndirectLightingCacheQuality
{
    ILCQ_Off = 0,
    ILCQ_Point = 1,
    ILCQ_Volume = 2,
    ILCQ_MAX = 3
};

enum EInertializationBoneState
{
    Invalid = 0,
    Valid = 1,
    Excluded = 2,
    EInertializationBoneState_MAX = 3
};

enum EInertializationSpace
{
    Default = 0,
    WorldSpace = 1,
    WorldRotation = 2,
    EInertializationSpace_MAX = 3
};

enum EInertializationState
{
    Inactive = 0,
    Pending = 1,
    Active = 2,
    EInertializationState_MAX = 3
};

enum EInfiltrationTeam
{
    Attacking = 0,
    Defending = 1,
    NumOfTeams = 2,
    EInfiltrationTeam_MAX = 3
};

enum EInitialOscillatorOffset
{
    EOO_OffsetRandom = 0,
    EOO_OffsetZero = 1,
    EOO_MAX = 2
};

enum EInitialVelocityTypeEnum
{
    Chaos_Initial_Velocity_User_Defined = 0,
    Chaos_Initial_Velocity_None = 1,
    Chaos_Max = 2
};

enum EInitialWaveOscillatorOffsetType
{
    Random = 0,
    Zero = 1,
    EInitialWaveOscillatorOffsetType_MAX = 2
};

enum EInlineObjectiveStatTagCheckEntryType
{
    Target = 0,
    Source = 1,
    Context = 2,
    EInlineObjectiveStatTagCheckEntryType_MAX = 3
};

enum EInnerErrorType
{
    None = 0,
    ContentServiceError = 1,
    ContentServiceInvalidSourceVersionError = 2,
    ContentSentryUnknownError = 3,
    ProjectDuplicationError = 4,
    CookFailure = 5,
    CookFailureOutOfMemory = 6,
    CookUnknownError = 7,
    CookBadInput = 8,
    StagingFailure = 9,
    Unknown = 10,
    EInnerErrorType_MAX = 11
};

enum EInputActionAccumulationBehavior
{
    TakeHighestAbsoluteValue = 0,
    Cumulative = 1,
    EInputActionAccumulationBehavior_MAX = 2
};

enum EInputActionState
{
    Enabled = 0,
    Disabled = 1,
    Hidden = 2,
    HiddenAndDisabled = 3,
    EInputActionState_MAX = 4
};

enum EInputActionValueType
{
    Boolean = 0,
    Axis1D = 1,
    Axis2D = 2,
    Axis3D = 3,
    EInputActionValueType_MAX = 4
};

enum EInputAxisSwizzle
{
    YXZ = 0,
    ZYX = 1,
    XZY = 2,
    YZX = 3,
    ZXY = 4,
    EInputAxisSwizzle_MAX = 5
};

enum EInputCaptureRequestType
{
    Begin = 0,
    Ignore = 1,
    EInputCaptureRequestType_MAX = 2
};

enum EInputCaptureSide
{
    None = 0,
    Left = 1,
    Right = 2,
    Both = 3,
    Any = 4,
    EInputCaptureSide_MAX = 5
};

enum EInputCaptureState
{
    Begin = 0,
    Continue = 1,
    End = 2,
    Ignore = 3,
    EInputCaptureState_MAX = 4
};

enum EInputDeviceConnectionState
{
    Invalid = 0,
    Unknown = 1,
    Disconnected = 2,
    Connected = 3,
    EInputDeviceConnectionState_MAX = 4
};

enum EInputDeviceTriggerMask
{
    None = 0,
    Left = 1,
    Right = 2,
    All = 3,
    EInputDeviceTriggerMask_MAX = 4
};

enum EInputDevices
{
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Gamepad = 3,
    OculusTouch = 4,
    HTCViveWands = 5,
    AnySpatialDevice = 6,
    TabletFingers = 7,
    EInputDevices_MAX = 8
};

enum EInputEvent
{
    IE_Pressed = 0,
    IE_Released = 1,
    IE_Repeat = 2,
    IE_DoubleClick = 3,
    IE_Axis = 4,
    IE_MAX = 5
};

enum EInputMappingRebuildType
{
    None = 0,
    Rebuild = 1,
    RebuildWithFlush = 2,
    EInputMappingRebuildType_MAX = 3
};

enum EInputPreProcessorType
{
    Overlay = 0,
    PreEngine = 1,
    Engine = 2,
    PreEditor = 3,
    Editor = 4,
    PreGame = 5,
    Game = 6,
    Count = 7,
    EInputPreProcessorType_MAX = 8
};

enum EInputPriority
{
    Normal = 0,
    Menu = 1,
    Chat = 2,
    Modal = 3,
    Confirmation = 4,
    Error = 5,
    HUD = 6,
    EInputPriority_MAX = 7
};

enum EInputQueryPose
{
    UseCharacterPose = 0,
    UseContinuingPose = 1,
    EInputQueryPose_MAX = 2
};

enum EInstancedActorsVolumeShape
{
    Box = 0,
    Sphere = 1,
    EInstancedActorsVolumeShape_MAX = 2
};

enum EIntelStateEnum
{
    None = 0,
    OnGround = 1,
    HeldByAttacker = 2,
    HeldByDefender = 3,
    Downloaded = 4,
    Captured = 5,
    Downloading = 6,
    EIntelStateEnum_MAX = 7
};

enum EInteractProgressDecay
{
    EInteractDecay_Multi = 0,
    EInteractDecay_Reset = 1,
    EInteractDecay_Pause = 2,
    EInteractDecay_BR = 3,
    EInteractDecay_MAX = 4
};

enum EInteractionBeingAttempted
{
    FirstInteraction = 0,
    SecondInteraction = 1,
    AllInteraction = 2,
    EInteractionBeingAttempted_MAX = 3
};

enum EInteractionComparisonType
{
    HasAny = 0,
    HasNone = 1,
    EInteractionComparisonType_MAX = 2
};

enum EInteractionOrigin
{
    Camera = 0,
    CharacterAdjustedCamera = 1,
    Character = 2,
    EInteractionOrigin_MAX = 3
};

enum EInteractionRange
{
    Preview = 0,
    Interaction = 1,
    EInteractionRange_MAX = 2
};

enum EInterfaceValidResult
{
    Valid = 0,
    Invalid = 1,
    EInterfaceValidResult_MAX = 2
};

enum EInterfaceWithGameInstanceSubsystemStage
{
    OnGameFeatureActivation = 0,
    OnGameFeatureRegistration = 1,
    EInterfaceWithGameInstanceSubsystemStage_MAX = 2
};

enum EInteriorAudioAmbientState
{
    Indoors = 0,
    Outdoors = 1,
    PartialOutdoors = 2,
    Max_None = 3,
    EInteriorAudioAmbientState_MAX = 4
};

enum EInteriorAudioBuildingDefaultRotation
{
    PositiveY = 0,
    NegativeX = 1,
    NegativeY = 2,
    PositiveX = 3,
    EInteriorAudioBuildingDefaultRotation_MAX = 4
};

enum EInteriorAudioBuildingDirection
{
    Left = 0,
    Right = 1,
    Forward = 2,
    Backward = 3,
    Upward = 4,
    EInteriorAudioBuildingDirection_MAX = 5
};

enum EInteriorAudioBuildingEvaluation
{
    Invalid = 0,
    Partial = 1,
    Solid = 2,
    EInteriorAudioBuildingEvaluation_MAX = 3
};

enum EInteriorAudioBuildingRelativePosition
{
    SameCell = 0,
    SameCellQuadrantTestFailed = 1,
    OtherCellParallelToForward = 2,
    OtherCellParallelToRight = 3,
    OtherCellParallelToUp = 4,
    Max_None = 5,
    EInteriorAudioBuildingRelativePosition_MAX = 6
};

enum EInteriorAudioBuildingTags
{
    None = 0,
    HasDoors = 1,
    RotationDependant = 2,
    UseConditionalEvaluation = 3,
    EInteriorAudioBuildingTags_MAX = 4
};

enum EInteriorAudioBuildingType
{
    None = 0,
    Wall = 1,
    Floor = 2,
    CenterCell = 3,
    EInteriorAudioBuildingType_MAX = 4
};

enum EInteriorAudioQuadrant
{
    None = 0,
    Left = 1,
    Right = 2,
    Top = 3,
    Bottom = 4,
    EInteriorAudioQuadrant_MAX = 5
};

enum EInteriorAudioRoomSize
{
    Small = 0,
    Medium = 1,
    Large = 2,
    Max_None = 3,
    EInteriorAudioRoomSize_MAX = 4
};

enum EInterpCurveMode
{
    CIM_Linear = 0,
    CIM_CurveAuto = 1,
    CIM_Constant = 2,
    CIM_CurveUser = 3,
    CIM_CurveBreak = 4,
    CIM_CurveAutoClamped = 5,
    CIM_MAX = 6
};

enum EInterpToBehaviourType
{
    OneShot = 0,
    OneShot_Reverse = 1,
    Loop_Reset = 2,
    PingPong = 3,
    EInterpToBehaviourType_MAX = 4
};

enum EInterpolationBlend
{
    Linear = 0,
    Cubic = 1,
    Sinusoidal = 2,
    EaseInOutExponent2 = 3,
    EaseInOutExponent3 = 4,
    EaseInOutExponent4 = 5,
    EaseInOutExponent5 = 6,
    MAX = 7
};

enum EInventoryCollectionAccess
{
    None = 0,
    Read = 1,
    Write = 2,
    All = 3,
    EInventoryCollectionAccess_MAX = 4
};

enum EInventoryCollectionLoadState
{
    Invalid = 0,
    WaitingToLoad = 1,
    Loading = 2,
    Loaded = 3,
    WaitingToUnload = 4,
    Unloading = 5,
    Unloaded = 6,
    WaitingToClear = 7,
    Clearing = 8,
    Cleared = 9,
    Ready = 10,
    EInventoryCollectionLoadState_MAX = 11
};

enum EInventoryCollectionType
{
    Player = 0,
    World = 1,
    EInventoryCollectionType_MAX = 2
};

enum EInventoryContentSortType
{
    ByName = 0,
    ByRating = 1,
    ByLevel = 2,
    ByCategory = 3,
    ByRarity = 4,
    ByLocation = 5,
    ByPersonality = 6,
    ByBonus = 7,
    BySubtype = 8,
    ByGrantTime = 9,
    BySeries = 10,
    BySet = 11,
    ByReleaseDate = 12,
    Invalid = 13,
    EInventoryContentSortType_MAX = 14
};

enum EInventoryPersistenceMode
{
    Normal = 0,
    Deferred = 1,
    Disabled = 2,
    ReadOnly = 3,
    EInventoryPersistenceMode_MAX = 4
};

enum EIoDispatcherChunkTypeFlags
{
    ExportBundleData = 0,
    BulkData = 1,
    OptionalBulkData = 2,
    MemoryMappedBulkData = 3,
    ScriptObjects = 4,
    ContainerHeader = 5,
    ExternalFile = 6,
    ShaderCodeLibrary = 7,
    ShaderCode = 8,
    PackageStoreEntry = 9,
    DerivedData = 10,
    EditorDerivedData = 11,
    PackageResource = 12,
    None = 13,
    Default = 14,
    All = 15,
    EIoDispatcherChunkTypeFlags_MAX = 16
};

enum EIsLegacyUIManagerResult
{
    Yes = 0,
    No = 1,
    EIsLegacyUIManagerResult_MAX = 2
};

enum EIslandInspectorState
{
    Initializing = 0,
    Ready = 1,
    AwaitingProcessCommand = 2,
    ProcessingCommand = 3,
    EIslandInspectorState_MAX = 4
};

enum EIslandJoinability
{
    CanNotBeJoinedOrWatched = 0,
    Joinable = 1,
    Watchable = 2,
    EIslandJoinability_MAX = 3
};

enum EIslandQueuePrivacy
{
    Unrestricted = 0,
    Public = 1,
    Private = 2,
    EIslandQueuePrivacy_MAX = 3
};

enum EItemAccessRestriction
{
    UnsatisfiedExclusiveItem = 0,
    LockedEmote = 1,
    CosmeticRestrictions = 2,
    AllArchived = 3,
    RatingGated = 4,
    UnsupportedProduct = 5,
    AdditionalInfo = 6,
    AdditionalInfoWarning = 7,
    Unknown = 8,
    EItemAccessRestriction_MAX = 9
};

enum EItemContextAction
{
    Equip = 0,
    GoToBattlePassRewards = 1,
    GoToBattlePassCustomization = 2,
    GoToSpecialCollection = 3,
    Count = 4,
    EItemContextAction_MAX = 5
};

enum EItemDataQueryResult
{
    Found = 0,
    NotFound = 1,
    EItemDataQueryResult_MAX = 2
};

enum EItemEvolutionRestrictionReason
{
    NoEvolutions = 0,
    BelowMaximumLevel = 1,
    VaultOverflow = 2,
    MissingCatalyst = 3,
    MissingCosts = 4,
    NoRarityUpgrade = 5,
    InUseByCrafting = 6,
    EItemEvolutionRestrictionReason_MAX = 7
};

enum EItemIconDisplayTextType
{
    StackSize = 0,
    PrimaryAmmo = 1,
    None = 2,
    EItemIconDisplayTextType_MAX = 3
};

enum EItemInteractionStatus
{
    Interrupted = 0,
    Completed = 1,
    TimedOut = 2,
    EItemInteractionStatus_MAX = 3
};

enum EItemInteractionType
{
    Search = 0,
    LockOnSearch = 1,
    None = 2,
    EItemInteractionType_MAX = 3
};

enum EItemListViewDisplayType
{
    World = 0,
    Outpost = 1,
    Account = 2,
    DeployableBase = 3,
    Max = 4
};

enum EItemPreviewRestrictionMode
{
    AlwaysShowTargetCosmetic = 0,
    HideTargetCosmetic = 1,
    EItemPreviewRestrictionMode_MAX = 2
};

enum EItemProfileType
{
    Common = 0,
    Campaign = 1,
    Athena = 2,
    EItemProfileType_MAX = 3
};

enum EItemRecyclingRestrictionReason
{
    InnatelyUnrecyclable = 0,
    IsSlottedGroundOperative = 1,
    MissingCatalyst = 2,
    ItemOutOnExpedition = 3,
    InUseByCrafting = 4,
    MulchingNotAllowed = 5,
    IsSlottedAttributeWorker = 6,
    EItemRecyclingRestrictionReason_MAX = 7
};

enum EItemRecyclingWarning
{
    HighLevel = 0,
    HighRarity = 1,
    CanSlotInCollectionBook = 2,
    EItemRecyclingWarning_MAX = 3
};

enum EItemShopCmsExperimentBucketType
{
    CmsPageA = 0,
    CmsPageB = 1,
    CmsPageC = 2,
    EItemShopCmsExperimentBucketType_MAX = 3
};

enum EItemShopCurrency
{
    VBucks = 0,
    RealMoney = 1,
    EItemShopCurrency_MAX = 2
};

enum EItemShopNavigationAction
{
    None = 0,
    ShowOfferDetails = 1,
    NavigateToOffer = 2,
    EItemShopNavigationAction_MAX = 3
};

enum EItemShopTileSize
{
    Size_1_x_1 = 0,
    Size_2_x_1 = 1,
    Size_3_x_1 = 2,
    Size_4_x_1 = 3,
    Size_5_x_1 = 4,
    Size_1_x_2 = 5,
    Size_2_x_2 = 6,
    Size_3_x_2 = 7,
    Size_4_x_2 = 8,
    Size_5_x_2 = 9,
    Max = 10
};

enum EItemState
{
    NotInInventory = 0,
    InInventory = 1,
    EquippedAndActive = 2,
    NumStates = 3,
    EItemState_MAX = 4
};

enum EItemStateFilter
{
    Owned = 0,
    Equipped = 1,
    EquippedAndActive = 2,
    EItemStateFilter_MAX = 3
};

enum EItemUpgradeRestrictionReason
{
    NoAdditionalLevels = 0,
    MaximumLevelAchieved = 1,
    VaultOverflow = 2,
    EItemUpgradeRestrictionReason_MAX = 3
};

enum EItemWrapMaterialType
{
    WeaponWrap = 0,
    VehicleWrap_Opaque = 1,
    VehicleWrap_Masked = 2,
    Character = 3,
    EItemWrapMaterialType_MAX = 4
};

enum EItemWrapSectionNames
{
    Section_0 = 0,
    Section_1 = 1,
    Section_2 = 2,
    Section_3 = 3,
    Section_4 = 4,
    Section_5 = 5,
    Section_6 = 6,
    Section_7 = 7,
    Section_8 = 8,
    Section_9 = 9,
    Section_10 = 10,
    Section_11 = 11,
    Section_12 = 12,
    Section_13 = 13,
    Section_14 = 14,
    Section_15 = 15,
    Section_16 = 16,
    Section_17 = 17,
    Section_18 = 18,
    Section_19 = 19,
    Section_20 = 20,
    Section_21 = 21,
    Section_22 = 22,
    Section_23 = 23,
    Section_24 = 24,
    Section_25 = 25,
    Section_26 = 26,
    Section_27 = 27,
    Section_28 = 28,
    Section_29 = 29,
    Section_30 = 30,
    Section_31 = 31,
    Section_MAX = 32
};

enum EItemizationInventoryCreationType
{
    Runtime = 0,
    SetupData = 1,
    Invalid = 2,
    EItemizationInventoryCreationType_MAX = 3
};

enum EItemizationPersistenceRequestType
{
    Invalid = 0,
    Checkout = 1,
    CheckIn = 2,
    Clear = 3,
    Update = 4,
    EItemizationPersistenceRequestType_MAX = 5
};

enum EItemizationPersistenceResponseType
{
    Invalid = 0,
    NoPersistenceManager = 1,
    Failed = 2,
    Success = 3,
    EItemizationPersistenceResponseType_MAX = 4
};

enum EItemizedPropSpawnerChunkLocation
{
    Left = 0,
    CenterLeft = 1,
    Center = 2,
    CenterRight = 3,
    Right = 4,
    EItemizedPropSpawnerChunkLocation_MAX = 5
};

enum EItemizedPropSpawnerTargetingFailedReason
{
    None = 0,
    TooHigh = 1,
    TooClose = 2,
    Obstructed = 3,
    TargetNotWalkable = 4,
    TargetBlocksSpawn = 5,
    TooCloseForHeight = 6,
    InvalidIndestructible = 7,
    NoValidTargetsFound = 8,
    Unknown = 9,
    EItemizedPropSpawnerTargetingFailedReason_MAX = 10
};

enum EJamEnabledOptions
{
    Off = 0,
    On = 1,
    Default = 2,
    EJamEnabledOptions_MAX = 3
};

enum EJamFabricSyncType
{
    Disconnected = 0,
    FabricControlsJam = 1,
    Bidirectional = 2,
    EJamFabricSyncType_MAX = 3
};

enum EJamLoadState
{
    Resolve = 0,
    Load = 1,
    LoadMidi = 2,
    Total = 3,
    Preload = 4,
    NumStates = 5,
    EJamLoadState_MAX = 6
};

enum EJamSongDownloadResult
{
    Failed = 0,
    Success = 1,
    SuccessCached = 2,
    EJamSongDownloadResult_MAX = 3
};

enum EJoinPartySource
{
    Sidebar = 0,
    Toast = 1,
    Lobby = 2,
    Discovery = 3,
    RequestToJoin = 4,
    RichPresence = 5,
    RiftPortal = 6,
    CommandLine = 7,
    MAX_NUM = 8,
    EJoinPartySource_MAX = 9
};

enum EJoinServerState
{
    Inactive = 0,
    Rejoin = 1,
    Tutorial = 2,
    Abandon = 3,
    EJoinServerState_MAX = 4
};

enum EJoyConMotionSelection
{
    Left = 0,
    Right = 1,
    EJoyConMotionSelection_MAX = 2
};

enum EJumpBoostPackState
{
    Idle = 0,
    Boost = 1,
    Hovering = 2,
    Falling = 3,
    None = 4,
    EJumpBoostPackState_MAX = 5
};

enum EJunoAIFriendshipVerbPawnCategory
{
    None = 0,
    Self = 1,
    Players = 2,
    EJunoAIFriendshipVerbPawnCategory_MAX = 3
};

enum EJunoAIFriendshipVerbPawnSubjectRequirement
{
    None = 0,
    NoSelf = 1,
    RequireSelf = 2,
    EJunoAIFriendshipVerbPawnSubjectRequirement_MAX = 3
};

enum EJunoActionExecutionConfig
{
    ExecuteEveryTime = 0,
    ExecuteFirstTimeOnly = 1,
    ExecuteReloadOnly = 2,
    EJunoActionExecutionConfig_MAX = 3
};

enum EJunoActiveMusicElementState
{
    Inactive = 0,
    Scheduled = 1,
    Active = 2,
    CoolingDown = 3,
    EJunoActiveMusicElementState_MAX = 4
};

enum EJunoActorLocationInfoResolvedState
{
    WorldTile = 0,
    Actor = 1,
    EJunoActorLocationInfoResolvedState_MAX = 2
};

enum EJunoAdditionalPOIOrientation
{
    Random = 0,
    FaceYToWorldOrigin = 1,
    EJunoAdditionalPOIOrientation_MAX = 2
};

enum EJunoAdditionalPOIWorldMode
{
    AllWorlds = 0,
    NewWorldsOnly = 1,
    OldWorldsOnly = 2,
    EJunoAdditionalPOIWorldMode_MAX = 3
};

enum EJunoAutomaticConnectionMethod
{
    Full = 0,
    Below = 1,
    Custom = 2,
    EJunoAutomaticConnectionMethod_MAX = 3
};

enum EJunoAwesomeConfigDeterminationType
{
    Biome = 0,
    StaticCampTag = 1,
    EJunoAwesomeConfigDeterminationType_MAX = 2
};

enum EJunoAwesomeLevelIncrementType
{
    LevelDelta = 0,
    CurrentLevel = 1,
    EJunoAwesomeLevelIncrementType_MAX = 2
};

enum EJunoAwesomeLevelUpgradeQueryResult
{
    Fail_LackingAwesomePoints = 0,
    Fail_LackingPlayerResources = 1,
    Fail_LackingUpgradeSteps = 2,
    Pass = 3,
    EJunoAwesomeLevelUpgradeQueryResult_MAX = 4
};

enum EJunoAwesomePlacementConfigType
{
    ItemDefinition = 0,
    CraftingRowName = 1,
    EJunoAwesomePlacementConfigType_MAX = 2
};

enum EJunoAwesomePointModificationContext
{
    Cheat = 0,
    Interaction = 1,
    ActorPlacement = 2,
    ActorRemoval = 3,
    QuestCompletion = 4,
    EJunoAwesomePointModificationContext_MAX = 5
};

enum EJunoAwesomeThresholdTestMode
{
    LessOrEqual = 0,
    Less = 1,
    GreaterOrEqual = 2,
    Greater = 3,
    Range = 4,
    EJunoAwesomeThresholdTestMode_MAX = 5
};

enum EJunoAwesomeUpgradeBuiltObjectsRequirementType
{
    CraftingRowName = 0,
    ItemDefinitionTagQuery = 1,
    EJunoAwesomeUpgradeBuiltObjectsRequirementType_MAX = 2
};

enum EJunoAwesomeUpgradeRecruitmentRequirementType
{
    Villager = 0,
    Creature = 1,
    Any = 2,
    EJunoAwesomeUpgradeRecruitmentRequirementType_MAX = 3
};

enum EJunoAwesomeUpgradeStepType
{
    BuiltObjects = 0,
    PersistantTag = 1,
    WorldReaction = 2,
    RecruitedCount = 3,
    EJunoAwesomeUpgradeStepType_MAX = 4
};

enum EJunoBangVisibility
{
    Hidden = 0,
    UnviewedBang = 1,
    UnacquiredBang = 2,
    EJunoBangVisibility_MAX = 3
};

enum EJunoBarnAssignmentMode
{
    AssignAndSetName = 0,
    SetNameOnly = 1,
    EJunoBarnAssignmentMode_MAX = 2
};

enum EJunoBattleBusMapWidgetState
{
    PickDestination = 0,
    QueueForDestination = 1,
    AlreadyQueued = 2,
    BusRouteInProgress = 3,
    EJunoBattleBusMapWidgetState_MAX = 4
};

enum EJunoBattleBusState
{
    PickDestination = 0,
    NowBoarding = 1,
    BusRouteInProgress = 2,
    EJunoBattleBusState_MAX = 3
};

enum EJunoBattleBusStopType
{
    Discovered = 0,
    Special = 1,
    PlayerPlaced = 2,
    EJunoBattleBusStopType_MAX = 3
};

enum EJunoBedAssignmentActionType
{
    None = 0,
    AssignEmpty = 1,
    ReassignExisting = 2,
    UnassignExisting = 3,
    EJunoBedAssignmentActionType_MAX = 4
};

enum EJunoBedAssignmentProcessingState
{
    Processing = 0,
    Ready = 1,
    Undefined = 2,
    EJunoBedAssignmentProcessingState_MAX = 3
};

enum EJunoBiome
{
    Unknown = 0,
    Grasslands = 1,
    DarkForest = 2,
    Desert = 3,
    Tropical = 4,
    Alpine = 5,
    Water = 6,
    Jungle = 7,
    Mountain = 8,
    Reserved = 9,
    Max = 10
};

enum EJunoBiomeHabitat
{
    Unknown = 0,
    POI = 1,
    Cave = 2,
    Stone = 3,
    Asphalt = 4,
    Snow = 5,
    Dirt = 6,
    Sand = 7,
    Grass = 8,
    Flowers = 9,
    Heather = 10,
    Moss = 11,
    Ocean = 12,
    Lake = 13,
    River = 14,
    Max = 15
};

enum EJunoBuildModeType
{
    BuildMode = 0,
    GuidedBuildingMode = 1,
    NumOfBuildModes = 2,
    ActionMode = 3,
    EJunoBuildModeType_MAX = 4
};

enum EJunoBuildingBehaviorState
{
    Uninitialized = 0,
    Pending = 1,
    Ready = 2,
    Invalid = 3,
    Disabled = 4,
    MAX = 5
};

enum EJunoBuildingPlacementType
{
    GuidedSnapping = 0,
    Connectivity = 1,
    SnapPlacement = 2,
    NoTarget = 3,
    MAX = 4
};

enum EJunoBuildingSnapEntryState
{
    Incompatible = 0,
    Compatible = 1,
    InRangeRejected = 2,
    InRangeValid = 3,
    Connected = 4,
    EJunoBuildingSnapEntryState_MAX = 5
};

enum EJunoCalculateCaveDistanceResult
{
    Success = 0,
    ParentIDsNotCorrect = 1,
    ShellsAreNotConnected = 2,
    EJunoCalculateCaveDistanceResult_MAX = 3
};

enum EJunoCampUpgradeRewardFilters
{
    None = 0,
    General = 1,
    BiomeSpecific = 2,
    GenericEvent = 3,
    EJunoCampUpgradeRewardFilters_MAX = 4
};

enum EJunoCaveGeneratorLayoutTags
{
    OroMine = 0,
    EJunoCaveGeneratorLayoutTags_MAX = 1
};

enum EJunoCaveGeneratorPCGType
{
    GemsAndOre = 0,
    GemsAndOre_HighValue = 1,
    Mushroom = 2,
    Plants = 3,
    Ceiling = 4,
    Clutter = 5,
    Rare = 6,
    EJunoCaveGeneratorPCGType_MAX = 7
};

enum EJunoCaveGeneratorRuleMode
{
    Basic = 0,
    Template = 1,
    EJunoCaveGeneratorRuleMode_MAX = 2
};

enum EJunoCaveGeneratorShellSize
{
    Small = 0,
    Medium = 1,
    Large = 2,
    Hallway = 3,
    EJunoCaveGeneratorShellSize_MAX = 4
};

enum EJunoCaveGeneratorShellTags
{
    BearCave = 0,
    WolfCave = 1,
    TreasureCave = 2,
    PirateCave = 3,
    AnimalDen = 4,
    BossRoom = 5,
    MysteryRoom = 6,
    EJunoCaveGeneratorShellTags_MAX = 7
};

enum EJunoCaveGeneratorShellType
{
    Room = 0,
    Connector = 1,
    Entrance = 2,
    Hero = 3,
    FeatureRoom = 4,
    EJunoCaveGeneratorShellType_MAX = 5
};

enum EJunoCaveGeneratorTypeTeleporterRuleType
{
    Disabled = 0,
    MarkerShortcut = 1,
    EJunoCaveGeneratorTypeTeleporterRuleType_MAX = 2
};

enum EJunoCaveTheme_DEPRECATED
{
    Grassland = 0,
    DarkForest = 1,
    Tropical = 2,
    Alpine = 3,
    Desert = 4,
    EJunoCaveTheme_MAX = 5
};

enum EJunoCaveType
{
    Unknown = 0,
    Surface = 1,
    Lava = 2,
    Rift = 3,
    Ruins = 4,
    SurfaceMines = 5,
    Pirate = 6,
    Bear = 7,
    Treasure = 8,
    BossRoom = 9,
    Max = 10
};

enum EJunoCompareTagSetsResult
{
    NoMatch = 0,
    PartialMatch = 1,
    FullMatch = 2,
    EJunoCompareTagSetsResult_MAX = 3
};

enum EJunoCompassDirection
{
    Unknown = 0,
    North = 1,
    NorthEast = 2,
    East = 3,
    SouthEast = 4,
    South = 5,
    SouthWest = 6,
    West = 7,
    NorthWest = 8,
    Max = 9
};

enum EJunoContactDirection
{
    PosX = 0,
    NegX = 1,
    PosY = 2,
    NegY = 3,
    PosZ = 4,
    NegZ = 5,
    EJunoContactDirection_MAX = 6
};

enum EJunoContextMenuAction
{
    None = 0,
    Swap = 1,
    Drop = 2,
    Craft = 3,
    Equip = 4,
    Unequip = 5,
    Split = 6,
    DepositStack = 7,
    Deposit = 8,
    TakeStack = 9,
    Take = 10,
    MoveToInventory = 11,
    MoveToMainHand = 12,
    MoveToOffHand = 13,
    SmartTransfer = 14,
    OpenInventory = 15,
    Spawn = 16,
    SpawnMultiple = 17,
    TrackRecipe = 18,
    EJunoContextMenuAction_MAX = 19
};

enum EJunoContextMenuActionState
{
    Shown = 0,
    Disabled = 1,
    Hidden = 2,
    EJunoContextMenuActionState_MAX = 3
};

enum EJunoCraftButtonState
{
    CanCraft = 0,
    CannotCraft = 1,
    StopCraft = 2,
    EJunoCraftButtonState_MAX = 3
};

enum EJunoCraftingCategoryFilteringUIEntryType
{
    Unknown = 0,
    Tab = 1,
    Header = 2,
    Filter = 3,
    EJunoCraftingCategoryFilteringUIEntryType_MAX = 4
};

enum EJunoCreateCaveResult
{
    Success = 0,
    Failure = 1,
    Disabled = 2,
    EJunoCreateCaveResult_MAX = 3
};

enum EJunoCreateLevelResult
{
    Success = 0,
    Failed = 1,
    EJunoCreateLevelResult_MAX = 2
};

enum EJunoCustomIndicatorState
{
    None = 0,
    Hidden = 1,
    Shown = 2,
    EJunoCustomIndicatorState_MAX = 3
};

enum EJunoDeltaActionTypes
{
    None = 0,
    Add = 1,
    Update = 2,
    Delete = 3,
    EJunoDeltaActionTypes_MAX = 4
};

enum EJunoDeltaFileVersion
{
    LevelDeltaCompressionMovedIntoJunoDeltaFile = 0,
    UpdateActionsForDeletedActorsFixed = 1,
    VersionPlusOne = 2,
    LatestVersion = 3,
    EJunoDeltaFileVersion_MAX = 4
};

enum EJunoDumpWorldPersistentContentsVerbosity
{
    Compact = 0,
    Default = 1,
    Verbose = 2,
    EJunoDumpWorldPersistentContentsVerbosity_MAX = 3
};

enum EJunoEnchantButtonState
{
    CanEnchant = 0,
    NotEnoughResources = 1,
    NoAvailableEnchantments = 2,
    SlotsFull = 3,
    CanCancelEnchant = 4,
    EJunoEnchantButtonState_MAX = 5
};

enum EJunoEnchantmentScreenState
{
    WeaponSelection = 0,
    EnchantmentSelection = 1,
    Count = 2,
    EJunoEnchantmentScreenState_MAX = 3
};

enum EJunoEnchantmentState
{
    Empty = 0,
    Occupied = 1,
    Preview = 2,
    Updated = 3,
    EJunoEnchantmentState_MAX = 4
};

enum EJunoEquipmentChangedFilterState
{
    Equipped = 0,
    UnEquipped = 1,
    Any = 2,
    EJunoEquipmentChangedFilterState_MAX = 3
};

enum EJunoFindNextMatchingPOIResourceResult
{
    Found = 0,
    NotFound = 1,
    EJunoFindNextMatchingPOIResourceResult_MAX = 2
};

enum EJunoGeneratePersistenceAssetCustomDumpMode
{
    None = 0,
    InCookOnly = 1,
    All = 2,
    EJunoGeneratePersistenceAssetCustomDumpMode_MAX = 3
};

enum EJunoGeneratePersistenceAssetsReportCommandletAction
{
    None = 0,
    GeneratePersistenceSchema = 1,
    GeneratePersistenceAssetsReport = 2,
    GeneratePersistenceAssetsBackwardCompatibiliyReport = 3,
    EJunoGeneratePersistenceAssetsReportCommandletAction_MAX = 4
};

enum EJunoGeometryCollectionAssemblerDurationType
{
    Default = 0,
    CalculateLayerCount = 1,
    SpecifyLayerCount = 2,
    EJunoGeometryCollectionAssemblerDurationType_MAX = 3
};

enum EJunoGetBestCaveResult
{
    Success = 0,
    Failure = 1,
    EJunoGetBestCaveResult_MAX = 2
};

enum EJunoGetCaveDataCollectionsFromRegistryResult
{
    Success = 0,
    Failure = 1,
    EJunoGetCaveDataCollectionsFromRegistryResult_MAX = 2
};

enum EJunoGetCaveShellInstanceDataResult
{
    Success = 0,
    Failure = 1,
    EJunoGetCaveShellInstanceDataResult_MAX = 2
};

enum EJunoGetCaveSurfaceDataForEntranceResult
{
    NotReady = 0,
    NotAllowed = 1,
    IsACave = 2,
    NotACave = 3,
    EJunoGetCaveSurfaceDataForEntranceResult_MAX = 4
};

enum EJunoGetMatchingPOIsFromDataRegistryResult
{
    Success = 0,
    Failure = 1,
    EJunoGetMatchingPOIsFromDataRegistryResult_MAX = 2
};

enum EJunoGetMergedCaveDataRegistryDataResult
{
    Success = 0,
    Failure = 1,
    EJunoGetMergedCaveDataRegistryDataResult_MAX = 2
};

enum EJunoGetWorldTileBoundsResult
{
    Success = 0,
    Failure = 1,
    EJunoGetWorldTileBoundsResult_MAX = 2
};

enum EJunoGetWorldTileTransformResult
{
    Success = 0,
    Failure = 1,
    EJunoGetWorldTileTransformResult_MAX = 2
};

enum EJunoGuidedBuildingState
{
    Default = 0,
    Hidden = 1,
    Unfilled = 2,
    Filled = 3,
    EJunoGuidedBuildingState_MAX = 4
};

enum EJunoHLODMapActorsPersistenceMigrationLevel
{
    None = 0,
    NonHLOD = 1,
    HLOD = 2,
    EJunoHLODMapActorsPersistenceMigrationLevel_MAX = 3
};

enum EJunoHealthBarType
{
    Health = 0,
    Overshield = 1,
    EJunoHealthBarType_MAX = 2
};

enum EJunoHudMenuScreen
{
    InventoryScreen = 0,
    CraftingScreen = 1,
    CollectionScreen = 2,
    BuildingScreen = 3,
    Max_None = 4,
    EJunoHudMenuScreen_MAX = 5
};

enum EJunoInsertItemType
{
    Equipped = 0,
    OffHand = 1,
    Any = 2,
    EJunoInsertItemType_MAX = 3
};

enum EJunoInventoryAcquisitionResult
{
    Failure = 0,
    SystemNotReady = 1,
    InventoryCreated = 2,
    InventoryRestored = 3,
    EJunoInventoryAcquisitionResult_MAX = 4
};

enum EJunoItemChangeType
{
    Added = 0,
    Removed = 1,
    ItemChanged = 2,
    SlotChanged = 3,
    Swapped = 4,
    EJunoItemChangeType_MAX = 5
};

enum EJunoKnowledgeState
{
    Hidden = 0,
    Revealed = 1,
    Acquired = 2,
    EJunoKnowledgeState_MAX = 3
};

enum EJunoLandscapeVisualModifierType
{
    None = 0,
    DirtPatch = 1,
    EJunoLandscapeVisualModifierType_MAX = 2
};

enum EJunoLevelInstanceMode
{
    Disabled = 0,
    StreamingWP = 1,
    CellInjection = 2,
    EJunoLevelInstanceMode_MAX = 3
};

enum EJunoLevelSaveDataState
{
    None = 0,
    CheckedOut = 1,
    Applied = 2,
    CheckedIn = 3,
    EJunoLevelSaveDataState_MAX = 4
};

enum EJunoLowMemoryState
{
    Unset = 0,
    Good = 1,
    Low = 2,
    VeryLow = 3,
    Critical = 4,
    EJunoLowMemoryState_MAX = 5
};

enum EJunoMapMarkerCustomizationEntryType
{
    Icon = 0,
    Color = 1,
    EJunoMapMarkerCustomizationEntryType_MAX = 2
};

enum EJunoMarkSlotPOIUnusedResult
{
    Success = 0,
    Failure = 1,
    EJunoMarkSlotPOIUnusedResult_MAX = 2
};

enum EJunoMinifigRotationMode
{
    NoRotation = 0,
    ContinuousRotateToTarget = 1,
    CurveRotateToMovingTarget = 2,
    CurveRotateToStaticTarget = 3,
    EJunoMinifigRotationMode_MAX = 4
};

enum EJunoMusicCueSelectionBehavior
{
    Sequential = 0,
    Shuffle = 1,
    Random = 2,
    Count = 3,
    EJunoMusicCueSelectionBehavior_MAX = 4
};

enum EJunoNPCFollowEndReason
{
    ManualPlayerUnassignment = 0,
    AutoUnassigmentViaRecruitment = 1,
    AutoUnassignmentDueToStaleFollower = 2,
    EJunoNPCFollowEndReason_MAX = 3
};

enum EJunoNPCJobEndReason
{
    ManualPlayerUnassignment = 0,
    AutoUnassigmentViaFollowerAssignment = 1,
    AutoUnassignmentViaCampHardRemoval = 2,
    EJunoNPCJobEndReason_MAX = 3
};

enum EJunoNPCJoinReason
{
    StandardRecruitment = 0,
    RemoteRecruitment = 1,
    BarnRecruitment = 2,
    EJunoNPCJoinReason_MAX = 3
};

enum EJunoPCGVolumeSource
{
    Transient = 0,
    Persistent = 1,
    EJunoPCGVolumeSource_MAX = 2
};

enum EJunoPOIDistributionMethod
{
    Random = 0,
    AdditionalPOI = 1,
    CaveGeneratorRule = 2,
    EJunoPOIDistributionMethod_MAX = 3
};

enum EJunoPOIEncounterState
{
    Invalid = 0,
    Initialized = 1,
    PersistentDataReady = 2,
    Idle = 3,
    Ready = 4,
    Active = 5,
    EJunoPOIEncounterState_MAX = 6
};

enum EJunoPOISize
{
    None = 0,
    JPOI_1x1 = 1,
    JPOI_2x2 = 2,
    JPOI_3x3 = 3,
    JPOI_4x4 = 4,
    JPOI_5x5 = 5,
    JPOI_8x8 = 6,
    JPOI_10x10 = 7,
    JPOI_11x11 = 8,
    EJunoPOISize_MAX = 9
};

enum EJunoPOISlotSelectionMode
{
    Default = 0,
    EncounterPOI = 1,
    CosmeticPOI = 2,
    EJunoPOISlotSelectionMode_MAX = 3
};

enum EJunoPOISlotState
{
    Normal = 0,
    Unused = 1,
    Cosmetic = 2,
    CaveEntrance = 3,
    UnusedNearWorldStart = 4,
    EJunoPOISlotState_MAX = 5
};

enum EJunoPawnEmotionalState
{
    Default = 0,
    Happy = 1,
    Sad = 2,
    MAX = 3
};

enum EJunoPawnEmotionalStateMappingTest
{
    LessOrEqual = 0,
    GreaterOrEqual = 1,
    EJunoPawnEmotionalStateMappingTest_MAX = 2
};

enum EJunoPersistenceAssetBackwardCompatibilityIssueType
{
    None = 0,
    Missing = 1,
    NoLongerCooked = 2,
    IncompatibleContents = 3,
    EJunoPersistenceAssetBackwardCompatibilityIssueType_MAX = 4
};

enum EJunoPersistenceFeatureCheckoutState
{
    None = 0,
    CheckedOut = 1,
    CheckedIn = 2,
    EJunoPersistenceFeatureCheckoutState_MAX = 3
};

enum EJunoPersistenceReportOptions
{
    None = 0,
    ActorTemplateDataEnabled = 1,
    ActorInstanceDataEnabled = 2,
    JunoUpdateActionDataEnabled = 3,
    JunoDeleteActionDataEnabled = 4,
    JunoPersistenceFeaturesDataEnabled = 5,
    DataEnabledDefaultFlags = 6,
    ShowReportHeader = 7,
    ShowPlayspaceHeaders = 8,
    ShowSubreportsHeaders = 9,
    ShowTablesHeaders = 10,
    ShowIndividualItemsStats = 11,
    ShowAggregatedStats = 12,
    ShowDefaultFlags = 13,
    EJunoPersistenceReportOptions_MAX = 14
};

enum EJunoPersistenceUnrecoverableErrorResponse
{
    CrashServer = 0,
    ShutdownServer = 1,
    Ignore = 2,
    EJunoPersistenceUnrecoverableErrorResponse_MAX = 3
};

enum EJunoPersistentPlayspaceSaveHandlerCheckoutState
{
    None = 0,
    CheckingOut = 1,
    CheckedOut = 2,
    CheckingIn = 3,
    CheckedIn = 4,
    EJunoPersistentPlayspaceSaveHandlerCheckoutState_MAX = 5
};

enum EJunoPickupStreamAnim
{
    None = 0,
    Intro = 1,
    Update = 2,
    EJunoPickupStreamAnim_MAX = 3
};

enum EJunoPlayerCardStatus
{
    InWorld = 0,
    NotInWorld = 1,
    Count = 2,
    EJunoPlayerCardStatus_MAX = 3
};

enum EJunoPlayspaceMigrationFlags
{
    None = 0,
    NoDistanceLimiter = 1,
    NoTimeLimiter = 2,
    EJunoPlayspaceMigrationFlags_MAX = 3
};

enum EJunoQueryCaveDataResult
{
    NotReady = 0,
    NotAllowed = 1,
    Cached = 2,
    NoEntry = 3,
    EJunoQueryCaveDataResult_MAX = 4
};

enum EJunoQueryCaveSurfaceDataStateResult
{
    NotReady = 0,
    NotAllowed = 1,
    Cached = 2,
    NoEntry = 3,
    EJunoQueryCaveSurfaceDataStateResult_MAX = 4
};

enum EJunoQuestState
{
    Invalid = 0,
    Available = 1,
    Rolled = 2,
    InProgress = 3,
    Completed = 4,
    EJunoQuestState_MAX = 5
};

enum EJunoQuickbarSelectionDirection
{
    Next = 0,
    Prev = 1,
    EJunoQuickbarSelectionDirection_MAX = 2
};

enum EJunoRecipeSortType
{
    BySet = 0,
    ByName = 1,
    BySortPriority = 2,
    MAX_None = 3,
    EJunoRecipeSortType_MAX = 4
};

enum EJunoRecruitmentObjectAcceptedPawnType
{
    None = 0,
    Player = 1,
    NPC = 2,
    Creature = 3,
    EJunoRecruitmentObjectAcceptedPawnType_MAX = 4
};

enum EJunoRepresentation
{
    None = 0,
    Actor = 1,
    Instance = 2,
    EJunoRepresentation_MAX = 3
};

enum EJunoResolveWorldSoftObjectPathResult
{
    Success = 0,
    NotAWorldObject = 1,
    InvalidPath = 2,
    EJunoResolveWorldSoftObjectPathResult_MAX = 3
};

enum EJunoResourceScale
{
    Invalid = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    VerySmall = 4,
    VeryLarge = 5,
    EJunoResourceScale_MAX = 6
};

enum EJunoSetSlotPOIMetaDataResult
{
    Success = 0,
    Failure = 1,
    EJunoSetSlotPOIMetaDataResult_MAX = 2
};

enum EJunoSwapItemType
{
    None = 0,
    Source = 1,
    SelectedDestination = 2,
    PotentialDestination = 3,
    GearDestinationInvalid = 4,
    EJunoSwapItemType_MAX = 5
};

enum EJunoTileGenerationType
{
    Unknown = 0,
    Cooked = 1,
    EJunoTileGenerationType_MAX = 2
};

enum EJunoTileStatus
{
    Disabled = 0,
    Enabled = 1,
    Deprecated = 2,
    Instantiated = 3,
    Reserved = 4,
    OutOfBounds = 5,
    EJunoTileStatus_MAX = 6
};

enum EJunoTokenReceiverType
{
    QuestGiver = 0,
    QuestGiverBoundPlayspace = 1,
    EJunoTokenReceiverType_MAX = 2
};

enum EJunoTrackedActorRefreshReason
{
    LocationChanged = 0,
    NetRelDistanceChanged = 1,
    NumberOfRelevantActorsChanged = 2,
    Unknown = 3,
    EJunoTrackedActorRefreshReason_MAX = 4
};

enum EJunoUIDeathType
{
    Standard = 0,
    Permadeath = 1,
    EJunoUIDeathType_MAX = 2
};

enum EJunoUIMatchmakingError
{
    WorldOwnerMustBePartyLeader = 0,
    YouMustSelectWorldFirst = 1,
    YouMustWaitForWorldToBeSelected = 2,
    WorldUnavailable = 3,
    Num = 4,
    EJunoUIMatchmakingError_MAX = 5
};

enum EJunoUserGeneratedTextErrorType
{
    None = 0,
    NameAlreadyUsed = 1,
    NameNotSupported = 2,
    SpecialCharacter = 3,
    CharacterLimit = 4,
    NameViolation = 5,
    NameChanged_CabinedAccount = 6,
    NameChanged_Moderation = 7,
    GenericError = 8,
    EJunoUserGeneratedTextErrorType_MAX = 9
};

enum EJunoWorldConditionAICampChecksIsAssigned
{
    None = 0,
    Assigned = 1,
    Unassigned = 2,
    EJunoWorldConditionAICampChecksIsAssigned_MAX = 3
};

enum EJunoWorldConditionAssignmentState
{
    None = 0,
    AssignedToUserActor = 1,
    Assigned = 2,
    Unassigned = 3,
    EJunoWorldConditionAssignmentState_MAX = 4
};

enum EJunoWorldConditionHasFollower
{
    Unset = 0,
    Zero = 1,
    OneOrMore = 2,
    EJunoWorldConditionHasFollower_MAX = 3
};

enum EJunoWorldConditionMustHaveLastUsedGatheringActor
{
    None = 0,
    IsValid = 1,
    IsNotValid = 2,
    EJunoWorldConditionMustHaveLastUsedGatheringActor_MAX = 3
};

enum EJunoWorldConditionNPCSlotsLimit
{
    Unset = 0,
    ReachedMaxCap = 1,
    CanIncrease = 2,
    EJunoWorldConditionNPCSlotsLimit_MAX = 3
};

enum EJunoWorldConditionPawnType
{
    None = 0,
    Player = 1,
    Villager = 2,
    EnemyMinifig = 3,
    Creature = 4,
    EJunoWorldConditionPawnType_MAX = 5
};

enum EJunoWorldCondition_AIWorldSettingsExpectedValue
{
    Any = 0,
    On = 1,
    Off = 2,
    EJunoWorldCondition_MAX = 3
};

enum EJunoWorldOccupantKind
{
    Owner = 0,
    Keyholder = 1,
    Guest = 2,
    Count = 3,
    EJunoWorldOccupantKind_MAX = 4
};

enum EJunoWorldPartitionRuntimeHashType
{
    WorldPartitionSpatialHash = 0,
    WorldPartitionHashSet = 1,
    VersionPlusOne = 2,
    LatestVersion = 3,
    Invalid = 4,
    EJunoWorldPartitionRuntimeHashType_MAX = 5
};

enum EJunoWorldPersistenceType
{
    Online = 0,
    Memory = 1,
    EJunoWorldPersistenceType_MAX = 2
};

enum EJunoWorldReadOnly
{
    No = 0,
    Yes = 1,
    EJunoWorldReadOnly_MAX = 2
};

enum EJunoWorldRegistryType
{
    Invalid = 0,
    POI = 1,
    Enemy = 2,
    EJunoWorldRegistryType_MAX = 3
};

enum EJunoWorldSanctionType
{
    MultiplayerBan = 0,
    CompleteBan = 1,
    None = 2,
    EJunoWorldSanctionType_MAX = 3
};

enum EJunoWorldSaveDataState
{
    Uninitialized = 0,
    Loading = 1,
    Loaded = 2,
    CheckingIn = 3,
    CheckedIn = 4,
    EJunoWorldSaveDataState_MAX = 5
};

enum EJunoWorldSettingCategory
{
    None = 0,
    Basic = 1,
    Advanced = 2,
    EJunoWorldSettingCategory_MAX = 3
};

enum EJunoWorldSettingOptions_BuildMode
{
    Survival = 0,
    Sandbox = 1,
    Hardcore = 2,
    Cozy = 3,
    EJunoWorldSettingOptions_MAX = 4
};

enum EJunoWorldSettingOptions_CreatureActivation
{
    On = 0,
    Off = 1,
    EJunoWorldSettingOptions_MAX = 2
};

enum EJunoWorldSettingOptions_Death
{
    On = 0,
    Off = 1,
    Permanent = 2,
    EJunoWorldSettingOptions_MAX = 3
};

enum EJunoWorldSettingOptions_Difficulty
{
    Normal = 0,
    Hardcore = 1,
    Easy = 2,
    EJunoWorldSettingOptions_MAX = 3
};

enum EJunoWorldSettingOptions_RecruitedCreaturePermaDeath
{
    On = 0,
    Off = 1,
    EJunoWorldSettingOptions_MAX = 2
};

enum EJunoWorldSettingOptions_WorldSwitch
{
    On = 0,
    Off = 1,
    EJunoWorldSettingOptions_MAX = 2
};

enum EJunoWorldTileAdditionalPOIPlacement
{
    Random = 0,
    NearEventTile = 1,
    WorldOriginTile = 2,
    TaggedTileAndSlot = 3,
    SessionOriginTile = 4,
    OnePerTile = 5,
    OnePerFourTiles = 6,
    OnePerFourTilesExceptSessionOrigin = 7,
    Rare = 8,
    UnitTests = 9,
    EJunoWorldTileAdditionalPOIPlacement_MAX = 10
};

enum EJunoWorldTileAdditionalPOIType
{
    CosmeticPOI = 0,
    EncounterPOI = 1,
    TransitionCaveEntrance = 2,
    TransitionCaveExit = 3,
    Cave = 4,
    EJunoWorldTileAdditionalPOIType_MAX = 5
};

enum EJunoWorldTileEventBuilderRestrictionShape
{
    Circle = 0,
    Box = 1,
    EJunoWorldTileEventBuilderRestrictionShape_MAX = 2
};

enum EJunoWorldTileEventBuilderRestrictionType
{
    Exclude = 0,
    Include = 1,
    EJunoWorldTileEventBuilderRestrictionType_MAX = 2
};

enum EJunoWorldTileInjectedLevelType
{
    POI = 0,
    Cave = 1,
    EJunoWorldTileInjectedLevelType_MAX = 2
};

enum EJunoWorldTilePOIType
{
    Overworld = 0,
    Cave = 1,
    CaveEntrance = 2,
    Bridge = 3,
    FishingSpot = 4,
    EJunoWorldTilePOIType_MAX = 5
};

enum EKWSSetttingIndividalMigration
{
    PartyJoinability = 0,
    ShowSeasonLevenInFeed = 1,
    ShowPlayerSurveys = 2,
    ReceiveGiftsAllowed = 3,
    EKWSSetttingIndividalMigration_MAX = 4
};

enum EKeepContainerType
{
    Base = 0,
    Storeroom = 1,
    FirstAid = 2,
    Armory = 3,
    Workshop = 4,
    AmmoStash = 5,
    Max = 6
};

enum EKeepDefenseState
{
    Inactive = 0,
    Warmup = 1,
    Defense = 2,
    LastAlive = 3,
    Max = 4
};

enum EKeepPlayingTogetherAnalyticEventPhase
{
    PrePostGamePhase = 0,
    Countdown = 1,
    TimedOut = 2,
    AllSquadMembersVoted = 3,
    EKeepPlayingTogetherAnalyticEventPhase_MAX = 4
};

enum EKeepPlayingTogetherVotingStatus
{
    Undecided = 0,
    OptedIn = 1,
    OptedOut_Manual = 2,
    OptedOut_PartySizeIncreased = 3,
    OptedOut_PartyMemberInLobby = 4,
    OptedOut_PartyMemberOptedOut = 5,
    OptedOut_PartyMemberLeft = 6,
    OptedOut_Forced = 7,
    OptedOut_TimedOut = 8,
    OptedOut_PlayerReturnedToLobby = 9,
    OptedOut_OnlyPlayerInSquad = 10,
    OptedOut_Disconnected = 11,
    EKeepPlayingTogetherVotingStatus_MAX = 12
};

enum EKeyboardMouseKeybindingsAtRegistrationTime
{
    Invalid = 0,
    GameFeatureRegistrationTime = 1,
    GameFeatureActivationTime = 2,
    EKeyboardMouseKeybindingsAtRegistrationTime_MAX = 3
};

enum EKeyzoneSelectMode
{
    Layers = 0,
    Random = 1,
    RandomWithRepetition = 2,
    Cycle = 3,
    Num = 4,
    Invalid = 5,
    EKeyzoneSelectMode_MAX = 6
};

enum EKinematicBonesUpdateToPhysics
{
    SkipSimulatingBones = 0,
    SkipAllBones = 1,
    EKinematicBonesUpdateToPhysics_MAX = 2
};

enum EKoalaAvailability
{
    Pending = 0,
    NotAvailable = 1,
    Available = 2,
    COUNT = 3,
    EKoalaAvailability_MAX = 4
};

enum EKoalaClipEventType
{
    Manual = 0,
    Elimination = 1,
    VictoryRoyale = 2,
    Emote = 3,
    COUNT = 4,
    EKoalaClipEventType_MAX = 5
};

enum EKoalaClipStatus
{
    None = 0,
    Creating = 1,
    Uploading = 2,
    Completed = 3,
    Failed = 4,
    COUNT = 5,
    EKoalaClipStatus_MAX = 6
};

enum EKoalaConnectionStatus
{
    Pending = 0,
    NotConnected = 1,
    Connected = 2,
    COUNT = 3,
    EKoalaConnectionStatus_MAX = 4
};

enum EKoalaMockClipMode
{
    None = 0,
    ShortSuccess = 1,
    ShortFailure = 2,
    LongSuccess = 3,
    LongFailure = 4,
    COUNT = 5,
    EKoalaMockClipMode_MAX = 6
};

enum EKoalaRecording
{
    Pending = 0,
    NotRecording = 1,
    Recording = 2,
    COUNT = 3,
    EKoalaRecording_MAX = 4
};

enum ELWCFunctionKind
{
    Constructor = 0,
    Promote = 1,
    Demote = 2,
    Add = 3,
    Subtract = 4,
    Divide = 5,
    MultiplyVectorVector = 6,
    MultiplyVectorMatrix = 7,
    MultiplyMatrixMatrix = 8,
    Other = 9,
    Max = 10
};

enum ELabradorDespawnReason
{
    DeathByPlayer = 0,
    DeathByBot = 1,
    DeathByAIPawn = 2,
    DeathByStorm = 3,
    Teleport = 4,
    Unknown = 5,
    ELabradorDespawnReason_MAX = 6
};

enum ELandmassRiverTier
{
    Default = 0,
    ELandmassRiverTier_MAX = 1
};

enum ELandmassRoadTier
{
    Default = 0,
    Dirt = 1,
    Rural = 2,
    Metropolitan = 3,
    Suburban = 4,
    Highway = 5,
    BreadCrumbs = 6,
    Hidden = 7,
    ELandmassRoadTier_MAX = 8
};

enum ELandscapeBlendMode
{
    LSBM_AdditiveBlend = 0,
    LSBM_AlphaBlend = 1,
    LSBM_MAX = 2
};

enum ELandscapeClearMode
{
    Clear_Weightmap = 0,
    Clear_Heightmap = 1,
    Clear_All = 2,
    Clear_MAX = 3
};

enum ELandscapeCullingPrecision
{
    High = 0,
    Medium = 1,
    Low = 2,
    ELandscapeCullingPrecision_MAX = 3
};

enum ELandscapeCustomizedCoordType
{
    LCCT_None = 0,
    LCCT_CustomUV0 = 1,
    LCCT_CustomUV1 = 2,
    LCCT_CustomUV2 = 3,
    LCCT_WeightMapUV = 4,
    LCCT_MAX = 5
};

enum ELandscapeDirtyingMode
{
    Auto = 0,
    InLandscapeModeOnly = 1,
    InLandscapeModeAndUserTriggeredChanges = 2,
    ELandscapeDirtyingMode_MAX = 3
};

enum ELandscapeGizmoSnapType
{
    None = 0,
    Component = 1,
    Texel = 2,
    ELandscapeGizmoSnapType_MAX = 3
};

enum ELandscapeGizmoType
{
    LGT_None = 0,
    LGT_Height = 1,
    LGT_Weight = 2,
    LGT_MAX = 3
};

enum ELandscapeHLODMeshSourceLODPolicy
{
    AutomaticLOD = 0,
    SpecificLOD = 1,
    LowestDetailLOD = 2,
    ELandscapeHLODMeshSourceLODPolicy_MAX = 3
};

enum ELandscapeHLODTextureSizePolicy
{
    AutomaticSize = 0,
    SpecificSize = 1,
    ELandscapeHLODTextureSizePolicy_MAX = 2
};

enum ELandscapeImportAlphamapType
{
    Additive = 0,
    Layered = 1,
    ELandscapeImportAlphamapType_MAX = 2
};

enum ELandscapeLODFalloff
{
    Linear = 0,
    SquareRoot = 1,
    ELandscapeLODFalloff_MAX = 2
};

enum ELandscapeLayerBlendType
{
    LB_WeightBlend = 0,
    LB_AlphaBlend = 1,
    LB_HeightBlend = 2,
    LB_MAX = 3
};

enum ELandscapeLayerDisplayMode
{
    Default = 0,
    Alphabetical = 1,
    UserSpecific = 2,
    ELandscapeLayerDisplayMode_MAX = 3
};

enum ELandscapeLayerPaintingRestriction
{
    None = 0,
    UseMaxLayers = 1,
    ExistingOnly = 2,
    UseComponentAllowList = 3,
    ELandscapeLayerPaintingRestriction_MAX = 4
};

enum ELandscapePatchPriorityInitialization
{
    AcquireHighest = 0,
    KeepOriginal = 1,
    SmallIncrement = 2,
    ELandscapePatchPriorityInitialization_MAX = 3
};

enum ELandscapeResizeMode
{
    Resample = 0,
    Clip = 1,
    Expand = 2,
    ELandscapeResizeMode_MAX = 3
};

enum ELandscapeTextureHeightPatchEncoding
{
    ZeroToOne = 0,
    WorldUnits = 1,
    NativePackedHeight = 2,
    ELandscapeTextureHeightPatchEncoding_MAX = 3
};

enum ELandscapeTextureHeightPatchZeroHeightMeaning
{
    PatchZ = 0,
    LandscapeZ = 1,
    WorldZero = 2,
    ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3
};

enum ELandscapeTexturePatchBlendMode
{
    AlphaBlend = 0,
    Additive = 1,
    Min = 2,
    Max = 3
};

enum ELandscapeTexturePatchFalloffMode
{
    Circle = 0,
    RoundedRectangle = 1,
    ELandscapeTexturePatchFalloffMode_MAX = 2
};

enum ELandscapeTexturePatchSourceMode
{
    None = 0,
    InternalTexture = 1,
    TextureBackedRenderTarget = 2,
    TextureAsset = 3,
    ELandscapeTexturePatchSourceMode_MAX = 4
};

enum ELandscapeToolTargetType
{
    Heightmap = 0,
    Weightmap = 1,
    Visibility = 2,
    Invalid = 3,
    ELandscapeToolTargetType_MAX = 4
};

enum ELaserConnectionState
{
    Off = 0,
    TransitionOn = 1,
    On = 2,
    TransitionOff = 3,
    ELaserConnectionState_MAX = 4
};

enum ELatticeDeformerToolAction
{
    NoAction = 0,
    Constrain = 1,
    ClearConstraints = 2,
    ELatticeDeformerToolAction_MAX = 3
};

enum ELatticeInterpolationType
{
    Linear = 0,
    Cubic = 1,
    ELatticeInterpolationType_MAX = 2
};

enum ELayeredAudioInterpolationType
{
    None = 0,
    CustomCurve = 1,
    Linear = 2,
    ELayeredAudioInterpolationType_MAX = 3
};

enum ELayeredAudioTriggerDir
{
    Forward = 0,
    Backward = 1,
    ELayeredAudioTriggerDir_MAX = 2
};

enum ELayeredAudioTriggerDirection
{
    AnyDirection = 0,
    Forwards = 1,
    Sideways = 2,
    Backwards = 3,
    Count = 4,
    ELayeredAudioTriggerDirection_MAX = 5
};

enum ELayeredBoneBlendMode
{
    BranchFilter = 0,
    BlendMask = 1,
    ELayeredBoneBlendMode_MAX = 2
};

enum ELayeredMoveFinishVelocityMode
{
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ELayeredMoveFinishVelocityMode_MAX = 3
};

enum ELayeredMove_ConstantVelocitySettingsFlags
{
    NoFlags = 0,
    VelocityStartRelative = 1,
    VelocityAlwaysRelative = 2,
    ELayeredMove_MAX = 3
};

enum ELayoutDataType
{
    Custom = 0,
    DefaultToolLayout = 1,
    DefaultGameLayout = 2,
    MAX_Local = 3,
    CustomCloudLayout = 4,
    ELayoutDataType_MAX = 5
};

enum ELayoutRequirementStatus
{
    Inactive_Invisible = 0,
    Active_Invisible = 1,
    Active_Visible = 2,
    ELayoutRequirementStatus_MAX = 3
};

enum ELeaderboardDisplayType
{
    Default = 0,
    Extra = 1,
    ELeaderboardDisplayType_MAX = 2
};

enum ELearningAgentsActivationFunction
{
    ReLU = 0,
    ELU = 1,
    TanH = 2,
    ELearningAgentsActivationFunction_MAX = 3
};

enum ELearningAgentsCompletion
{
    Running = 0,
    Truncation = 1,
    Termination = 2,
    ELearningAgentsCompletion_MAX = 3
};

enum ELearningAgentsEitherAction
{
    A = 0,
    B = 1,
    ELearningAgentsEitherAction_MAX = 2
};

enum ELearningAgentsEitherObservation
{
    A = 0,
    B = 1,
    ELearningAgentsEitherObservation_MAX = 2
};

enum ELearningAgentsOptionalAction
{
    Null = 0,
    Valid = 1,
    ELearningAgentsOptionalAction_MAX = 2
};

enum ELearningAgentsOptionalObservation
{
    Null = 0,
    Valid = 1,
    ELearningAgentsOptionalObservation_MAX = 2
};

enum ELearningAgentsTrainingDevice
{
    CPU = 0,
    GPU = 1,
    ELearningAgentsTrainingDevice_MAX = 2
};

enum ELeashReturnLocationMode
{
    Closest = 0,
    Random = 1,
    ReturnToCenter = 2,
    ReturnToCenterAvoidObstacle = 3,
    ELeashReturnLocationMode_MAX = 4
};

enum ELeecherStatus
{
    NotReady = 0,
    NonLeecher = 1,
    Leecher = 2,
    ELeecherStatus_MAX = 3
};

enum ELegendPosition
{
    Outside = 0,
    Inside = 1,
    ELegendPosition_MAX = 2
};

enum ELerpInterpolationMode
{
    QuatInterp = 0,
    EulerInterp = 1,
    DualQuatInterp = 2,
    ELerpInterpolationMode_MAX = 3
};

enum ELetoDisplayMode
{
    PrimaryOnly = 0,
    SingleToggle = 1,
    Simultaneous = 2,
    ELetoDisplayMode_MAX = 3
};

enum ELevelInstanceCreationType
{
    LevelInstance = 0,
    PackedLevelActor = 1,
    ELevelInstanceCreationType_MAX = 2
};

enum ELevelInstanceFlags
{
    None = 0,
    IsInEditHierarchy = 1,
    HasPropertyOverrides = 2,
    HasEditablePropertyOverrides = 3,
    ELevelInstanceFlags_MAX = 4
};

enum ELevelInstancePivotType
{
    CenterMinZ = 0,
    Center = 1,
    Actor = 2,
    WorldOrigin = 3,
    ELevelInstancePivotType_MAX = 4
};

enum ELevelInstanceRuntimeBehavior
{
    None = 0,
    Embedded_Deprecated = 1,
    Partitioned = 2,
    LevelStreaming = 3,
    ELevelInstanceRuntimeBehavior_MAX = 4
};

enum ELevelInstanceType
{
    None = 0,
    LevelInstance = 1,
    LevelInstanceEdit = 2,
    LevelInstancePropertyOverride = 3,
    ELevelInstanceType_MAX = 4
};

enum ELevelManagementTerrainType
{
    Level = 0,
    Terrain = 1,
    ELevelManagementTerrainType_MAX = 2
};

enum ELevelSaveCategory
{
    ActorInstance = 0,
    VolumeInfoActor = 1,
    ELevelSaveCategory_MAX = 2
};

enum ELevelSaveRecordThumbnailTextureCreationMode
{
    TransientTextureOnGPU = 0,
    SaveableTexture = 1,
    PNGImage = 2,
    SceneImage = 3,
    ELevelSaveRecordThumbnailTextureCreationMode_MAX = 4
};

enum ELevelSaveRecordVersion
{
    CloudSaveInfoAdded = 0,
    TimestampConversion = 1,
    SoftActorClassReferences = 2,
    SoftActorComponentClassReferences = 3,
    DuplicateNewActorRecordsRemoved = 4,
    StartOfResaveWhenNotLatestVersion = 5,
    LowerCloseThresholdForDuplicates = 6,
    DeprecatedDeleteAndNewActorRecords = 7,
    DependenciesFromSerializedWorld = 8,
    RemovingSerializedDependencies = 9,
    AddingVolumeInfoRecordsMap = 10,
    AddingVolumeGridDependency = 11,
    AddingScale = 12,
    AddingDataHash = 13,
    AddedIslandTemplateId = 14,
    AddedLevelStreamedDeleteRecord = 15,
    UsingSaveActorGUID = 16,
    UsingActorFNameForEditorSpawning = 17,
    AddedPlayerPersistenceUserWipeNumber = 18,
    Unused = 19,
    AddedVkPalette = 20,
    SwitchingToCoreSerialization = 21,
    AddedNavmeshRequired = 22,
    InitialUEFiveChange = 23,
    AddedPersistenceRequired = 24,
    AddedLevelInstance = 25,
    AddedInnerArchiverSerialization = 26,
    AddedHardReferenceTracking = 27,
    AddedDataHeaderSize = 28,
    AddedCrossReferenceSaving = 29,
    SpawningActorsWithConsistentName = 30,
    UpdatePackageNameFromIslandTemplateId = 31,
    LargeWorldCoordinateSerializationChange = 32,
    SeasionTwentyTwoRelease = 33,
    EnforceUniqueLabels = 34,
    AddedConfigForNonSaveGameProperties = 35,
    AddedLevelSaveTags = 36,
    AddedSubobjectSerialization = 37,
    RefactoredSubobjectSerialization = 38,
    RemoveInvalidEventBindings = 39,
    AddRedirectForPackageName = 40,
    VersionPlusOne = 41,
    LatestVersion = 42,
    ELevelSaveRecordVersion_MAX = 43
};

enum ELevelSaveRollback
{
    Cleanup = 0,
    Reload = 1,
    ELevelSaveRollback_MAX = 2
};

enum ELevelSaveSpawnContext
{
    None = 0,
    FromPlayset = 1,
    ELevelSaveSpawnContext_MAX = 2
};

enum ELevelUpIncrementType
{
    Single = 0,
    TotalLevelsGained = 1,
    ELevelUpIncrementType_MAX = 2
};

enum ELevelVisibility
{
    Visible = 0,
    Hidden = 1,
    ELevelVisibility_MAX = 2
};

enum ELfgState
{
    NoResults = 0,
    Shuffling = 1,
    NoSocialTagsAdded = 2,
    LfgOff = 3,
    LfgUnavailable = 4,
    LfgOffNoSocialTags = 5,
    NoSocialTagsSelected = 6,
    NoFriendsSuggestLFG = 7,
    RebootInvitePlayerButton = 8,
    RebootInviteAllRallied = 9,
    ChangeTagsButton = 10,
    ApplyButton = 11,
    ShuffleButton = 12,
    LfgOffSocialBan = 13,
    ELfgState_MAX = 14
};

enum ELfoTarget
{
    Pan = 0,
    Pitch = 1,
    FilterFreq = 2,
    Num = 3,
    None = 4,
    ELfoTarget_MAX = 5
};

enum ELicensedAudioTreatment
{
    None = 0,
    MuteOthers = 1,
    MuteAll = 2,
    ELicensedAudioTreatment_MAX = 3
};

enum ELifetimeCondition
{
    COND_None = 0,
    COND_InitialOnly = 1,
    COND_OwnerOnly = 2,
    COND_SkipOwner = 3,
    COND_SimulatedOnly = 4,
    COND_AutonomousOnly = 5,
    COND_SimulatedOrPhysics = 6,
    COND_InitialOrOwner = 7,
    COND_Custom = 8,
    COND_ReplayOrOwner = 9,
    COND_ReplayOnly = 10,
    COND_SimulatedOnlyNoReplay = 11,
    COND_SimulatedOrPhysicsNoReplay = 12,
    COND_SkipReplay = 13,
    COND_Dynamic = 14,
    COND_Never = 15,
    COND_NetGroup = 16,
    COND_Max = 17
};

enum ELightFunctionAtlasPixelFormat
{
    LFAPF_R8 = 0,
    LFAPF_R8G8B8 = 1,
    LFAPF_MAX = 2
};

enum ELightMapPaddingType
{
    LMPT_NormalPadding = 0,
    LMPT_PrePadding = 1,
    LMPT_NoPadding = 2,
    LMPT_MAX = 3
};

enum ELightUnits
{
    Unitless = 0,
    Candelas = 1,
    Lumens = 2,
    EV = 3,
    ELightUnits_MAX = 4
};

enum ELightingBuildQuality
{
    Quality_Preview = 0,
    Quality_Medium = 1,
    Quality_High = 2,
    Quality_Production = 3,
    Quality_MAX = 4
};

enum ELightmapType
{
    Default = 0,
    ForceSurface = 1,
    ForceVolumetric = 2,
    ELightmapType_MAX = 3
};

enum ELightweightProjectileRequestType
{
    None = 0,
    Single = 1,
    Looping = 2,
    ELightweightProjectileRequestType_MAX = 3
};

enum ELimePawnEmotionalState
{
    Default = 0,
    Happy = 1,
    Sad = 2,
    MAX = 3
};

enum ELimePawnEmotionalStateMappingTest
{
    LessOrEqual = 0,
    GreaterOrEqual = 1,
    ELimePawnEmotionalStateMappingTest_MAX = 2
};

enum ELinearConstraintMotion
{
    LCM_Free = 0,
    LCM_Limited = 1,
    LCM_Locked = 2,
    LCM_MAX = 3
};

enum ELinkAcrossSimpleAction
{
    AddToAll = 0,
    RemovedFromAll = 1,
    Custom = 2,
    Nothing = 3,
    ELinkAcrossSimpleAction_MAX = 4
};

enum ELinkCodeUserInputError
{
    InvalidMnemonicCharacter = 0,
    InvalidMnemonicLength = 1,
    InvalidVersionFormat = 2,
    NoError = 3,
    ELinkCodeUserInputError_MAX = 4
};

enum ELinkEntryQueryResult
{
    Success = 0,
    PartialSuccess = 1,
    FailedQuery = 2,
    FailedPlayerDataQuery = 3,
    FailedParse = 4,
    NotAllowedOnPlatform = 5,
    CabinModeBlocked = 6,
    UnableToFind = 7,
    NotVisible = 8,
    TournamentDataUnavailable = 9,
    FailedStringSanitization = 10,
    FailedSubModePopulation = 11,
    FailedSubModeSurfacePopulation = 12,
    FailedSubModeParsing = 13,
    FilteredOut = 14,
    RatingUnrated = 15,
    RatingRestricted = 16,
    ModeratorOnly = 17,
    ELinkEntryQueryResult_MAX = 18
};

enum ELinkGenerationDebugFlags
{
    WalkableSurface = 0,
    WalkableBorders = 1,
    SelectedEdge = 2,
    SelectedEdgeTrajectory = 3,
    SelectedEdgeLandingSamples = 4,
    SelectedEdgeCollisions = 5,
    Links = 6,
    FilteredLinks = 7,
    ELinkGenerationDebugFlags_MAX = 8
};

enum ELinkToDirection
{
    Up = 0,
    Down = 1,
    Right = 2,
    Left = 3,
    Forward = 4,
    Backward = 5,
    ELinkToDirection_MAX = 6
};

enum ELiquidRibbonDetachmentReason
{
    NotDetached = 0,
    ByDistance = 1,
    ByAngle = 2,
    ELiquidRibbonDetachmentReason_MAX = 3
};

enum EListHeaderType
{
    TeamMember = 0,
    PartyMember = 1,
    JoinableParty = 2,
    PlatformOnlineFriend = 3,
    McpOnlineFriend = 4,
    OfflineFriend = 5,
    Blocked = 6,
    FriendInvite = 7,
    SuggestedFriend = 8,
    RecentPlayer = 9,
    SearchResults = 10,
    JoinRequests = 11,
    LfgFilter = 12,
    LfgPlayers = 13,
    LfgInvites = 14,
    RebootPlayers = 15,
    GameVoice = 16,
    PartyVoice = 17,
    PlatformVoice = 18,
    AwayFriend = 19,
    Hidden = 20,
    Invalid = 21,
    EListHeaderType_MAX = 22
};

enum EListItemAlignment
{
    EvenlyDistributed = 0,
    EvenlySize = 1,
    EvenlyWide = 2,
    LeftAligned = 3,
    RightAligned = 4,
    CenterAligned = 5,
    Fill = 6,
    EListItemAlignment_MAX = 7
};

enum ELiveLinkAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    XNeg = 3,
    YNeg = 4,
    ZNeg = 5,
    ELiveLinkAxis_MAX = 6
};

enum ELiveLinkCameraProjectionMode
{
    Perspective = 0,
    Orthographic = 1,
    ELiveLinkCameraProjectionMode_MAX = 2
};

enum ELiveLinkClientStatus
{
    Connected = 0,
    Disconnected = 1,
    Recording = 2,
    ELiveLinkClientStatus_MAX = 3
};

enum ELiveLinkHubTimecodeSource
{
    NotDefined = 0,
    SystemTimeEditor = 1,
    UseSubjectName = 2,
    ELiveLinkHubTimecodeSource_MAX = 3
};

enum ELiveLinkSourceMode
{
    Latest = 0,
    EngineTime = 1,
    Timecode = 2,
    ELiveLinkSourceMode_MAX = 3
};

enum ELiveLinkSubjectState
{
    Connected = 0,
    Unresponsive = 1,
    Disconnected = 2,
    InvalidOrDisabled = 3,
    Unknown = 4,
    ELiveLinkSubjectState_MAX = 5
};

enum ELiveLinkTimecodeProviderEvaluationType
{
    Lerp = 0,
    Nearest = 1,
    Latest = 2,
    ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

enum ELiveStreamStandaloneBlocked
{
    StreamInWorldActive = 0,
    ELiveStreamStandaloneBlocked_MAX = 1
};

enum ELivingWorldCalendarEventConditionBehavior
{
    IsActive = 0,
    Ratio = 1,
    ELivingWorldCalendarEventConditionBehavior_MAX = 2
};

enum ELivingWorldCalendarEventConditionRatioBehavior
{
    Less = 0,
    LessOrEqual = 1,
    Greater = 2,
    GreaterOrEqual = 3,
    InBetween = 4,
    ELivingWorldCalendarEventConditionRatioBehavior_MAX = 5
};

enum ELivingWorldPointProviderSpawnLimiterBehavior
{
    Lifetime = 0,
    Concurrent = 1,
    ELivingWorldPointProviderSpawnLimiterBehavior_MAX = 2
};

enum ELoadoutVariantInsertType
{
    StartOfArray = 0,
    EndOfArray = 1,
    ELoadoutVariantInsertType_MAX = 2
};

enum ELobbyBeaconJoinState
{
    None = 0,
    SentJoinRequest = 1,
    JoinRequestAcknowledged = 2,
    ELobbyBeaconJoinState_MAX = 3
};

enum ELobbyMissionGeneratorDetailsRequirement
{
    Unknown = 0,
    NotRequired = 1,
    Required = 2,
    ELobbyMissionGeneratorDetailsRequirement_MAX = 3
};

enum ELocalFileReplayResult
{
    Success = 0,
    InvalidReplayInfo = 1,
    StreamChunkIndexMismatch = 2,
    DecompressBuffer = 3,
    CompressionNotSupported = 4,
    DecryptBuffer = 5,
    EncryptionNotSupported = 6,
    EncryptBuffer = 7,
    CompressBuffer = 8,
    InvalidName = 9,
    FileWriter = 10,
    Unknown = 11,
    ELocalFileReplayResult_MAX = 12
};

enum ELocalFrameMode
{
    FromObject = 0,
    FromGeometry = 1,
    ELocalFrameMode_MAX = 2
};

enum ELocalPositionOrigin
{
    Instance = 0,
    InstancePreSkinning = 1,
    Primitive = 2,
    ELocalPositionOrigin_MAX = 3
};

enum ELocalUserOnlineStatus
{
    Online = 0,
    Offline = 1,
    Away = 2,
    ExtendedAway = 3,
    DoNotDisturb = 4,
    Chat = 5,
    ELocalUserOnlineStatus_MAX = 6
};

enum ELocalizedTextSourceCategory
{
    Game = 0,
    Engine = 1,
    Editor = 2,
    ELocalizedTextSourceCategory_MAX = 3
};

enum ELocationBoneSocketSelectionMethod
{
    BONESOCKETSEL_Sequential = 0,
    BONESOCKETSEL_Random = 1,
    BONESOCKETSEL_MAX = 2
};

enum ELocationBoneSocketSource
{
    BONESOCKETSOURCE_Bones = 0,
    BONESOCKETSOURCE_Sockets = 1,
    BONESOCKETSOURCE_MAX = 2
};

enum ELocationEmitterSelectionMethod
{
    ELESM_Random = 0,
    ELESM_Sequential = 1,
    ELESM_MAX = 2
};

enum ELocationEntryState
{
    Found = 0,
    NotFound = 1,
    Unused = 2,
    ELocationEntryState_MAX = 3
};

enum ELocationFilteringModeEnum
{
    ChaosNiagara_LocationFilteringMode_Inclusive = 0,
    ChaosNiagara_LocationFilteringMode_Exclusive = 1,
    ChaosNiagara_Max = 2
};

enum ELocationSkelVertSurfaceSource
{
    VERTSURFACESOURCE_Vert = 0,
    VERTSURFACESOURCE_Surface = 1,
    VERTSURFACESOURCE_MAX = 2
};

enum ELocationXToSpawnEnum
{
    ChaosNiagara_LocationXToSpawn_None = 0,
    ChaosNiagara_LocationXToSpawn_Min = 1,
    ChaosNiagara_LocationXToSpawn_Max = 2,
    ChaosNiagara_LocationXToSpawn_MinMax = 3,
    ChaosNiagara_Max = 4
};

enum ELocationYToSpawnEnum
{
    ChaosNiagara_LocationYToSpawn_None = 0,
    ChaosNiagara_LocationYToSpawn_Min = 1,
    ChaosNiagara_LocationYToSpawn_Max = 2,
    ChaosNiagara_LocationYToSpawn_MinMax = 3,
    ChaosNiagara_Max = 4
};

enum ELocationZToSpawnEnum
{
    ChaosNiagara_LocationZToSpawn_None = 0,
    ChaosNiagara_LocationZToSpawn_Min = 1,
    ChaosNiagara_LocationZToSpawn_Max = 2,
    ChaosNiagara_LocationZToSpawn_MinMax = 3,
    ChaosNiagara_Max = 4
};

enum ELocatorResolveFlags
{
    None = 0,
    Load = 1,
    Unload = 2,
    Async = 3,
    WillWait = 4,
    AsyncWait = 5,
    ELocatorResolveFlags_MAX = 6
};

enum ELockOnState
{
    NoTarget = 0,
    TargetAcquired = 1,
    LockingOnToTarget = 2,
    TargetLockedOn = 3,
    Cooldown = 4,
    COUNT = 5,
    ELockOnState_MAX = 6
};

enum ELockState
{
    INVALID = 0,
    UNLOCKED = 1,
    LOCKED = 2,
    ELockState_MAX = 3
};

enum ELockedWidgetDisplayQuantity
{
    ShowAll = 0,
    ShowNextOnly = 1,
    ELockedWidgetDisplayQuantity_MAX = 2
};

enum ELockedWidgetUnlockType
{
    QuestDaysFromEventStart = 0,
    QuestChallengesCompleteUntilUnlocked = 1,
    BundleDaysFromEventStart = 2,
    PrerequisiteQuest = 3,
    ELockedWidgetUnlockType_MAX = 4
};

enum ELodUpdateOption
{
    LOD0Only = 0,
    LOD1AndHigher = 1,
    All = 2,
    ELodUpdateOption_MAX = 3
};

enum ELogTimes
{
    None = 0,
    UTC = 1,
    SinceGStartTime = 2,
    Local = 3,
    ELogTimes_MAX = 4
};

enum ELoginResult
{
    NotStarted = 0,
    Pending = 1,
    Success = 2,
    Console_LoginFailed = 3,
    Console_AuthFailed = 4,
    Console_MissingAuthAssociation = 5,
    Console_DuplicateAuthAssociation = 6,
    Console_AddedAuthAssociation = 7,
    Console_AuthAssociationFailure = 8,
    Console_NotEntitled = 9,
    Console_EntitlementCheckFailed = 10,
    Console_PrivilegeCheck = 11,
    Console_PatchOrUpdateRequired = 12,
    AuthFailed = 13,
    AuthFailed_RefreshInvalid = 14,
    AuthFailed_InvalidMFA = 15,
    AuthFailed_RequiresMFA = 16,
    AuthFailed_AgeVerificationIncomplete = 17,
    AuthFailed_LoginLockout = 18,
    AuthFailed_InvalidCredentials = 19,
    AuthFailed_CorrectiveActionRequired = 20,
    AuthParentalLock = 21,
    PlatformNotAllowed = 22,
    NotEntitled = 23,
    Banned = 24,
    EULACheckFailed = 25,
    EULADeclined = 26,
    WaitingRoomFailed = 27,
    ServiceUnavailable = 28,
    GenericError = 29,
    RegisterSecondaryPlayerInPrimaryPartyFailed = 30,
    RejoinCheckFailure = 31,
    ConnectionFailed = 32,
    NetworkConnectionUnavailable = 33,
    AlreadyLoggingIn = 34,
    ExternalAuth_AddedAuthAssociation = 35,
    ExternalAuth_ConnectionTimeout = 36,
    ExternalAuth_AuthFailure = 37,
    ExternalAuth_AssociationFailure = 38,
    ExternalAuth_MissingAuthAssociation = 39,
    ExternalAuth_Canceled = 40,
    FailedToCreateParty = 41,
    ProfileQueryFailed = 42,
    QueryKeychainFailed = 43,
    ClientSettingsDownloadFailed = 44,
    SupervisedSettingsDownloadFailed = 45,
    PinGrantFailure = 46,
    PinGrantTimeout = 47,
    PinGrantCanceled = 48,
    LoginStepTimeout = 49,
    Console_LoginCanceled = 50,
    ELoginResult_MAX = 51
};

enum ELookAtType
{
    ScanAround = 0,
    Investigate = 1,
    HeardSound = 2,
    Ambush = 3,
    MAX = 4
};

enum ELootElementType
{
    Pickup = 0,
    Chest = 1,
    SupplyDrop = 2,
    Invalid = 3,
    ELootElementType_MAX = 4
};

enum ELootQuotaLevel
{
    Unlimited = 0,
    Level1 = 1,
    Level2 = 2,
    Level3 = 3,
    Level4 = 4,
    Level5 = 5,
    Level6 = 6,
    Level7 = 7,
    Level8 = 8,
    Level9 = 9,
    Level10 = 10,
    Level11 = 11,
    Level12 = 12,
    Level13 = 13,
    Level14 = 14,
    Level15 = 15,
    Level16 = 16,
    Level17 = 17,
    NumLevels = 18,
    ELootQuotaLevel_MAX = 19
};

enum ELoudnessCurveTypeEnum
{
    A = 0,
    B = 1,
    C = 2,
    D = 3,
    None = 4,
    ELoudnessCurveTypeEnum_MAX = 5
};

enum ELoudnessNRTCurveTypeEnum
{
    A = 0,
    B = 1,
    C = 2,
    D = 3,
    None = 4,
    ELoudnessNRTCurveTypeEnum_MAX = 5
};

enum ELowerBodyBlendMask
{
    None = 0,
    Default = 1,
    LowerBodyNoFeathering = 2,
    CrouchShuffleRelaxedLocalSpace = 3,
    CrouchShuffleRelaxedMeshSpace = 4,
    PartialUpperBodyLocalSpace = 5,
    PartialUpperBodyMeshSpace = 6,
    OneHandMontage = 7,
    TwoHandMontage = 8,
    ELowerBodyBlendMask_MAX = 9
};

enum ELumenRayLightingMode
{
    SurfaceCache = 0,
    HitLightingForReflections = 1,
    HitLighting = 2,
    ELumenRayLightingMode_MAX = 3
};

enum ELumenRayLightingModeOverride
{
    Default = 0,
    SurfaceCache = 1,
    HitLightingForReflections = 2,
    HitLighting = 3,
    ELumenRayLightingModeOverride_MAX = 4
};

enum ELumenSoftwareTracingMode
{
    DetailTracing = 0,
    GlobalTracing = 1,
    ELumenSoftwareTracingMode_MAX = 2
};

enum EMIDCreationFlags
{
    None = 0,
    Transient = 1,
    EMIDCreationFlags_MAX = 2
};

enum EMMSPlayersPerTeamPreset
{
    Solos = 0,
    Duos = 1,
    Trios = 2,
    Squads = 3,
    SplitEvenly = 4,
    Dynamic = 5,
    EMMSPlayersPerTeamPreset_MAX = 6
};

enum EMMSPrivacy
{
    Public = 0,
    Private = 1,
    EMMSPrivacy_MAX = 2
};

enum EMMSRulePreset
{
    RespectParties = 0,
    KeepFull = 1,
    Off = 2,
    EMMSRulePreset_MAX = 3
};

enum EMMSTeamFillOption
{
    PartyChoice = 0,
    MustFill = 1,
    EMMSTeamFillOption_MAX = 2
};

enum EMPLobbyExperimentBucketType
{
    OldLobby = 0,
    MultiproductLobby = 1,
    MultiproductLobbyWithSearch = 2,
    EMPLobbyExperimentBucketType_MAX = 3
};

enum EMPMatchOutcome
{
    None = 0,
    Quit = 1,
    Won = 2,
    Lost = 3,
    Tied = 4,
    TimeExpired = 5,
    First = 6,
    Second = 7,
    Third = 8,
    Fourth = 9,
    EMPMatchOutcome_MAX = 10
};

enum EMVVMBindingMode
{
    OneTimeToDestination = 0,
    OneWayToDestination = 1,
    TwoWay = 2,
    OneTimeToSource = 3,
    OneWayToSource = 4,
    EMVVMBindingMode_MAX = 5
};

enum EMVVMExecutionMode
{
    Immediate = 0,
    Delayed = 1,
    Tick = 2,
    DelayedWhenSharedElseImmediate = 3,
    EMVVMExecutionMode_MAX = 4
};

enum EMakeMeshPivotLocation
{
    Base = 0,
    Centered = 1,
    Top = 2,
    EMakeMeshPivotLocation_MAX = 3
};

enum EMakeMeshPlacementType
{
    GroundPlane = 0,
    OnScene = 1,
    AtOrigin = 2,
    EMakeMeshPlacementType_MAX = 3
};

enum EMakeMeshPolygroupMode
{
    PerShape = 0,
    PerFace = 1,
    PerQuad = 2,
    EMakeMeshPolygroupMode_MAX = 3
};

enum EManagedCosmeticType
{
    Glider = 0,
    GliderAnimSet = 1,
    Pickaxe = 2,
    Pet = 3,
    ItemWrap = 4,
    MAX_COUNT = 5,
    EManagedCosmeticType_MAX = 6
};

enum EManagedPickupBucket
{
    Default = 0,
    Junk = 1,
    Normal = 2,
    Important = 3,
    EManagedPickupBucket_MAX = 4
};

enum EManagedPickupContext
{
    Unknown = 0,
    PlayerDropped = 1,
    Overflow = 2,
    Spawned = 3,
    EManagedPickupContext_MAX = 4
};

enum EMapCaptureMethod
{
    None = 0,
    LiveCapture = 1,
    StaticCapture = 2,
    EMapCaptureMethod_MAX = 3
};

enum EMapCursorHoverTarget
{
    None = 0,
    Marker = 1,
    SpecialActor = 2,
    EMapCursorHoverTarget_MAX = 3
};

enum EMapLocationStateType
{
    Normal = 0,
    Golden = 1,
    Undiscovered = 2,
    Max = 3
};

enum EMapZoomingMode
{
    None = 0,
    ZoomingIn = 1,
    ZoomingOut = 2,
    EMapZoomingMode_MAX = 3
};

enum EMappingQueryIssue
{
    NoIssue = 0,
    ReservedByAction = 1,
    HidesExistingMapping = 2,
    HiddenByExistingMapping = 3,
    CollisionWithMappingInSameContext = 4,
    ForcesTypePromotion = 5,
    ForcesTypeDemotion = 6,
    EMappingQueryIssue_MAX = 7
};

enum EMappingQueryResult
{
    Error_EnhancedInputNotEnabled = 0,
    Error_InputContextNotInActiveContexts = 1,
    Error_InvalidAction = 2,
    NotMappable = 3,
    MappingAvailable = 4,
    EMappingQueryResult_MAX = 5
};

enum EMarkableResult
{
    Markable = 0,
    Block = 1,
    Continue = 2,
    MarkableWithoutAttaching = 3,
    EMarkableResult_MAX = 4
};

enum EMarqueeSelectionUpdateType
{
    OnDrag = 0,
    OnTickAndRelease = 1,
    OnRelease = 2,
    EMarqueeSelectionUpdateType_MAX = 3
};

enum EMashAISpecialEncounterType
{
    Boss = 0,
    UniqueAISpawn = 1,
    EMashAISpecialEncounterType_MAX = 2
};

enum EMashDifficulty
{
    Easy = 0,
    Medium = 1,
    Hard = 2,
    EMashDifficulty_MAX = 3
};

enum EMashPhase
{
    NotStarted = 0,
    Preparation = 1,
    Survival = 2,
    AfterMath = 3,
    Moving = 4,
    FinalPhase = 5,
    FinalPhaseFullStorm = 6,
    MAX = 7
};

enum EMashScoreEvent
{
    FiendKill = 0,
    BruteKill = 1,
    RangedKill = 2,
    ExplodingKill = 3,
    ChillKill = 4,
    PoisonKill = 5,
    GoldKill = 6,
    RiftDestroyed = 7,
    ScoreMultiplierUsed = 8,
    HeadshotKill = 9,
    RespawnPenalty = 10,
    AmmoBoxOpened = 11,
    ChestOpened = 12,
    BossKill = 13,
    FinalBossKill = 14,
    SafeDetonationDistanceKill = 15,
    SpecialEncounterKill = 16,
    MAX = 17
};

enum EMassCommandOperationType
{
    None = 0,
    Create = 1,
    Add = 2,
    Remove = 3,
    ChangeComposition = 4,
    Set = 5,
    Destroy = 6,
    MAX = 7
};

enum EMassEntityDebugShape
{
    Box = 0,
    Cone = 1,
    Cylinder = 2,
    Capsule = 3,
    MAX = 4
};

enum EMassEntityTagsTestMode
{
    Any = 0,
    All = 1,
    None = 2,
    EMassEntityTagsTestMode_MAX = 3
};

enum EMassFragmentAccess
{
    None = 0,
    ReadOnly = 1,
    ReadWrite = 2,
    MAX = 3
};

enum EMassFragmentPresence
{
    All = 0,
    Any = 1,
    None = 2,
    Optional = 3,
    MAX = 4
};

enum EMassLOD
{
    High = 0,
    Medium = 1,
    Low = 2,
    Off = 3,
    Max = 4
};

enum EMassObservedOperation
{
    Add = 0,
    Remove = 1,
    MAX = 2
};

enum EMassProcessingPhase
{
    PrePhysics = 0,
    StartPhysics = 1,
    DuringPhysics = 2,
    EndPhysics = 3,
    PostPhysics = 4,
    FrameEnd = 5,
    MAX = 6
};

enum EMassRepresentationType
{
    HighResSpawnedActor = 0,
    LowResSpawnedActor = 1,
    StaticMeshInstance = 2,
    None = 3,
    EMassRepresentationType_MAX = 4
};

enum EMassSmartObjectInteractionStatus
{
    Unset = 0,
    InProgress = 1,
    BehaviorCompleted = 2,
    TaskCompleted = 3,
    Aborted = 4,
    EMassSmartObjectInteractionStatus_MAX = 5
};

enum EMassTranslationDirection
{
    None = 0,
    InitializationOnly = 1,
    ActorToMass = 2,
    MassToActor = 3,
    BothWays = 4,
    EMassTranslationDirection_MAX = 5
};

enum EMassVisibility
{
    CanBeSeen = 0,
    CulledByFrustum = 1,
    CulledByDistance = 2,
    Max = 3
};

enum EMatchAbandonState
{
    None = 0,
    Joining = 1,
    CanAbandon = 2,
    TeamLocked = 3,
    EMatchAbandonState_MAX = 4
};

enum EMatchConditionMutatorTeamStatus
{
    None = 0,
    Won = 1,
    Lost = 2,
    Placed = 3,
    EMatchConditionMutatorTeamStatus_MAX = 4
};

enum EMatchConditionMutatorTimingType
{
    Round = 0,
    MatchAtEndOfRound = 1,
    MatchImmediate = 2,
    COUNT = 3,
    EMatchConditionMutatorTimingType_MAX = 4
};

enum EMatchPrivacy
{
    Private = 0,
    NoFill = 1,
    Fill = 2,
    Undefined = 3,
    EMatchPrivacy_MAX = 4
};

enum EMatchQuestsSelectorState
{
    EMinimized = 0,
    EOpen = 1,
    EMinimizing = 2,
    EMatchQuestsSelectorState_MAX = 3
};

enum EMatchmakingCancelReasonV2
{
    Explicit = 0,
    JoinedParty = 1,
    LeftParty = 2,
    PartyMemberJoined = 3,
    PartyMemberLeft = 4,
    PartyMemberCanceled = 5,
    PartyLeaderSwap = 6,
    PlayReplay = 7,
    UIDestroyed = 8,
    PCDestroyed = 9,
    AppBackgrounded = 10,
    HotfixOutdated = 11,
    TournamentOver = 12,
    NotInParty = 13,
    CrossplayBlocked = 14,
    TournamentCrossplayBlocked = 15,
    AccountLevelTooLow = 16,
    FillNoCrossplay = 17,
    CreativeCanceledByLeader = 18,
    CreativeMemberLeftIsland = 19,
    CreativeIslandStateChanged = 20,
    JoinInProgressRejected = 21,
    MatchmakingDisabled = 22,
    NotLoggedIn = 23,
    NoIdentityInterface = 24,
    NoSessionInterface = 25,
    TimedOut = 26,
    InvalidPlaylist = 27,
    AttemptedToQueueTooFrequently = 28,
    TournamentBlackout = 29,
    CancelledDuringPreTravelSetup = 30,
    Unknown = 31,
    EMatchmakingCancelReasonV2_MAX = 32
};

enum EMatchmakingCompleteResult
{
    NotStarted = 0,
    UpdateNeeded = 1,
    OutpostNotFound = 2,
    Cancelled = 3,
    NoResults = 4,
    Failure = 5,
    CreateFailure = 6,
    Success = 7,
    EMatchmakingCompleteResult_MAX = 8
};

enum EMatchmakingErrorType
{
    NotEnoughWorldSpotsForParty = 0,
    NotAllPartyMembersHaveWorldAccess = 1,
    LookingForPartyIsEnabled = 2,
    None = 3,
    EMatchmakingErrorType_MAX = 4
};

enum EMatchmakingErrorV2
{
    Success = 0,
    Canceled = 1,
    NeedUpdate = 2,
    VersionMismatch = 3,
    UpdateFailed = 4,
    NotLoggedIn = 5,
    NoIdentityInterface = 6,
    NoSessionInterface = 7,
    AlreadyInSession = 8,
    FindSessionFailure = 9,
    InvalidSessionId = 10,
    FailedToQueryEncryptionKey = 11,
    FailedToRefreshAuthToken = 12,
    FailedToCleanupSession = 13,
    FailedToJoinSession = 14,
    FailedToTravelToSession = 15,
    Unauthorized = 16,
    BannedFromAthena = 17,
    BannedFromAthenaForExploit = 18,
    BannedFromAthenaForTeaming = 19,
    BannedFromAthenaForTeamKilling = 20,
    InvalidCustomMatchKey = 21,
    FailedToContactGameServices = 22,
    FailedToConnectToMMS = 23,
    MMSCommunicationIssue = 24,
    ServiceReturnedError = 25,
    PlaylistNoLongerAvailable = 26,
    CrossplayUnsetWithInputDevicePoolShift = 27,
    CrossplayNeededForTournamentMatch = 28,
    MatchmakingDisabled = 29,
    AccountLevelTooLow = 30,
    JoinInProgressError = 31,
    SpectateInProgressError = 32,
    MatchmakingInProgress = 33,
    TooFrequentRequests = 34,
    HostFailedToGenerateDownloadableContent = 35,
    SourceVersionTooNew = 36,
    FailedToAcquireContent = 37,
    CancelledDownloadContent = 38,
    DataAssetDirectoryUpdateFailed = 39,
    InvalidPlaylistRevision = 40,
    FailedToConnectToContentBeacon = 41,
    FailedToAcquireServerInitializationState = 42,
    CancelledDuringPreTravelSetup = 43,
    QueryUserSessionIdTokensFailed = 44,
    ArbitratedWorldLookupFailed = 45,
    ArbitratedWorldTokenFailed = 46,
    ArbitratedWorldUnavailable = 47,
    PersistentPartyMissing = 48,
    ContentGatingCheckFailed = 49,
    UnknownError = 50,
    EMatchmakingErrorV2_MAX = 51
};

enum EMatchmakingFlags
{
    None = 0,
    CreateNewOnly = 1,
    NoReservation = 2,
    Private = 3,
    UseWorldDataOwner = 4,
    EMatchmakingFlags_MAX = 5
};

enum EMatchmakingInputSource
{
    Local = 0,
    Remote = 1,
    Pool = 2,
    EMatchmakingInputSource_MAX = 3
};

enum EMatchmakingReadyCheck
{
    NotReady = 0,
    Default = 1,
    SaveTheWorld = 2,
    LinkCode = 3,
    JoinEditingSession = 4,
    MAX_NUM = 5,
    EMatchmakingReadyCheck_MAX = 6
};

enum EMatchmakingSourceV2
{
    None = 0,
    AthenaMatchmakingWidget = 1,
    ActivityMatchmakingWidget = 2,
    ReadyUpScreenWidget = 3,
    ForcedIntro = 4,
    KeepPlayingTogetherWidget = 5,
    Unknown = 6,
    EMatchmakingSourceV2_MAX = 7
};

enum EMatchmakingStartLocation
{
    Lobby = 0,
    Game = 1,
    CreateNew = 2,
    FindSingle = 3,
    EMatchmakingStartLocation_MAX = 4
};

enum EMatchmakingState
{
    NotMatchmaking = 0,
    CancelingMatchmaking = 1,
    ReleasingLock = 2,
    AcquiringLock = 3,
    LockAcquistionFailure = 4,
    FindingEmptyServer = 5,
    FindingExistingSession = 6,
    TestingEmptyServers = 7,
    TestingExistingSessions = 8,
    JoiningExistingSession = 9,
    NoMatchesAvailable = 10,
    CleaningUpExisting = 11,
    HandlingFailure = 12,
    JoinSuccess = 13,
    EMatchmakingState_MAX = 14
};

enum EMatchmakingUtilityFlows
{
    Automatic = 0,
    JoinMatchInProgress = 1,
    SpectateMatch = 2,
    Legacy = 3,
    LinkCode = 4,
    JoinEditingSession = 5,
    SaveTheWorld = 6,
    Internal_Unselected = 7,
    EMatchmakingUtilityFlows_MAX = 8
};

enum EMatchmakingUtilityState
{
    Idle = 0,
    MatchmakingUtilityBegin = 1,
    MatchmakingUtilityCompleted = 2,
    Completed = 3,
    Failed = 4,
    CheckSittingOutState = 5,
    InitializePlaylistSelection = 6,
    JoinMatchInProgress = 7,
    CheckingIfBanned = 8,
    PrivateMatchMinPartySize = 9,
    GameFeaturePluginDownloadModal = 10,
    CreativeContentDownloadModal = 11,
    CheckModeratorModePermissions = 12,
    CrossplayOptIn_GameMode = 13,
    CrossplayOptIn_Fill = 14,
    CrossplayDevices = 15,
    FactionChoice = 16,
    SetPartyReadiness = 17,
    WaitingForPartyReadinessConfirmed = 18,
    TournamentEligibility = 19,
    TournamentRegionLock = 20,
    TournamentMFA = 21,
    TournamentEULA = 22,
    AppEnvSecurity = 23,
    WaitingForInitialPlaylistSelection = 24,
    ServerBrowsers = 25,
    WaitingForServerBrowserPlaylistSwap = 26,
    DelayReadyUp = 27,
    QoSSettings_UpdateManager = 28,
    QoSSettings_UpdateManager_Success = 29,
    SetAthenaReady = 30,
    WaitingForAthenaReadinessConfirmed = 31,
    PreloadAthena = 32,
    UpdateHiddenMatchmakingDelay = 33,
    WaitingForUpdateHiddenMatchmakingDelay = 34,
    HiddenMatchmakingDelay = 35,
    FindExistingEditSession = 36,
    SelectingFlow = 37,
    ReadyingUpforFlow = 38,
    PartyMemberSameLocationCheck = 39,
    CallingMatchmakingForFlow = 40,
    WaitingForJoinMatchInProgressResponse = 41,
    WaitingForMatchmakingResponse = 42,
    WaitingForMatchmakingToCompleteAsPartyMember = 43,
    WaitingForEntirePartyReady = 44,
    WaitingForPartyToBeInSameLocation = 45,
    WaitingForPartyToSwitchSubgames = 46,
    WaitingToRestartMatchmaking_TooFrequentRequest = 47,
    RequestingSpectateMatch = 48,
    ProcessingMatchmakingResults_Success = 49,
    ProcessingMatchmakingResults_Fail = 50,
    PreloadingForJoiningMatchInProgress = 51,
    ProcessingJoinMatchInProgressResults_Success = 52,
    ProcessingJoinMatchInProgressResults_Fail = 53,
    RestartingReadyChecksForLegacyFlow = 54,
    RestartingMatchmaking = 55,
    QueryingForLiveSpectatorEula = 56,
    PreTravelToSessionSetup = 57,
    RunningPlaylistChecks = 58,
    NewReadiness_Begin = 59,
    NewReadiness_Ready_WaitingForConfirmation = 60,
    NewReadiness_Unready_WaitingForConfirmation = 61,
    NewReadiness_End = 62,
    INVALID = 63,
    EMatchmakingUtilityState_MAX = 64
};

enum EMatchmakingV2Fork_ContentBeacon
{
    Begin = 0,
    Idle = 1,
    Completed = 2,
    Failed = 3,
    INVALID = 4,
    V2_DisconnectedBegin = 5,
    V2_ReadinessChangedBegin = 6,
    V2_OnContentBeaconErrorFailed = 7,
    V2_OnContentBeaconErrorSuccess = 8,
    V2_OnClientReadinessChangedFailed = 9,
    V2_OnClientReadinessChangedSuccess = 10,
    V2_CancelRequested = 11,
    V1_Begin = 12,
    V1_WaitingForContent = 13,
    V1_Disconnected = 14,
    V1_Failed = 15,
    V1_ReadinessCallback = 16,
    V1_JoinAnyways = 17,
    V1_TravelToSession = 18,
    V1_TravelToSessionLambda = 19,
    V1_TravelToSessionTimeout = 20,
    V1_ReadinessCallbackFailed = 21,
    V1_CancelRequested = 22,
    EMatchmakingV2Fork_MAX = 23
};

enum EMatchmakingV2Fork_ServerInit
{
    Begin = 0,
    Idle = 1,
    Completed = 2,
    Failed = 3,
    INVALID = 4,
    ReadyToTravel = 5,
    WaitForInit = 6,
    WaitForSubGameContent = 7,
    WaitForSubGameContent_Callback = 8,
    WaitForSubGameContent_Callback_Ready = 9,
    WaitForSubGameContent_Callback_NotReady = 10,
    WaitBeforeTravel = 11,
    FailedToConnect = 12,
    MissingParty = 13,
    FailedCallback = 14,
    ServerInitStateChange_Callback = 15,
    ServerInitStateChange_Callback_Ready = 16,
    ServerInitStateChange_Callback_NotReady = 17,
    CancelRequested = 18,
    EMatchmakingV2Fork_MAX = 19
};

enum EMatchmakingV2State
{
    Begin = 0,
    Idle = 1,
    Completed = 2,
    Failed = 3,
    INVALID = 4,
    RunningMainBranch = 5,
    Main_RunningChecks = 6,
    Main_DADUpdate = 7,
    Main_CheckPlaylistValid = 8,
    Main_CheckContentGating = 9,
    Main_ModifyOptions = 10,
    Main_Begin_JoinInProgress = 11,
    Main_JoinInProgress_PartyLeader_Begin = 12,
    Main_JoinInProgress_PartyLeader_Success = 13,
    Main_JoinInProgress_PartyLeader_Failed = 14,
    Main_JoinInProgress_PartyMember = 15,
    Main_Begin_NormalFlow = 16,
    Main_NormalFlow_SetValues = 17,
    Main_NormalFlow_CheckPartyValidity = 18,
    Main_NormalFlow_CheckInputValidity = 19,
    Main_NormalFlow_CheckTournamentValidity = 20,
    Main_NormalFlow_Complete = 21,
    ValidateProductModes = 22,
    RunningFollowerBranch = 23,
    Follower_CheckIsNotMatchmaking = 24,
    Follower_SettingMemberVariables = 25,
    Follower_ValidatingLeaderMatchmakingInfo = 26,
    Follower_ValidatingRegion = 27,
    Follower_ValidatingHotfixVersion = 28,
    Follower_ValidatingTournamentQualifications = 29,
    Follower_ValidatingPlaylist = 30,
    Follower_RunDADUpdate = 31,
    Follower_AfterDADUpdate_SetValues = 32,
    Follower_AfterDADUpdate_CheckPartyValidity = 33,
    FollowerBranch_Complete = 34,
    CallingMatchmakingService = 35,
    WaitingForMatchmakingServiceCallback = 36,
    FindingSessionId = 37,
    WaitingForFindSessionIdCallback = 38,
    QueryUserSessionIdTokens = 39,
    ConnectToReservationBeaconForArbitratedWorldParty = 40,
    AfterFindSession = 41,
    Fork_JoinFoundSession = 42,
    RefreshPlatformAuthToken = 43,
    DestroySession = 44,
    DestroyConsoleSession = 45,
    CheckConsoleSessionDestruction = 46,
    JoinSession = 47,
    PassedJoinSession = 48,
    PreTravelSetupStartTime = 49,
    ClearJoinSessionDelegate = 50,
    Fork_ServerInitAndContent = 51,
    OnReadyForTravel = 52,
    WaitingForReadyToTravelToSession = 53,
    AttemptToTravel = 54,
    EMatchmakingV2State_MAX = 55
};

enum EMatchmakingV2_Temp_JoinInProgressState
{
    Begin = 0,
    Idle = 1,
    Completed = 2,
    Failed = 3,
    INVALID = 4,
    Branch_JoinHost = 5,
    Branch_JoinParty = 6,
    Branch_JoinBroadcaster = 7,
    Branch_JoinPartyMember = 8,
    ConnectToReservationBeacon = 9,
    ConnectToReservationBeaconForPersistentParty = 10,
    CheckConnectToReservationBeaconForPersistentPartyData = 11,
    DelayingCallToJoin = 12,
    CheckNotMatchmaking = 13,
    CallToJoin = 14,
    EMatchmakingV2_Temp_MAX = 15
};

enum EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress
{
    Begin = 0,
    Idle = 1,
    Completed = 2,
    Failed = 3,
    INVALID = 4,
    PreloadingAthena = 5,
    BeginningServerTransfer_UnfinishedRefactor = 6,
    EMatchmakingV2_Temp_MAX = 7
};

enum EMaterialAttributeBlend
{
    Blend = 0,
    UseA = 1,
    UseB = 2,
    EMaterialAttributeBlend_MAX = 3
};

enum EMaterialBoundaryConstraint
{
    Fixed = 0,
    Refine = 1,
    Free = 2,
    Ignore = 3,
    EMaterialBoundaryConstraint_MAX = 4
};

enum EMaterialDecalResponse
{
    MDR_None = 0,
    MDR_ColorNormalRoughness = 1,
    MDR_Color = 2,
    MDR_ColorNormal = 3,
    MDR_ColorRoughness = 4,
    MDR_Normal = 5,
    MDR_NormalRoughness = 6,
    MDR_Roughness = 7,
    MDR_MAX = 8
};

enum EMaterialDomain
{
    MD_Surface = 0,
    MD_DeferredDecal = 1,
    MD_LightFunction = 2,
    MD_Volume = 3,
    MD_PostProcess = 4,
    MD_UI = 5,
    MD_RuntimeVirtualTexture = 6,
    MD_MAX = 7
};

enum EMaterialExposedTextureProperty
{
    TMTM_TextureSize = 0,
    TMTM_TexelSize = 1,
    TMTM_MAX = 2
};

enum EMaterialExposedViewProperty
{
    MEVP_BufferSize = 0,
    MEVP_FieldOfView = 1,
    MEVP_TanHalfFieldOfView = 2,
    MEVP_ViewSize = 3,
    MEVP_WorldSpaceViewPosition = 4,
    MEVP_WorldSpaceCameraPosition = 5,
    MEVP_ViewportOffset = 6,
    MEVP_TemporalSampleCount = 7,
    MEVP_TemporalSampleIndex = 8,
    MEVP_TemporalSampleOffset = 9,
    MEVP_RuntimeVirtualTextureOutputLevel = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative = 11,
    MEVP_PreExposure = 12,
    MEVP_RuntimeVirtualTextureMaxLevel = 13,
    MEVP_ResolutionFraction = 14,
    MEVP_MAX = 15
};

enum EMaterialExpressionBoundsType
{
    MEILB_InstanceLocal = 0,
    MEILB_ObjectLocal = 1,
    MEILB_PreSkinnedLocal = 2,
    MEILB_MAX = 3
};

enum EMaterialFloatPrecisionMode
{
    MFPM_Default = 0,
    MFPM_Full_MaterialExpressionOnly = 1,
    MFPM_Full = 2,
    MFPM_Half = 3,
    MFPM_MAX = 4
};

enum EMaterialFunctionUsage
{
    Default = 0,
    MaterialLayer = 1,
    MaterialLayerBlend = 2,
    EMaterialFunctionUsage_MAX = 3
};

enum EMaterialLayerLinkState
{
    Uninitialized = 0,
    LinkedToParent = 1,
    UnlinkedFromParent = 2,
    NotFromParent = 3,
    EMaterialLayerLinkState_MAX = 4
};

enum EMaterialMergeType
{
    MaterialMergeType_Default = 0,
    MaterialMergeType_Simplygon = 1,
    MaterialMergeType_MAX = 2
};

enum EMaterialParameterAssociation
{
    LayerParameter = 0,
    BlendParameter = 1,
    GlobalParameter = 2,
    EMaterialParameterAssociation_MAX = 3
};

enum EMaterialPositionTransformSource
{
    TRANSFORMPOSSOURCE_Local = 0,
    TRANSFORMPOSSOURCE_World = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld = 2,
    TRANSFORMPOSSOURCE_View = 3,
    TRANSFORMPOSSOURCE_Camera = 4,
    TRANSFORMPOSSOURCE_Particle = 5,
    TRANSFORMPOSSOURCE_Instance = 6,
    TRANSFORMPOSSOURCE_MAX = 7
};

enum EMaterialProperty
{
    MP_EmissiveColor = 0,
    MP_Opacity = 1,
    MP_OpacityMask = 2,
    MP_DiffuseColor = 3,
    MP_SpecularColor = 4,
    MP_BaseColor = 5,
    MP_Metallic = 6,
    MP_Specular = 7,
    MP_Roughness = 8,
    MP_Anisotropy = 9,
    MP_Normal = 10,
    MP_Tangent = 11,
    MP_WorldPositionOffset = 12,
    MP_WorldDisplacement_DEPRECATED = 13,
    MP_TessellationMultiplier_DEPRECATED = 14,
    MP_SubsurfaceColor = 15,
    MP_CustomData0 = 16,
    MP_CustomData1 = 17,
    MP_AmbientOcclusion = 18,
    MP_Refraction = 19,
    MP_CustomizedUVs0 = 20,
    MP_CustomizedUVs1 = 21,
    MP_CustomizedUVs2 = 22,
    MP_CustomizedUVs3 = 23,
    MP_CustomizedUVs4 = 24,
    MP_CustomizedUVs5 = 25,
    MP_CustomizedUVs6 = 26,
    MP_CustomizedUVs7 = 27,
    MP_PixelDepthOffset = 28,
    MP_ShadingModel = 29,
    MP_FrontMaterial = 30,
    MP_SurfaceThickness = 31,
    MP_Displacement = 32,
    MP_MaterialAttributes = 33,
    MP_CustomOutput = 34,
    MP_MAX = 35
};

enum EMaterialSamplerType
{
    SAMPLERTYPE_Color = 0,
    SAMPLERTYPE_Grayscale = 1,
    SAMPLERTYPE_Alpha = 2,
    SAMPLERTYPE_Normal = 3,
    SAMPLERTYPE_Masks = 4,
    SAMPLERTYPE_DistanceFieldFont = 5,
    SAMPLERTYPE_LinearColor = 6,
    SAMPLERTYPE_LinearGrayscale = 7,
    SAMPLERTYPE_Data = 8,
    SAMPLERTYPE_External = 9,
    SAMPLERTYPE_VirtualColor = 10,
    SAMPLERTYPE_VirtualGrayscale = 11,
    SAMPLERTYPE_VirtualAlpha = 12,
    SAMPLERTYPE_VirtualNormal = 13,
    SAMPLERTYPE_VirtualMasks = 14,
    SAMPLERTYPE_VirtualLinearColor = 15,
    SAMPLERTYPE_VirtualLinearGrayscale = 16,
    SAMPLERTYPE_MAX = 17
};

enum EMaterialSceneAttributeInputMode
{
    Coordinates = 0,
    OffsetFraction = 1,
    EMaterialSceneAttributeInputMode_MAX = 2
};

enum EMaterialShadingModel
{
    MSM_Unlit = 0,
    MSM_DefaultLit = 1,
    MSM_Subsurface = 2,
    MSM_PreintegratedSkin = 3,
    MSM_ClearCoat = 4,
    MSM_SubsurfaceProfile = 5,
    MSM_TwoSidedFoliage = 6,
    MSM_Hair = 7,
    MSM_Cloth = 8,
    MSM_Eye = 9,
    MSM_SingleLayerWater = 10,
    MSM_ThinTranslucent = 11,
    MSM_Strata = 12,
    MSM_NUM = 13,
    MSM_FromMaterialExpression = 14,
    MSM_MAX = 15
};

enum EMaterialShadingRate
{
    MSR_1x1 = 0,
    MSR_2x1 = 1,
    MSR_1x2 = 2,
    MSR_2x2 = 3,
    MSR_4x2 = 4,
    MSR_2x4 = 5,
    MSR_4x4 = 6,
    MSR_Count = 7,
    MSR_MAX = 8
};

enum EMaterialStencilCompare
{
    MSC_Less = 0,
    MSC_LessEqual = 1,
    MSC_Greater = 2,
    MSC_GreaterEqual = 3,
    MSC_Equal = 4,
    MSC_NotEqual = 5,
    MSC_Never = 6,
    MSC_Always = 7,
    MSC_Count = 8,
    MSC_MAX = 9
};

enum EMaterialStyleParameterType
{
    Scalar = 0,
    Vector = 1,
    Texture = 2,
    EMaterialStyleParameterType_MAX = 3
};

enum EMaterialTranslucencyPass
{
    MTP_BeforeDOF = 0,
    MTP_AfterDOF = 1,
    MTP_AfterMotionBlur = 2,
    MTP_MAX = 3
};

enum EMaterialUsage
{
    MATUSAGE_SkeletalMesh = 0,
    MATUSAGE_ParticleSprites = 1,
    MATUSAGE_BeamTrails = 2,
    MATUSAGE_MeshParticles = 3,
    MATUSAGE_StaticLighting = 4,
    MATUSAGE_MorphTargets = 5,
    MATUSAGE_SplineMesh = 6,
    MATUSAGE_InstancedStaticMeshes = 7,
    MATUSAGE_GeometryCollections = 8,
    MATUSAGE_Clothing = 9,
    MATUSAGE_NiagaraSprites = 10,
    MATUSAGE_NiagaraRibbons = 11,
    MATUSAGE_NiagaraMeshParticles = 12,
    MATUSAGE_GeometryCache = 13,
    MATUSAGE_Water = 14,
    MATUSAGE_HairStrands = 15,
    MATUSAGE_LidarPointCloud = 16,
    MATUSAGE_VirtualHeightfieldMesh = 17,
    MATUSAGE_Nanite = 18,
    MATUSAGE_VolumetricCloud = 19,
    MATUSAGE_HeterogeneousVolumes = 20,
    MATUSAGE_MAX = 21
};

enum EMaterialVectorCoordTransform
{
    TRANSFORM_Tangent = 0,
    TRANSFORM_Local = 1,
    TRANSFORM_World = 2,
    TRANSFORM_View = 3,
    TRANSFORM_Camera = 4,
    TRANSFORM_ParticleWorld = 5,
    TRANSFORM_Instance = 6,
    TRANSFORM_MAX = 7
};

enum EMaterialVectorCoordTransformSource
{
    TRANSFORMSOURCE_Tangent = 0,
    TRANSFORMSOURCE_Local = 1,
    TRANSFORMSOURCE_World = 2,
    TRANSFORMSOURCE_View = 3,
    TRANSFORMSOURCE_Camera = 4,
    TRANSFORMSOURCE_ParticleWorld = 5,
    TRANSFORMSOURCE_Instance = 6,
    TRANSFORMSOURCE_MAX = 7
};

enum EMatrixColumns
{
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    EMatrixColumns_MAX = 4
};

enum EMaxAdContentRating
{
    MAX_AD_CONTENT_RATING_G = 0,
    MAX_AD_CONTENT_RATING_PG = 1,
    MAX_AD_CONTENT_RATING_T = 2,
    MAX_AD_CONTENT_RATING_MA = 3,
    MAX_AD_CONTENT_RATING_MAX = 4
};

enum EMaxConcurrentResolutionRule
{
    PreventNew = 0,
    StopOldest = 1,
    StopFarthestThenPreventNew = 2,
    StopFarthestThenOldest = 3,
    StopLowestPriority = 4,
    StopQuietest = 5,
    StopLowestPriorityThenPreventNew = 6,
    Count = 7,
    EMaxConcurrentResolutionRule_MAX = 8
};

enum EMcpSubscriptionState
{
    Inactive = 0,
    Active = 1,
    NotAutoRenewable = 2,
    Canceled = 3,
    PaymentProcessError = 4,
    PlatformAuthError = 5,
    RewardsDelayed = 6,
    Unknown = 7,
    EMcpSubscriptionState_MAX = 8
};

enum EMediaAudioCaptureDeviceFilter
{
    None = 0,
    Card = 1,
    Microphone = 2,
    Software = 3,
    Unknown = 4,
    EMediaAudioCaptureDeviceFilter_MAX = 5
};

enum EMediaPlateEventState
{
    Play = 0,
    Open = 1,
    Close = 2,
    Pause = 3,
    Reverse = 4,
    Forward = 5,
    Rewind = 6,
    Next = 7,
    Previous = 8,
    MAX = 9
};

enum EMediaPlateResourceType
{
    Playlist = 0,
    External = 1,
    Asset = 2,
    EMediaPlateResourceType_MAX = 3
};

enum EMediaPlayerOptionBooleanOverride
{
    UseMediaPlayerSetting = 0,
    Enabled = 1,
    Disabled = 2,
    EMediaPlayerOptionBooleanOverride_MAX = 3
};

enum EMediaPlayerOptionSeekTimeType
{
    Ignored = 0,
    RelativeToStartTime = 1,
    EMediaPlayerOptionSeekTimeType_MAX = 2
};

enum EMediaPlayerOptionTrackSelectMode
{
    UseMediaPlayerDefaults = 0,
    UseTrackOptionIndices = 1,
    EMediaPlayerOptionTrackSelectMode_MAX = 2
};

enum EMediaPlayerTrack
{
    Audio = 0,
    Caption = 1,
    Metadata = 2,
    Script = 3,
    Subtitle = 4,
    Text = 5,
    Video = 6,
    EMediaPlayerTrack_MAX = 7
};

enum EMediaSoundChannels
{
    Mono = 0,
    Stereo = 1,
    Surround = 2,
    EMediaSoundChannels_MAX = 3
};

enum EMediaSoundComponentFFTSize
{
    Min_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    EMediaSoundComponentFFTSize_MAX = 4
};

enum EMediaTextureVisibleMipsTiles
{
    None = 0,
    Plane = 1,
    Sphere = 2,
    EMediaTextureVisibleMipsTiles_MAX = 3
};

enum EMediaTimeRangeBPType
{
    Absolute = 0,
    Current = 1,
    EMediaTimeRangeBPType_MAX = 2
};

enum EMediaVideoCaptureDeviceFilter
{
    None = 0,
    Card = 1,
    Software = 2,
    Unknown = 3,
    Webcam = 4,
    EMediaVideoCaptureDeviceFilter_MAX = 5
};

enum EMediaWebcamCaptureDeviceFilter
{
    None = 0,
    DepthSensor = 1,
    Front = 2,
    Rear = 3,
    Unknown = 4,
    EMediaWebcamCaptureDeviceFilter_MAX = 5
};

enum EMedicPackState
{
    Idle = 0,
    Active = 1,
    None = 2,
    EMedicPackState_MAX = 3
};

enum EMegaStormState
{
    GatheringActorList = 0,
    DamagingActors = 1,
    EMegaStormState_MAX = 2
};

enum EMemorySamplerState
{
    Idle = 0,
    InProgress = 1,
    InProgressNotOwner = 2,
    LaunchError = 3,
    GeneratingSamplingLocations = 4,
    Initializing = 5,
    Ready = 6,
    EMemorySamplerState_MAX = 7
};

enum EMenuPlacement
{
    MenuPlacement_BelowAnchor = 0,
    MenuPlacement_CenteredBelowAnchor = 1,
    MenuPlacement_BelowRightAnchor = 2,
    MenuPlacement_ComboBox = 3,
    MenuPlacement_ComboBoxRight = 4,
    MenuPlacement_MenuRight = 5,
    MenuPlacement_AboveAnchor = 6,
    MenuPlacement_CenteredAboveAnchor = 7,
    MenuPlacement_AboveRightAnchor = 8,
    MenuPlacement_MenuLeft = 9,
    MenuPlacement_Center = 10,
    MenuPlacement_RightLeftCenter = 11,
    MenuPlacement_MatchBottomLeft = 12,
    MenuPlacement_MAX = 13
};

enum EMeshApproximationBaseCappingType
{
    NoBaseCapping = 0,
    ConvexPolygon = 1,
    ConvexSolid = 2,
    EMeshApproximationBaseCappingType_MAX = 3
};

enum EMeshApproximationGroundPlaneClippingPolicy
{
    NoGroundClipping = 0,
    DiscardWithZPlane = 1,
    CutWithZPlane = 2,
    CutAndFillWithZPlane = 3,
    EMeshApproximationGroundPlaneClippingPolicy_MAX = 4
};

enum EMeshApproximationSimplificationPolicy
{
    FixedTriangleCount = 0,
    TrianglesPerArea = 1,
    GeometricTolerance = 2,
    EMeshApproximationSimplificationPolicy_MAX = 3
};

enum EMeshApproximationType
{
    MeshAndMaterials = 0,
    MeshShapeOnly = 1,
    EMeshApproximationType_MAX = 2
};

enum EMeshApproximationUVGenerationPolicy
{
    PreferUVAtlas = 0,
    PreferXAtlas = 1,
    PreferPatchBuilder = 2,
    EMeshApproximationUVGenerationPolicy_MAX = 3
};

enum EMeshAttributePaintToolActions
{
    NoAction = 0,
    EMeshAttributePaintToolActions_MAX = 1
};

enum EMeshAuditFailureReason
{
    MAFR_None = 0,
    MAFR_NeverStream = 1,
    MAFR_HighTriRatioInLODs = 2,
    MAFR_SimplestLODTooComplex = 3,
    MAFR_TriDensityTooHigh = 4,
    MAFR_PhysicsTriDensityHigh = 5,
    MAFR_PhysicsComplexAsSimple = 6,
    MAFR_PhysicsMeshIsHighLOD = 7,
    MAFR_PhysicsSimpleShapeTooComplex = 8,
    MAFR_PhysicsTooDetailedForSmallObject = 9,
    MAFR_PhysicsCollideAll = 10,
    MAFR_MAX = 11
};

enum EMeshBoundaryConstraint
{
    Fixed = 0,
    Refine = 1,
    Free = 2,
    EMeshBoundaryConstraint_MAX = 3
};

enum EMeshBufferAccess
{
    Default = 0,
    ForceCPUAndGPU = 1,
    EMeshBufferAccess_MAX = 2
};

enum EMeshCameraFacingOptions
{
    XAxisFacing_NoUp = 0,
    XAxisFacing_ZUp = 1,
    XAxisFacing_NegativeZUp = 2,
    XAxisFacing_YUp = 3,
    XAxisFacing_NegativeYUp = 4,
    LockedAxis_ZAxisFacing = 5,
    LockedAxis_NegativeZAxisFacing = 6,
    LockedAxis_YAxisFacing = 7,
    LockedAxis_NegativeYAxisFacing = 8,
    VelocityAligned_ZAxisFacing = 9,
    VelocityAligned_NegativeZAxisFacing = 10,
    VelocityAligned_YAxisFacing = 11,
    VelocityAligned_NegativeYAxisFacing = 12,
    EMeshCameraFacingOptions_MAX = 13
};

enum EMeshCameraFacingUpAxis
{
    CameraFacing_NoneUP = 0,
    CameraFacing_ZUp = 1,
    CameraFacing_NegativeZUp = 2,
    CameraFacing_YUp = 3,
    CameraFacing_NegativeYUp = 4,
    CameraFacing_MAX = 5
};

enum EMeshEditingMaterialModes
{
    ExistingMaterial = 0,
    Diffuse = 1,
    Grey = 2,
    Soft = 3,
    Transparent = 4,
    TangentNormal = 5,
    VertexColor = 6,
    CustomImage = 7,
    Custom = 8,
    EMeshEditingMaterialModes_MAX = 9
};

enum EMeshFacesColorMode
{
    None = 0,
    ByGroup = 1,
    ByMaterialID = 2,
    ByUVIsland = 3,
    EMeshFacesColorMode_MAX = 4
};

enum EMeshFeatureImportance
{
    Off = 0,
    Lowest = 1,
    Low = 2,
    Normal = 3,
    High = 4,
    Highest = 5,
    EMeshFeatureImportance_MAX = 6
};

enum EMeshGroupPaintBrushAreaType
{
    Connected = 0,
    Volumetric = 1,
    EMeshGroupPaintBrushAreaType_MAX = 2
};

enum EMeshGroupPaintBrushType
{
    Paint = 0,
    Erase = 1,
    LastValue = 2,
    EMeshGroupPaintBrushType_MAX = 3
};

enum EMeshGroupPaintInteractionType
{
    Brush = 0,
    Fill = 1,
    GroupFill = 2,
    PolyLasso = 3,
    LastValue = 4,
    EMeshGroupPaintInteractionType_MAX = 5
};

enum EMeshGroupPaintToolActions
{
    NoAction = 0,
    ClearFrozen = 1,
    FreezeCurrent = 2,
    FreezeOthers = 3,
    GrowCurrent = 4,
    ShrinkCurrent = 5,
    ClearCurrent = 6,
    FloodFillCurrent = 7,
    ClearAll = 8,
    EMeshGroupPaintToolActions_MAX = 9
};

enum EMeshGroupPaintVisibilityType
{
    None = 0,
    FrontFacing = 1,
    Unoccluded = 2,
    EMeshGroupPaintVisibilityType_MAX = 3
};

enum EMeshInspectorMaterialMode
{
    Original = 0,
    FlatShaded = 1,
    Grey = 2,
    Transparent = 3,
    TangentNormal = 4,
    VertexColor = 5,
    GroupColor = 6,
    Checkerboard = 7,
    Override = 8,
    EMeshInspectorMaterialMode_MAX = 9
};

enum EMeshInspectorToolDrawIndexMode
{
    None = 0,
    VertexID = 1,
    TriangleID = 2,
    GroupID = 3,
    EdgeID = 4,
    EMeshInspectorToolDrawIndexMode_MAX = 5
};

enum EMeshLODSelectionType
{
    AllLODs = 0,
    SpecificLOD = 1,
    CalculateLOD = 2,
    LowestDetailLOD = 3,
    EMeshLODSelectionType_MAX = 4
};

enum EMeshMergeType
{
    MeshMergeType_Default = 0,
    MeshMergeType_MergeActor = 1,
    MeshMergeType_MAX = 2
};

enum EMeshNetworkNodeType
{
    Root = 0,
    Inner = 1,
    Edge = 2,
    Client = 3,
    Unknown = 4,
    EMeshNetworkNodeType_MAX = 5
};

enum EMeshNetworkRelevancy
{
    NotRelevant = 0,
    RelevantToEdgeNodes = 1,
    RelevantToClients = 2,
    EMeshNetworkRelevancy_MAX = 3
};

enum EMeshScreenAlignment
{
    PSMA_MeshFaceCameraWithRoll = 0,
    PSMA_MeshFaceCameraWithSpin = 1,
    PSMA_MeshFaceCameraWithLockedAxis = 2,
    PSMA_MAX = 3
};

enum EMeshSculptFalloffType
{
    Smooth = 0,
    Linear = 1,
    Inverse = 2,
    Round = 3,
    BoxSmooth = 4,
    BoxLinear = 5,
    BoxInverse = 6,
    BoxRound = 7,
    LastValue = 8,
    EMeshSculptFalloffType_MAX = 9
};

enum EMeshSelectionToolActions
{
    NoAction = 0,
    SelectAll = 1,
    SelectAllByMaterial = 2,
    ClearSelection = 3,
    InvertSelection = 4,
    GrowSelection = 5,
    ShrinkSelection = 6,
    ExpandToConnected = 7,
    SelectLargestComponentByTriCount = 8,
    SelectLargestComponentByArea = 9,
    OptimizeSelection = 10,
    DeleteSelected = 11,
    DisconnectSelected = 12,
    SeparateSelected = 13,
    DuplicateSelected = 14,
    FlipSelected = 15,
    CreateGroup = 16,
    SmoothBoundary = 17,
    CycleSelectionMode = 18,
    CycleViewMode = 19,
    EMeshSelectionToolActions_MAX = 20
};

enum EMeshSelectionToolPrimaryMode
{
    Brush = 0,
    VolumetricBrush = 1,
    AngleFiltered = 2,
    Visible = 3,
    AllConnected = 4,
    AllInGroup = 5,
    ByMaterial = 6,
    ByMaterialAll = 7,
    ByUVIsland = 8,
    AllWithinAngle = 9,
    EMeshSelectionToolPrimaryMode_MAX = 10
};

enum EMeshSpaceDeformerToolAction
{
    NoAction = 0,
    ShiftToCenter = 1,
    EMeshSpaceDeformerToolAction_MAX = 2
};

enum EMeshTrackerVertexColorMode
{
    None = 0,
    Confidence = 1,
    Block = 2,
    EMeshTrackerVertexColorMode_MAX = 3
};

enum EMeshVertexPaintBrushAreaType
{
    Connected = 0,
    Volumetric = 1,
    EMeshVertexPaintBrushAreaType_MAX = 2
};

enum EMeshVertexPaintBrushType
{
    Paint = 0,
    Erase = 1,
    Soften = 2,
    Smooth = 3,
    LastValue = 4,
    EMeshVertexPaintBrushType_MAX = 5
};

enum EMeshVertexPaintColorBlendMode
{
    Lerp = 0,
    Mix = 1,
    Multiply = 2,
    EMeshVertexPaintColorBlendMode_MAX = 3
};

enum EMeshVertexPaintColorChannel
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EMeshVertexPaintColorChannel_MAX = 4
};

enum EMeshVertexPaintInteractionType
{
    Brush = 0,
    TriFill = 1,
    Fill = 2,
    GroupFill = 3,
    PolyLasso = 4,
    LastValue = 5,
    EMeshVertexPaintInteractionType_MAX = 6
};

enum EMeshVertexPaintMaterialMode
{
    LitVertexColor = 0,
    UnlitVertexColor = 1,
    OriginalMaterial = 2,
    EMeshVertexPaintMaterialMode_MAX = 3
};

enum EMeshVertexPaintSecondaryActionType
{
    Erase = 0,
    Soften = 1,
    Smooth = 2,
    EMeshVertexPaintSecondaryActionType_MAX = 3
};

enum EMeshVertexPaintToolActions
{
    NoAction = 0,
    PaintAll = 1,
    EraseAll = 2,
    FillBlack = 3,
    FillWhite = 4,
    ApplyCurrentUtility = 5,
    EMeshVertexPaintToolActions_MAX = 6
};

enum EMeshVertexPaintToolUtilityOperations
{
    BlendAllSeams = 0,
    FillChannels = 1,
    InvertChannels = 2,
    CopyChannelToChannel = 3,
    SwapChannels = 4,
    CopyFromWeightMap = 5,
    CopyToOtherLODs = 6,
    CopyToSingleLOD = 7,
    EMeshVertexPaintToolUtilityOperations_MAX = 8
};

enum EMeshVertexPaintVisibilityType
{
    None = 0,
    FrontFacing = 1,
    Unoccluded = 2,
    EMeshVertexPaintVisibilityType_MAX = 3
};

enum EMeshVertexSculptBrushFilterType
{
    None = 0,
    Component = 1,
    PolyGroup = 2,
    EMeshVertexSculptBrushFilterType_MAX = 3
};

enum EMeshVertexSculptBrushType
{
    Move = 0,
    PullKelvin = 1,
    PullSharpKelvin = 2,
    Smooth = 3,
    SmoothFill = 4,
    Offset = 5,
    SculptView = 6,
    SculptMax = 7,
    Inflate = 8,
    ScaleKelvin = 9,
    Pinch = 10,
    TwistKelvin = 11,
    Flatten = 12,
    Plane = 13,
    PlaneViewAligned = 14,
    FixedPlane = 15,
    LastValue = 16,
    EMeshVertexSculptBrushType_MAX = 17
};

enum EMessageDispatcherErrorMessageType
{
    FailedToSetTrigger_TooManyTriggers = 0,
    FailedToSetReceiver_TooManyReceivers = 1,
    FailedToSetReceiver_TooManyReceiversOnOneChannel = 2,
    FailedToSetTriggerReceiver_InvalidChannel = 3,
    FailedToEnqueueMessage = 4,
    BuildLimitReached = 5,
    UnknownError = 6,
    EMessageDispatcherErrorMessageType_MAX = 7
};

enum EMessageFeedRelationshipFilter
{
    Anyone = 0,
    SquadAndTeamMembers = 1,
    SquadMembersOnly = 2,
    SelfOnly = 3,
    EMessageFeedRelationshipFilter_MAX = 4
};

enum EMessageFeedSubject
{
    ToyOwner = 0,
    OtherPlayerInteractingWithToy = 1,
    EMessageFeedSubject_MAX = 2
};

enum EMetaDataRegistrySourceAssetUsage
{
    NoAssets = 0,
    SearchAssets = 1,
    RegisterAssets = 2,
    SearchAndRegisterAssets = 3,
    EMetaDataRegistrySourceAssetUsage_MAX = 4
};

enum EMetaHumanBodyBodyPartIndex
{
    Body = 0,
    Face = 1,
    Torso = 2,
    Legs = 3,
    Feet = 4,
    Count = 5,
    EMetaHumanBodyBodyPartIndex_MAX = 6
};

enum EMetaHumanBodyType
{
    f_med_nrw = 0,
    f_med_ovw = 1,
    f_med_unw = 2,
    f_srt_nrw = 3,
    f_srt_ovw = 4,
    f_srt_unw = 5,
    f_tal_nrw = 6,
    f_tal_ovw = 7,
    f_tal_unw = 8,
    m_med_nrw = 9,
    m_med_ovw = 10,
    m_med_unw = 11,
    m_srt_nrw = 12,
    m_srt_ovw = 13,
    m_srt_unw = 14,
    m_tal_nrw = 15,
    m_tal_ovw = 16,
    m_tal_unw = 17,
    Count = 18,
    EMetaHumanBodyType_MAX = 19
};

enum EMetaSoundBuilderResult
{
    Succeeded = 0,
    Failed = 1,
    EMetaSoundBuilderResult_MAX = 2
};

enum EMetaSoundFrontendGraphCommentMoveMode
{
    GroupMovement = 0,
    NoGroupMovement = 1,
    EMetaSoundFrontendGraphCommentMoveMode_MAX = 2
};

enum EMetaSoundMessageLevel
{
    Error = 0,
    Warning = 1,
    Info = 2,
    EMetaSoundMessageLevel_MAX = 3
};

enum EMetaSoundOutputAudioFormat
{
    Mono = 0,
    Stereo = 1,
    Quad = 2,
    FiveDotOne = 3,
    SevenDotOne = 4,
    COUNT = 5,
    EMetaSoundOutputAudioFormat_MAX = 6
};

enum EMetasoundFrontendClassType
{
    External = 0,
    Graph = 1,
    Input = 2,
    Output = 3,
    Literal = 4,
    Variable = 5,
    VariableDeferredAccessor = 6,
    VariableAccessor = 7,
    VariableMutator = 8,
    Template = 9,
    Invalid = 10,
    EMetasoundFrontendClassType_MAX = 11
};

enum EMetasoundFrontendLiteralType
{
    None = 0,
    Boolean = 1,
    Integer = 2,
    Float = 3,
    String = 4,
    UObject = 5,
    NoneArray = 6,
    BooleanArray = 7,
    IntegerArray = 8,
    FloatArray = 9,
    StringArray = 10,
    UObjectArray = 11,
    Invalid = 12,
    EMetasoundFrontendLiteralType_MAX = 13
};

enum EMetasoundFrontendNodeStyleDisplayVisibility
{
    Visible = 0,
    Hidden = 1,
    EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};

enum EMetasoundFrontendVertexAccessType
{
    Reference = 0,
    Value = 1,
    Unset = 2,
    EMetasoundFrontendVertexAccessType_MAX = 3
};

enum EMeterPeakType
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    EMeterPeakType_MAX = 4
};

enum EMicroTransactionDelegate
{
    MTD_PurchaseQueryComplete = 0,
    MTD_PurchaseComplete = 1,
    MTD_MAX = 2
};

enum EMicroTransactionResult
{
    MTR_Succeeded = 0,
    MTR_Failed = 1,
    MTR_Canceled = 2,
    MTR_RestoredFromServer = 3,
    MTR_MAX = 4
};

enum EMidiClockSubdivisionQuantization
{
    Bar = 0,
    Beat = 1,
    ThirtySecondNote = 2,
    SixteenthNote = 3,
    EighthNote = 4,
    QuarterNote = 5,
    HalfNote = 6,
    WholeNote = 7,
    DottedSixteenthNote = 8,
    DottedEighthNote = 9,
    DottedQuarterNote = 10,
    DottedHalfNote = 11,
    DottedWholeNote = 12,
    SixteenthNoteTriplet = 13,
    EighthNoteTriplet = 14,
    QuarterNoteTriplet = 15,
    HalfNoteTriplet = 16,
    None = 17,
    EMidiClockSubdivisionQuantization_MAX = 18
};

enum EMidiEventListenerInitBroadcast
{
    NoPreviousEvents = 0,
    MostRecentEvent = 1,
    AllPreviousEvents = 2,
    EMidiEventListenerInitBroadcast_MAX = 3
};

enum EMidiFileQuantizeDirection
{
    Nearest = 0,
    Up = 1,
    Down = 2,
    EMidiFileQuantizeDirection_MAX = 3
};

enum EMiniMapComponentDiscoverableVisibility
{
    Unset = 0,
    NotVisible = 1,
    Visible_NotDiscovered = 2,
    Discovered = 3,
    EMiniMapComponentDiscoverableVisibility_MAX = 4
};

enum EMiniMapIconParameterDataType
{
    None = 0,
    Scalar = 1,
    Vector = 2,
    Texture = 3,
    EMiniMapIconParameterDataType_MAX = 4
};

enum EMinigameActivityComponentValidityResult
{
    Valid = 0,
    IsNotValid = 1,
    EMinigameActivityComponentValidityResult_MAX = 2
};

enum EMinigameActivityStat
{
    Score = 0,
    Time = 1,
    Distance = 2,
    RaceProgress = 3,
    CurrentLap = 4,
    MaxLaps = 5,
    BestLapTime = 6,
    COUNT = 7,
    EMinigameActivityStat_MAX = 8
};

enum EMinigameActivityWidgetStatFormat
{
    Score = 0,
    Time = 1,
    AddTime = 2,
    Distance = 3,
    Laps = 4,
    EMinigameActivityWidgetStatFormat_MAX = 5
};

enum EMinigameCaptureObjectiveIconState
{
    NotCaptured = 0,
    Captured = 1,
    EMinigameCaptureObjectiveIconState_MAX = 2
};

enum EMinigameCaptureObjectiveState
{
    NotCaptured = 0,
    Captured = 1,
    EMinigameCaptureObjectiveState_MAX = 2
};

enum EMinigameDevelopmentPersistenceBehavior
{
    ImportLiveData = 0,
    SimulateNewUser = 1,
    EMinigameDevelopmentPersistenceBehavior_MAX = 2
};

enum EMinigameFullscreenMapWidgetType
{
    Last_Opened = 0,
    Default_Map = 1,
    Creative_Scoreboard = 2,
    EMinigameFullscreenMapWidgetType_MAX = 3
};

enum EMinigameGameEndCallout
{
    WinLose = 0,
    Placement = 1,
    Cooperative = 2,
    EMinigameGameEndCallout_MAX = 3
};

enum EMinigameGameEndCustomPostGameAnimationColorSet
{
    Default = 0,
    GoldenYellow = 1,
    BlueGreen = 2,
    VibrantPurple = 3,
    FuriousFlame = 4,
    Monochrome = 5,
    FailureRed = 6,
    EMinigameGameEndCustomPostGameAnimationColorSet_MAX = 7
};

enum EMinigameGameEndCustomPostGameAnimationStyle
{
    LightningBolt = 0,
    Shards = 1,
    WipeLeftToRight = 2,
    WipeRightToLeft = 3,
    WipeTopToBottom = 4,
    WipeBottomToTop = 5,
    None = 6,
    EMinigameGameEndCustomPostGameAnimationStyle_MAX = 7
};

enum EMinigameGameEndPostGameType
{
    Classic = 0,
    BattleRoyale = 1,
    Custom = 2,
    EMinigameGameEndPostGameType_MAX = 3
};

enum EMinigamePlayerPawnType
{
    Fortnite = 0,
    Bean = 1,
    EMinigamePlayerPawnType_MAX = 2
};

enum EMinigamePlayerPersistence
{
    None = 0,
    PartyLeaderOnly = 1,
    AllPlayers = 2,
    EMinigamePlayerPersistence_MAX = 3
};

enum EMinigameScoreType
{
    Time = 0,
    PointTotal = 1,
    EMinigameScoreType_MAX = 2
};

enum EMinigameScoreboardStates
{
    RoundEndDisplayWinner = 0,
    GameEndDisplayWinner = 1,
    RoundEndDisplayScoreboard = 2,
    GameEndDisplayScoreboard = 3,
    Max = 4
};

enum EMinigameStatSavePolicy
{
    Never = 0,
    Always = 1,
    OnlyIfLower = 2,
    OnlyIfHigher = 3,
    EMinigameStatSavePolicy_MAX = 4
};

enum EMinigameStatToSave
{
    None = 0,
    Round = 1,
    Career = 2,
    RoundAndCareer = 3,
    EMinigameStatToSave_MAX = 4
};

enum EMinigameTeamListType
{
    Blacklist = 0,
    Whitelist = 1,
    EMinigameTeamListType_MAX = 2
};

enum EMinigameTeamStructurePreset
{
    Legacy = 0,
    Custom = 1,
    SinglePlayer = 2,
    Cooperative = 3,
    FreeForAll = 4,
    TeamPvP = 5,
    EMinigameTeamStructurePreset_MAX = 6
};

enum EMinigameWinCondition
{
    MostRoundWins = 0,
    MostScoreWins = 1,
    EMinigameWinCondition_MAX = 2
};

enum EMirrorFindReplaceMethod
{
    Prefix = 0,
    Suffix = 1,
    RegularExpression = 2,
    EMirrorFindReplaceMethod_MAX = 3
};

enum EMirrorOperationMode
{
    MirrorAndAppend = 0,
    MirrorExisting = 1,
    EMirrorOperationMode_MAX = 2
};

enum EMirrorRowType
{
    Bone = 0,
    AnimationNotify = 1,
    Curve = 2,
    SyncMarker = 3,
    Custom = 4,
    EMirrorRowType_MAX = 5
};

enum EMirrorSaveMode
{
    InputObjects = 0,
    NewObjects = 1,
    EMirrorSaveMode_MAX = 2
};

enum EMirrorToolAction
{
    NoAction = 0,
    ShiftToCenter = 1,
    Left = 2,
    Right = 3,
    Up = 4,
    Down = 5,
    Forward = 6,
    Backward = 7,
    EMirrorToolAction_MAX = 8
};

enum EMissionGenerationCategory
{
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    Survivor = 3,
    Max_None = 4,
    EMissionGenerationCategory_MAX = 5
};

enum EMissionReplyTypes
{
    Handled = 0,
    NotHandled = 1,
    EMissionReplyTypes_MAX = 2
};

enum EMissionStormShieldState
{
    IDLE = 0,
    GROWING = 1,
    SHRINKING = 2,
    MAX = 3
};

enum EMixModifierTarget
{
    Volume = 0,
    Pitch = 1,
    LowpassFrequency = 2,
    EMixModifierTarget_MAX = 3
};

enum EMobileAntiAliasingMethod
{
    None = 0,
    FXAA = 1,
    TemporalAA = 2,
    MSAA = 3,
    EMobileAntiAliasingMethod_MAX = 4
};

enum EMobileFloatPrecisionMode
{
    Half = 0,
    Full_MaterialExpressionOnly = 1,
    Full = 2,
    EMobileFloatPrecisionMode_MAX = 3
};

enum EMobileInteractionIconTypes
{
    Interact = 0,
    Swap = 1,
    Revive = 2,
    Blocked = 3,
    MAX = 4
};

enum EMobileLocalLightSetting
{
    LOCAL_LIGHTS_DISABLED = 0,
    LOCAL_LIGHTS_ENABLED = 1,
    LOCAL_LIGHTS_BUFFER = 2,
    LOCAL_LIGHTS_MAX = 3
};

enum EMobilePixelProjectedReflectionQuality
{
    Disabled = 0,
    BestPerformance = 1,
    BetterQuality = 2,
    BestQuality = 3,
    EMobilePixelProjectedReflectionQuality_MAX = 4
};

enum EMobilePlanarReflectionMode
{
    Usual = 0,
    MobilePPRExclusive = 1,
    MobilePPR = 2,
    EMobilePlanarReflectionMode_MAX = 3
};

enum EMobileScreenAllowedOrientation
{
    All = 0,
    PortraitOnly = 1,
    LandscapeOnly = 2,
    EMobileScreenAllowedOrientation_MAX = 3
};

enum EMobileShadingPath
{
    Forward = 0,
    Deferred = 1,
    EMobileShadingPath_MAX = 2
};

enum EMobileShadowQuality
{
    NoFiltering = 0,
    PCF_1x1 = 1,
    PCF_3x3 = 2,
    PCF_5x5 = 3,
    EMobileShadowQuality_MAX = 4
};

enum EModExecResult
{
    Valid = 0,
    Invalid = 1,
    EModExecResult_MAX = 2
};

enum EModalContainerSize
{
    ExtraSmall = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    Max = 4
};

enum EModalContainerSlot
{
    Top = 0,
    Middle = 1,
    Bottom = 2,
    Background = 3,
    Max = 4
};

enum EModelingComponentsPlaneVisualizationMode
{
    SimpleGrid = 0,
    HierarchicalGrid = 1,
    FixedScreenAreaGrid = 2,
    EModelingComponentsPlaneVisualizationMode_MAX = 3
};

enum EModifierInheritanceType
{
    RelativeMotion = 0,
    AbsoluteMotion = 1,
    RawAnimatedMotion = 2,
    EModifierInheritanceType_MAX = 3
};

enum EModifierPriority
{
    Min = 0,
    VeryLow = 1,
    Low = 2,
    Default = 3,
    High = 4,
    VeryHigh = 5,
    Max = 6
};

enum EModifyCurveApplyMode
{
    Add = 0,
    Scale = 1,
    Blend = 2,
    WeightedMovingAverage = 3,
    RemapCurve = 4,
    EModifyCurveApplyMode_MAX = 5
};

enum EModularGatePlatformTypes
{
    None = 0,
    Mobile = 1,
    Console = 2,
    Desktop = 3,
    All = 4,
    EModularGatePlatformTypes_MAX = 5
};

enum EModularRigNotification
{
    ModuleAdded = 0,
    ModuleRenamed = 1,
    ModuleRemoved = 2,
    ModuleReparented = 3,
    ConnectionChanged = 4,
    ModuleConfigValueChanged = 5,
    ModuleShortNameChanged = 6,
    InteractionBracketOpened = 7,
    InteractionBracketClosed = 8,
    InteractionBracketCanceled = 9,
    ModuleClassChanged = 10,
    Max = 11
};

enum EModularRigResolveState
{
    Success = 0,
    Error = 1,
    Max = 2
};

enum EModulationDestination
{
    Volume = 0,
    Pitch = 1,
    Lowpass = 2,
    Highpass = 3,
    Count = 4,
    EModulationDestination_MAX = 5
};

enum EModulationRouting
{
    Disable = 0,
    Inherit = 1,
    Override = 2,
    Union = 3,
    EModulationRouting_MAX = 4
};

enum EModulatorTarget
{
    StartPoint = 0,
    Pitch = 1,
    Num = 2,
    None = 3,
    EModulatorTarget_MAX = 4
};

enum EModuleType
{
    EPMT_General = 0,
    EPMT_TypeData = 1,
    EPMT_Beam = 2,
    EPMT_Trail = 3,
    EPMT_Spawn = 4,
    EPMT_Required = 5,
    EPMT_Event = 6,
    EPMT_Light = 7,
    EPMT_SubUV = 8,
    EPMT_MAX = 9
};

enum EMonoChannelUpmixMethod
{
    Linear = 0,
    EqualPower = 1,
    FullVolume = 2,
    EMonoChannelUpmixMethod_MAX = 3
};

enum EMontageBlendMode
{
    Standard = 0,
    Inertialization = 1,
    EMontageBlendMode_MAX = 2
};

enum EMontageInterrupt
{
    Any = 0,
    RootMotionOnly = 1,
    None = 2,
    EMontageInterrupt_MAX = 3
};

enum EMontageNotifyTickType
{
    Queued = 0,
    BranchingPoint = 1,
    EMontageNotifyTickType_MAX = 2
};

enum EMontagePlayReturnType
{
    MontageLength = 0,
    Duration = 1,
    EMontagePlayReturnType_MAX = 2
};

enum EMontageSelectionPredicateType
{
    NotSet = 0,
    MetaTags = 1,
    CharacterParts = 2,
    ActiveSwapPresence = 3,
    Invalid = 4,
    EMontageSelectionPredicateType_MAX = 5
};

enum EMontageSubStepResult
{
    Moved = 0,
    NotMoved = 1,
    InvalidSection = 2,
    InvalidMontage = 3,
    EMontageSubStepResult_MAX = 4
};

enum EMontageSyncTargetType
{
    Pet = 0,
    CustomPartType = 1,
    Weapon = 2,
    EMontageSyncTargetType_MAX = 3
};

enum EMontageVisibilityRule
{
    RequiredItem = 0,
    ForbiddenItem = 1,
    MetaTagQuery = 2,
    EMontageVisibilityRule_MAX = 3
};

enum EMorphologyOperation
{
    Dilate = 0,
    Contract = 1,
    Close = 2,
    Open = 3,
    EMorphologyOperation_MAX = 4
};

enum EMotdButtonStyle
{
    Main = 0,
    Secondary = 1,
    None = 2,
    EMotdButtonStyle_MAX = 3
};

enum EMotdCloseReason
{
    Unknown = 0,
    NoMotds = 1,
    NullPrm = 2,
    PrmParsingFailed = 3,
    User = 4,
    Action = 5,
    DeepLink = 6,
    EMotdCloseReason_MAX = 7
};

enum EMotdGovernanceEventType
{
    impression = 0,
    view = 1,
    EMotdGovernanceEventType_MAX = 2
};

enum EMotdInteractionType
{
    SeenTeaser = 0,
    SeenFullScreen = 1,
    ButtonPressed = 2,
    Unknown = 3,
    EMotdInteractionType_MAX = 4
};

enum EMotionTarget
{
    Camera = 0,
    AimedObject = 1,
    Count = 2,
    EMotionTarget_MAX = 3
};

enum EMotionWarpRotationMethod
{
    Slerp = 0,
    SlerpWithClampedRate = 1,
    ConstantRate = 2,
    EMotionWarpRotationMethod_MAX = 3
};

enum EMotionWarpRotationType
{
    Default = 0,
    Facing = 1,
    EMotionWarpRotationType_MAX = 2
};

enum EMouseCaptureMode
{
    NoCapture = 0,
    CapturePermanently = 1,
    CapturePermanently_IncludingInitialMouseDown = 2,
    CaptureDuringMouseDown = 3,
    CaptureDuringRightMouseDown = 4,
    EMouseCaptureMode_MAX = 5
};

enum EMouseCursor
{
    None = 0,
    Default = 1,
    TextEditBeam = 2,
    ResizeLeftRight = 3,
    ResizeUpDown = 4,
    ResizeSouthEast = 5,
    ResizeSouthWest = 6,
    CardinalCross = 7,
    Crosshairs = 8,
    Hand = 9,
    GrabHand = 10,
    GrabHandClosed = 11,
    SlashedCircle = 12,
    EyeDropper = 13,
    Custom = 14,
    EMouseCursor_MAX = 15
};

enum EMouseLockMode
{
    DoNotLock = 0,
    LockOnCapture = 1,
    LockAlways = 2,
    LockInFullscreen = 3,
    EMouseLockMode_MAX = 4
};

enum EMoveComponentAction
{
    Move = 0,
    Stop = 1,
    Return = 2,
    EMoveComponentAction_MAX = 3
};

enum EMoveInputType
{
    Invalid = 0,
    DirectionalIntent = 1,
    Velocity = 2,
    EMoveInputType_MAX = 3
};

enum EMoveMixMode
{
    AdditiveVelocity = 0,
    OverrideVelocity = 1,
    OverrideAll = 2,
    EMoveMixMode_MAX = 3
};

enum EMoveToolPlacementCheckResult
{
    Untested = 0,
    Valid = 1,
    Invalid = 2,
    OverBudget = 3,
    EMoveToolPlacementCheckResult_MAX = 4
};

enum EMovementLeanState
{
    None = 0,
    BlendingIn = 1,
    BlendingOut = 2,
    SettleDelay = 3,
    Settling = 4,
    Idle = 5,
    EMovementLeanState_MAX = 6
};

enum EMovementMode
{
    MOVE_None = 0,
    MOVE_Walking = 1,
    MOVE_NavWalking = 2,
    MOVE_Falling = 3,
    MOVE_Swimming = 4,
    MOVE_Flying = 5,
    MOVE_Custom = 6,
    MOVE_MAX = 7
};

enum EMovementType
{
    SweepPhysics = 0,
    TeleportPhysics = 1,
    ResetPhysics = 2,
    EMovementType_MAX = 3
};

enum EMoviePlaybackType
{
    MT_Normal = 0,
    MT_Looped = 1,
    MT_LoadingLoop = 2,
    MT_MAX = 3
};

enum EMovieSceneBlendType
{
    Invalid = 0,
    Absolute = 1,
    Additive = 2,
    Relative = 3,
    AdditiveFromBase = 4,
    EMovieSceneBlendType_MAX = 5
};

enum EMovieSceneBuiltInEasing
{
    Linear = 0,
    SinIn = 1,
    SinOut = 2,
    SinInOut = 3,
    QuadIn = 4,
    QuadOut = 5,
    QuadInOut = 6,
    Cubic = 7,
    CubicIn = 8,
    CubicOut = 9,
    CubicInOut = 10,
    HermiteCubicInOut = 11,
    QuartIn = 12,
    QuartOut = 13,
    QuartInOut = 14,
    QuintIn = 15,
    QuintOut = 16,
    QuintInOut = 17,
    ExpoIn = 18,
    ExpoOut = 19,
    ExpoInOut = 20,
    CircIn = 21,
    CircOut = 22,
    CircInOut = 23,
    Custom = 24,
    EMovieSceneBuiltInEasing_MAX = 25
};

enum EMovieSceneCaptureProtocolState
{
    Idle = 0,
    Initialized = 1,
    Capturing = 2,
    Finalizing = 3,
    EMovieSceneCaptureProtocolState_MAX = 4
};

enum EMovieSceneCompletionMode
{
    KeepState = 0,
    RestoreState = 1,
    ProjectDefault = 2,
    EMovieSceneCompletionMode_MAX = 3
};

enum EMovieSceneCompletionModeOverride
{
    None = 0,
    ForceKeepState = 1,
    ForceRestoreState = 2,
    EMovieSceneCompletionModeOverride_MAX = 3
};

enum EMovieSceneControlRigSpaceType
{
    Parent = 0,
    World = 1,
    ControlRig = 2,
    EMovieSceneControlRigSpaceType_MAX = 3
};

enum EMovieSceneEvaluationType
{
    FrameLocked = 0,
    WithSubFrames = 1,
    EMovieSceneEvaluationType_MAX = 2
};

enum EMovieSceneKeyInterpolation
{
    Auto = 0,
    User = 1,
    Break = 2,
    Linear = 3,
    Constant = 4,
    SmartAuto = 5,
    EMovieSceneKeyInterpolation_MAX = 6
};

enum EMovieSceneObjectBindingSpace
{
    Local = 0,
    Root = 1,
    Unused = 2,
    EMovieSceneObjectBindingSpace_MAX = 3
};

enum EMovieScenePlayerStatus
{
    Stopped = 0,
    Playing = 1,
    Scrubbing = 2,
    Jumping = 3,
    Stepping = 4,
    Paused = 5,
    MAX = 6
};

enum EMovieScenePositionType
{
    Frame = 0,
    Time = 1,
    MarkedFrame = 2,
    Timecode = 3,
    EMovieScenePositionType_MAX = 4
};

enum EMovieSceneSequenceCompilerMask
{
    Hierarchy = 0,
    EvaluationTemplate = 1,
    EvaluationTemplateField = 2,
    EntityComponentField = 3,
    None = 4,
    EMovieSceneSequenceCompilerMask_MAX = 5
};

enum EMovieSceneSequenceFlags
{
    None = 0,
    Volatile = 1,
    BlockingEvaluation = 2,
    DynamicWeighting = 3,
    InheritedFlags = 4,
    EMovieSceneSequenceFlags_MAX = 5
};

enum EMovieSceneServerClientMask
{
    None = 0,
    Server = 1,
    Client = 2,
    All = 3,
    EMovieSceneServerClientMask_MAX = 4
};

enum EMovieSceneSubSectionFlags
{
    None = 0,
    OverrideKeepState = 1,
    OverrideRestoreState = 2,
    IgnoreHierarchicalBias = 3,
    BlendHierarchicalBias = 4,
    AnyRestoreStateOverride = 5,
    EMovieSceneSubSectionFlags_MAX = 6
};

enum EMovieSceneTimeUnit
{
    DisplayRate = 0,
    TickResolution = 1,
    EMovieSceneTimeUnit_MAX = 2
};

enum EMovingPlatformPickupState
{
    Normal = 0,
    OnTooLong = 1,
    EMovingPlatformPickupState_MAX = 2
};

enum EMultiBlockType
{
    None = 0,
    ButtonRow = 1,
    EditableText = 2,
    Heading = 3,
    MenuEntry = 4,
    Separator = 5,
    ToolBarButton = 6,
    ToolBarComboButton = 7,
    Widget = 8,
    EMultiBlockType_MAX = 9
};

enum EMultiBoxType
{
    MenuBar = 0,
    ToolBar = 1,
    VerticalToolBar = 2,
    SlimHorizontalToolBar = 3,
    UniformToolBar = 4,
    Menu = 5,
    ButtonRow = 6,
    SlimHorizontalUniformToolBar = 7,
    EMultiBoxType_MAX = 8
};

enum EMultiFriendAction
{
    AcceptFriendRequest = 0,
    EMultiFriendAction_MAX = 1
};

enum EMultiInteractionMutatorType
{
    Unset = 0,
    On = 1,
    Off = 2,
    EMultiInteractionMutatorType_MAX = 3
};

enum EMultiTransformerMode
{
    DefaultGizmo = 0,
    QuickAxisTranslation = 1,
    EMultiTransformerMode_MAX = 2
};

enum EMultipleKeyBindingIndex
{
    Primary = 0,
    Secondary = 1,
    NumChords = 2,
    EMultipleKeyBindingIndex_MAX = 3
};

enum EMusicBattleClientUpdate
{
    PilgrimGameCreated = 0,
    SongFinished = 1,
    TearDownFinished = 2,
    StopAndSkipPostGame = 3,
    StopAndRestartSong = 4,
    EMusicBattleClientUpdate_MAX = 5
};

enum EMusicBattleEndReason
{
    NoReason = 0,
    CompletedNormally = 1,
    HardStopAndSkipPostGame = 2,
    HardStopAndContinueFlow = 3,
    RestartingSong = 4,
    EMusicBattleEndReason_MAX = 5
};

enum EMusicBattleProjectileType
{
    None = 0,
    BeamSuccess = 1,
    BeamFailure = 2,
    BeamClash = 3,
    BothMiss = 4,
    EMusicBattleProjectileType_MAX = 5
};

enum EMusicBattleType
{
    None = 0,
    SinglePlayerLocalVs = 1,
    MultiplayerVs = 2,
    SinglePlayerSparks = 3,
    TeamQuickplay = 4,
    EMusicBattleType_MAX = 5
};

enum EMusicChannel
{
    VoiceA = 0,
    VoiceB = 1,
    Max_None = 2,
    EMusicChannel_MAX = 3
};

enum EMusicClockDriveMethod
{
    WallClock = 0,
    MetaSound = 1,
    EMusicClockDriveMethod_MAX = 2
};

enum EMusicClockState
{
    Stopped = 0,
    Paused = 1,
    Running = 2,
    EMusicClockState_MAX = 3
};

enum EMusicEventResolutionRule
{
    NewestWins = 0,
    OldestWins = 1,
    ClosestWins = 2,
    EMusicEventResolutionRule_MAX = 3
};

enum EMusicFadeStyles
{
    CrossFade = 0,
    FadeOutThenIn = 1,
    Max_None = 2,
    EMusicFadeStyles_MAX = 3
};

enum EMusicInterval
{
    P1 = 0,
    Min2 = 1,
    Maj2 = 2,
    Min3 = 3,
    Maj3 = 4,
    P4 = 5,
    TT = 6,
    P5 = 7,
    Min6 = 8,
    Maj6 = 9,
    Min7 = 10,
    Maj7 = 11,
    Num = 12,
    EMusicInterval_MAX = 13
};

enum EMusicKey
{
    C = 0,
    Db = 1,
    D = 2,
    Eb = 3,
    E = 4,
    F = 5,
    Gb = 6,
    G = 7,
    Ab = 8,
    A = 9,
    Bb = 10,
    B = 11,
    Num = 12,
    EMusicKey_MAX = 13
};

enum EMusicKeyMode
{
    Major = 0,
    Minor = 1,
    Num = 2,
    EMusicKeyMode_MAX = 3
};

enum EMusicScheduleMode
{
    RelativeToDayPhaseChange = 0,
    RandomTimeDuringDayPhase = 1,
    PlayAtSpecificTimesOfDay = 2,
    OnlyBlueprintPlaybackConditions = 3,
    Count = 4,
    EMusicScheduleMode_MAX = 5
};

enum EMusicTimeDiscontinuityType
{
    Loop = 0,
    Seek = 1,
    EMusicTimeDiscontinuityType_MAX = 2
};

enum EMusicTimeSpanLengthUnits
{
    Bars = 0,
    Beats = 1,
    ThirtySecondNotes = 2,
    SixteenthNotes = 3,
    EighthNotes = 4,
    QuarterNotes = 5,
    HalfNotes = 6,
    WholeNotes = 7,
    DottedSixteenthNotes = 8,
    DottedEighthNotes = 9,
    DottedQuarterNotes = 10,
    DottedHalfNotes = 11,
    DottedWholeNotes = 12,
    SixteenthNoteTriplets = 13,
    EighthNoteTriplets = 14,
    QuarterNoteTriplets = 15,
    HalfNoteTriplets = 16,
    EMusicTimeSpanLengthUnits_MAX = 17
};

enum EMusicTimeSpanOffsetUnits
{
    Ms = 0,
    Bars = 1,
    Beats = 2,
    ThirtySecondNotes = 3,
    SixteenthNotes = 4,
    EighthNotes = 5,
    QuarterNotes = 6,
    HalfNotes = 7,
    WholeNotes = 8,
    DottedSixteenthNotes = 9,
    DottedEighthNotes = 10,
    DottedQuarterNotes = 11,
    DottedHalfNotes = 12,
    DottedWholeNotes = 13,
    SixteenthNoteTriplets = 14,
    EighthNoteTriplets = 15,
    QuarterNoteTriplets = 16,
    HalfNoteTriplets = 17,
    EMusicTimeSpanOffsetUnits_MAX = 18
};

enum EMusicTrackPlayback
{
    Disabled = 0,
    Enabled = 1,
    EMusicTrackPlayback_MAX = 2
};

enum EMusicalBeatType
{
    Downbeat = 0,
    Strong = 1,
    Normal = 2,
    EMusicalBeatType_MAX = 3
};

enum EMusicalNoteName
{
    C = 0,
    Db = 1,
    D = 2,
    Eb = 3,
    E = 4,
    F = 5,
    Gb = 6,
    G = 7,
    Ab = 8,
    A = 9,
    Bb = 10,
    B = 11,
    EMusicalNoteName_MAX = 12
};

enum EMutableCompileMeshType
{
    Full = 0,
    Local = 1,
    LocalAndChildren = 2,
    AddWorkingSetNoChildren = 3,
    AddWorkingSetAndChildren = 4,
    EMutableCompileMeshType_MAX = 5
};

enum EMutableParameterType
{
    None = 0,
    Bool = 1,
    Int = 2,
    Float = 3,
    Color = 4,
    Projector = 5,
    Texture = 6,
    EMutableParameterType_MAX = 7
};

enum EMutatorAddTarget
{
    FortGameStateAthena = 0,
    FortMinigame = 1,
    FortGameModeAthena = 2,
    EMutatorAddTarget_MAX = 3
};

enum EMutatorListInitState
{
    Default = 0,
    Enabled = 1,
    Disabled = 2,
    EMutatorListInitState_MAX = 3
};

enum EMutatorMovementMode
{
    None = 0,
    BuffetBubbles = 1,
    BuffetBubblesIntro = 2,
    BuffetFlying = 3,
    BuffetFlyingRicochet = 4,
    Rewind = 5,
    EMutatorMovementMode_MAX = 6
};

enum EMutatorOverrideSource
{
    Default = 0,
    External = 1,
    EMutatorOverrideSource_MAX = 2
};

enum EMutualFriendsPrivacyPolicy
{
    All = 0,
    Friends = 1,
    None = 2,
    InvalidOrMax = 3,
    EMutualFriendsPrivacyPolicy_MAX = 4
};

enum ENCPoolMethod
{
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
    ENCPoolMethod_MAX = 5
};

enum ENDIActorComponentSourceMode
{
    Default = 0,
    AttachParent = 1,
    LocalPlayer = 2,
    ENDIActorComponentSourceMode_MAX = 3
};

enum ENDICollisionQuery_AsyncGpuTraceProvider
{
    Default = 0,
    HWRT = 1,
    GSDF = 2,
    None = 3,
    ENDICollisionQuery_MAX = 4
};

enum ENDIDataChannelSpawnMode
{
    Override = 0,
    Accumulate = 1,
    None = 2,
    Max = 3
};

enum ENDIDataChannelSpawnScaleMode
{
    Override = 0,
    Scale = 1,
    Max = 2
};

enum ENDIExport_GPUAllocationMode
{
    FixedSize = 0,
    PerParticle = 1,
    ENDIExport_MAX = 2
};

enum ENDIGeometryCollection_SourceMode
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultCollectionOnly = 3,
    ParameterBinding = 4,
    ENDIGeometryCollection_MAX = 5
};

enum ENDILandscape_SourceMode
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
    ENDILandscape_MAX = 3
};

enum ENDIObjectPropertyReaderSourceMode
{
    Binding = 0,
    AttachParentActor = 1,
    BindingThenAttachParentActor = 2,
    ENDIObjectPropertyReaderSourceMode_MAX = 3
};

enum ENDISceneCapture2DOffsetMode
{
    Disabled = 0,
    RelativeLocal = 1,
    RelativeWorld = 2,
    AbsoluteWorld = 3,
    ENDISceneCapture2DOffsetMode_MAX = 4
};

enum ENDISceneCapture2DSourceMode
{
    UserParameterThenAttachParent = 0,
    UserParameterOnly = 1,
    AttachParentOnly = 2,
    Managed = 3,
    ENDISceneCapture2DSourceMode_MAX = 4
};

enum ENDISkelMesh_AdjacencyTriangleIndexFormat
{
    Full = 0,
    Half = 1,
    ENDISkelMesh_MAX = 2
};

enum ENDISkelMesh_GpuMaxInfluences
{
    AllowMax4 = 0,
    AllowMax8 = 1,
    Unlimited = 2,
    ENDISkelMesh_MAX = 3
};

enum ENDISkelMesh_GpuUniformSamplingFormat
{
    Full = 0,
    Limited_24_8 = 1,
    Limited_23_9 = 2,
    ENDISkelMesh_MAX = 3
};

enum ENDISkeletalMesh_SkinningMode
{
    Invalid = 0,
    None = 1,
    SkinOnTheFly = 2,
    PreSkin = 3,
    ENDISkeletalMesh_MAX = 4
};

enum ENDISkeletalMesh_SourceMode
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultMeshOnly = 3,
    ENDISkeletalMesh_MAX = 4
};

enum ENDISocketReaderSourceMode
{
    Default = 0,
    ParameterBindingOnly = 1,
    AttachedParentOnly = 2,
    SourceOnly = 3,
    ENDISocketReaderSourceMode_MAX = 4
};

enum ENDIStaticMesh_SourceMode
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultMeshOnly = 3,
    MeshParameterBinding = 4,
    ENDIStaticMesh_MAX = 5
};

enum ENNEAttributeDataType
{
    None = 0,
    Float = 1,
    FloatArray = 2,
    Int32 = 3,
    Int32Array = 4,
    String = 5,
    StringArray = 6,
    ENNEAttributeDataType_MAX = 7
};

enum ENNEFormatTensorType
{
    None = 0,
    Input = 1,
    Output = 2,
    Intermediate = 3,
    Initializer = 4,
    Empty = 5,
    NUM = 6,
    ENNEFormatTensorType_MAX = 7
};

enum ENNEInferenceFormat
{
    Invalid = 0,
    ONNX = 1,
    ORT = 2,
    NNERT = 3,
    ENNEInferenceFormat_MAX = 4
};

enum ENNETensorDataType
{
    None = 0,
    Char = 1,
    Boolean = 2,
    Half = 3,
    Float = 4,
    Double = 5,
    Int8 = 6,
    Int16 = 7,
    Int32 = 8,
    Int64 = 9,
    UInt8 = 10,
    UInt16 = 11,
    UInt32 = 12,
    UInt64 = 13,
    Complex64 = 14,
    Complex128 = 15,
    BFloat16 = 16,
    ENNETensorDataType_MAX = 17
};

enum ENPCCharacterMovement
{
    Default = 0,
    RetargetFromFortniteCharacter = 1,
    AnimationPreset = 2,
    ENPCCharacterMovement_MAX = 3
};

enum ENPCIndicatorCondition
{
    Never = 0,
    Allies = 1,
    Hostiles = 2,
    Always = 3,
    ENPCIndicatorCondition_MAX = 4
};

enum ENPCRewardType
{
    LootTier = 0,
    Recipe = 1,
    ENPCRewardType_MAX = 2
};

enum ENPCServiceSupportState
{
    ServiceNotSupported = 0,
    ServiceConditionallyLocked = 1,
    ServiceSupported = 2,
    ENPCServiceSupportState_MAX = 3
};

enum ENSMSubUVAnimation_Mode
{
    InfiniteLoop = 0,
    Linear = 1,
    Random = 2,
    ENSMSubUVAnimation_MAX = 3
};

enum ENSM_NoiseMode
{
    VectorField = 0,
    JacobNoise = 1,
    LUTJacob = 2,
    LUTJacobBicubic = 3,
    ENSM_MAX = 4
};

enum ENSM_ShapePrimitive
{
    Box = 0,
    Cylinder = 1,
    Plane = 2,
    Ring = 3,
    Sphere = 4,
    ENSM_MAX = 5
};

enum ENSM_VelocityType
{
    Linear = 0,
    FromPoint = 1,
    InCone = 2,
    ENSM_MAX = 3
};

enum ENaniteFallbackTarget
{
    Auto = 0,
    PercentTriangles = 1,
    RelativeError = 2,
    ENaniteFallbackTarget_MAX = 3
};

enum ENaturalSlideState
{
    None = 0,
    Entering = 1,
    InProgress = 2,
    Exiting = 3,
    ENaturalSlideState_MAX = 4
};

enum ENaturalSoundFalloffMode
{
    Continues = 0,
    Silent = 1,
    Hold = 2,
    ENaturalSoundFalloffMode_MAX = 3
};

enum ENavCostDisplay
{
    TotalCost = 0,
    HeuristicOnly = 1,
    RealCostOnly = 2,
    ENavCostDisplay_MAX = 3
};

enum ENavDataGatheringMode
{
    Default = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringMode_MAX = 3
};

enum ENavDataGatheringModeConfig
{
    Invalid = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringModeConfig_MAX = 3
};

enum ENavLinkDirection
{
    BothWays = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ENavLinkDirection_MAX = 3
};

enum ENavLinkPreviewMode
{
    None = 0,
    Definition = 1,
    Cache = 2,
    ENavLinkPreviewMode_MAX = 3
};

enum ENavOptionFallbackDir
{
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Num = 4,
    Invalid = 5,
    ENavOptionFallbackDir_MAX = 6
};

enum ENavPathEvent
{
    Cleared = 0,
    NewPath = 1,
    UpdatedDueToGoalMoved = 2,
    UpdatedDueToNavigationChanged = 3,
    Invalidated = 4,
    RePathFailed = 5,
    MetaPathUpdate = 6,
    Custom = 7,
    ENavPathEvent_MAX = 8
};

enum ENavPathRendererStatus
{
    INVALID = 0,
    CALCULATING = 1,
    SUCCESS = 2,
    FAILED = 3,
    ENavPathRendererStatus_MAX = 4
};

enum ENavSystemOverridePolicy
{
    Override = 0,
    Append = 1,
    Skip = 2,
    ENavSystemOverridePolicy_MAX = 3
};

enum ENavigationDataResolution
{
    Low = 0,
    Default = 1,
    High = 2,
    Invalid = 3,
    MAX = 4
};

enum ENavigationGenesis
{
    Keyboard = 0,
    Controller = 1,
    User = 2,
    ENavigationGenesis_MAX = 3
};

enum ENavigationInvokerPriority
{
    VeryLow = 0,
    Low = 1,
    Default = 2,
    High = 3,
    VeryHigh = 4,
    MAX = 5
};

enum ENavigationLedgeSlopeFilterMode
{
    Recast = 0,
    None = 1,
    UseStepHeightFromAgentMaxSlope = 2,
    ENavigationLedgeSlopeFilterMode_MAX = 3
};

enum ENavigationObstacleOverride
{
    UseMeshSettings = 0,
    ForceEnabled = 1,
    ForceDisabled = 2,
    ExportAsPrimitive = 3,
    ENavigationObstacleOverride_MAX = 4
};

enum ENavigationOptionFlag
{
    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3
};

enum ENavigationQueryResult
{
    Invalid = 0,
    Error = 1,
    Fail = 2,
    Success = 3,
    ENavigationQueryResult_MAX = 4
};

enum ENavigationSortPendingTilesMethod
{
    SortWithSeedLocations = 0,
    SortByPriority = 1,
    None = 2,
    ENavigationSortPendingTilesMethod_MAX = 3
};

enum ENavigationSource
{
    FocusedWidget = 0,
    WidgetUnderCursor = 1,
    ENavigationSource_MAX = 2
};

enum ENavigationSupport
{
    Unknown = 0,
    NavigationSupported = 1,
    NavigationDisabled = 2,
    ENavigationSupport_MAX = 3
};

enum ENegativeSpaceSampleMethod
{
    Uniform = 0,
    VoxelSearch = 1,
    NavigableVoxelSearch = 2,
    ENegativeSpaceSampleMethod_MAX = 3
};

enum ENetCloseResult
{
    NetDriverAlreadyExists = 0,
    NetDriverCreateFailure = 1,
    NetDriverListenFailure = 2,
    ConnectionLost = 3,
    ConnectionTimeout = 4,
    FailureReceived = 5,
    OutdatedClient = 6,
    OutdatedServer = 7,
    PendingConnectionFailure = 8,
    NetGuidMismatch = 9,
    NetChecksumMismatch = 10,
    SecurityMalformedPacket = 11,
    SecurityInvalidData = 12,
    SecurityClosed = 13,
    Unknown = 14,
    Success = 15,
    Extended = 16,
    HostClosedConnection = 17,
    Disconnect = 18,
    Upgrade = 19,
    PreLoginFailure = 20,
    JoinFailure = 21,
    JoinSplitFailure = 22,
    AddressResolutionFailed = 23,
    RPCDoS = 24,
    Cleanup = 25,
    MissingLevelPackage = 26,
    PacketHandlerIncomingError = 27,
    ZeroLastByte = 28,
    ZeroSize = 29,
    ReadHeaderFail = 30,
    ReadHeaderExtraFail = 31,
    AckSequenceMismatch = 32,
    BunchBadChannelIndex = 33,
    BunchChannelNameFail = 34,
    BunchWrongChannelType = 35,
    BunchHeaderOverflow = 36,
    BunchDataOverflow = 37,
    BunchServerPackageMapExports = 38,
    BunchPrematureControlChannel = 39,
    BunchPrematureChannel = 40,
    BunchPrematureControlClose = 41,
    UnknownChannelType = 42,
    PrematureSend = 43,
    CorruptData = 44,
    SocketSendFailure = 45,
    BadChildConnectionIndex = 46,
    LogLimitInstant = 47,
    LogLimitSustained = 48,
    EncryptionFailure = 49,
    EncryptionTokenMissing = 50,
    ReceivedNetGUIDBunchFail = 51,
    MaxReliableExceeded = 52,
    ReceivedNextBunchFail = 53,
    ReceivedNextBunchQueueFail = 54,
    PartialInitialReliableDestroy = 55,
    PartialMergeReliableDestroy = 56,
    PartialInitialNonByteAligned = 57,
    PartialNonByteAligned = 58,
    PartialFinalPackageMapExports = 59,
    PartialTooLarge = 60,
    AlreadyOpen = 61,
    ReliableBeforeOpen = 62,
    ReliableBufferOverflow = 63,
    RPCReliableBufferOverflow = 64,
    ControlChannelClose = 65,
    ControlChannelEndianCheck = 66,
    ControlChannelPlayerChannelFail = 67,
    ControlChannelMessageUnknown = 68,
    ControlChannelMessageFail = 69,
    ControlChannelMessagePayloadFail = 70,
    ControlChannelBunchOverflowed = 71,
    ControlChannelQueueBunchOverflowed = 72,
    ClientHasMustBeMappedGUIDs = 73,
    ClientSentDestructionInfo = 74,
    UnregisteredMustBeMappedGUID = 75,
    ObjectReplicatorReceivedBunchFail = 76,
    ContentBlockFail = 77,
    ContentBlockHeaderRepLayoutFail = 78,
    ContentBlockHeaderIsActorFail = 79,
    ContentBlockHeaderObjFail = 80,
    ContentBlockHeaderPrematureEnd = 81,
    ContentBlockHeaderSubObjectActor = 82,
    ContentBlockHeaderBadParent = 83,
    ContentBlockHeaderInvalidCreate = 84,
    ContentBlockHeaderStablyNamedFail = 85,
    ContentBlockHeaderNoSubObjectClass = 86,
    ContentBlockHeaderUObjectSubObject = 87,
    ContentBlockHeaderAActorSubObject = 88,
    ContentBlockHeaderFail = 89,
    ContentBlockPayloadBitsFail = 90,
    FieldHeaderRepIndex = 91,
    FieldHeaderBadRepIndex = 92,
    FieldHeaderPayloadBitsFail = 93,
    FieldPayloadFail = 94,
    ReplicationChannelCountMaxedOut = 95,
    BeaconControlFlowError = 96,
    BeaconUnableToParsePacket = 97,
    BeaconAuthenticationFailure = 98,
    BeaconLoginInvalidIdError = 99,
    BeaconLoginInvalidAuthHandlerError = 100,
    BeaconAuthError = 101,
    BeaconSpawnClientWorldPackageNameError = 102,
    BeaconSpawnExistingActorError = 103,
    BeaconSpawnFailureError = 104,
    BeaconSpawnNetGUIDAckNoActor = 105,
    BeaconSpawnNetGUIDAckNoHost = 106,
    BeaconSpawnUnexpectedError = 107,
    IrisProtocolMismatch = 108,
    IrisNetRefHandleError = 109,
    FaultDisconnect = 110,
    NotRecoverable = 111,
    ENetCloseResult_MAX = 112
};

enum ENetDormancy
{
    DORM_Never = 0,
    DORM_Awake = 1,
    DORM_DormantAll = 2,
    DORM_DormantPartial = 3,
    DORM_Initial = 4,
    DORM_MAX = 5
};

enum ENetObjectCountLimiterMode
{
    RoundRobin = 0,
    Fill = 1,
    ENetObjectCountLimiterMode_MAX = 2
};

enum ENetPhysicsMoveResponseEffect
{
    Force = 0,
    VelocityChange = 1,
    Transform = 2,
    ENetPhysicsMoveResponseEffect_MAX = 3
};

enum ENetPhysicsMoveResponseFrame
{
    Absolute = 0,
    Object = 1,
    Camera = 2,
    ENetPhysicsMoveResponseFrame_MAX = 3
};

enum ENetPhysicsMoveResponseModifier
{
    Add = 0,
    TargetTransform = 1,
    TargetVelocity = 2,
    OverrideTransform = 3,
    OverrideVelocity = 4,
    ENetPhysicsMoveResponseModifier_MAX = 5
};

enum ENetPhysicsMoveResponseType
{
    Linear = 0,
    Angular = 1,
    ENetPhysicsMoveResponseType_MAX = 2
};

enum ENetPhysicsMoveTriggerType
{
    Input = 0,
    Constraint = 1,
    Physics = 2,
    Trace = 3,
    Constant = 4,
    ENetPhysicsMoveTriggerType_MAX = 5
};

enum ENetRole
{
    ROLE_None = 0,
    ROLE_SimulatedProxy = 1,
    ROLE_AutonomousProxy = 2,
    ROLE_Authority = 3,
    ROLE_MAX = 4
};

enum ENetworkFailure
{
    NetDriverAlreadyExists = 0,
    NetDriverCreateFailure = 1,
    NetDriverListenFailure = 2,
    ConnectionLost = 3,
    ConnectionTimeout = 4,
    FailureReceived = 5,
    OutdatedClient = 6,
    OutdatedServer = 7,
    PendingConnectionFailure = 8,
    NetGuidMismatch = 9,
    NetChecksumMismatch = 10,
    ENetworkFailure_MAX = 11
};

enum ENetworkLOD
{
    Interpolated = 0,
    SimExtrapolate = 1,
    ForwardPredict = 2,
    All = 3,
    ENetworkLOD_MAX = 4
};

enum ENetworkLagState
{
    NotLagging = 0,
    Lagging = 1,
    ENetworkLagState_MAX = 2
};

enum ENetworkMetricEnableMode
{
    EnableForAllReplication = 0,
    EnableForIrisOnly = 1,
    EnableForNonIrisOnly = 2,
    ENetworkMetricEnableMode_MAX = 3
};

enum ENetworkPredictionStateRead
{
    Simulation = 0,
    Presentation = 1,
    ENetworkPredictionStateRead_MAX = 2
};

enum ENetworkPredictionTickingPolicy
{
    Independent = 0,
    Fixed = 1,
    All = 2,
    ENetworkPredictionTickingPolicy_MAX = 3
};

enum ENetworkSmoothingMode
{
    Disabled = 0,
    Linear = 1,
    Exponential = 2,
    ENetworkSmoothingMode_MAX = 3
};

enum ENeuralIndexType
{
    NIT_TextureIndex = 0,
    NIT_BufferIndex = 1,
    NIT_MAX = 2
};

enum ENeuralModelTileType
{
    OneByOne = 0,
    TwoByTwo = 1,
    FourByFour = 2,
    EightByEight = 3,
    Auto = 4,
    ENeuralModelTileType_MAX = 5
};

enum ENeuralProfileFormat
{
    Type32 = 0,
    Type16 = 1,
    ENeuralProfileFormat_MAX = 2
};

enum ENeuralProfileRuntimeType
{
    NNERuntimeORTDml = 0,
    NNERuntimeRDGHlsl = 1,
    MAX = 2
};

enum ENevadaFlightStates
{
    FLIGHT = 0,
    CRASHING = 1,
    CRASHED = 2,
    REBOOTING = 3,
    LANDING = 4,
    LANDED = 5,
    IDLE = 6,
    NONE = 7,
    ENevadaFlightStates_MAX = 8
};

enum ENewsExternalURLMode
{
    PatchNotes = 0,
    UpdateNotes = 1,
    MoreInformation = 2,
    ENewsExternalURLMode_MAX = 3
};

enum ENiagaraAgeUpdateMode
{
    TickDeltaTime = 0,
    DesiredAge = 1,
    DesiredAgeNoSeek = 2,
    ENiagaraAgeUpdateMode_MAX = 3
};

enum ENiagaraAssetLibraryAssetTypes
{
    Emitters = 0,
    Systems = 1,
    Scripts = 2,
    ENiagaraAssetLibraryAssetTypes_MAX = 3
};

enum ENiagaraAssetTagDefinitionImportance
{
    Primary = 0,
    Secondary = 1,
    Internal = 2,
    ENiagaraAssetTagDefinitionImportance_MAX = 3
};

enum ENiagaraBakerViewMode
{
    Perspective = 0,
    OrthoFront = 1,
    OrthoBack = 2,
    OrthoLeft = 3,
    OrthoRight = 4,
    OrthoTop = 5,
    OrthoBottom = 6,
    Num = 7,
    ENiagaraBakerViewMode_MAX = 8
};

enum ENiagaraBaseTypes
{
    Half = 0,
    Float = 1,
    Int32 = 2,
    Bool = 3,
    Max = 4
};

enum ENiagaraBindingSource
{
    ImplicitFromSource = 0,
    ExplicitParticles = 1,
    ExplicitEmitter = 2,
    ExplicitSystem = 3,
    ExplicitUser = 4,
    MaxBindingSource = 5,
    ENiagaraBindingSource_MAX = 6
};

enum ENiagaraBoolDisplayMode
{
    DisplayAlways = 0,
    DisplayIfTrue = 1,
    DisplayIfFalse = 2,
    ENiagaraBoolDisplayMode_MAX = 3
};

enum ENiagaraCVarConditionResponse
{
    None = 0,
    Enable = 1,
    Disable = 2,
    ENiagaraCVarConditionResponse_MAX = 3
};

enum ENiagaraCollisionMode
{
    None = 0,
    SceneGeometry = 1,
    DepthBuffer = 2,
    DistanceField = 3,
    ENiagaraCollisionMode_MAX = 4
};

enum ENiagaraCompilationState
{
    CheckDDC = 0,
    Precompile = 1,
    StartCompileJob = 2,
    AwaitResult = 3,
    OptimizeByteCode = 4,
    ProcessResult = 5,
    PutToDDC = 6,
    Finished = 7,
    Aborted = 8,
    ENiagaraCompilationState_MAX = 9
};

enum ENiagaraCompileErrorSeverity
{
    Ignore = 0,
    LogOnly = 1,
    Warning = 2,
    Error = 3,
    ENiagaraCompileErrorSeverity_MAX = 4
};

enum ENiagaraCompileUsageStaticSwitch
{
    Spawn = 0,
    Update = 1,
    Event = 2,
    SimulationStage = 3,
    Default = 4,
    ENiagaraCompileUsageStaticSwitch_MAX = 5
};

enum ENiagaraConditionalOperator
{
    Equals = 0,
    NotEqual = 1,
    LessThan = 2,
    LessThanOrEqual = 3,
    GreaterThan = 4,
    GreaterThanOrEqual = 5,
    Max = 6
};

enum ENiagaraCoordinateSpace
{
    Simulation = 0,
    World = 1,
    Local = 2,
    ENiagaraCoordinateSpace_MAX = 3
};

enum ENiagaraCullProxyMode
{
    None = 0,
    Instanced_Rendered = 1,
    ENiagaraCullProxyMode_MAX = 2
};

enum ENiagaraCullReaction
{
    Deactivate = 0,
    DeactivateImmediate = 1,
    DeactivateResume = 2,
    DeactivateImmediateResume = 3,
    PauseResume = 4,
    ENiagaraCullReaction_MAX = 5
};

enum ENiagaraDataChannelAllocationMode
{
    Static = 0,
    ENiagaraDataChannelAllocationMode_MAX = 1
};

enum ENiagaraDataInterfaceEmitterBindingMode
{
    Self = 0,
    Other = 1,
    ENiagaraDataInterfaceEmitterBindingMode_MAX = 2
};

enum ENiagaraDataSetType
{
    ParticleData = 0,
    Shared = 1,
    Event = 2,
    ENiagaraDataSetType_MAX = 3
};

enum ENiagaraDebugHUDDOverviewSort
{
    Name = 0,
    NumberRegistered = 1,
    NumberActive = 2,
    NumberScalability = 3,
    MemoryUsage = 4,
    RecentlyVisibilty = 5,
    ENiagaraDebugHUDDOverviewSort_MAX = 6
};

enum ENiagaraDebugHUDOverviewMode
{
    Overview = 0,
    Scalability = 1,
    Performance = 2,
    PerformanceGraph = 3,
    GpuComputePerformance = 4,
    ENiagaraDebugHUDOverviewMode_MAX = 5
};

enum ENiagaraDebugHUDPerfGraphMode
{
    GameThread = 0,
    RenderThread = 1,
    GPU = 2,
    ENiagaraDebugHUDPerfGraphMode_MAX = 3
};

enum ENiagaraDebugHUDPerfSampleMode
{
    FrameTotal = 0,
    PerInstanceAverage = 1,
    ENiagaraDebugHUDPerfSampleMode_MAX = 2
};

enum ENiagaraDebugHUDPerfUnits
{
    Microseconds = 0,
    Milliseconds = 1,
    ENiagaraDebugHUDPerfUnits_MAX = 2
};

enum ENiagaraDebugHudFont
{
    Small = 0,
    Normal = 1,
    ENiagaraDebugHudFont_MAX = 2
};

enum ENiagaraDebugHudHAlign
{
    Left = 0,
    Center = 1,
    Right = 2,
    ENiagaraDebugHudHAlign_MAX = 3
};

enum ENiagaraDebugHudVAlign
{
    Top = 0,
    Center = 1,
    Bottom = 2,
    ENiagaraDebugHudVAlign_MAX = 3
};

enum ENiagaraDebugHudVerbosity
{
    None = 0,
    Basic = 1,
    Verbose = 2,
    ENiagaraDebugHudVerbosity_MAX = 3
};

enum ENiagaraDebugPlaybackMode
{
    Play = 0,
    Loop = 1,
    Paused = 2,
    Step = 3,
    ENiagaraDebugPlaybackMode_MAX = 4
};

enum ENiagaraDefaultGpuTranslucentLatency
{
    Immediate = 0,
    Latent = 1,
    ENiagaraDefaultGpuTranslucentLatency_MAX = 2
};

enum ENiagaraDefaultMode
{
    Value = 0,
    Binding = 1,
    Custom = 2,
    FailIfPreviouslyNotSet = 3,
    ENiagaraDefaultMode_MAX = 4
};

enum ENiagaraDefaultRendererMotionVectorSetting
{
    Precise = 0,
    Approximate = 1,
    ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};

enum ENiagaraDefaultRendererPixelCoverageMode
{
    Enabled = 0,
    Disabled = 1,
    ENiagaraDefaultRendererPixelCoverageMode_MAX = 2
};

enum ENiagaraDefaultSortPrecision
{
    Low = 0,
    High = 1,
    ENiagaraDefaultSortPrecision_MAX = 2
};

enum ENiagaraDeviceProfileRedirectMode
{
    CVar = 0,
    DeviceProfile = 1,
    ENiagaraDeviceProfileRedirectMode_MAX = 2
};

enum ENiagaraDirectDispatchElementType
{
    NumThreads = 0,
    NumThreadsNoClipping = 1,
    NumGroups = 2,
    ENiagaraDirectDispatchElementType_MAX = 3
};

enum ENiagaraDistributionMode
{
    Binding = 0,
    UniformConstant = 1,
    NonUniformConstant = 2,
    UniformRange = 3,
    NonUniformRange = 4,
    UniformCurve = 5,
    NonUniformCurve = 6,
    ENiagaraDistributionMode_MAX = 7
};

enum ENiagaraEmitterCalculateBoundMode
{
    Dynamic = 0,
    Fixed = 1,
    Programmable = 2,
    ENiagaraEmitterCalculateBoundMode_MAX = 3
};

enum ENiagaraEmitterDefaultSummaryState
{
    Default = 0,
    Summary = 1,
    ENiagaraEmitterDefaultSummaryState_MAX = 2
};

enum ENiagaraEmitterInactiveResponse
{
    Complete = 0,
    Kill = 1,
    ENiagaraEmitterInactiveResponse_MAX = 2
};

enum ENiagaraEmitterMode
{
    Standard = 0,
    Stateless = 1,
    ENiagaraEmitterMode_MAX = 2
};

enum ENiagaraExecutionState
{
    Active = 0,
    Inactive = 1,
    InactiveClear = 2,
    Complete = 3,
    Disabled = 4,
    Num = 5,
    ENiagaraExecutionState_MAX = 6
};

enum ENiagaraExecutionStateManagement
{
    Awaken = 0,
    SleepAndLetParticlesFinish = 1,
    SleepAndClearParticles = 2,
    KillImmediately = 3,
    KillAfterParticlesFinish = 4,
    Num = 5,
    ENiagaraExecutionStateManagement_MAX = 6
};

enum ENiagaraExecutionStateSource
{
    Scalability = 0,
    Internal = 1,
    Owner = 2,
    InternalCompletion = 3,
    ENiagaraExecutionStateSource_MAX = 4
};

enum ENiagaraFunctionDebugState
{
    NoDebug = 0,
    Basic = 1,
    ENiagaraFunctionDebugState_MAX = 2
};

enum ENiagaraGpuBufferFormat
{
    Float = 0,
    HalfFloat = 1,
    UnsignedNormalizedByte = 2,
    Max = 3
};

enum ENiagaraGpuComputeTickStage
{
    PreInitViews = 0,
    PostInitViews = 1,
    PostOpaqueRender = 2,
    Max = 3,
    First = 4,
    Last = 5
};

enum ENiagaraGpuDispatchType
{
    OneD = 0,
    TwoD = 1,
    ThreeD = 2,
    Custom = 3,
    ENiagaraGpuDispatchType_MAX = 4
};

enum ENiagaraGpuSyncMode
{
    None = 0,
    SyncCpuToGpu = 1,
    SyncGpuToCpu = 2,
    SyncBoth = 3,
    ENiagaraGpuSyncMode_MAX = 4
};

enum ENiagaraInlineDynamicInputFormatTokenUsage
{
    Input = 0,
    Decorator = 1,
    LineBreak = 2,
    ENiagaraInlineDynamicInputFormatTokenUsage_MAX = 3
};

enum ENiagaraInputNodeUsage
{
    Undefined = 0,
    Parameter = 1,
    Attribute = 2,
    SystemConstant = 3,
    TranslatorConstant = 4,
    RapidIterationParameter = 5,
    ENiagaraInputNodeUsage_MAX = 6
};

enum ENiagaraInputWidgetType
{
    Default = 0,
    Slider = 1,
    Volume = 2,
    NumericDropdown = 3,
    EnumStyle = 4,
    SegmentedButtons = 5,
    ENiagaraInputWidgetType_MAX = 6
};

enum ENiagaraIterationSource
{
    Particles = 0,
    DataInterface = 1,
    DirectSet = 2,
    ENiagaraIterationSource_MAX = 3
};

enum ENiagaraLegacyTrailWidthMode
{
    FromCentre = 0,
    FromFirst = 1,
    FromSecond = 2,
    ENiagaraLegacyTrailWidthMode_MAX = 3
};

enum ENiagaraLoopBehavior
{
    Infinite = 0,
    Multiple = 1,
    Once = 2,
    ENiagaraLoopBehavior_MAX = 3
};

enum ENiagaraMeshFacingMode
{
    Default = 0,
    Velocity = 1,
    CameraPosition = 2,
    CameraPlane = 3,
    ENiagaraMeshFacingMode_MAX = 4
};

enum ENiagaraMeshLODMode
{
    LODLevel = 0,
    LODBias = 1,
    ByComponentBounds = 2,
    PerParticle = 3,
    ENiagaraMeshLODMode_MAX = 4
};

enum ENiagaraMeshLockedAxisSpace
{
    Simulation = 0,
    World = 1,
    Local = 2,
    ENiagaraMeshLockedAxisSpace_MAX = 3
};

enum ENiagaraMeshPivotOffsetSpace
{
    Mesh = 0,
    Simulation = 1,
    World = 2,
    Local = 3,
    ENiagaraMeshPivotOffsetSpace_MAX = 4
};

enum ENiagaraMipMapGeneration
{
    Disabled = 0,
    PostStage = 1,
    PostSimulate = 2,
    ENiagaraMipMapGeneration_MAX = 3
};

enum ENiagaraMipMapGenerationType
{
    Unfiltered = 0,
    Linear = 1,
    Blur1 = 2,
    Blur2 = 3,
    Blur3 = 4,
    Blur4 = 5,
    ENiagaraMipMapGenerationType_MAX = 6
};

enum ENiagaraModuleDependencyScriptConstraint
{
    SameScript = 0,
    AllScripts = 1,
    ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

enum ENiagaraModuleDependencyType
{
    PreDependency = 0,
    PostDependency = 1,
    ENiagaraModuleDependencyType_MAX = 2
};

enum ENiagaraModuleDependencyUsage
{
    None = 0,
    Spawn = 1,
    Update = 2,
    Event = 3,
    SimulationStage = 4,
    ENiagaraModuleDependencyUsage_MAX = 5
};

enum ENiagaraNumericOutputTypeSelectionMode
{
    None = 0,
    Largest = 1,
    Smallest = 2,
    Scalar = 3,
    Custom = 4,
    ENiagaraNumericOutputTypeSelectionMode_MAX = 5
};

enum ENiagaraOcclusionQueryMode
{
    Default = 0,
    AlwaysEnabled = 1,
    AlwaysDisabled = 2,
    ENiagaraOcclusionQueryMode_MAX = 3
};

enum ENiagaraOrientationAxis
{
    XAxis = 0,
    YAxis = 1,
    ZAxis = 2,
    ENiagaraOrientationAxis_MAX = 3
};

enum ENiagaraPlatformSelectionState
{
    Default = 0,
    Enabled = 1,
    Disabled = 2,
    ENiagaraPlatformSelectionState_MAX = 3
};

enum ENiagaraPlatformSetState
{
    Disabled = 0,
    Enabled = 1,
    Active = 2,
    Unknown = 3,
    ENiagaraPlatformSetState_MAX = 4
};

enum ENiagaraPreviewGridResetMode
{
    Never = 0,
    Individual = 1,
    All = 2,
    ENiagaraPreviewGridResetMode_MAX = 3
};

enum ENiagaraPythonUpdateScriptReference
{
    None = 0,
    ScriptAsset = 1,
    DirectTextEntry = 2,
    ENiagaraPythonUpdateScriptReference_MAX = 3
};

enum ENiagaraRendererGpuTranslucentLatency
{
    ProjectDefault = 0,
    Immediate = 1,
    Latent = 2,
    ENiagaraRendererGpuTranslucentLatency_MAX = 3
};

enum ENiagaraRendererMotionVectorSetting
{
    AutoDetect = 0,
    Precise = 1,
    Approximate = 2,
    Disable = 3,
    ENiagaraRendererMotionVectorSetting_MAX = 4
};

enum ENiagaraRendererPixelCoverageMode
{
    Automatic = 0,
    Disabled = 1,
    Enabled = 2,
    Enabled_RGBA = 3,
    Enabled_RGB = 4,
    Enabled_A = 5,
    ENiagaraRendererPixelCoverageMode_MAX = 6
};

enum ENiagaraRendererSortPrecision
{
    Default = 0,
    Low = 1,
    High = 2,
    ENiagaraRendererSortPrecision_MAX = 3
};

enum ENiagaraRendererSourceDataMode
{
    Particles = 0,
    Emitter = 1,
    ENiagaraRendererSourceDataMode_MAX = 2
};

enum ENiagaraRibbonAgeOffsetMode
{
    Scale = 0,
    Clip = 1,
    ENiagaraRibbonAgeOffsetMode_MAX = 2
};

enum ENiagaraRibbonDrawDirection
{
    FrontToBack = 0,
    BackToFront = 1,
    ENiagaraRibbonDrawDirection_MAX = 2
};

enum ENiagaraRibbonFacingMode
{
    Screen = 0,
    Custom = 1,
    CustomSideVector = 2,
    ENiagaraRibbonFacingMode_MAX = 3
};

enum ENiagaraRibbonShapeMode
{
    Plane = 0,
    MultiPlane = 1,
    Tube = 2,
    Custom = 3,
    ENiagaraRibbonShapeMode_MAX = 4
};

enum ENiagaraRibbonTessellationMode
{
    Automatic = 0,
    Custom = 1,
    Disabled = 2,
    ENiagaraRibbonTessellationMode_MAX = 3
};

enum ENiagaraRibbonUVDistributionMode
{
    ScaledUniformly = 0,
    ScaledUsingRibbonSegmentLength = 1,
    TiledOverRibbonLength = 2,
    TiledFromStartOverRibbonLength = 3,
    ENiagaraRibbonUVDistributionMode_MAX = 4
};

enum ENiagaraRibbonUVEdgeMode
{
    SmoothTransition = 0,
    Locked = 1,
    ENiagaraRibbonUVEdgeMode_MAX = 2
};

enum ENiagaraScalabilityUpdateFrequency
{
    SpawnOnly = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Continuous = 4,
    ENiagaraScalabilityUpdateFrequency_MAX = 5
};

enum ENiagaraScriptCompileStatus
{
    NCS_Unknown = 0,
    NCS_Dirty = 1,
    NCS_Error = 2,
    NCS_UpToDate = 3,
    NCS_BeingCreated = 4,
    NCS_UpToDateWithWarnings = 5,
    NCS_ComputeUpToDateWithWarnings = 6,
    NCS_MAX = 7
};

enum ENiagaraScriptContextStaticSwitch
{
    System = 0,
    Emitter = 1,
    Particle = 2,
    ENiagaraScriptContextStaticSwitch_MAX = 3
};

enum ENiagaraScriptGroup
{
    Particle = 0,
    Emitter = 1,
    System = 2,
    Max = 3
};

enum ENiagaraScriptLibraryVisibility
{
    Invalid = 0,
    Unexposed = 1,
    Library = 2,
    Hidden = 3,
    ENiagaraScriptLibraryVisibility_MAX = 4
};

enum ENiagaraScriptTemplateSpecification
{
    None = 0,
    Template = 1,
    Behavior = 2,
    ENiagaraScriptTemplateSpecification_MAX = 3
};

enum ENiagaraScriptUsage
{
    Function = 0,
    Module = 1,
    DynamicInput = 2,
    ParticleSpawnScript = 3,
    ParticleSpawnScriptInterpolated = 4,
    ParticleUpdateScript = 5,
    ParticleEventScript = 6,
    ParticleSimulationStageScript = 7,
    ParticleGPUComputeScript = 8,
    EmitterSpawnScript = 9,
    EmitterUpdateScript = 10,
    SystemSpawnScript = 11,
    SystemUpdateScript = 12,
    ENiagaraScriptUsage_MAX = 13
};

enum ENiagaraSimCacheAttributeCaptureMode
{
    All = 0,
    RenderingOnly = 1,
    ExplicitAttributes = 2,
    ENiagaraSimCacheAttributeCaptureMode_MAX = 3
};

enum ENiagaraSimCacheSectionPlayMode
{
    SimWithoutCache = 0,
    DisplayCacheOnly = 1,
    ENiagaraSimCacheSectionPlayMode_MAX = 2
};

enum ENiagaraSimCacheSectionStretchMode
{
    Repeat = 0,
    TimeDilate = 1,
    ENiagaraSimCacheSectionStretchMode_MAX = 2
};

enum ENiagaraSimStageExecuteBehavior
{
    Always = 0,
    OnSimulationReset = 1,
    NotOnSimulationReset = 2,
    ENiagaraSimStageExecuteBehavior_MAX = 3
};

enum ENiagaraSimTarget
{
    CPUSim = 0,
    GPUComputeSim = 1,
    ENiagaraSimTarget_MAX = 2
};

enum ENiagaraSortMode
{
    None = 0,
    ViewDepth = 1,
    ViewDistance = 2,
    CustomAscending = 3,
    CustomDecending = 4,
    ENiagaraSortMode_MAX = 5
};

enum ENiagaraSpriteAlignment
{
    Unaligned = 0,
    VelocityAligned = 1,
    CustomAlignment = 2,
    Automatic = 3,
    ENiagaraSpriteAlignment_MAX = 4
};

enum ENiagaraSpriteFacingMode
{
    FaceCamera = 0,
    FaceCameraPlane = 1,
    CustomFacingVector = 2,
    FaceCameraPosition = 3,
    FaceCameraDistanceBlend = 4,
    Automatic = 5,
    ENiagaraSpriteFacingMode_MAX = 6
};

enum ENiagaraStatDisplayMode
{
    Percent = 0,
    Absolute = 1,
    ENiagaraStatDisplayMode_MAX = 2
};

enum ENiagaraStatEvaluationType
{
    Average = 0,
    Maximum = 1,
    ENiagaraStatEvaluationType_MAX = 2
};

enum ENiagaraStatelessFeatureMask
{
    ExecuteGPU = 0,
    ExecuteCPU = 1,
    None = 2,
    ExecuteAll = 3,
    All = 4,
    ENiagaraStatelessFeatureMask_MAX = 5
};

enum ENiagaraStatelessSpawnInfoType
{
    Burst = 0,
    Rate = 1,
    ENiagaraStatelessSpawnInfoType_MAX = 2
};

enum ENiagaraStripScriptByteCodeOption
{
    Default = 0,
    Strip_Original = 1,
    Strip_Experimental = 2,
    ENiagaraStripScriptByteCodeOption_MAX = 3
};

enum ENiagaraStructConversionType
{
    CopyOnly = 0,
    DoubleToFloat = 1,
    Vector2 = 2,
    Vector3 = 3,
    Vector4 = 4,
    Quat = 5,
    ENiagaraStructConversionType_MAX = 6
};

enum ENiagaraSystemInactiveResponse
{
    Complete = 0,
    Kill = 1,
    ENiagaraSystemInactiveResponse_MAX = 2
};

enum ENiagaraSystemInstanceState
{
    None = 0,
    PendingSpawn = 1,
    PendingSpawnPaused = 2,
    Spawning = 3,
    Running = 4,
    Paused = 5,
    Num = 6,
    ENiagaraSystemInstanceState_MAX = 7
};

enum ENiagaraSystemSpawnSectionEndBehavior
{
    SetSystemInactive = 0,
    Deactivate = 1,
    None = 2,
    ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

enum ENiagaraSystemSpawnSectionEvaluateBehavior
{
    ActivateIfInactive = 0,
    None = 1,
    ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

enum ENiagaraSystemSpawnSectionStartBehavior
{
    Activate = 0,
    ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

enum ENiagaraTickBehavior
{
    UsePrereqs = 0,
    UseComponentTickGroup = 1,
    ForceTickFirst = 2,
    ForceTickLast = 3,
    ENiagaraTickBehavior_MAX = 4
};

enum ENiagaraValidationSeverity
{
    Info = 0,
    Warning = 1,
    Error = 2,
    ENiagaraValidationSeverity_MAX = 3
};

enum ENiagaraVariantMode
{
    None = 0,
    Object = 1,
    DataInterface = 2,
    Bytes = 3,
    ENiagaraVariantMode_MAX = 4
};

enum ENiagartaDataChannelReadResult
{
    Success = 0,
    Failure = 1,
    ENiagartaDataChannelReadResult_MAX = 2
};

enum ENiagraDataChannel_IslandMode
{
    AlignedStatic = 0,
    Dynamic = 1,
    ENiagraDataChannel_MAX = 2
};

enum ENodeAdvancedPins
{
    NoPins = 0,
    Shown = 1,
    Hidden = 2,
    ENodeAdvancedPins_MAX = 3
};

enum ENodeEnabledState
{
    Enabled = 0,
    Disabled = 1,
    DevelopmentOnly = 2,
    ENodeEnabledState_MAX = 3
};

enum ENodeTitleType
{
    FullTitle = 0,
    ListView = 1,
    EditableTitle = 2,
    MenuTitle = 3,
    MAX_TitleTypes = 4,
    ENodeTitleType_MAX = 5
};

enum ENoiseFunction
{
    NOISEFUNCTION_SimplexTex = 0,
    NOISEFUNCTION_GradientTex = 1,
    NOISEFUNCTION_GradientTex3D = 2,
    NOISEFUNCTION_GradientALU = 3,
    NOISEFUNCTION_ValueALU = 4,
    NOISEFUNCTION_VoronoiALU = 5,
    NOISEFUNCTION_MAX = 6
};

enum ENonSpatializedRadiusSpeakerMapMode
{
    OmniDirectional = 0,
    Direct2D = 1,
    Surround2D = 2,
    ENonSpatializedRadiusSpeakerMapMode_MAX = 3
};

enum ENonlinearOperationType
{
    Bend = 0,
    Flare = 1,
    Twist = 2,
    ENonlinearOperationType_MAX = 3
};

enum ENormalCalculationMethod
{
    AreaWeighted = 0,
    AngleWeighted = 1,
    AreaAngleWeighting = 2,
    ENormalCalculationMethod_MAX = 3
};

enum ENormalMode
{
    NM_PreserveSmoothingGroups = 0,
    NM_RecalculateNormals = 1,
    NM_RecalculateNormalsSmooth = 2,
    NM_RecalculateNormalsHard = 3,
    TEMP_BROKEN = 4,
    ENormalMode_MAX = 5
};

enum ENormalizeInputSmoothingType
{
    None = 0,
    Lerp = 1,
    Interp_To = 2,
    Interp_Constant_To = 3,
    Interp_Circular_In = 4,
    Interp_Circular_Out = 5,
    Interp_Circular_In_Out = 6,
    Interp_Ease_In = 7,
    Interp_Ease_Out = 8,
    Interp_Ease_In_Out = 9,
    Interp_Expo_In = 10,
    Interp_Expo_Out = 11,
    Interp_Expo_In_Out = 12,
    Interp_Sin_In = 13,
    Interp_Sin_Out = 14,
    Interp_Sin_In_Out = 15,
    ENormalizeInputSmoothingType_MAX = 16
};

enum ENotificationResult
{
    Confirmed = 0,
    Declined = 1,
    Unknown = 2,
    ENotificationResult_MAX = 3
};

enum ENotificationType
{
    Basic = 0,
    Friends = 1,
    ENotificationType_MAX = 2
};

enum ENotifyFilterType
{
    NoFiltering = 0,
    LOD = 1,
    ENotifyFilterType_MAX = 2
};

enum ENotifyTriggerMode
{
    AllAnimations = 0,
    HighestWeightedAnimation = 1,
    None = 2,
    ENotifyTriggerMode_MAX = 3
};

enum ENumericalIndicatorActionType
{
    Adding = 0,
    Removing = 1,
    Nothing = 2,
    ENumericalIndicatorActionType_MAX = 3
};

enum ENyxGlassSlashSubstate
{
    MovingToTarget = 0,
    StoppedAtTarget = 1,
    LeapingBack = 2,
    ENyxGlassSlashSubstate_MAX = 3
};

enum ENyxGlassState
{
    Off = 0,
    Swinging = 1,
    AimingFromGround = 2,
    Hovering = 3,
    Attacking = 4,
    Slashing = 5,
    ENyxGlassState_MAX = 6
};

enum EObjectChooserResultType
{
    ObjectResult = 0,
    ClassResult = 1,
    EObjectChooserResultType_MAX = 2
};

enum EObjectClassColumnCellValueComparison
{
    Equal = 0,
    NotEqual = 1,
    SubClassOf = 2,
    NotSubClassOf = 3,
    Any = 4,
    EObjectClassColumnCellValueComparison_MAX = 5
};

enum EObjectColumnCellValueComparison
{
    MatchEqual = 0,
    MatchNotEqual = 1,
    MatchAny = 2,
    Modulus = 3,
    EObjectColumnCellValueComparison_MAX = 4
};

enum EObjectStateTypeEnum
{
    Chaos_NONE = 0,
    Chaos_Object_Sleeping = 1,
    Chaos_Object_Kinematic = 2,
    Chaos_Object_Static = 3,
    Chaos_Object_Dynamic = 4,
    Chaos_Object_UserDefined = 5,
    Chaos_Max = 6
};

enum EObjectTypeQuery
{
    ObjectTypeQuery1 = 0,
    ObjectTypeQuery2 = 1,
    ObjectTypeQuery3 = 2,
    ObjectTypeQuery4 = 3,
    ObjectTypeQuery5 = 4,
    ObjectTypeQuery6 = 5,
    ObjectTypeQuery7 = 6,
    ObjectTypeQuery8 = 7,
    ObjectTypeQuery9 = 8,
    ObjectTypeQuery10 = 9,
    ObjectTypeQuery11 = 10,
    ObjectTypeQuery12 = 11,
    ObjectTypeQuery13 = 12,
    ObjectTypeQuery14 = 13,
    ObjectTypeQuery15 = 14,
    ObjectTypeQuery16 = 15,
    ObjectTypeQuery17 = 16,
    ObjectTypeQuery18 = 17,
    ObjectTypeQuery19 = 18,
    ObjectTypeQuery20 = 19,
    ObjectTypeQuery21 = 20,
    ObjectTypeQuery22 = 21,
    ObjectTypeQuery23 = 22,
    ObjectTypeQuery24 = 23,
    ObjectTypeQuery25 = 24,
    ObjectTypeQuery26 = 25,
    ObjectTypeQuery27 = 26,
    ObjectTypeQuery28 = 27,
    ObjectTypeQuery29 = 28,
    ObjectTypeQuery30 = 29,
    ObjectTypeQuery31 = 30,
    ObjectTypeQuery32 = 31,
    ObjectTypeQuery_MAX = 32,
    EObjectTypeQuery_MAX = 33
};

enum EObjectValidPins
{
    Valid = 0,
    NotValid = 1,
    EObjectValidPins_MAX = 2
};

enum EObjectiveCategories
{
    Default = 0,
    Exploration = 1,
    Resource = 2,
    Combat = 3,
    Ranked = 4,
    EObjectiveCategories_MAX = 5
};

enum EObjectiveConversationTriggerType
{
    StatEquals = 0,
    StatIncreasedby = 1,
    StatLessThan = 2,
    Max = 3
};

enum EObjectiveGateRelation
{
    RequiredOpen = 0,
    RequiredClosed = 1,
    RequiredSame = 2,
    RequiredOpposite = 3,
    Substitution = 4,
    EObjectiveGateRelation_MAX = 5
};

enum EObjectiveNeeds
{
    None = 0,
    ObjectiveUpdate = 1,
    ObjectiveUpdateWithContext = 2,
    EObjectiveNeeds_MAX = 3
};

enum EObjectiveProcessorPropertyRequirement
{
    Ignored = 0,
    Required = 1,
    Prohibited = 2,
    EObjectiveProcessorPropertyRequirement_MAX = 3
};

enum EObjectiveStatusUpdateType
{
    Always = 0,
    OnPercent = 1,
    OnComplete = 2,
    Never = 3,
    EObjectiveStatusUpdateType_MAX = 4
};

enum EObjectiveType
{
    DestructionObjective = 0,
    CaptureObjective = 1,
    EObjectiveType_MAX = 2
};

enum EObstacleType
{
    IncomingSmashable = 0,
    BlockingSmashable = 1,
    BlockingDetectedTrap = 2,
    Unknown = 3,
    Count = 4,
    EObstacleType_MAX = 5
};

enum EOccludedAction
{
    Remove = 0,
    SetNewGroup = 1,
    EOccludedAction_MAX = 2
};

enum EOccludedGeometryFilteringPolicy
{
    NoOcclusionFiltering = 0,
    VisibilityBasedFiltering = 1,
    EOccludedGeometryFilteringPolicy_MAX = 2
};

enum EOcclusionCalculationUIMode
{
    GeneralizedWindingNumber = 0,
    RaycastOcclusionSamples = 1,
    EOcclusionCalculationUIMode_MAX = 2
};

enum EOcclusionCombineMode
{
    OCM_Minimum = 0,
    OCM_Multiply = 1,
    OCM_MAX = 2
};

enum EOcclusionTriangleSamplingUIMode
{
    Vertices = 0,
    VerticesAndCentroids = 1,
    EOcclusionTriangleSamplingUIMode_MAX = 2
};

enum EOculusMobileDevice
{
    Quest = 0,
    Quest2 = 1,
    EOculusMobileDevice_MAX = 2
};

enum EOfferPurchaseError
{
    NoError = 0,
    PendingServerConfirmation = 1,
    CannotAffordItem = 2,
    InvalidOfferID = 3,
    InvalidPriceIndex = 4,
    NoneLeft = 5,
    PurchaseAlreadyPending = 6,
    NoConnection = 7,
    AccountNotEligible = 8,
    CannotGiftItem = 9,
    MFANotEnabled = 10,
    EOfferPurchaseError_MAX = 11
};

enum EOffsetClosedCurvesMethod
{
    DoNotOffset = 0,
    OffsetOuterSide = 1,
    OffsetBothSides = 2,
    EOffsetClosedCurvesMethod_MAX = 3
};

enum EOffsetJoinMethod
{
    Square = 0,
    Miter = 1,
    Round = 2,
    EOffsetJoinMethod_MAX = 3
};

enum EOffsetMeshSelectionDirectionMode
{
    VertexNormals = 0,
    FaceNormals = 1,
    ConstantWidth = 2,
    EOffsetMeshSelectionDirectionMode_MAX = 3
};

enum EOffsetMeshSelectionInteractionMode
{
    Fixed = 0,
    EOffsetMeshSelectionInteractionMode_MAX = 1
};

enum EOffsetMeshToolOffsetType
{
    Iterative = 0,
    Implicit = 1,
    EOffsetMeshToolOffsetType_MAX = 2
};

enum EOffsetOpenCurvesMethod
{
    TreatAsClosed = 0,
    Offset = 1,
    EOffsetOpenCurvesMethod_MAX = 2
};

enum EOffsetRootBoneMode
{
    Accumulate = 0,
    Interpolate = 1,
    Hold = 2,
    Release = 3,
    EOffsetRootBoneMode_MAX = 4
};

enum EOffsetRootBone_CollisionTestingMode
{
    Disabled = 0,
    ShrinkMaxTranslation = 1,
    PlanarCollision = 2,
    EOffsetRootBone_MAX = 3
};

enum EOmahaTeam
{
    Home = 0,
    Away = 1,
    MAX = 2
};

enum EOnPlacementAction
{
    IgnoreOnly = 0,
    IgnoreAndDestroy = 1,
    EOnPlacementAction_MAX = 2
};

enum EOnlineLinkModerationStatus
{
    Unmoderated = 0,
    Approved = 1,
    Denied = 2,
    EOnlineLinkModerationStatus_MAX = 3
};

enum EOnlineProxyStoreOfferDiscountType
{
    NotOnSale = 0,
    Percentage = 1,
    DiscountAmount = 2,
    PayAmount = 3,
    EOnlineProxyStoreOfferDiscountType_MAX = 4
};

enum EOnlineRadioSourceType
{
    Epic = 0,
    EOnlineRadioSourceType_MAX = 1
};

enum EOodleNetResult
{
    Unknown = 0,
    Success = 1,
    OodleDecodeFailed = 2,
    OodleSerializePayloadFail = 3,
    OodleBadDecompressedLength = 4,
    OodleNoDictionary = 5,
    EOodleNetResult_MAX = 6
};

enum EOodleNetworkEnableMode
{
    AlwaysEnabled = 0,
    WhenCompressedPacketReceived = 1,
    EOodleNetworkEnableMode_MAX = 2
};

enum EOpacitySourceMode
{
    OSM_Alpha = 0,
    OSM_ColorBrightness = 1,
    OSM_RedChannel = 2,
    OSM_GreenChannel = 3,
    OSM_BlueChannel = 4,
    OSM_MAX = 5
};

enum EOpenCurveEndShapes
{
    Square = 0,
    Round = 1,
    Butt = 2,
    EOpenCurveEndShapes_MAX = 3
};

enum EOperation
{
    Intro = 0,
    Outro = 1,
    Push = 2,
    Pop = 3,
    Invalid = 4,
    EOperation_MAX = 5
};

enum EOperationsTeamFaction
{
    Alter = 0,
    Ego = 1,
    NumFactions = 2,
    EOperationsTeamFaction_MAX = 3
};

enum EOptimizationType
{
    OT_NumOfTriangles = 0,
    OT_MaxDeviation = 1,
    OT_MAX = 2
};

enum EOptionalBattleRoyaleFrontendExperienceFlowSteps
{
    TryPlaySeasonTrailer = 0,
    TryPlayBattlePassTrailer = 1,
    TryShowHabaneroIntroModal = 2,
    TryShowFireModeSelectionReminderModal = 3,
    TryShowFireModeModal = 4,
    EOptionalBattleRoyaleFrontendExperienceFlowSteps_MAX = 5
};

enum EOptionalFlowSteps
{
    TryShowMobileGuidedTutorial = 0,
    TryShowMOTDs = 1,
    TryShowNormalBanModal = 2,
    TryShowSocialBanModal = 3,
    TryShowMFAModal = 4,
    TryShowCrossplayDialog = 5,
    TryShowSocialImport = 6,
    TryShowSurveys = 7,
    TryShowBadMatchPopup = 8,
    TryShowMobileInGameAppRating = 9,
    TryShowSamsungSensorWarning = 10,
    TryShowBattlePassPurchaseScreen = 11,
    TryShowMultipleSubscriptionsAlert = 12,
    TryPushGiftingScreen = 13,
    TryPushMessagingScreen = 14,
    TryGoToBattlePassTab = 15,
    TryShowRefundTokenNotification = 16,
    TryShowPriceChangeAcknowledgeNotification = 17,
    TryShowSettingsChangeAcknowledgementScreen = 18,
    TryShowEnterCabinModeScreen = 19,
    TryShowVoiceReportingIntroModal = 20,
    TryShowContentGatingIntroModal = 21,
    TryShowResolutionChangeModal = 22,
    TryPlayEcosystemTrailer = 23,
    TryShowPlaytimeExpiredModal = 24,
    EOptionalFlowSteps_MAX = 25
};

enum EOptionalJunoFrontendExperienceFlowSteps
{
    TryShowCinematicTrailer = 0,
    EOptionalJunoFrontendExperienceFlowSteps_MAX = 1
};

enum EOptionalLabel
{
    Label_DS = 0,
    Label_NM = 1,
    Max = 2
};

enum EOrbitChainMode
{
    EOChainMode_Add = 0,
    EOChainMode_Scale = 1,
    EOChainMode_Link = 2,
    EOChainMode_MAX = 3
};

enum EOrientPositionSelector
{
    Orientation = 0,
    Position = 1,
    OrientationAndPosition = 2,
    EOrientPositionSelector_MAX = 3
};

enum EOrientation
{
    Orient_Horizontal = 0,
    Orient_Vertical = 1,
    Orient_MAX = 2
};

enum EOrientationWarpingSpace
{
    ComponentTransform = 0,
    RootBoneTransform = 1,
    CustomTransform = 2,
    EOrientationWarpingSpace_MAX = 3
};

enum EOrientedConstructionBuildingType
{
    WallX = 0,
    WallY = 1,
    Floor = 2,
    StairsUpX = 3,
    StairsUpY = 4,
    StairsDownX = 5,
    StairsDownY = 6,
    Roof = 7,
    BraceLeftX = 8,
    BraceRightX = 9,
    BraceLeftY = 10,
    BraceRightY = 11,
    WallWindowX = 12,
    WallWindowY = 13,
    Count = 14,
    EOrientedConstructionBuildingType_MAX = 15
};

enum EOscillatorWaveform
{
    SineWave = 0,
    PerlinNoise = 1,
    EOscillatorWaveform_MAX = 2
};

enum EOstrichDetonationState
{
    None = 0,
    Detonate = 1,
    SelfDestruct = 2,
    Instant = 3,
    EOstrichDetonationState_MAX = 4
};

enum EOutpostBuildings
{
    StormShield = 0,
    HarvestingOptimizer = 1,
    StorageVault = 2,
    POST = 3,
    EOutpostBuildings_MAX = 4
};

enum EOutputTargetMeshBones
{
    SourceBones = 0,
    TargetBones = 1,
    EOutputTargetMeshBones_MAX = 2
};

enum EOverdriveScoringState
{
    None = 0,
    ActiveSection = 1,
    EOverdriveScoringState_MAX = 2
};

enum EOverlapFilterOption
{
    OverlapFilter_All = 0,
    OverlapFilter_DynamicOnly = 1,
    OverlapFilter_StaticOnly = 2,
    OverlapFilter_MAX = 3
};

enum EOverriddenPropertyOperation
{
    None = 0,
    Modified = 1,
    Replace = 2,
    Add = 3,
    Remove = 4,
    EOverriddenPropertyOperation_MAX = 5
};

enum EOverrideBlockOnSlowStreaming
{
    NoOverride = 0,
    Blocking = 1,
    NotBlocking = 2,
    EOverrideBlockOnSlowStreaming_MAX = 3
};

enum EOverrideCubemapType
{
    No = 0,
    Yes = 1,
    EOverrideCubemapType_MAX = 2
};

enum EPBIKLimitType
{
    Free = 0,
    Limited = 1,
    Locked = 2,
    EPBIKLimitType_MAX = 3
};

enum EPBIKRootBehavior
{
    PrePull = 0,
    PinToInput = 1,
    Free = 2,
    EPBIKRootBehavior_MAX = 3
};

enum EPCGActorFilter
{
    Self = 0,
    Parent = 1,
    Root = 2,
    AllWorldActors = 3,
    Original = 4,
    FromInput = 5,
    EPCGActorFilter_MAX = 6
};

enum EPCGActorSelection
{
    ByTag = 0,
    ByName = 1,
    ByClass = 2,
    ByPath = 3,
    Unknown = 4,
    EPCGActorSelection_MAX = 5
};

enum EPCGAttachOptions
{
    NotAttached = 0,
    Attached = 1,
    InFolder = 2,
    EPCGAttachOptions_MAX = 3
};

enum EPCGAttributeAccessorFlags
{
    StrictType = 0,
    AllowBroadcast = 1,
    AllowConstructible = 2,
    AllowSetDefaultValue = 3,
    AllowBroadcastAndConstructible = 4,
    EPCGAttributeAccessorFlags_MAX = 5
};

enum EPCGAttributeFilterOperation
{
    KeepSelectedAttributes = 0,
    DeleteSelectedAttributes = 1,
    EPCGAttributeFilterOperation_MAX = 2
};

enum EPCGAttributeFilterOperator
{
    Greater = 0,
    GreaterOrEqual = 1,
    Lesser = 2,
    LesserOrEqual = 3,
    Equal = 4,
    NotEqual = 5,
    InRange = 6,
    Substring = 7,
    Matches = 8,
    EPCGAttributeFilterOperator_MAX = 9
};

enum EPCGAttributeNoiseMode
{
    Set = 0,
    Minimum = 1,
    Maximum = 2,
    Add = 3,
    Multiply = 4,
    EPCGAttributeNoiseMode_MAX = 5
};

enum EPCGAttributePropertySelection
{
    Attribute = 0,
    PointProperty = 1,
    ExtraProperty = 2,
    EPCGAttributePropertySelection_MAX = 3
};

enum EPCGAttributeReduceOperation
{
    Average = 0,
    Max = 1,
    Min = 2,
    Sum = 3,
    Join = 4
};

enum EPCGAttributeSelectAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    W = 3,
    CustomAxis = 4,
    EPCGAttributeSelectAxis_MAX = 5
};

enum EPCGAttributeSelectOperation
{
    Min = 0,
    Max = 1,
    Median = 2
};

enum EPCGBlurElementMode
{
    Constant = 0,
    Linear = 1,
    Gaussian = 2,
    EPCGBlurElementMode_MAX = 3
};

enum EPCGBoundsModifierMode
{
    Set = 0,
    Intersect = 1,
    Include = 2,
    Translate = 3,
    Scale = 4,
    EPCGBoundsModifierMode_MAX = 5
};

enum EPCGChangeType
{
    None = 0,
    Cosmetic = 1,
    Settings = 2,
    Input = 3,
    Edge = 4,
    Node = 5,
    Structural = 6,
    GenerationGrid = 7,
    EPCGChangeType_MAX = 8
};

enum EPCGCollisionQueryFlag
{
    Simple = 0,
    Complex = 1,
    SimpleFirst = 2,
    ComplexFirst = 3,
    EPCGCollisionQueryFlag_MAX = 4
};

enum EPCGComponentDirtyFlag
{
    None = 0,
    Actor = 1,
    Landscape = 2,
    Input = 3,
    Data = 4,
    All = 5,
    EPCGComponentDirtyFlag_MAX = 6
};

enum EPCGComponentGenerationTrigger
{
    GenerateOnLoad = 0,
    GenerateOnDemand = 1,
    GenerateAtRuntime = 2,
    EPCGComponentGenerationTrigger_MAX = 3
};

enum EPCGComponentInput
{
    Actor = 0,
    Landscape = 1,
    Other = 2,
    EPCGComponentInput_MAX = 3
};

enum EPCGControlFlowSelectionMode
{
    Integer = 0,
    Enum = 1,
    String = 2,
    EPCGControlFlowSelectionMode_MAX = 3
};

enum EPCGCoordinateSpace
{
    World = 0,
    OriginalComponent = 1,
    LocalComponent = 2,
    EPCGCoordinateSpace_MAX = 3
};

enum EPCGCopyPointsInheritanceMode
{
    Relative = 0,
    Source = 1,
    Target = 2,
    EPCGCopyPointsInheritanceMode_MAX = 3
};

enum EPCGCopyPointsMetadataInheritanceMode
{
    SourceFirst = 0,
    TargetFirst = 1,
    SourceOnly = 2,
    TargetOnly = 3,
    None = 4,
    EPCGCopyPointsMetadataInheritanceMode_MAX = 5
};

enum EPCGCopyPointsTagInheritanceMode
{
    Both = 0,
    Source = 1,
    Target = 2,
    EPCGCopyPointsTagInheritanceMode_MAX = 3
};

enum EPCGCreateSplineMode
{
    CreateDataOnly = 0,
    CreateComponent = 1,
    EPCGCreateSplineMode_MAX = 2
};

enum EPCGDataType
{
    None = 0,
    Point = 1,
    Spline = 2,
    LandscapeSpline = 3,
    PolyLine = 4,
    Landscape = 5,
    Texture = 6,
    RenderTarget = 7,
    BaseTexture = 8,
    Surface = 9,
    Volume = 10,
    Primitive = 11,
    Concrete = 12,
    Composite = 13,
    Spatial = 14,
    Param = 15,
    PointOrParam = 16,
    Settings = 17,
    Other = 18,
    Any = 19,
    EPCGDataType_MAX = 20
};

enum EPCGDebugVisScaleMethod
{
    Relative = 0,
    Absolute = 1,
    Extents = 2,
    EPCGDebugVisScaleMethod_MAX = 3
};

enum EPCGDensityMergeOperation
{
    Set = 0,
    Ignore = 1,
    Minimum = 2,
    Maximum = 3,
    Add = 4,
    Subtract = 5,
    Multiply = 6,
    Divide = 7,
    EPCGDensityMergeOperation_MAX = 8
};

enum EPCGDifferenceDensityFunction
{
    Minimum = 0,
    ClampedSubstraction = 1,
    Binary = 2,
    EPCGDifferenceDensityFunction_MAX = 3
};

enum EPCGDifferenceMode
{
    Inferred = 0,
    Continuous = 1,
    Discrete = 2,
    EPCGDifferenceMode_MAX = 3
};

enum EPCGEditorDirtyMode
{
    Normal = 0,
    Preview = 1,
    LoadAsPreview = 2,
    EPCGEditorDirtyMode_MAX = 3
};

enum EPCGExclusiveDataType
{
    None = 0,
    Point = 1,
    Spline = 2,
    LandscapeSpline = 3,
    PolyLine = 4,
    Landscape = 5,
    Texture = 6,
    RenderTarget = 7,
    BaseTexture = 8,
    Surface = 9,
    Volume = 10,
    Primitive = 11,
    Concrete = 12,
    Composite = 13,
    Spatial = 14,
    Param = 15,
    Settings = 16,
    Other = 17,
    Any = 18,
    PointOrParam = 19,
    EPCGExclusiveDataType_MAX = 20
};

enum EPCGExecutionPhase
{
    NotExecuted = 0,
    PrepareData = 1,
    Execute = 2,
    PostExecute = 3,
    Done = 4,
    EPCGExecutionPhase_MAX = 5
};

enum EPCGExtraProperties
{
    Index = 0,
    EPCGExtraProperties_MAX = 1
};

enum EPCGFilterByTagOperation
{
    KeepTagged = 0,
    RemoveTagged = 1,
    EPCGFilterByTagOperation_MAX = 2
};

enum EPCGGeodesicSphereRepresentation
{
    Icosahedron = 0,
    EPCGGeodesicSphereRepresentation_MAX = 1
};

enum EPCGGetDataFromActorMode
{
    ParseActorComponents = 0,
    GetSinglePoint = 1,
    GetDataFromProperty = 2,
    GetDataFromPCGComponent = 3,
    GetDataFromPCGComponentOrParseComponents = 4,
    GetActorReference = 5,
    GetComponentsReference = 6,
    EPCGGetDataFromActorMode_MAX = 7
};

enum EPCGGridPivot
{
    Global = 0,
    OriginalComponent = 1,
    LocalComponent = 2,
    EPCGGridPivot_MAX = 3
};

enum EPCGHiGenGrid
{
    Uninitialized = 0,
    Grid4 = 1,
    Grid8 = 2,
    Grid16 = 3,
    Grid32 = 4,
    Grid64 = 5,
    Grid128 = 6,
    Grid256 = 7,
    Grid512 = 8,
    Grid1024 = 9,
    Grid2048 = 10,
    GridMin = 11,
    GridMax = 12,
    Unbounded = 13,
    EPCGHiGenGrid_MAX = 14
};

enum EPCGIntersectionDensityFunction
{
    Multiply = 0,
    Minimum = 1,
    EPCGIntersectionDensityFunction_MAX = 2
};

enum EPCGJunoPOIIAMPreferredLevel
{
    None = 0,
    Default = 1,
    NonHLOD = 2,
    HLOD = 3,
    EPCGJunoPOIIAMPreferredLevel_MAX = 4
};

enum EPCGJunoPersistenceMigrationResultFlags
{
    None = 0,
    MigrationApplied = 1,
    PersistentDataReset = 2,
    EPCGJunoPersistenceMigrationResultFlags_MAX = 3
};

enum EPCGLandscapeCacheSerializationContents
{
    SerializeOnlyPositionsAndNormals = 0,
    SerializeOnlyLayerData = 1,
    SerializeAll = 2,
    EPCGLandscapeCacheSerializationContents_MAX = 3
};

enum EPCGLandscapeCacheSerializationMode
{
    SerializeOnlyAtCook = 0,
    NeverSerialize = 1,
    AlwaysSerialize = 2,
    EPCGLandscapeCacheSerializationMode_MAX = 3
};

enum EPCGLocalGridPivot
{
    Global = 0,
    OriginalComponent = 1,
    LocalComponent = 2,
    EPCGLocalGridPivot_MAX = 3
};

enum EPCGMatchMaxDistanceMode
{
    NoMaxDistance = 0,
    UseConstantMaxDistance = 1,
    AttributeMaxDistance = 2,
    EPCGMatchMaxDistanceMode_MAX = 3
};

enum EPCGMeshSelectorMaterialOverrideMode
{
    NoOverride = 0,
    StaticOverride = 1,
    ByAttributeOverride = 2,
    EPCGMeshSelectorMaterialOverrideMode_MAX = 3
};

enum EPCGMetadataBitwiseOperation
{
    And = 0,
    Not = 1,
    Or = 2,
    Xor = 3,
    EPCGMetadataBitwiseOperation_MAX = 4
};

enum EPCGMetadataBooleanOperation
{
    And = 0,
    Not = 1,
    Or = 2,
    Xor = 3,
    EPCGMetadataBooleanOperation_MAX = 4
};

enum EPCGMetadataCompareOperation
{
    Equal = 0,
    NotEqual = 1,
    Greater = 2,
    GreaterOrEqual = 3,
    Less = 4,
    LessOrEqual = 5,
    EPCGMetadataCompareOperation_MAX = 6
};

enum EPCGMetadataFilterMode
{
    ExcludeAttributes = 0,
    IncludeAttributes = 1,
    EPCGMetadataFilterMode_MAX = 2
};

enum EPCGMetadataMakeRotatorOp
{
    MakeRotFromX = 0,
    MakeRotFromY = 1,
    MakeRotFromZ = 2,
    MakeRotFromXY = 3,
    MakeRotFromYX = 4,
    MakeRotFromXZ = 5,
    MakeRotFromZX = 6,
    MakeRotFromYZ = 7,
    MakeRotFromZY = 8,
    MakeRotFromAxes = 9,
    MakeRotFromAngles = 10,
    EPCGMetadataMakeRotatorOp_MAX = 11
};

enum EPCGMetadataMakeVector3
{
    ThreeValues = 0,
    Vector2AndValue = 1,
    EPCGMetadataMakeVector3_MAX = 2
};

enum EPCGMetadataMakeVector4
{
    FourValues = 0,
    Vector2AndTwoValues = 1,
    TwoVector2 = 2,
    Vector3AndValue = 3,
    EPCGMetadataMakeVector4_MAX = 4
};

enum EPCGMetadataMathsOperation
{
    UnaryOp = 0,
    Sign = 1,
    Frac = 2,
    Truncate = 3,
    Round = 4,
    Sqrt = 5,
    Abs = 6,
    Floor = 7,
    Ceil = 8,
    OneMinus = 9,
    BinaryOp = 10,
    Add = 11,
    Subtract = 12,
    Multiply = 13,
    Divide = 14,
    Max = 15,
    Min = 16,
    Pow = 17,
    ClampMin = 18,
    ClampMax = 19,
    Modulo = 20,
    Set = 21,
    TernaryOp = 22,
    Clamp = 23,
    Lerp = 24
};

enum EPCGMetadataOp
{
    Min = 0,
    Max = 1,
    Sub = 2,
    Add = 3,
    Mul = 4,
    Div = 5,
    SourceValue = 6,
    TargetValue = 7
};

enum EPCGMetadataRotatorOperation
{
    RotatorOp = 0,
    Combine = 1,
    Invert = 2,
    Lerp = 3,
    Normalize = 4,
    TransformOp = 5,
    TransformRotation = 6,
    InverseTransformRotation = 7,
    EPCGMetadataRotatorOperation_MAX = 8
};

enum EPCGMetadataSettingsBaseMode
{
    Inferred = 0,
    NoBroadcast = 1,
    Broadcast = 2,
    EPCGMetadataSettingsBaseMode_MAX = 3
};

enum EPCGMetadataSettingsBaseTypes
{
    AutoUpcastTypes = 0,
    StrictTypes = 1,
    EPCGMetadataSettingsBaseTypes_MAX = 2
};

enum EPCGMetadataStringOperation
{
    Append = 0,
    Replace = 1,
    EPCGMetadataStringOperation_MAX = 2
};

enum EPCGMetadataTransformOperation
{
    Compose = 0,
    Invert = 1,
    Lerp = 2,
    EPCGMetadataTransformOperation_MAX = 3
};

enum EPCGMetadataTrigOperation
{
    Acos = 0,
    Asin = 1,
    Atan = 2,
    Atan2 = 3,
    Cos = 4,
    Sin = 5,
    Tan = 6,
    DegToRad = 7,
    RadToDeg = 8,
    EPCGMetadataTrigOperation_MAX = 9
};

enum EPCGMetadataTypes
{
    Float = 0,
    Double = 1,
    Integer32 = 2,
    Integer64 = 3,
    Vector2 = 4,
    Vector = 5,
    Vector4 = 6,
    Quaternion = 7,
    Transform = 8,
    String = 9,
    Boolean = 10,
    Rotator = 11,
    Name = 12,
    SoftObjectPath = 13,
    SoftClassPath = 14,
    Count = 15,
    Unknown = 16,
    EPCGMetadataTypes_MAX = 17
};

enum EPCGMetadataTypesConstantStructStringMode
{
    String = 0,
    SoftObjectPath = 1,
    SoftClassPath = 2,
    EPCGMetadataTypesConstantStructStringMode_MAX = 3
};

enum EPCGMetadataVectorOperation
{
    VectorOp = 0,
    Cross = 1,
    Dot = 2,
    Distance = 3,
    Normalize = 4,
    Length = 5,
    RotateAroundAxis = 6,
    TransformOp = 7,
    TransformDirection = 8,
    TransformLocation = 9,
    InverseTransformDirection = 10,
    InverseTransformLocation = 11,
    EPCGMetadataVectorOperation_MAX = 12
};

enum EPCGNodeTitleType
{
    FullTitle = 0,
    ListView = 1,
    EPCGNodeTitleType_MAX = 2
};

enum EPCGPinStatus
{
    Normal = 0,
    Required = 1,
    Advanced = 2,
    EPCGPinStatus_MAX = 3
};

enum EPCGPinUsage
{
    Normal = 0,
    Loop = 1,
    Feedback = 2,
    DependencyOnly = 3,
    EPCGPinUsage_MAX = 4
};

enum EPCGPointExtentsModifierMode
{
    Set = 0,
    Minimum = 1,
    Maximum = 2,
    Add = 3,
    Multiply = 4,
    EPCGPointExtentsModifierMode_MAX = 5
};

enum EPCGPointNeighborhoodDensityMode
{
    None = 0,
    SetNormalizedDistanceToDensity = 1,
    SetAverageDensity = 2,
    EPCGPointNeighborhoodDensityMode_MAX = 3
};

enum EPCGPointPosition
{
    CellCenter = 0,
    CellCorners = 1,
    EPCGPointPosition_MAX = 2
};

enum EPCGPointProperties
{
    Density = 0,
    BoundsMin = 1,
    BoundsMax = 2,
    Extents = 3,
    Color = 4,
    Position = 5,
    Rotation = 6,
    Scale = 7,
    Transform = 8,
    Steepness = 9,
    LocalCenter = 10,
    Seed = 11,
    EPCGPointProperties_MAX = 12
};

enum EPCGPrintVerbosity
{
    Log = 0,
    Warning = 1,
    Error = 2,
    EPCGPrintVerbosity_MAX = 3
};

enum EPCGProjectionColorBlendMode
{
    SourceValue = 0,
    TargetValue = 1,
    Add = 2,
    Subtract = 3,
    Multiply = 4,
    EPCGProjectionColorBlendMode_MAX = 5
};

enum EPCGProjectionTagMergeMode
{
    Source = 0,
    Target = 1,
    Both = 2,
    EPCGProjectionTagMergeMode_MAX = 3
};

enum EPCGProxyInterfaceMode
{
    ByNativeElement = 0,
    ByBlueprintElement = 1,
    BySettings = 2,
    EPCGProxyInterfaceMode_MAX = 3
};

enum EPCGReverseSplineOperation
{
    Reverse = 0,
    ForceClockwise = 1,
    ForceCounterClockwise = 2,
    EPCGReverseSplineOperation_MAX = 3
};

enum EPCGSelfPruningType
{
    LargeToSmall = 0,
    SmallToLarge = 1,
    AllEqual = 2,
    None = 3,
    RemoveDuplicates = 4,
    EPCGSelfPruningType_MAX = 5
};

enum EPCGSettingsExecutionMode
{
    Enabled = 0,
    Debug = 1,
    Isolated = 2,
    Disabled = 3,
    EPCGSettingsExecutionMode_MAX = 4
};

enum EPCGSettingsType
{
    InputOutput = 0,
    Spatial = 1,
    Density = 2,
    Blueprint = 3,
    Metadata = 4,
    Filter = 5,
    Sampler = 6,
    Spawner = 7,
    Subgraph = 8,
    Debug = 9,
    Generic = 10,
    Param = 11,
    HierarchicalGeneration = 12,
    ControlFlow = 13,
    PointOps = 14,
    GraphParameters = 15,
    Reroute = 16,
    EPCGSettingsType_MAX = 17
};

enum EPCGSortMethod
{
    Ascending = 0,
    Descending = 1,
    EPCGSortMethod_MAX = 2
};

enum EPCGSpawnActorGenerationTrigger
{
    Default = 0,
    ForceGenerate = 1,
    DoNotGenerateInEditor = 2,
    DoNotGenerate = 3,
    EPCGSpawnActorGenerationTrigger_MAX = 4
};

enum EPCGSpawnActorOption
{
    CollapseActors = 0,
    MergePCGOnly = 1,
    NoMerging = 2,
    EPCGSpawnActorOption_MAX = 3
};

enum EPCGSphereGeneration
{
    Geodesic = 0,
    Angle = 1,
    Segments = 2,
    Random = 3,
    Poisson = 4,
    EPCGSphereGeneration_MAX = 5
};

enum EPCGSpherePointOrientation
{
    Radial = 0,
    Centric = 1,
    None = 2,
    EPCGSpherePointOrientation_MAX = 3
};

enum EPCGSplineMeshForwardAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    EPCGSplineMeshForwardAxis_MAX = 3
};

enum EPCGSplineSamplingDimension
{
    OnSpline = 0,
    OnHorizontal = 1,
    OnVertical = 2,
    OnVolume = 3,
    OnInterior = 4,
    EPCGSplineSamplingDimension_MAX = 5
};

enum EPCGSplineSamplingFill
{
    Fill = 0,
    EdgesOnly = 1,
    EPCGSplineSamplingFill_MAX = 2
};

enum EPCGSplineSamplingInteriorOrientation
{
    Uniform = 0,
    FollowCurvature = 1,
    EPCGSplineSamplingInteriorOrientation_MAX = 2
};

enum EPCGSplineSamplingMode
{
    Subdivision = 0,
    Distance = 1,
    NumberOfSamples = 2,
    EPCGSplineSamplingMode_MAX = 3
};

enum EPCGSplineSamplingSeedingMode
{
    SeedFromPosition = 0,
    SeedFromIndex = 1,
    EPCGSplineSamplingSeedingMode_MAX = 2
};

enum EPCGSplitAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    EPCGSplitAxis_MAX = 3
};

enum EPCGStringMatchingOperator
{
    Equal = 0,
    Substring = 1,
    Matches = 2,
    EPCGStringMatchingOperator_MAX = 3
};

enum EPCGTagFilterOperation
{
    KeepOnlySelectedTags = 0,
    DeleteSelectedTags = 1,
    EPCGTagFilterOperation_MAX = 2
};

enum EPCGTextureAddressMode
{
    Clamp = 0,
    Wrap = 1,
    EPCGTextureAddressMode_MAX = 2
};

enum EPCGTextureColorChannel
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EPCGTextureColorChannel_MAX = 4
};

enum EPCGTextureDensityFunction
{
    Ignore = 0,
    Multiply = 1,
    EPCGTextureDensityFunction_MAX = 2
};

enum EPCGTextureFilter
{
    Point = 0,
    Bilinear = 1,
    EPCGTextureFilter_MAX = 2
};

enum EPCGTextureMappingMethod
{
    Planar = 0,
    UVCoordinates = 1,
    EPCGTextureMappingMethod_MAX = 2
};

enum EPCGTransformLerpMode
{
    QuatInterp = 0,
    EulerInterp = 1,
    DualQuatInterp = 2,
    EPCGTransformLerpMode_MAX = 3
};

enum EPCGTypeConversion
{
    NoConversionRequired = 0,
    CollapseToPoint = 1,
    Filter = 2,
    MakeConcrete = 3,
    SplineToSurface = 4,
    Failed = 5,
    EPCGTypeConversion_MAX = 6
};

enum EPCGUnionDensityFunction
{
    Maximum = 0,
    ClampedAddition = 1,
    Binary = 2,
    EPCGUnionDensityFunction_MAX = 3
};

enum EPCGUnionType
{
    LeftToRightPriority = 0,
    RightToLeftPriority = 1,
    KeepAll = 2,
    EPCGUnionType_MAX = 3
};

enum EPCGUnitTestDummyEnum
{
    One = 0,
    Two = 1,
    Three = 2,
    EPCGUnitTestDummyEnum_MAX = 3
};

enum EPCGWorldQueryFilterByTag
{
    NoTagFilter = 0,
    IncludeTagged = 1,
    ExcludeTagged = 2,
    EPCGWorldQueryFilterByTag_MAX = 3
};

enum EPCGWorldQuerySelectLandscapeHits
{
    Exclude = 0,
    Include = 1,
    Require = 2,
    EPCGWorldQuerySelectLandscapeHits_MAX = 3
};

enum EPCGWorldRaycastMode
{
    Infinite = 0,
    ScaledVector = 1,
    NormalizedWithLength = 2,
    Segments = 3,
    EPCGWorldRaycastMode_MAX = 4
};

enum EPSCPoolMethod
{
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
    EPSCPoolMethod_MAX = 5
};

enum EPTTState
{
    Enabled = 0,
    MicDisabled = 1,
    AllSoundDisabled = 2,
    EPTTState_MAX = 3
};

enum EPackageSaveResolutionType
{
    None = 0,
    NewFile = 1,
    Overriden = 2,
    UnableToOverride = 3,
    EPackageSaveResolutionType_MAX = 4
};

enum EPageItemTileSize
{
    Size_1_x_1 = 0,
    Size_2_x_1 = 1,
    Size_2_x_2 = 2,
    Size_3_x_2 = 3,
    Size_3_x_3 = 4,
    Count = 5,
    EPageItemTileSize_MAX = 6
};

enum EPannerMode
{
    LegacyStereo = 0,
    Stereo = 1,
    Surround = 2,
    PolarSurround = 3,
    DirectAssignment = 4,
    Num = 5,
    Invalid = 6,
    EPannerMode_MAX = 7
};

enum EPanningMethod
{
    Linear = 0,
    EqualPower = 1,
    EPanningMethod_MAX = 2
};

enum EPaperSpriteAtlasPadding
{
    DilateBorder = 0,
    PadWithZero = 1,
    EPaperSpriteAtlasPadding_MAX = 2
};

enum EParameterCollection_VariableType
{
    Boolean = 0,
    Integer = 1,
    Floating = 2,
    String = 3,
    Message = 4,
    Asset = 5,
    Structure = 6,
    Object = 7,
    EParameterCollection_MAX = 8
};

enum EParameterType
{
    Bool = 0,
    Double = 1,
    Float = 2,
    Int8 = 3,
    Int16 = 4,
    Int32 = 5,
    Int64 = 6,
    Name = 7,
    String = 8,
    UInt8 = 9,
    UInt16 = 10,
    UInt32 = 11,
    UInt64 = 12,
    Num = 13,
    Invalid = 14,
    EParameterType_MAX = 15
};

enum EParentalControlsViewState
{
    Invalid = 0,
    EnterPin = 1,
    AskToEnableControls = 2,
    VerifyEmail = 3,
    SetupEmail = 4,
    SetupPin = 5,
    DisplaySettings = 6,
    DisableParentalControls = 7,
    AskToReEnable = 8,
    ReEnabling = 9,
    CabinModeEmailChange = 10,
    EParentalControlsViewState_MAX = 11
};

enum EParticipantFlowState
{
    NONE = 0,
    Initializing = 1,
    WaitingFor_BroadcastBeginChange = 2,
    WaitingFor_Precommit = 3,
    WaitingFor_Commit = 4,
    EParticipantFlowState_MAX = 5
};

enum EParticipantResponses
{
    NONE = 0,
    AcceptedBegin = 1,
    RejectedBegin = 2,
    AcceptedPreCommit = 3,
    RejectedPreCommit = 4,
    ReceivedSuccess = 5,
    ReceivedAbort = 6,
    NUM = 7,
    EParticipantResponses_MAX = 8
};

enum EParticipantResponses_Repl
{
    N = 0,
    A = 1,
    B = 2,
    C = 3,
    D = 4,
    S = 5,
    F = 6,
    NUM = 7,
    EParticipantResponses_MAX = 8
};

enum EParticleAllocationMode
{
    AutomaticEstimate = 0,
    ManualEstimate = 1,
    FixedCount = 2,
    EParticleAllocationMode_MAX = 3
};

enum EParticleAxisLock
{
    EPAL_NONE = 0,
    EPAL_X = 1,
    EPAL_Y = 2,
    EPAL_Z = 3,
    EPAL_NEGATIVE_X = 4,
    EPAL_NEGATIVE_Y = 5,
    EPAL_NEGATIVE_Z = 6,
    EPAL_ROTATE_X = 7,
    EPAL_ROTATE_Y = 8,
    EPAL_ROTATE_Z = 9,
    EPAL_MAX = 10
};

enum EParticleBurstMethod
{
    EPBM_Instant = 0,
    EPBM_Interpolated = 1,
    EPBM_MAX = 2
};

enum EParticleCameraOffsetUpdateMethod
{
    EPCOUM_DirectSet = 0,
    EPCOUM_Additive = 1,
    EPCOUM_Scalar = 2,
    EPCOUM_MAX = 3
};

enum EParticleCollisionComplete
{
    EPCC_Kill = 0,
    EPCC_Freeze = 1,
    EPCC_HaltCollisions = 2,
    EPCC_FreezeTranslation = 3,
    EPCC_FreezeRotation = 4,
    EPCC_FreezeMovement = 5,
    EPCC_MAX = 6
};

enum EParticleCollisionMode
{
    SceneDepth = 0,
    DistanceField = 1,
    EParticleCollisionMode_MAX = 2
};

enum EParticleCollisionResponse
{
    Bounce = 0,
    Stop = 1,
    Kill = 2,
    EParticleCollisionResponse_MAX = 3
};

enum EParticleDetailMode
{
    PDM_Low = 0,
    PDM_Medium = 1,
    PDM_High = 2,
    PDM_Epic = 3,
    PDM_MAX = 4
};

enum EParticleEventType
{
    EPET_Any = 0,
    EPET_Spawn = 1,
    EPET_Death = 2,
    EPET_Collision = 3,
    EPET_Burst = 4,
    EPET_Blueprint = 5,
    EPET_MAX = 6
};

enum EParticleKey
{
    Activate = 0,
    Deactivate = 1,
    Trigger = 2,
    EParticleKey_MAX = 3
};

enum EParticleScreenAlignment
{
    PSA_FacingCameraPosition = 0,
    PSA_Square = 1,
    PSA_Rectangle = 2,
    PSA_Velocity = 3,
    PSA_AwayFromCenter = 4,
    PSA_TypeSpecific = 5,
    PSA_FacingCameraDistanceBlend = 6,
    PSA_MAX = 7
};

enum EParticleSignificanceLevel
{
    Low = 0,
    Medium = 1,
    High = 2,
    Critical = 3,
    Num = 4,
    EParticleSignificanceLevel_MAX = 5
};

enum EParticleSortMode
{
    PSORTMODE_None = 0,
    PSORTMODE_ViewProjDepth = 1,
    PSORTMODE_DistanceToView = 2,
    PSORTMODE_Age_OldestFirst = 3,
    PSORTMODE_Age_NewestFirst = 4,
    PSORTMODE_MAX = 5
};

enum EParticleSourceSelectionMethod
{
    EPSSM_Random = 0,
    EPSSM_Sequential = 1,
    EPSSM_MAX = 2
};

enum EParticleSubUVInterpMethod
{
    PSUVIM_None = 0,
    PSUVIM_Linear = 1,
    PSUVIM_Linear_Blend = 2,
    PSUVIM_Random = 3,
    PSUVIM_Random_Blend = 4,
    PSUVIM_MAX = 5
};

enum EParticleSysParamType
{
    PSPT_None = 0,
    PSPT_Scalar = 1,
    PSPT_ScalarRand = 2,
    PSPT_Vector = 3,
    PSPT_VectorRand = 4,
    PSPT_Color = 5,
    PSPT_Actor = 6,
    PSPT_Material = 7,
    PSPT_VectorUnitRand = 8,
    PSPT_MAX = 9
};

enum EParticleSystemInsignificanceReaction
{
    Auto = 0,
    Complete = 1,
    DisableTick = 2,
    DisableTickAndKill = 3,
    Num = 4,
    EParticleSystemInsignificanceReaction_MAX = 5
};

enum EParticleSystemOcclusionBoundsMethod
{
    EPSOBM_None = 0,
    EPSOBM_ParticleBounds = 1,
    EPSOBM_CustomBounds = 2,
    EPSOBM_MAX = 3
};

enum EParticleSystemUpdateMode
{
    EPSUM_RealTime = 0,
    EPSUM_FixedTime = 1,
    EPSUM_MAX = 2
};

enum EParticleUVFlipMode
{
    None = 0,
    FlipUV = 1,
    FlipUOnly = 2,
    FlipVOnly = 3,
    RandomFlipUV = 4,
    RandomFlipUOnly = 5,
    RandomFlipVOnly = 6,
    RandomFlipUVIndependent = 7,
    EParticleUVFlipMode_MAX = 8
};

enum EPartsShowingMode
{
    NeverInitalized = 0,
    ShowingTemporaryDefaultParts = 1,
    ShowingTemporaryFallbackParts = 2,
    ShowingDefaultParts = 3,
    ShowingFallbackParts = 4,
    ShowingDesiredParts = 5,
    EPartsShowingMode_MAX = 6
};

enum EPartyInviteRestriction
{
    AnyMember = 0,
    LeaderOnly = 1,
    NoInvites = 2,
    EPartyInviteRestriction_MAX = 3
};

enum EPartyJoinDenialReason
{
    NoReason = 0,
    JoinAttemptAborted = 1,
    Busy = 2,
    OssUnavailable = 3,
    PartyFull = 4,
    GameFull = 5,
    NotPartyLeader = 6,
    PartyPrivate = 7,
    JoinerCrossplayRestricted = 8,
    MemberCrossplayRestricted = 9,
    GameModeRestricted = 10,
    Banned = 11,
    NotLoggedIn = 12,
    CheckingForRejoin = 13,
    TargetUserMissingPresence = 14,
    TargetUserUnjoinable = 15,
    TargetUserAway = 16,
    AlreadyLeaderInPlatformSession = 17,
    TargetUserPlayingDifferentGame = 18,
    TargetUserMissingPlatformSession = 19,
    PlatformSessionMissingJoinInfo = 20,
    FailedToStartFindConsoleSession = 21,
    MissingPartyClassForTypeId = 22,
    TargetUserBlocked = 23,
    InvalidJoinInfo = 24,
    NotFriends = 25,
    CustomReason0 = 26,
    CustomReason1 = 27,
    CustomReason2 = 28,
    CustomReason3 = 29,
    CustomReason4 = 30,
    CustomReason5 = 31,
    CustomReason6 = 32,
    CustomReason7 = 33,
    CustomReason8 = 34,
    CustomReason9 = 35,
    CustomReason10 = 36,
    CustomReason11 = 37,
    CustomReason12 = 38,
    CustomReason13 = 39,
    CustomReason14 = 40,
    CustomReason15 = 41,
    CustomReason16 = 42,
    CustomReason17 = 43,
    CustomReason18 = 44,
    CustomReason19 = 45,
    CustomReason20 = 46,
    CustomReason21 = 47,
    CustomReason22 = 48,
    CustomReason23 = 49,
    CustomReason24 = 50,
    CustomReason25 = 51,
    CustomReason26 = 52,
    CustomReason27 = 53,
    CustomReason28 = 54,
    CustomReason29 = 55,
    CustomReason30 = 56,
    CustomReason31 = 57,
    CustomReason32 = 58,
    CustomReason33 = 59,
    CustomReason34 = 60,
    CustomReason35 = 61,
    CustomReason36 = 62,
    CustomReason37 = 63,
    CustomReason38 = 64,
    CustomReason39 = 65,
    MAX = 66
};

enum EPartyMemberVoiceChatStatus
{
    Disabled = 0,
    Enabled = 1,
    PartyVoice = 2,
    GameVoice = 3,
    PlatformVoice = 4,
    EPartyMemberVoiceChatStatus_MAX = 5
};

enum EPartyReservationResult
{
    NoResult = 0,
    RequestPending = 1,
    GeneralError = 2,
    PartyLimitReached = 3,
    IncorrectPlayerCount = 4,
    RequestTimedOut = 5,
    ReservationDuplicate = 6,
    ReservationNotFound = 7,
    ReservationAccepted = 8,
    ReservationDenied = 9,
    ReservationDenied_CrossPlayRestriction = 10,
    ReservationDenied_Banned = 11,
    ReservationRequestCanceled = 12,
    ReservationInvalid = 13,
    BadSessionId = 14,
    ReservationDenied_ContainsExistingPlayers = 15,
    EPartyReservationResult_MAX = 16
};

enum EPartyRiftPortalManagerValidityResult
{
    Valid = 0,
    Invalid = 1,
    EPartyRiftPortalManagerValidityResult_MAX = 2
};

enum EPartySizeRestriction
{
    None = 0,
    Team = 1,
    EPartySizeRestriction_MAX = 2
};

enum EPartyType
{
    Public = 0,
    FriendsOnly = 1,
    Private = 2,
    EPartyType_MAX = 3
};

enum EPassiveCraftingDoneReason
{
    UnexpectedError = 0,
    PlayerStopped = 1,
    NoOutputSpace = 2,
    MissingIngredients = 3,
    EPassiveCraftingDoneReason_MAX = 4
};

enum EPathExistanceQueryType
{
    NavmeshRaycast2D = 0,
    HierarchicalQuery = 1,
    RegularPathFinding = 2,
    EPathExistanceQueryType_MAX = 3
};

enum EPathFollowingAction
{
    Error = 0,
    NoMove = 1,
    DirectMove = 2,
    PartialPath = 3,
    PathToGoal = 4,
    EPathFollowingAction_MAX = 5
};

enum EPathFollowingRequestResult
{
    Failed = 0,
    AlreadyAtGoal = 1,
    RequestSuccessful = 2,
    EPathFollowingRequestResult_MAX = 3
};

enum EPathFollowingResult
{
    Success = 0,
    Blocked = 1,
    OffPath = 2,
    Aborted = 3,
    Skipped_DEPRECATED = 4,
    Invalid = 5,
    EPathFollowingResult_MAX = 6
};

enum EPathFollowingStatus
{
    Idle = 0,
    Waiting = 1,
    Paused = 2,
    Moving = 3,
    EPathFollowingStatus_MAX = 4
};

enum EPathObstacleAction
{
    Melee = 0,
    Ignore = 1,
    AbortMoveAsFailed = 2,
    FinishMoveAsSucceeded = 3,
    EPathObstacleAction_MAX = 4
};

enum EPathTestQueryType
{
    NavmeshRaycast2D = 0,
    HierarchicalQuery = 1,
    RegularPathFinding = 2,
    EPathTestQueryType_MAX = 3
};

enum EPathTracingBufferTextureId
{
    PTBT_Radiance = 0,
    PTBT_DenoisedRadiance = 1,
    PTBT_Albedo = 2,
    PTBT_Normal = 3,
    PTBT_Variance = 4,
    PTBT_MAX = 5
};

enum EPathUndermineEvent
{
    Predicted = 0,
    Started = 1,
    Finished = 2,
    EPathUndermineEvent_MAX = 3
};

enum EPathfinderNodeState
{
    Normal = 0,
    Snap = 1,
    Warp = 2,
    Invalid = 3,
    EPathfinderNodeState_MAX = 4
};

enum EPatrollingMode
{
    BackAndForth = 0,
    Loop = 1,
    StopAtEnd = 2,
    EPatrollingMode_MAX = 3
};

enum EPatternToolAxisSpacingMode
{
    ByCount = 0,
    StepSize = 1,
    Packed = 2,
    EPatternToolAxisSpacingMode_MAX = 3
};

enum EPatternToolShape
{
    Line = 0,
    Grid = 1,
    Circle = 2,
    EPatternToolShape_MAX = 3
};

enum EPatternToolSingleAxis
{
    XAxis = 0,
    YAxis = 1,
    ZAxis = 2,
    EPatternToolSingleAxis_MAX = 3
};

enum EPatternToolSinglePlane
{
    XYPlane = 0,
    XZPlane = 1,
    YZPlane = 2,
    EPatternToolSinglePlane_MAX = 3
};

enum EPauseType
{
    NoPause = 0,
    Rare = 1,
    New = 2,
    NewAndRare = 3,
    EPauseType_MAX = 4
};

enum EPawnActionAbortState
{
    NeverStarted = 0,
    NotBeingAborted = 1,
    MarkPendingAbort = 2,
    LatentAbortInProgress = 3,
    AbortDone = 4,
    MAX = 5
};

enum EPawnActionEventType
{
    Invalid = 0,
    FailedToStart = 1,
    InstantAbort = 2,
    FinishedAborting = 3,
    FinishedExecution = 4,
    Push = 5,
    EPawnActionEventType_MAX = 6
};

enum EPawnActionFailHandling
{
    RequireSuccess = 0,
    IgnoreFailure = 1,
    EPawnActionFailHandling_MAX = 2
};

enum EPawnActionMoveMode
{
    UsePathfinding = 0,
    StraightLine = 1,
    EPawnActionMoveMode_MAX = 2
};

enum EPawnActionResult
{
    NotStarted = 0,
    InProgress = 1,
    Success = 2,
    Failed = 3,
    Aborted = 4,
    EPawnActionResult_MAX = 5
};

enum EPawnLaunchMinVelocityApply
{
    Add = 0,
    Min = 1,
    EPawnLaunchMinVelocityApply_MAX = 2
};

enum EPawnSubActionTriggeringPolicy
{
    CopyBeforeTriggering = 0,
    ReuseInstances = 1,
    EPawnSubActionTriggeringPolicy_MAX = 2
};

enum EPayoutRewardType
{
    Invalid = 0,
    Commerce = 1,
    GameRelated = 2,
    Token = 3,
    Score = 4,
    EPayoutRewardType_MAX = 5
};

enum EPayoutScoringType
{
    Invalid = 0,
    Points = 1,
    Ranking = 2,
    Percentile = 3,
    Persistent = 4,
    EPayoutScoringType_MAX = 5
};

enum EPedestalNameplateAction
{
    None = 0,
    SendFriendRequest = 1,
    AcceptFriendRequest = 2,
    EPedestalNameplateAction_MAX = 3
};

enum EPedestalNameplateMatchmakingStatus
{
    None = 0,
    Ready = 1,
    NotReady = 2,
    Playing = 3,
    Disconnected = 4,
    Downloading = 5,
    EPedestalNameplateMatchmakingStatus_MAX = 6
};

enum EPedestalSocialNudgeAction
{
    None = 0,
    Join = 1,
    RequestToJoin = 2,
    Invite = 3,
    AcceptInvite = 4,
    EPedestalSocialNudgeAction_MAX = 5
};

enum EPegasusTimelineCategories
{
    Unassigned = 0,
    Player = 1,
    Combat = 2,
    Building = 3,
    Inventory = 4,
    Social = 5,
    Resources = 6,
    EPegasusTimelineCategories_MAX = 7
};

enum EPelvisHeightMode
{
    AllLegs = 0,
    AllPlantedFeet = 1,
    FrontPlantedFeetUphill_FrontFeetDownhill = 2,
    EPelvisHeightMode_MAX = 3
};

enum EPendingActionType
{
    None = 0,
    WorldNameModeration = 1,
    IngameNameModeration = 2,
    DeidentificationOccurred = 3,
    EPendingActionType_MAX = 4
};

enum EPerQualityLevels
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    Num = 5,
    EPerQualityLevels_MAX = 6
};

enum EPerceptionSoundType
{
    Default = 0,
    Explosion = 1,
    ProjectileFlyBy = 2,
    ProjectileImpact = 3,
    WeaponFiring = 4,
    Building = 5,
    MeleeImpact = 6,
    PawnDeath = 7,
    MAX = 8
};

enum EPerceptionState
{
    Threat_Seeing = 0,
    Threat_LKP = 1,
    Threat_Alerted = 2,
    ObstacleIncoming = 3,
    ObstacleBlockedBy = 4,
    ObstacleDetectedTrap = 5,
    Unknown = 6,
    Count = 7,
    Threat_Count = 8,
    EPerceptionState_MAX = 9
};

enum EPermutationTimeType
{
    UseSampleTime = 0,
    UsePermutationTime = 1,
    UseSampleToPermutationTime = 2,
    EPermutationTimeType_MAX = 3
};

enum EPersistenceFrameworkActionEnd
{
    Finished = 0,
    Aborted = 1,
    EPersistenceFrameworkActionEnd_MAX = 2
};

enum EPersistenceFrameworkExecutionOption
{
    RemoveAllActionsOnFinish = 0,
    AbortIfAnyActionFails = 1,
    EPersistenceFrameworkActionQueueOptions_MaxFlags = 2,
    EPersistenceFrameworkExecutionOption_MAX = 3
};

enum EPersistenceFrameworkPlayerRegistration
{
    Registered = 0,
    UnRegistered = 1,
    EPersistenceFrameworkPlayerRegistration_MAX = 2
};

enum EPersistenceFrameworkResult
{
    Failed = 0,
    Success = 1,
    InProgress = 2,
    NotReady = 3,
    EPersistenceFrameworkResult_MAX = 4
};

enum EPersistenceFrameworkServiceLatentResult
{
    EndedTickingWithFailure = 0,
    EndedTickingWithSuccess = 1,
    ContinueTicking = 2,
    EPersistenceFrameworkServiceLatentResult_MAX = 3
};

enum EPersistenceFrameworkState
{
    NotReady = 0,
    ReadyForPersistence = 1,
    Deinitializing = 2,
    DeInitialized = 3,
    EPersistenceFrameworkState_MAX = 4
};

enum EPersistenceFrameworkStorageEnvironment
{
    Live = 0,
    Playtest = 1,
    EPersistenceFrameworkStorageEnvironment_MAX = 2
};

enum EPersistentValueScope
{
    Encounter = 0,
    Sequence = 1,
    Always = 2,
    EPersistentValueScope_MAX = 3
};

enum EPhaseCommit
{
    One = 0,
    Two = 1,
    Three = 2,
    EPhaseCommit_MAX = 3
};

enum EPhaserLFOType
{
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
    EPhaserLFOType_MAX = 8
};

enum EPhysBodyOp
{
    PBO_None = 0,
    PBO_Term = 1,
    PBO_MAX = 2
};

enum EPhysicalMaterialMaskColor
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Cyan = 3,
    Magenta = 4,
    Yellow = 5,
    White = 6,
    Black = 7,
    MAX = 8
};

enum EPhysicalMaterialSoftCollisionMode
{
    None = 0,
    RelativeThickness = 1,
    AbsoluteThickess = 2,
    EPhysicalMaterialSoftCollisionMode_MAX = 3
};

enum EPhysicalStrainHealthMode
{
    Disabled = 0,
    FullIntegrityPercentageMapping = 1,
    ZeroIntegrity = 2,
    FullIntegrityFatigueThresholdMapping = 3,
    EPhysicalStrainHealthMode_MAX = 4
};

enum EPhysicalSurface
{
    SurfaceType_Default = 0,
    SurfaceType1 = 1,
    SurfaceType2 = 2,
    SurfaceType3 = 3,
    SurfaceType4 = 4,
    SurfaceType5 = 5,
    SurfaceType6 = 6,
    SurfaceType7 = 7,
    SurfaceType8 = 8,
    SurfaceType9 = 9,
    SurfaceType10 = 10,
    SurfaceType11 = 11,
    SurfaceType12 = 12,
    SurfaceType13 = 13,
    SurfaceType14 = 14,
    SurfaceType15 = 15,
    SurfaceType16 = 16,
    SurfaceType17 = 17,
    SurfaceType18 = 18,
    SurfaceType19 = 19,
    SurfaceType20 = 20,
    SurfaceType21 = 21,
    SurfaceType22 = 22,
    SurfaceType23 = 23,
    SurfaceType24 = 24,
    SurfaceType25 = 25,
    SurfaceType26 = 26,
    SurfaceType27 = 27,
    SurfaceType28 = 28,
    SurfaceType29 = 29,
    SurfaceType30 = 30,
    SurfaceType31 = 31,
    SurfaceType32 = 32,
    SurfaceType33 = 33,
    SurfaceType34 = 34,
    SurfaceType35 = 35,
    SurfaceType36 = 36,
    SurfaceType37 = 37,
    SurfaceType38 = 38,
    SurfaceType39 = 39,
    SurfaceType40 = 40,
    SurfaceType41 = 41,
    SurfaceType42 = 42,
    SurfaceType43 = 43,
    SurfaceType44 = 44,
    SurfaceType45 = 45,
    SurfaceType46 = 46,
    SurfaceType47 = 47,
    SurfaceType48 = 48,
    SurfaceType49 = 49,
    SurfaceType50 = 50,
    SurfaceType51 = 51,
    SurfaceType52 = 52,
    SurfaceType53 = 53,
    SurfaceType54 = 54,
    SurfaceType55 = 55,
    SurfaceType56 = 56,
    SurfaceType57 = 57,
    SurfaceType58 = 58,
    SurfaceType59 = 59,
    SurfaceType60 = 60,
    SurfaceType61 = 61,
    SurfaceType62 = 62,
    SurfaceType_Max = 63,
    EPhysicalSurface_MAX = 64
};

enum EPhysicsAssetSolverType
{
    RBAN = 0,
    World = 1,
    EPhysicsAssetSolverType_MAX = 2
};

enum EPhysicsControlType
{
    WorldSpace = 0,
    ParentSpace = 1,
    EPhysicsControlType_MAX = 2
};

enum EPhysicsMovementType
{
    Static = 0,
    Kinematic = 1,
    Simulated = 2,
    Default = 3,
    EPhysicsMovementType_MAX = 4
};

enum EPhysicsReplicationMode
{
    Default = 0,
    PredictiveInterpolation = 1,
    Resimulation = 2,
    EPhysicsReplicationMode_MAX = 3
};

enum EPhysicsStateAction
{
    AddForce = 0,
    AddTorque = 1,
    AddForceAtPosition = 2,
    AddLinearVelocity = 3,
    AddAngularVelocity = 4,
    AddVelocityAtPosition = 5,
    AddLinearImpulse = 6,
    AddAngularImpulse = 7,
    AddImpulseAtPosition = 8,
    AddAcceleration = 9,
    NumActions = 10,
    EPhysicsStateAction_MAX = 11
};

enum EPhysicsTransformUpdateMode
{
    SimulationUpatesComponentTransform = 0,
    ComponentTransformIsKinematic = 1,
    EPhysicsTransformUpdateMode_MAX = 2
};

enum EPhysicsType
{
    PhysType_Default = 0,
    PhysType_Kinematic = 1,
    PhysType_Simulated = 2,
    PhysType_MAX = 3
};

enum EPickupDeleteType
{
    DeleteAllTrackedPickups = 0,
    DeleteAllPickupsWithinBounds = 1,
    EPickupDeleteType_MAX = 2
};

enum EPickupMeshTransformExec
{
    IsIdentity = 0,
    IsOverridden = 1,
    EPickupMeshTransformExec_MAX = 2
};

enum EPilgrimAccumulateStarTypes
{
    None = 0,
    Regular = 1,
    Golden = 2,
    EPilgrimAccumulateStarTypes_MAX = 3
};

enum EPilgrimAccumulateStarsMessageType
{
    BandStars = 0,
    SoloStars = 1,
    Count = 2,
    EPilgrimAccumulateStarsMessageType_MAX = 3
};

enum EPilgrimAnalyticsResultsReturn
{
    None = 0,
    LeaveToLobby = 1,
    LeaveStage = 2,
    LeaveStage_Timer = 3,
    EPilgrimAnalyticsResultsReturn_MAX = 4
};

enum EPilgrimAnalyticsSongAccessScope
{
    None = 0,
    Player = 1,
    Party = 2,
    All = 3,
    EPilgrimAnalyticsSongAccessScope_MAX = 4
};

enum EPilgrimAnalyticsSongEndReason
{
    SongFinished = 0,
    SongRestarted = 1,
    PlayerDisconnected = 2,
    EPilgrimAnalyticsSongEndReason_MAX = 3
};

enum EPilgrimCantAddSongReason
{
    None = 0,
    SetlistLocked = 1,
    SongAlreadyAdded = 2,
    PlayerHasAddedMaxSongs = 3,
    InvalidSongShortName = 4,
    MissingSong = 5,
    SongNotAvailable = 6,
    EPilgrimCantAddSongReason_MAX = 7
};

enum EPilgrimEvaluatorRuleSet
{
    standard = 0,
    StrummedGuitar = 1,
    EPilgrimEvaluatorRuleSet_MAX = 2
};

enum EPilgrimGemInputState
{
    GemHit = 0,
    UserSwingAndMiss = 1,
    GemPassed = 2,
    NumGemInputStates = 3,
    EPilgrimGemInputState_MAX = 4
};

enum EPilgrimGemType
{
    Normal = 0,
    PullOff = 1,
    HOPO = 2,
    EPilgrimGemType_MAX = 3
};

enum EPilgrimIMCPriority
{
    Low = 0,
    Medium = 1,
    High = 2,
    Highest = 3,
    EPilgrimIMCPriority_MAX = 4
};

enum EPilgrimInputCategory
{
    Lane = 0,
    Overdrive = 1,
    Strum = 2,
    EPilgrimInputCategory_MAX = 3
};

enum EPilgrimLeaderboardType
{
    SoloGuitar = 0,
    SoloBass = 1,
    SoloVocals = 2,
    SoloDrum = 3,
    BandDuo = 4,
    BandTrio = 5,
    BandQuad = 6,
    SoloPeripheralGuitar = 7,
    SoloPeripheralBass = 8,
    SoloPeripheralDrum = 9,
    Invalid = 10,
    EPilgrimLeaderboardType_MAX = 11
};

enum EPilgrimNoteEventMessageIncrementType
{
    ByTime = 0,
    ByValue = 1,
    Count = 2,
    EPilgrimNoteEventMessageIncrementType_MAX = 3
};

enum EPilgrimPeripheralInputMode
{
    None = 0,
    Guitar = 1,
    EPilgrimPeripheralInputMode_MAX = 2
};

enum EPilgrimPersonalBestType
{
    SoloScore = 0,
    BandScore = 1,
    SpotlightScore = 2,
    Invalid = 3,
    EPilgrimPersonalBestType_MAX = 4
};

enum EPilgrimPlayerFeedSortType
{
    NewestScore = 0,
    OldestScore = 1,
    HighestScore = 2,
    LowestScore = 3,
    EPilgrimPlayerFeedSortType_MAX = 4
};

enum EPilgrimPlayerHistoryScoreParam
{
    AllScores = 0,
    HigherScores = 1,
    LowerScores = 2,
    EPilgrimPlayerHistoryScoreParam_MAX = 3
};

enum EPilgrimPreloaderSongPosition
{
    Current = 0,
    Next = 1,
    EPilgrimPreloaderSongPosition_MAX = 2
};

enum EPilgrimQuickplayState
{
    Invalid = 0,
    Loading = 1,
    Pregame = 2,
    Preintro = 3,
    Intro = 4,
    SongGameplay = 5,
    Outro = 6,
    SongResults = 7,
    SetResults = 8,
    EPilgrimQuickplayState_MAX = 9
};

enum EPilgrimScoreEventMessageIncrementType
{
    ByScore = 0,
    ByStars = 1,
    ByValue = 2,
    Count = 3,
    EPilgrimScoreEventMessageIncrementType_MAX = 4
};

enum EPilgrimScoreEventMessageType
{
    BandScore = 0,
    SoloScore = 1,
    Count = 2,
    EPilgrimScoreEventMessageType_MAX = 3
};

enum EPilgrimScoringMode
{
    IncludeModifiers = 0,
    ExcludeModifiers = 1,
    EPilgrimScoringMode_MAX = 2
};

enum EPilgrimScoringTarget
{
    None = 0,
    BaseGem = 1,
    StreakMultiplier = 2,
    OverdriveMultiplier = 3,
    SustainPerBeat = 4,
    AccuracyMultiplier = 5,
    EPilgrimScoringTarget_MAX = 6
};

enum EPilgrimSongDifficulty
{
    DifficultyEasy = 0,
    DifficultyMedium = 1,
    DifficultyHard = 2,
    DifficultyExpert = 3,
    None = 4,
    NumDifficulties = 5,
    EPilgrimSongDifficulty_MAX = 6
};

enum EPilgrimSongPlayMethod
{
    Invalid = 0,
    Streaming = 1,
    LocalMetasounds = 2,
    EPilgrimSongPlayMethod_MAX = 3
};

enum EPilgrimSongSortDirection
{
    Ascending = 0,
    Descending = 1,
    EPilgrimSongSortDirection_MAX = 2
};

enum EPilgrimSongSortMethod
{
    Artist = 0,
    Title = 1,
    Year = 2,
    EPilgrimSongSortMethod_MAX = 3
};

enum EPilgrimStagePos
{
    Back = 0,
    Front = 1,
    Left = 2,
    Right = 3,
    None = 4,
    EPilgrimStagePos_MAX = 5
};

enum EPilgrimStateMachineMessage
{
    None = 0,
    Solo_PlayPreviousSong = 1,
    Solo_PlayNextSong = 2,
    Solo_LeaveStage = 3,
    Multiplayer_LeaveStage = 4,
    EPilgrimStateMachineMessage_MAX = 5
};

enum EPilgrimStreamerStatus
{
    Idle = 0,
    DownloadingMidi = 1,
    Preparing = 2,
    Opening = 3,
    Ready = 4,
    Streaming = 5,
    Errored = 6,
    EPilgrimStreamerStatus_MAX = 7
};

enum EPilgrimTimedInputType
{
    None = 0,
    Lane = 1,
    DeployOverdrive = 2,
    Strum = 3,
    Modulate = 4,
    DrainOverdrive = 5,
    OverdriveItemActivated = 6,
    OverdriveItemGrantedNotActivated = 7,
    EPilgrimTimedInputType_MAX = 8
};

enum EPilgrimTrackLane
{
    TrackLaneNone = 0,
    TrackLane0 = 1,
    TrackLane1 = 2,
    TrackLane2 = 3,
    TrackLane3 = 4,
    TrackLane4 = 5,
    TrackLane5 = 6,
    NumTrackLanes = 7,
    EPilgrimTrackLane_MAX = 8
};

enum EPilgrimTrackType
{
    TrackGuitar = 0,
    TrackBass = 1,
    TrackVocals = 2,
    TrackDrum = 3,
    TrackPlasticGuitar = 4,
    TrackPlasticBass = 5,
    TrackPlasticDrum = 6,
    TrackEvents = 7,
    TrackNone = 8,
    NumTrackTypes = 9,
    EPilgrimTrackType_MAX = 10
};

enum EPinBoneType
{
    FullTransform = 0,
    TranslateOnly = 1,
    RotateOnly = 2,
    ScaleOnly = 3,
    EPinBoneType_MAX = 4
};

enum EPinContainerType
{
    None = 0,
    Array = 1,
    Set = 2,
    Map = 3,
    EPinContainerType_MAX = 4
};

enum EPinGrantState
{
    Initial = 0,
    Error = 1,
    Downloading = 2,
    Granted = 3,
    EPinGrantState_MAX = 4
};

enum EPinHidingMode
{
    NeverAsPin = 0,
    PinHiddenByDefault = 1,
    PinShownByDefault = 2,
    AlwaysAsPin = 3,
    EPinHidingMode_MAX = 4
};

enum EPinModalType
{
    AcceptFriendRequest = 0,
    SendFriendRequest = 1,
    UnlockGameModeRequest = 2,
    OpenParentalControlsRequest = 3,
    PurchaseRequest = 4,
    AddCilantroRequest = 5,
    MAX = 6
};

enum EPinModalValidityState
{
    None = 0,
    Requesting = 1,
    Success = 2,
    Invalid = 3,
    EPinModalValidityState_MAX = 4
};

enum EPingAverageType
{
    None = 0,
    MovingAverage = 1,
    PlayerStateAvg = 2,
    EPingAverageType_MAX = 3
};

enum EPingType
{
    None = 0,
    RoundTrip = 1,
    RoundTripExclFrame = 2,
    ICMP = 3,
    UDPQoS = 4,
    Max = 5,
    Count = 6
};

enum EPixelDepthOffsetMode
{
    PDOM_Legacy = 0,
    PDOM_AlongCameraVector = 1,
    PDOM_MAX = 2
};

enum EPixelFormat
{
    PF_Unknown = 0,
    PF_A32B32G32R32F = 1,
    PF_B8G8R8A8 = 2,
    PF_G8 = 3,
    PF_G16 = 4,
    PF_DXT1 = 5,
    PF_DXT3 = 6,
    PF_DXT5 = 7,
    PF_UYVY = 8,
    PF_FloatRGB = 9,
    PF_FloatRGBA = 10,
    PF_DepthStencil = 11,
    PF_ShadowDepth = 12,
    PF_R32_FLOAT = 13,
    PF_G16R16 = 14,
    PF_G16R16F = 15,
    PF_G16R16F_FILTER = 16,
    PF_G32R32F = 17,
    PF_A2B10G10R10 = 18,
    PF_A16B16G16R16 = 19,
    PF_D24 = 20,
    PF_R16F = 21,
    PF_R16F_FILTER = 22,
    PF_BC5 = 23,
    PF_V8U8 = 24,
    PF_A1 = 25,
    PF_FloatR11G11B10 = 26,
    PF_A8 = 27,
    PF_R32_UINT = 28,
    PF_R32_SINT = 29,
    PF_PVRTC2 = 30,
    PF_PVRTC4 = 31,
    PF_R16_UINT = 32,
    PF_R16_SINT = 33,
    PF_R16G16B16A16_UINT = 34,
    PF_R16G16B16A16_SINT = 35,
    PF_R5G6B5_UNORM = 36,
    PF_R8G8B8A8 = 37,
    PF_A8R8G8B8 = 38,
    PF_BC4 = 39,
    PF_R8G8 = 40,
    PF_ATC_RGB = 41,
    PF_ATC_RGBA_E = 42,
    PF_ATC_RGBA_I = 43,
    PF_X24_G8 = 44,
    PF_ETC1 = 45,
    PF_ETC2_RGB = 46,
    PF_ETC2_RGBA = 47,
    PF_R32G32B32A32_UINT = 48,
    PF_R16G16_UINT = 49,
    PF_ASTC_4x4 = 50,
    PF_ASTC_6x6 = 51,
    PF_ASTC_8x8 = 52,
    PF_ASTC_10x10 = 53,
    PF_ASTC_12x12 = 54,
    PF_BC6H = 55,
    PF_BC7 = 56,
    PF_R8_UINT = 57,
    PF_L8 = 58,
    PF_XGXR8 = 59,
    PF_R8G8B8A8_UINT = 60,
    PF_R8G8B8A8_SNORM = 61,
    PF_R16G16B16A16_UNORM = 62,
    PF_R16G16B16A16_SNORM = 63,
    PF_PLATFORM_HDR_0 = 64,
    PF_PLATFORM_HDR_1 = 65,
    PF_PLATFORM_HDR_2 = 66,
    PF_NV12 = 67,
    PF_R32G32_UINT = 68,
    PF_ETC2_R11_EAC = 69,
    PF_ETC2_RG11_EAC = 70,
    PF_R8 = 71,
    PF_B5G5R5A1_UNORM = 72,
    PF_ASTC_4x4_HDR = 73,
    PF_ASTC_6x6_HDR = 74,
    PF_ASTC_8x8_HDR = 75,
    PF_ASTC_10x10_HDR = 76,
    PF_ASTC_12x12_HDR = 77,
    PF_G16R16_SNORM = 78,
    PF_R8G8_UINT = 79,
    PF_R32G32B32_UINT = 80,
    PF_R32G32B32_SINT = 81,
    PF_R32G32B32F = 82,
    PF_R8_SINT = 83,
    PF_R64_UINT = 84,
    PF_R9G9B9EXP5 = 85,
    PF_P010 = 86,
    PF_ASTC_4x4_NORM_RG = 87,
    PF_ASTC_6x6_NORM_RG = 88,
    PF_ASTC_8x8_NORM_RG = 89,
    PF_ASTC_10x10_NORM_RG = 90,
    PF_ASTC_12x12_NORM_RG = 91,
    PF_MAX = 92
};

enum EPlaceFireMissed
{
    None = 0,
    Left = 1,
    Right = 2,
    Up = 3,
    Down = 4,
    UpLeft = 5,
    UpRight = 6,
    DownLeft = 7,
    DownRight = 8,
    EPlaceFireMissed_MAX = 9
};

enum EPlacementAuthorHandling
{
    Any = 0,
    RequireAuthorSetPlacement = 1,
    ProhibitAuthorSetPlacement = 2,
    EPlacementAuthorHandling_MAX = 3
};

enum EPlacementType
{
    Free = 0,
    Grid = 1,
    None = 2,
    EPlacementType_MAX = 3
};

enum EPlaneBrushSideMode
{
    BothSides = 0,
    PushDown = 1,
    PullTowards = 2,
    EPlaneBrushSideMode_MAX = 3
};

enum EPlaneConstraintAxisSetting
{
    Custom = 0,
    X = 1,
    Y = 2,
    Z = 3,
    UseGlobalPhysicsSetting = 4,
    EPlaneConstraintAxisSetting_MAX = 5
};

enum EPlaneCutToolActions
{
    NoAction = 0,
    Cut = 1,
    FlipPlane = 2,
    EPlaneCutToolActions_MAX = 3
};

enum EPlaneDirection
{
    Center = 0,
    Right = 1,
    Left = 2,
    Up = 3,
    Down = 4,
    EPlaneDirection_MAX = 5
};

enum EPlateHawkInputEvents
{
    PrimaryFire = 0,
    SecondaryFire = 1,
    Sprint = 2,
    Reload = 3,
    EPlateHawkInputEvents_MAX = 4
};

enum EPlatformIconDisplayRule
{
    Always = 0,
    AlwaysIfDifferent = 1,
    AlwaysWhenInCrossplayParty = 2,
    AlwaysIfDifferentWhenInCrossplayParty = 3,
    Never = 4,
    EPlatformIconDisplayRule_MAX = 5
};

enum EPlatformInterfaceDataType
{
    PIDT_None = 0,
    PIDT_Int = 1,
    PIDT_Float = 2,
    PIDT_String = 3,
    PIDT_Object = 4,
    PIDT_Custom = 5,
    PIDT_MAX = 6
};

enum EPlayContextualAnimExecutionMethod
{
    StartInteraction = 0,
    JoinInteraction = 1,
    TransitionAllActors = 2,
    TransitionSingleActor = 3,
    EPlayContextualAnimExecutionMethod_MAX = 4
};

enum EPlayEventType
{
    None = 0,
    TeamFlight = 1,
    Zone = 2,
    Elimination = 3,
    PlayerMoves = 4,
    SinglePlayerMove = 5,
    ActorsPosition = 6,
    GameHighlights = 7,
    Timecode = 8,
    EPlayEventType_MAX = 9
};

enum EPlayStopPauseExecutionContext
{
    ServerOnly = 0,
    ServerAndClient = 1,
    EPlayStopPauseExecutionContext_MAX = 2
};

enum EPlayerAttributeClampType
{
    Minimum = 0,
    Maximum = 1,
    EPlayerAttributeClampType_MAX = 2
};

enum EPlayerBanReasons
{
    Teaming = 0,
    Afk_Leeching = 1,
    Harassment = 2,
    TradeScamming = 3,
    Exploiting = 4,
    Competitive = 5,
    Creative = 6,
    TeamingWithCheater = 7,
    StreamSniping = 8,
    ModifiedCosmetics = 9,
    TermsOfService = 10,
    EPlayerBanReasons_MAX = 11
};

enum EPlayerBountyThreatLevel
{
    Low = 0,
    Medium = 1,
    High = 2,
    MAX = 3
};

enum EPlayerBuiltWallMaterialType
{
    Wood = 0,
    Metal = 1,
    Stone = 2,
    EPlayerBuiltWallMaterialType_MAX = 3
};

enum EPlayerBuiltWallType
{
    Solid = 0,
    Windows = 1,
    WindowC = 2,
    WindowSide = 3,
    DoorC = 4,
    DoorS = 5,
    DoorSide = 6,
    Archway = 7,
    ArchwayLarge = 8,
    ArchwayLargeSupport = 9,
    EPlayerBuiltWallType_MAX = 10
};

enum EPlayerCaptureKnobOptions
{
    Off = 0,
    EachPlayer = 1,
    OnePlayerPerTeam = 2,
    OwningTeam = 3,
    EPlayerCaptureKnobOptions_MAX = 4
};

enum EPlayerCompetitiveBanReasons
{
    None = 0,
    Cheating = 1,
    Collusion = 2,
    Toxicity = 3,
    Harassment = 4,
    Ringing = 5,
    Gambling = 6,
    Exploiting = 7,
    IntentionalDisconnect = 8,
    IllegalRestart = 9,
    Other = 10,
    AccountSharing = 11,
    CircumventingRegionLock = 12,
    CircumventingBan = 13,
    Smurfing = 14,
    CircumventingTeamLock = 15,
    RuleViolation = 16,
    EPlayerCompetitiveBanReasons_MAX = 17
};

enum EPlayerControllerFollow
{
    NextTeammate = 0,
    PreviousTeammate = 1,
    NextPlayer = 2,
    PreviousPlayer = 3,
    SpecialActor = 4,
    EPlayerControllerFollow_MAX = 5
};

enum EPlayerDamageHeightRatioDetectionType
{
    None = 0,
    FromBottom = 1,
    FromTop = 2,
    EPlayerDamageHeightRatioDetectionType_MAX = 3
};

enum EPlayerFeedbackSubmitState
{
    Start = 0,
    Submitting = 1,
    SubmitFailed = 2,
    SubmitSucceeded = 3,
    EPlayerFeedbackSubmitState_MAX = 4
};

enum EPlayerFeedback_EpicQAState
{
    SignInPage = 0,
    SigningInFailed = 1,
    SigningIn = 2,
    SelectBugComponent = 3,
    EPlayerFeedback_MAX = 4
};

enum EPlayerIndicatorDisplayMode
{
    DontOverride = 0,
    TeamOnly = 1,
    Enemies = 2,
    Anyone = 3,
    Never = 4,
    EPlayerIndicatorDisplayMode_MAX = 5
};

enum EPlayerIndicatorFlags
{
    None = 0,
    Minimap = 1,
    WorldArrow = 2,
    WorldName = 3,
    DBNOCountDown = 4,
    VoiceIndicator = 5,
    EPlayerIndicatorFlags_MAX = 6
};

enum EPlayerMappableKeySettingBehaviors
{
    InheritSettingsFromAction = 0,
    OverrideSettings = 1,
    IgnoreSettings = 2,
    EPlayerMappableKeySettingBehaviors_MAX = 3
};

enum EPlayerMappableKeySlot
{
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    Fifth = 4,
    Sixth = 5,
    Seventh = 6,
    Unspecified = 7,
    Max = 8
};

enum EPlayerQueueType
{
    Player = 0,
    BroadcastSpectator = 1,
    EPlayerQueueType_MAX = 2
};

enum EPlayerReportReasons
{
    None = 0,
    Communication = 1,
    Offensive = 2,
    AFK = 3,
    IgnoringObjective = 4,
    Harassment = 5,
    Exploiting = 6,
    TradeScam = 7,
    CommunicationsAbuse = 8,
    OffensiveName = 9,
    TeamingUpWithEnemies = 10,
    InappropriateContent = 11,
    ExploitingOrHacking = 12,
    Harassment_Threatening = 13,
    Harassment_Annoying = 14,
    Harassment_Selling = 15,
    Harassment_Verbal = 16,
    Harassment_GameBehavior = 17,
    EPlayerReportReasons_MAX = 18
};

enum EPlayerSettingStateInternal
{
    PlayerUseDefault = 0,
    PlayerIsAllowed = 1,
    PlayerIsDisallowed = 2,
    EPlayerSettingStateInternal_MAX = 3
};

enum EPlaylistAdvertisementType
{
    None = 0,
    New = 1,
    Updated = 2,
    EPlaylistAdvertisementType_MAX = 3
};

enum EPlaylistUpdateReason
{
    LocalPlayerJoinedParty = 0,
    LocalPlayerLocationChangedToFrontend = 1,
    LocalPlayerSubgameSelected = 2,
    LocalPlayerLeftParty = 3,
    LocalPlayerDeclinedCrossplayPermission = 4,
    PartyGameSessionKeyChanged = 5,
    PartySquadFillChanged = 6,
    PartyMemberJoined = 7,
    PartyMemberLeft = 8,
    PartyMemberReadinessChanged = 9,
    PartyMemberInGameReadyCheckChanged = 10,
    PartyMemberLocationChanged = 11,
    PartyMemberSpectateAvailabilityChanged = 12,
    PartyMemberSessionJoinInfoChanged = 13,
    ValidatePlaylist_QoSCheckFailed = 14,
    ValidatePlaylist_TournamentEventOver = 15,
    ValidatePlaylist_BlackoutChanged = 16,
    ValidatePlaylist_MatchmakingEventsChanged = 17,
    ValidatePlaylist_TournamentNewEventStarted = 18,
    ValidatePlaylist_TournamentNewEventCountdown = 19,
    ValidatePlaylist_TournamentsChanged = 20,
    ValidatePlaylist_PlayerTournamentDataRefreshed = 21,
    Initialization = 22,
    EPlaylistUpdateReason_MAX = 23
};

enum EPlaylistVisibilityState
{
    Enabled = 0,
    Disabled = 1,
    EnabledButInvisible = 2,
    Hidden = 3,
    EPlaylistVisibilityState_MAX = 4
};

enum EPlaysetCategory
{
    Prefab = 0,
    Gallery = 1,
    Device = 2,
    Island = 3,
    EPlaysetCategory_MAX = 4
};

enum EPlaysetOffsetType
{
    CustomOffsetFromCorner = 0,
    Center = 1,
    EPlaysetOffsetType_MAX = 2
};

enum EPlayspaceComponentCreationType
{
    Root = 0,
    ByLocation = 1,
    ByTags = 2,
    EPlayspaceComponentCreationType_MAX = 3
};

enum EPlayspaceCreationType
{
    ChildOfRoot = 0,
    RootDestroy = 1,
    RootInserted = 2,
    RootDoNotClobber = 3,
    EPlayspaceCreationType_MAX = 4
};

enum EPlayspaceJurisdictionFilterState
{
    Initialized = 0,
    PendingResolve = 1,
    Resolved = 2,
    EPlayspaceJurisdictionFilterState_MAX = 3
};

enum EPlayspaceRootType
{
    ShouldBeRoot = 0,
    ShouldBeClobbered = 1,
    EPlayspaceRootType_MAX = 2
};

enum EPoiDiscoveredState
{
    Undiscovered = 0,
    Discovered = 1,
    ForceDiscovered = 2,
    EPoiDiscoveredState_MAX = 3
};

enum EPointLightDeviceLightType
{
    Point = 0,
    Spot = 1,
    EPointLightDeviceLightType_MAX = 2
};

enum EPointLightDeviceModes
{
    Constant = 0,
    Flicker = 1,
    Wave = 2,
    ShortCircuit = 3,
    Party = 4,
    Windy = 5,
    Flash = 6,
    EPointLightDeviceModes_MAX = 7
};

enum EPointOnCircleSpacingMethod
{
    BySpaceBetween = 0,
    ByNumberOfPoints = 1,
    EPointOnCircleSpacingMethod_MAX = 2
};

enum EPoleVectorOption
{
    Direction = 0,
    Location = 1,
    EPoleVectorOption_MAX = 2
};

enum EPollActorsInVolumeTypes
{
    DesignerPlacedOnly = 0,
    PlayerBuiltOnly = 1,
    All = 2,
    EPollActorsInVolumeTypes_MAX = 3
};

enum EPolyEditCutPlaneOrientation
{
    FaceNormals = 0,
    ViewDirection = 1,
    EPolyEditCutPlaneOrientation_MAX = 2
};

enum EPolyEditExtrudeDirection
{
    SelectionNormal = 0,
    WorldX = 1,
    WorldY = 2,
    WorldZ = 3,
    LocalX = 4,
    LocalY = 5,
    LocalZ = 6,
    EPolyEditExtrudeDirection_MAX = 7
};

enum EPolyEditExtrudeDistanceMode
{
    ClickInViewport = 0,
    Fixed = 1,
    EPolyEditExtrudeDistanceMode_MAX = 2
};

enum EPolyEditExtrudeEdgeDirectionMode
{
    LocalExtrudeFrames = 0,
    SingleDirection = 1,
    EPolyEditExtrudeEdgeDirectionMode_MAX = 2
};

enum EPolyEditExtrudeEdgeDistanceMode
{
    Fixed = 0,
    Gizmo = 1,
    EPolyEditExtrudeEdgeDistanceMode_MAX = 2
};

enum EPolyEditExtrudeModeOptions
{
    SingleDirection = 0,
    SelectedTriangleNormals = 1,
    SelectedTriangleNormalsEven = 2,
    EPolyEditExtrudeModeOptions_MAX = 3
};

enum EPolyEditOffsetModeOptions
{
    VertexNormals = 0,
    SelectedTriangleNormals = 1,
    SelectedTriangleNormalsEven = 2,
    EPolyEditOffsetModeOptions_MAX = 3
};

enum EPolyEditPushPullModeOptions
{
    SelectedTriangleNormals = 0,
    SelectedTriangleNormalsEven = 1,
    SingleDirection = 2,
    VertexNormals = 3,
    EPolyEditPushPullModeOptions_MAX = 4
};

enum EPoppedTireReactionStates
{
    None = 0,
    VeerLeft = 1,
    VeerRight = 2,
    Wiggle = 3,
    Yaw90 = 4,
    FlipPitch = 5,
    FlipRoll = 6,
    EPoppedTireReactionStates_MAX = 7
};

enum EPopulationConstraintType
{
    NONE = 0,
    BOOL = 1,
    DISCRETE = 2,
    DISCRETE_FLOAT = 3,
    DISCRETE_COLOR = 4,
    TAG = 5,
    RANGE = 6,
    CURVE = 7,
    CURVE_COLOR = 8,
    EPopulationConstraintType_MAX = 9
};

enum EPortSelectStatus
{
    Error = 0,
    ControllerCableUsed = 1,
    GaveControllerCable = 2,
    CableSwap = 3,
    NewCableUsed = 4,
    ConstantCableUsed = 5,
    ConnectionEnded = 6,
    NoCableAvailable = 7,
    TypeMismatch = 8,
    AttemptedMultiConnect = 9,
    SelfSelect = 10,
    InvalidConnection = 11,
    WouldCreateLoop = 12,
    Unselectable = 13,
    EPortSelectStatus_MAX = 14
};

enum EPortalLinkCodeLockMode
{
    NeverLocked = 0,
    WindowLocked = 1,
    AlwaysLocked = 2,
    EPortalLinkCodeLockMode_MAX = 3
};

enum EPortalLinkCodeLockStatus
{
    Unlocked_NotSet = 0,
    Unlocked = 1,
    Locked = 2,
    EPortalLinkCodeLockStatus_MAX = 3
};

enum EPortamentoMode
{
    Legato = 0,
    Persistent = 1,
    Num = 2,
    None = 3,
    EPortamentoMode_MAX = 4
};

enum EPoseDriverOutput
{
    DrivePoses = 0,
    DriveCurves = 1,
    EPoseDriverOutput_MAX = 2
};

enum EPoseDriverSource
{
    Rotation = 0,
    Translation = 1,
    EPoseDriverSource_MAX = 2
};

enum EPoseDriverType
{
    SwingAndTwist = 0,
    SwingOnly = 1,
    Translation = 2,
    EPoseDriverType_MAX = 3
};

enum EPoseSearchBoneFlags
{
    Velocity = 0,
    Position = 1,
    Rotation = 2,
    Phase = 3,
    EPoseSearchBoneFlags_MAX = 4
};

enum EPoseSearchDataPreprocessor
{
    None = 0,
    Normalize = 1,
    NormalizeOnlyByDeviation = 2,
    NormalizeWithCommonSchema = 3,
    EPoseSearchDataPreprocessor_MAX = 4
};

enum EPoseSearchInterruptMode
{
    DoNotInterrupt = 0,
    InterruptOnDatabaseChange = 1,
    InterruptOnDatabaseChangeAndInvalidateContinuingPose = 2,
    ForceInterrupt = 3,
    ForceInterruptAndInvalidateContinuingPose = 4,
    EPoseSearchInterruptMode_MAX = 5
};

enum EPoseSearchMirrorOption
{
    UnmirroredOnly = 0,
    MirroredOnly = 1,
    UnmirroredAndMirrored = 2,
    EPoseSearchMirrorOption_MAX = 3
};

enum EPoseSearchMode
{
    BruteForce = 0,
    PCAKDTree = 1,
    VPTree = 2,
    EPoseSearchMode_MAX = 3
};

enum EPoseSearchTrajectoryFlags
{
    Velocity = 0,
    Position = 1,
    VelocityDirection = 2,
    FacingDirection = 3,
    VelocityXY = 4,
    PositionXY = 5,
    VelocityDirectionXY = 6,
    FacingDirectionXY = 7,
    EPoseSearchTrajectoryFlags_MAX = 8
};

enum EPositionIncludedOffsets
{
    IncludeOffsets = 0,
    ExcludeOffsets = 1,
    EPositionIncludedOffsets_MAX = 2
};

enum EPositionOrigin
{
    Absolute = 0,
    CameraRelative = 1,
    EPositionOrigin_MAX = 2
};

enum EPositionSelectionMode
{
    Reserved = 0,
    Unreserved = 1,
    All = 2,
    EPositionSelectionMode_MAX = 3
};

enum EPostCopyOperation
{
    None = 0,
    LogicalNegateBool = 1,
    EPostCopyOperation_MAX = 2
};

enum EPostGameClickCatcherMode
{
    Catch_None = 0,
    Catch_MobileOnly = 1,
    Catch_MouseOnly = 2,
    Catch_All = 3,
    Catch_MAX = 4
};

enum EPostGameHUDMode
{
    None = 0,
    AllHidden = 1,
    Spectating = 2,
    AllHiddenExceptXP = 3,
    EPostGameHUDMode_MAX = 4
};

enum EPostGamePlacement
{
    Win = 0,
    Lose = 1,
    Tie = 2,
    NoPlacement = 3,
    EPostGamePlacement_MAX = 4
};

enum EPostGameScreenContinueBehavior
{
    Next = 0,
    Previous = 1,
    EPostGameScreenContinueBehavior_MAX = 2
};

enum EPostProcessDeviceState
{
    Reset = 0,
    Enable = 1,
    Disable = 2,
    BlendIn = 3,
    BlendOut = 4,
    LateApplication = 5,
    EPostProcessDeviceState_MAX = 6
};

enum EPostpartyClippingState
{
    Unset = 0,
    Disabled = 1,
    Enabled = 2,
    EPostpartyClippingState_MAX = 3
};

enum EPowerSlideState
{
    None = 0,
    Entering = 1,
    InProgress = 2,
    Exiting = 3,
    EPowerSlideState_MAX = 4
};

enum EPowerupHeatState
{
    Normal = 0,
    Superheated = 1,
    Overheated = 2,
    EPowerupHeatState_MAX = 3
};

enum EPredictiveStrideWarpingAxisMode
{
    IKFootRootLocalX = 0,
    IKFootRootLocalY = 1,
    IKFootRootLocalZ = 2,
    WorldSpaceVectorInput = 3,
    ComponentSpaceVectorInput = 4,
    ActorSpaceVectorInput = 5,
    EPredictiveStrideWarpingAxisMode_MAX = 6
};

enum EPreferredRenderingMode
{
    MaximizeFrameRate = 0,
    MaximizeResolution = 1,
    EPreferredRenderingMode_MAX = 2
};

enum EPreferredTriangulationDirection
{
    None = 0,
    Tangential = 1,
    Radial = 2,
    EPreferredTriangulationDirection_MAX = 3
};

enum EPresenceIndicatorState
{
    Online = 0,
    Away = 1,
    Offline = 2,
    Blocked = 3,
    EPresenceIndicatorState_MAX = 4
};

enum EPresentationMode
{
    ItemList = 0,
    VariantList = 1,
    EPresentationMode_MAX = 2
};

enum EPresetLanesDifficulty
{
    General = 0,
    Expert = 1,
    EPresetLanesDifficulty_MAX = 2
};

enum EPreventAbilityUseReason
{
    CannotAfford = 0,
    AlreadyActive = 1,
    AbilityActivationBlocked = 2,
    None = 3,
    Count = 4,
    EPreventAbilityUseReason_MAX = 5
};

enum EPreventSupplyDropUseReason
{
    CannotAfford = 0,
    OutOfStock = 1,
    None = 2,
    Count = 3,
    EPreventSupplyDropUseReason_MAX = 4
};

enum EPreventUseStormCircleServiceReason
{
    CannotAfford = 0,
    AlreadyActive = 1,
    StormLocationsAlreadyRevealed = 2,
    None = 3,
    EPreventUseStormCircleServiceReason_MAX = 4
};

enum EPreviewAnimationBlueprintApplicationMethod
{
    LinkedLayers = 0,
    LinkedAnimGraph = 1,
    EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

enum EPreviousNextButtonType
{
    Previous = 0,
    Next = 1,
    EPreviousNextButtonType_MAX = 2
};

enum EPrimaryAssetCookRule
{
    Unknown = 0,
    NeverCook = 1,
    ProductionNeverCook = 2,
    DevelopmentCook = 3,
    DevelopmentAlwaysProductionNeverCook = 4,
    DevelopmentAlwaysCook = 5,
    DevelopmentAlwaysProductionUnknownCook = 6,
    AlwaysCook = 7,
    EPrimaryAssetCookRule_MAX = 8
};

enum EPrimitiveAutoCollisionType
{
    Box = 0,
    Sphere = 1,
    NDOP10_X = 2,
    NDOP10_Y = 3,
    NDOP10_Z = 4,
    NDOP18 = 5,
    NDOP26 = 6,
    EPrimitiveAutoCollisionType_MAX = 7
};

enum EPrimitiveCrosstalkFunctions
{
    SendTagAsPayload = 0,
    SendTaggedObjectPayload = 1,
    SendTaggedStringPayload = 2,
    SendTaggedIntPayload = 3,
    GetTaggedObjectPayload = 4,
    GetTaggedStringPayload = 5,
    GetTaggedIntPayload = 6,
    BindNoParamEventToTaggedDelegate = 7,
    UnbindNoParamEventFromTaggedDelegate = 8,
    UnbindObjectCallbacksFromAllTaggedDelegates = 9,
    EPrimitiveCrosstalkFunctions_MAX = 10
};

enum EPrimitiveGeometryComplexity
{
    JustShell = 0,
    ShellAndUncommonParts = 1,
    ShellWithInsideDetailsAndUncommonParts = 2,
    ShellWithInsideDetails = 3,
    ShellWithFlatCapAndUncommonParts = 4,
    ShellWithFlatCap = 5,
    EPrimitiveGeometryComplexity_MAX = 6
};

enum EPrimitiveGeometrySectionFlag
{
    None = 0,
    Shell = 1,
    InsideDetails = 2,
    UndersideCap = 3,
    OtherCap = 4,
    UncommonParts = 5,
    OtherParts = 6,
    EPrimitiveGeometrySectionFlag_MAX = 7
};

enum EPriorityAttenuationMethod
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    EPriorityAttenuationMethod_MAX = 3
};

enum EPriorityInsertion
{
    AfterReferenceTag = 0,
    BeforeReferenceTag = 1,
    EPriorityInsertion_MAX = 2
};

enum EPrivateMatchSuggestion
{
    None = 0,
    Private = 1,
    Public = 2,
    EPrivateMatchSuggestion_MAX = 3
};

enum EProcMeshSliceCapOption
{
    NoCap = 0,
    CreateNewSectionForCap = 1,
    UseLastSectionForCap = 2,
    EProcMeshSliceCapOption_MAX = 3
};

enum EProceduralDiscType
{
    Disc = 0,
    PuncturedDisc = 1,
    EProceduralDiscType_MAX = 2
};

enum EProceduralRectType
{
    Rectangle = 0,
    RoundedRectangle = 1,
    EProceduralRectType_MAX = 2
};

enum EProceduralRiverAnchorType
{
    Source = 0,
    Lake = 1,
    Coastline = 2,
    DeepSea = 3,
    EProceduralRiverAnchorType_MAX = 4
};

enum EProceduralRouteGuideSetSelectMethod
{
    UseTileId = 0,
    UseTileIndex = 1,
    EProceduralRouteGuideSetSelectMethod_MAX = 2
};

enum EProceduralSphereType
{
    LatLong = 0,
    Box = 1,
    EProceduralSphereType_MAX = 2
};

enum EProceduralStairsType
{
    Linear = 0,
    Floating = 1,
    Curved = 2,
    Spiral = 3,
    EProceduralStairsType_MAX = 4
};

enum EProcessorExecutionFlags
{
    None = 0,
    Standalone = 1,
    Server = 2,
    Client = 3,
    Editor = 4,
    EditorWorld = 5,
    AllNetModes = 6,
    AllWorldModes = 7,
    All = 8,
    EProcessorExecutionFlags_MAX = 9
};

enum EProfileCaptureType
{
    FramePro = 0,
    Insights = 1,
    Network = 2,
    Count = 3,
    EProfileCaptureType_MAX = 4
};

enum EProfileGoState
{
    None = 0,
    StartingRequest = 1,
    SettlingLocation = 2,
    RunningCommands = 3,
    CompletedScenario = 4,
    Summary = 5,
    Completed = 6,
    EProfileGoState_MAX = 7
};

enum EProgressBarFillStyle
{
    Mask = 0,
    Scale = 1,
    EProgressBarFillStyle_MAX = 2
};

enum EProgressBarFillType
{
    LeftToRight = 0,
    RightToLeft = 1,
    FillFromCenter = 2,
    FillFromCenterHorizontal = 3,
    FillFromCenterVertical = 4,
    TopToBottom = 5,
    BottomToTop = 6,
    EProgressBarFillType_MAX = 7
};

enum EProgressiveSetProgress
{
    NoProgress = 0,
    PartialProgress = 1,
    Completed = 2,
    Expired = 3,
    EProgressiveSetProgress_MAX = 4
};

enum EProjectedHullAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    SmallestBoxDimension = 3,
    SmallestVolume = 4,
    EProjectedHullAxis_MAX = 5
};

enum EProjectileWaterHitBehavior
{
    Overlap = 0,
    StopIfStopSimulatingOnHit = 1,
    StopOnOverlap = 2,
    EProjectileWaterHitBehavior_MAX = 3
};

enum EPropertyAccessChangeNotifyMode
{
    Default = 0,
    Never = 1,
    Always = 2,
    EPropertyAccessChangeNotifyMode_MAX = 3
};

enum EPropertyAccessCopyBatch
{
    InternalUnbatched = 0,
    ExternalUnbatched = 1,
    InternalBatched = 2,
    ExternalBatched = 3,
    Count = 4,
    EPropertyAccessCopyBatch_MAX = 5
};

enum EPropertyAccessCopyType
{
    None = 0,
    Plain = 1,
    Complex = 2,
    Bool = 3,
    Struct = 4,
    Object = 5,
    Name = 6,
    Array = 7,
    PromoteBoolToByte = 8,
    PromoteBoolToInt32 = 9,
    PromoteBoolToInt64 = 10,
    PromoteBoolToFloat = 11,
    PromoteBoolToDouble = 12,
    PromoteByteToInt32 = 13,
    PromoteByteToInt64 = 14,
    PromoteByteToFloat = 15,
    PromoteByteToDouble = 16,
    PromoteInt32ToInt64 = 17,
    PromoteInt32ToFloat = 18,
    PromoteInt32ToDouble = 19,
    PromoteFloatToDouble = 20,
    DemoteDoubleToFloat = 21,
    PromoteArrayFloatToDouble = 22,
    DemoteArrayDoubleToFloat = 23,
    PromoteMapValueFloatToDouble = 24,
    DemoteMapValueDoubleToFloat = 25,
    EPropertyAccessCopyType_MAX = 26
};

enum EPropertyAccessIndirectionType
{
    Offset = 0,
    Object = 1,
    Array = 2,
    ScriptFunction = 3,
    NativeFunction = 4,
    EPropertyAccessIndirectionType_MAX = 5
};

enum EPropertyAccessObjectType
{
    None = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    EPropertyAccessObjectType_MAX = 4
};

enum EPropertyBagContainerType
{
    None = 0,
    Array = 1,
    Count = 2,
    EPropertyBagContainerType_MAX = 3
};

enum EPropertyBagMissingEnum
{
    Missing = 0,
    EPropertyBagMissingEnum_MAX = 1
};

enum EPropertyBagPropertyType
{
    None = 0,
    Bool = 1,
    Byte = 2,
    Int32 = 3,
    Int64 = 4,
    Float = 5,
    Double = 6,
    Name = 7,
    String = 8,
    Text = 9,
    Enum = 10,
    Struct = 11,
    Object = 12,
    SoftObject = 13,
    Class = 14,
    SoftClass = 15,
    UInt32 = 16,
    UInt64 = 17,
    Count = 18,
    EPropertyBagPropertyType_MAX = 19
};

enum EPropertyBagResult
{
    Success = 0,
    TypeMismatch = 1,
    OutOfBounds = 2,
    PropertyNotFound = 3,
    EPropertyBagResult_MAX = 4
};

enum EPropertyBindingAccessType
{
    Offset = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    ObjectInstance = 4,
    StructInstance = 5,
    IndexArray = 6,
    EPropertyBindingAccessType_MAX = 7
};

enum EPropertyOverrideTargetType
{
    None = 0,
    Default = 1,
    ImmutableTarget = 2,
    EPropertyOverrideTargetType_MAX = 3
};

enum EPropertyPathTestEnum
{
    One = 0,
    Two = 1,
    Three = 2,
    Four = 3,
    EPropertyPathTestEnum_MAX = 4
};

enum EPropertyValueCategory
{
    Undefined = 0,
    Generic = 1,
    RelativeLocation = 2,
    RelativeRotation = 3,
    RelativeScale3D = 4,
    Visibility = 5,
    Material = 6,
    Color = 7,
    Option = 8,
    EPropertyValueCategory_MAX = 9
};

enum EProximityContactMethod
{
    MinOverlapInProjectionToMajorAxes = 0,
    ConvexHullSharpContact = 1,
    ConvexHullAreaContact = 2,
    EProximityContactMethod_MAX = 3
};

enum EProximityMethod
{
    Precise = 0,
    ConvexHull = 1,
    EProximityMethod_MAX = 2
};

enum EProxyNormalComputationMethod
{
    AngleWeighted = 0,
    AreaWeighted = 1,
    EqualWeighted = 2,
    EProxyNormalComputationMethod_MAX = 3
};

enum EPublishStatus
{
    Banned = 0,
    CannotPublish = 1,
    NeedsCreatorName = 2,
    CanPublishProvisionally = 3,
    CanPublish = 4,
    EPublishStatus_MAX = 5
};

enum EPushFrontierResult
{
    Continue = 0,
    Success = 1,
    Fail = 2,
    OutOfFrontierNodes = 3,
    NoNewFrontierCreated = 4,
    ReachedMaxCost = 5,
    ReachedMaxSteps = 6,
    ReachedDestination = 7,
    NoValidResult = 8,
    EPushFrontierResult_MAX = 9
};

enum EQosCompletionResult
{
    Invalid = 0,
    Success = 1,
    Failure = 2,
    Canceled = 3,
    EQosCompletionResult_MAX = 4
};

enum EQosDatacenterResult
{
    Invalid = 0,
    Success = 1,
    Incomplete = 2,
    EQosDatacenterResult_MAX = 3
};

enum EQosResponseType
{
    NoResponse = 0,
    Success = 1,
    Failure = 2,
    EQosResponseType_MAX = 3
};

enum EQualitativePerfMetric
{
    MVP = 0,
    HitchTimePercent = 1,
    LevelStreamingDistanceP01 = 2,
    DynamicResolution = 3,
    PercentFramesOverBadPingThreshold = 4,
    FrameTime = 5,
    MemoryRisk = 6,
    MapLoadTime = 7,
    BootTime = 8,
    Count = 9,
    EQualitativePerfMetric_MAX = 10
};

enum EQualitativePerfMetricIndex
{
    Excellent = 0,
    Good = 1,
    Average = 2,
    Poor = 3,
    Terrible = 4,
    Count = 5,
    EQualitativePerfMetricIndex_MAX = 6
};

enum EQuartzCommandDelegateSubType
{
    CommandOnFailedToQueue = 0,
    CommandOnQueued = 1,
    CommandOnCanceled = 2,
    CommandOnAboutToStart = 3,
    CommandOnStarted = 4,
    Count = 5,
    EQuartzCommandDelegateSubType_MAX = 6
};

enum EQuartzCommandQuantization
{
    Bar = 0,
    Beat = 1,
    ThirtySecondNote = 2,
    SixteenthNote = 3,
    EighthNote = 4,
    QuarterNote = 5,
    HalfNote = 6,
    WholeNote = 7,
    DottedSixteenthNote = 8,
    DottedEighthNote = 9,
    DottedQuarterNote = 10,
    DottedHalfNote = 11,
    DottedWholeNote = 12,
    SixteenthNoteTriplet = 13,
    EighthNoteTriplet = 14,
    QuarterNoteTriplet = 15,
    HalfNoteTriplet = 16,
    Tick = 17,
    Count = 18,
    None = 19,
    EQuartzCommandQuantization_MAX = 20
};

enum EQuartzCommandType
{
    PlaySound = 0,
    QueueSoundToPlay = 1,
    RetriggerSound = 2,
    TickRateChange = 3,
    TransportReset = 4,
    StartOtherClock = 5,
    Notify = 6,
    Custom = 7,
    EQuartzCommandType_MAX = 8
};

enum EQuartzDelegateType
{
    MetronomeTick = 0,
    CommandEvent = 1,
    Count = 2,
    EQuartzDelegateType_MAX = 3
};

enum EQuartzGunfireState
{
    FirstShot = 0,
    Shooting = 1,
    Stopped = 2,
    Max_None = 3,
    EQuartzGunfireState_MAX = 4
};

enum EQuartzTimeSignatureQuantization
{
    HalfNote = 0,
    QuarterNote = 1,
    EighthNote = 2,
    SixteenthNote = 3,
    ThirtySecondNote = 4,
    Count = 5,
    EQuartzTimeSignatureQuantization_MAX = 6
};

enum EQuarztQuantizationReference
{
    BarRelative = 0,
    TransportRelative = 1,
    CurrentTimeRelative = 2,
    Count = 3,
    EQuarztQuantizationReference_MAX = 4
};

enum EQueryGeneratorRectSpacingMethod
{
    BySpaceBetween = 0,
    ByNumberOfPoints = 1,
    EQueryGeneratorRectSpacingMethod_MAX = 2
};

enum EQueryPOIStateResult
{
    NotReady = 0,
    NotAllowed = 1,
    Cached = 2,
    NoEntry = 3,
    EQueryPOIStateResult_MAX = 4
};

enum EQuestAnalyticStage
{
    Granted = 0,
    AutoCompleted = 1,
    Completed = 2,
    Failed = 3,
    EQuestAnalyticStage_MAX = 4
};

enum EQuestCategoryButtonTimerState
{
    Countdown = 0,
    Custom = 1,
    Disabled = 2,
    None = 3,
    EQuestCategoryButtonTimerState_MAX = 4
};

enum EQuestEditorGenerateBackendNameReason
{
    NoAction = 0,
    OnlyBuildEmpty = 1,
    ForceRebuild = 2,
    EQuestEditorGenerateBackendNameReason_MAX = 3
};

enum EQuestItemComponentDebugStyleType
{
    PushStyleColor = 0,
    PopStyleColor = 1,
    SameLineText = 2,
    NewLineText = 3,
    ProgressBar = 4,
    SetToolTip = 5,
    EQuestItemComponentDebugStyleType_MAX = 6
};

enum EQuestMapScreenMode
{
    Invalid = 0,
    MainCampaign = 1,
    Event = 2,
    EQuestMapScreenMode_MAX = 3
};

enum EQuestObjectiveUpdateType
{
    Progressed = 0,
    ResetObjective = 1,
    ResetQuest = 2,
    ResetObjectiveNoDisplayUpdate = 3,
    Decremented = 4,
    EQuestObjectiveUpdateType_MAX = 5
};

enum EQuestPanelDebugListEntryType
{
    UNSET = 0,
    NotFound = 1,
    ScheduleInstance = 2,
    ScheduleDefinition = 3,
    BundleInstance = 4,
    BundleDefinition = 5,
    QuestInstance = 6,
    QuestDefinition = 7,
    EQuestPanelDebugListEntryType_MAX = 8
};

enum EQuestParticipationScope
{
    None = 0,
    Personal = 1,
    Playspace = 2,
    World = 3,
    Squad = 4,
    Party = 5,
    MAX = 6
};

enum EQuestSpecificationMethod
{
    Static = 0,
    Slotted = 1,
    ServiceProvider = 2,
    EQuestSpecificationMethod_MAX = 3
};

enum EQuestUpdateType
{
    ObjectiveCompleted = 0,
    QuestCompleted = 1,
    ObjectiveUpdated = 2,
    QuestUpdated = 3,
    QuestAndObjectiveUpdate = 4,
    EQuestUpdateType_MAX = 5
};

enum EQuestVisibilityResponse
{
    Hide = 0,
    Show = 1,
    Custom = 2,
    EQuestVisibilityResponse_MAX = 3
};

enum EQueueActionType
{
    Plot = 0,
    ZoneCleanup = 1,
    EnvironmentActorRestoration = 2,
    EQueueActionType_MAX = 3
};

enum EQuickHealingRequirementFlags
{
    Nothing = 0,
    NeedsHealing = 1,
    NeedsShields = 2,
    NeedsBoth = 3,
    Invalid = 4,
    EQuickHealingRequirementFlags_MAX = 5
};

enum EQuickTransformerMode
{
    AxisTranslation = 0,
    AxisRotation = 1,
    EQuickTransformerMode_MAX = 2
};

enum EQuickWeaponButtonGroup
{
    DPad = 0,
    FaceButtons = 1,
    Both = 2,
    EQuickWeaponButtonGroup_MAX = 3
};

enum EQuickWeaponToggle
{
    None = 0,
    Secondary = 1,
    PreviouslyEquipped = 2,
    EQuickWeaponToggle_MAX = 3
};

enum EQuickbarSlots
{
    HarvestingTool = 0,
    Weapon1 = 1,
    Weapon2 = 2,
    Weapon3 = 3,
    Consumable = 4,
    Gadget1 = 5,
    Gadget2 = 6,
    Ability1 = 7,
    Ability2 = 8,
    Ability3 = 9,
    EQuickbarSlots_MAX = 10
};

enum EQuitPreference
{
    Quit = 0,
    Background = 1,
    EQuitPreference_MAX = 2
};

enum ERBFDistanceMethod
{
    Euclidean = 0,
    Quaternion = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    DefaultMethod = 4,
    ERBFDistanceMethod_MAX = 5
};

enum ERBFFunctionType
{
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    DefaultFunction = 5,
    ERBFFunctionType_MAX = 6
};

enum ERBFKernelType
{
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    ERBFKernelType_MAX = 5
};

enum ERBFNormalizeMethod
{
    OnlyNormalizeAboveOne = 0,
    AlwaysNormalize = 1,
    NormalizeWithinMedian = 2,
    NoNormalization = 3,
    ERBFNormalizeMethod_MAX = 4
};

enum ERBFQuatDistanceType
{
    Euclidean = 0,
    ArcLength = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    ERBFQuatDistanceType_MAX = 4
};

enum ERBFSolverType
{
    Additive = 0,
    Interpolative = 1,
    ERBFSolverType_MAX = 2
};

enum ERBFVectorDistanceType
{
    Euclidean = 0,
    Manhattan = 1,
    ArcLength = 2,
    ERBFVectorDistanceType_MAX = 3
};

enum ERHIType
{
    D3D11 = 0,
    D3D12 = 1,
    Performance = 2,
    ERHIType_MAX = 3
};

enum ERTDrawingType
{
    RTAtlas = 0,
    RTAtlasToNonAtlas = 1,
    RTNonAtlasToAtlas = 2,
    RTNonAtlas = 3,
    RTMips = 4,
    ERTDrawingType_MAX = 5
};

enum ERaDistanceRolloffModel
{
    LOGARITHMIC = 0,
    LINEAR = 1,
    NONE = 2,
    ERaDistanceRolloffModel_MAX = 3
};

enum ERaMaterialName
{
    TRANSPARENT = 0,
    ACOUSTIC_CEILING_TILES = 1,
    BRICK_BARE = 2,
    BRICK_PAINTED = 3,
    CONCRETE_BLOCK_COARSE = 4,
    CONCRETE_BLOCK_PAINTED = 5,
    CURTAIN_HEAVY = 6,
    FIBER_GLASS_INSULATION = 7,
    GLASS_THIN = 8,
    GLASS_THICK = 9,
    GRASS = 10,
    LINOLEUM_ON_CONCRETE = 11,
    MARBLE = 12,
    METAL = 13,
    PARQUET_ONCONCRETE = 14,
    PLASTER_ROUGH = 15,
    PLASTER_SMOOTH = 16,
    PLYWOOD_PANEL = 17,
    POLISHED_CONCRETE_OR_TILE = 18,
    SHEETROCK = 19,
    WATER_OR_ICE_SURFACE = 20,
    WOOD_CEILING = 21,
    WOOD_PANEL = 22,
    UNIFORM = 23,
    ERaMaterialName_MAX = 24
};

enum ERaQualityMode
{
    STEREO_PANNING = 0,
    BINAURAL_LOW = 1,
    BINAURAL_MEDIUM = 2,
    BINAURAL_HIGH = 3,
    ERaQualityMode_MAX = 4
};

enum ERaSpatializationMethod
{
    STEREO_PANNING = 0,
    HRTF = 1,
    ERaSpatializationMethod_MAX = 2
};

enum ERadialImpulseFalloff
{
    RIF_Constant = 0,
    RIF_Linear = 1,
    RIF_MAX = 2
};

enum ERadialOrderingMode
{
    CounterClockwise = 0,
    Clockwise = 1,
    Cardinal = 2,
    Custom = 3,
    ERadialOrderingMode_MAX = 4
};

enum ERadioSource
{
    Invalid = 0,
    Vehicle = 1,
    ERadioSource_MAX = 2
};

enum ERadiusTrackingGroupingType
{
    Global = 0,
    Team = 1,
    Squad = 2,
    ERadiusTrackingGroupingType_MAX = 3
};

enum ERandomVelocityGenerationTypeEnum
{
    ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
    ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
    ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
    ChaosNiagara_Max = 3
};

enum ERangeBoundTypes
{
    Exclusive = 0,
    Inclusive = 1,
    Open = 2,
    ERangeBoundTypes_MAX = 3
};

enum ERankedVariantRank
{
    Bronze = 0,
    Silver = 1,
    Gold = 2,
    Platinum = 3,
    Diamond = 4,
    Elite = 5,
    Champion = 6,
    Unreal = 7,
    MAX_None = 8,
    ERankedVariantRank_MAX = 9
};

enum ERappellingState
{
    Targeting = 0,
    ConnectedAndWaiting = 1,
    Rappelling = 2,
    RappellingSwing = 3,
    ERappellingState_MAX = 4
};

enum ERatingsBoard
{
    ESRB = 0,
    PEGI = 1,
    USK = 2,
    GRAC = 3,
    IARC = 4,
    ACB = 5,
    ClassInd = 6,
    Russia = 7,
    CERO = 8,
    FPB = 9,
    GCAM = 10,
    MRO = 11,
    None = 12,
    ERatingsBoard_MAX = 13
};

enum ERatingsEnforcementType
{
    Default = 0,
    IgnoreMaximums = 1,
    IgnoreParty = 2,
    IgnorePartyMaximum = 3,
    ERatingsEnforcementType_MAX = 4
};

enum ERawCurveTrackTypes
{
    RCT_Float = 0,
    RCT_Vector = 1,
    RCT_Transform = 2,
    RCT_MAX = 3
};

enum ERayTracingGroupCullingPriority
{
    CP_0_NEVER_CULL = 0,
    CP_1 = 1,
    CP_2 = 2,
    CP_3 = 3,
    CP_4_DEFAULT = 4,
    CP_5 = 5,
    CP_6 = 6,
    CP_7 = 7,
    CP_8_QUICKLY_CULL = 8,
    CP_MAX = 9
};

enum ERazerChromaDeviceTypes
{
    None = 0,
    Keyboards = 1,
    Mice = 2,
    Headset = 3,
    Mousepads = 4,
    Keypads = 5,
    ChromaLink = 6,
    All = 7,
    ERazerChromaDeviceTypes_MAX = 8
};

enum EReachLocationValidationMode
{
    None = 0,
    Storm = 1,
    Leash = 2,
    SoftLeash = 3,
    EReachLocationValidationMode_MAX = 4
};

enum EReadyCheckState
{
    CheckStarted = 0,
    Ready = 1,
    NotReady = 2,
    EReadyCheckState_MAX = 3
};

enum ERealEstateOffsetType
{
    CustomOffsetFromCorner = 0,
    Center = 1,
    ERealEstateOffsetType_MAX = 2
};

enum ERebootRallyQuestType
{
    Other = 0,
    QRQuest = 1,
    RewardQuest = 2,
    ERebootRallyQuestType_MAX = 3
};

enum ERecastPartitioning
{
    Monotone = 0,
    Watershed = 1,
    ChunkyMonotone = 2,
    ERecastPartitioning_MAX = 3
};

enum ERecipientPresentationMode
{
    Loading = 0,
    GiftPrice = 1,
    AlreadyOwned = 2,
    Unavailable = 3,
    ERecipientPresentationMode_MAX = 4
};

enum ERecoilType
{
    Fixed = 0,
    RandomNegativeOneToOne = 1,
    RandomZeroToOne = 2,
    ERecoilType_MAX = 3
};

enum ERecomputeUVsPropertiesIslandMode
{
    PolyGroups = 0,
    ExistingUVs = 1,
    ERecomputeUVsPropertiesIslandMode_MAX = 2
};

enum ERecomputeUVsPropertiesLayoutType
{
    None = 0,
    Repack = 1,
    NormalizeToExistingBounds = 2,
    NormalizeToBounds = 3,
    NormalizeToWorld = 4,
    ERecomputeUVsPropertiesLayoutType_MAX = 5
};

enum ERecomputeUVsPropertiesUnwrapType
{
    ExpMap = 0,
    Conformal = 1,
    SpectralConformal = 2,
    IslandMerging = 3,
    ERecomputeUVsPropertiesUnwrapType_MAX = 4
};

enum ERecomputeUVsToolOrientationMode
{
    None = 0,
    MinBounds = 1,
    ERecomputeUVsToolOrientationMode_MAX = 2
};

enum ERedeemCodeFailureReason
{
    InvalidCode = 0,
    CodeAlreadyUsed = 1,
    AlreadyHasAccess = 2,
    FailedToGetItem = 3,
    Unknown = 4,
    ERedeemCodeFailureReason_MAX = 5
};

enum ERedeemRealMoneyPurchaseRefreshType
{
    Default = 0,
    ForceCurrent = 1,
    ForceAll = 2,
    UpdateOfflineAuth = 3,
    MAX = 4
};

enum ERedirectorTileDisplayMode
{
    DisplaySprayTexture = 0,
    ChangeOpacity = 1,
    SwitchTextures = 2,
    ERedirectorTileDisplayMode_MAX = 3
};

enum ERefPoseType
{
    EIT_LocalSpace = 0,
    EIT_Additive = 1,
    EIT_MAX = 2
};

enum EReferFriendOrigin
{
    AddFriend = 0,
    PartyUp = 1,
    EReferFriendOrigin_MAX = 2
};

enum EReflectedAndRefractedRayTracedShadows
{
    Disabled = 0,
    Hard_shadows = 1,
    Area_shadows = 2,
    EReflectedAndRefractedRayTracedShadows_MAX = 3
};

enum EReflectionMethod
{
    None = 0,
    Lumen = 1,
    ScreenSpace = 2,
    EReflectionMethod_MAX = 3
};

enum EReflectionSourceType
{
    CapturedScene = 0,
    SpecifiedCubemap = 1,
    EReflectionSourceType_MAX = 2
};

enum EReflectionsType
{
    ScreenSpace = 0,
    RayTracing = 1,
    EReflectionsType_MAX = 2
};

enum ERefractionCoverageMode
{
    RCM_CoverageIgnored = 0,
    RCM_CoverageAccountedFor = 1,
    RCM_MAX = 2
};

enum ERefractionMode
{
    RM_IndexOfRefraction = 0,
    RM_PixelNormalOffset = 1,
    RM_2DOffset = 2,
    RM_None = 3,
    RM_MAX = 4
};

enum ERegisteredPlayerUnregistrationStatus
{
    Registered = 0,
    UnregistrationStarting = 1,
    UnregistrationWaitingForInitialLock = 2,
    UnregistrationWaitingForScoreSave = 3,
    UnregistrationWaitingForFinalSave = 4,
    UnregistrationWaitingForProfileUnlock = 5,
    UnregistrationComplete = 6,
    ERegisteredPlayerUnregistrationStatus_MAX = 7
};

enum ERejoinStatus
{
    NoMatchToRejoin = 0,
    RejoinAvailable = 1,
    UpdatingStatus = 2,
    NeedsRecheck = 3,
    NoMatchToRejoin_MatchEnded = 4,
    ERejoinStatus_MAX = 5
};

enum ERelativeTransformSpace
{
    RTS_World = 0,
    RTS_Actor = 1,
    RTS_Component = 2,
    RTS_ParentBoneSpace = 3,
    RTS_MAX = 4
};

enum EReloadMtxExperimentBucketType
{
    Disabled = 0,
    ReloadMtxIncremental = 1,
    ReloadMtxStatic = 2,
    EReloadMtxExperimentBucketType_MAX = 3
};

enum ERemapCurvesExpressionSource
{
    ExpressionList = 0,
    DataAsset = 1,
    ExpressionMap = 2,
    ERemapCurvesExpressionSource_MAX = 3
};

enum ERemeshSmoothingType
{
    Uniform = 0,
    Cotangent = 1,
    MeanValue = 2,
    ERemeshSmoothingType_MAX = 3
};

enum ERemeshType
{
    Standard = 0,
    FullPass = 1,
    NormalFlow = 2,
    ERemeshType_MAX = 3
};

enum ERenderFocusRule
{
    Always = 0,
    NonPointer = 1,
    NavigationOnly = 2,
    Never = 3,
    ERenderFocusRule_MAX = 4
};

enum ERendererStencilMask
{
    ERSM_Default = 0,
    ERSM_255 = 1,
    ERSM_1 = 2,
    ERSM_2 = 3,
    ERSM_4 = 4,
    ERSM_8 = 5,
    ERSM_16 = 6,
    ERSM_32 = 7,
    ERSM_64 = 8,
    ERSM_128 = 9,
    ERSM_MAX = 10
};

enum ERepAnimPositionMethod
{
    Position = 0,
    CurrentSectionId = 1,
    ERepAnimPositionMethod_MAX = 2
};

enum ERepGraphMutatorSpatializationZoneType
{
    AI = 0,
    AINonFast = 1,
    NonAI = 2,
    NonAINonFast = 3,
    COUNT = 4,
    ERepGraphMutatorSpatializationZoneType_MAX = 5
};

enum EReplayResult
{
    Success = 0,
    ReplayNotFound = 1,
    Corrupt = 2,
    UnsupportedCheckpoint = 3,
    GameSpecific = 4,
    InitConnect = 5,
    LoadMap = 6,
    Serialization = 7,
    StreamerError = 8,
    ConnectionClosed = 9,
    MissingArchive = 10,
    Unknown = 11,
    EReplayResult_MAX = 12
};

enum EReplicationSystem
{
    Default = 0,
    Generic = 1,
    Iris = 2,
    EReplicationSystem_MAX = 3
};

enum EReporterLineStyle
{
    Line = 0,
    Dash = 1,
    EReporterLineStyle_MAX = 2
};

enum ERepositionAllPlayers
{
    HumanPlayers = 0,
    HumanPlayersAndPlayerBots = 1,
    HumanPlayersAndPlayerBotsAndNPCs = 2,
    AllControllers = 3,
    ERepositionAllPlayers_MAX = 4
};

enum ERequiredSubmixes
{
    Main = 0,
    BaseDefault = 1,
    Reverb = 2,
    EQ = 3,
    Count = 4,
    ERequiredSubmixes_MAX = 5
};

enum ERequirementMatchPolicy
{
    RequireAll = 0,
    RequireAny = 1,
    ERequirementMatchPolicy_MAX = 2
};

enum EResetLevel
{
    Objective = 0,
    Quest = 1,
    EResetLevel_MAX = 2
};

enum EResetToCachedTargetBehavior
{
    ResetImmediately = 0,
    ResetDuringUpdateControls = 1,
    EResetToCachedTargetBehavior_MAX = 2
};

enum EResonanceRenderMode
{
    StereoPanning = 0,
    BinauralLowQuality = 1,
    BinauralMediumQuality = 2,
    BinauralHighQuality = 3,
    RoomEffectsOnly = 4,
    EResonanceRenderMode_MAX = 5
};

enum EResourceSizeMemoryCategory
{
    None = 0,
    System = 1,
    Video = 2,
    Other = 3,
    All = 4,
    EResourceSizeMemoryCategory_MAX = 5
};

enum ERespawnAndSpectateClientEventId
{
    ShowUI = 0,
    HideUI = 1,
    ShowRespawnAvailableUI = 2,
    MAX = 3
};

enum ERespawnAndSpectatePlayerRespawningState
{
    None = 0,
    WaitingOnTimer = 1,
    WaitingOnPlayerSelection = 2,
    WaitingOnClientReady = 3,
    Respawning = 4,
    RespawnFinishing = 5,
    ERespawnAndSpectatePlayerRespawningState_MAX = 6
};

enum ERespawnAndSpectateServerPayloadId
{
    SpectateTargetSelected = 0,
    RespawnTargetSelected = 1,
    SpectateAndRespawnTargetSelected = 2,
    ERespawnAndSpectateServerPayloadId_MAX = 3
};

enum ERespawnRequirements
{
    RespawnOnly = 0,
    NoRespawnOnly = 1,
    Both = 2,
    ERespawnRequirements_MAX = 3
};

enum ERespawnSpectateBehavior
{
    Spectate = 0,
    BlackScreen = 1,
    ERespawnSpectateBehavior_MAX = 2
};

enum ERespawnUIState
{
    Hidden = 0,
    ShowRespawnEnabled = 1,
    ShowRespawnDisabled = 2,
    ERespawnUIState_MAX = 3
};

enum EResponseActions
{
    Seen = 0,
    LeftFrontend = 1,
    LogOut = 2,
    Refreshed = 3,
    ContentCleared = 4,
    EResponseActions_MAX = 5
};

enum ERetargetRotationMode
{
    Interpolated = 0,
    OneToOne = 1,
    OneToOneReversed = 2,
    None = 3,
    ERetargetRotationMode_MAX = 4
};

enum ERetargetSourceOrTarget
{
    Source = 0,
    Target = 1,
    ERetargetSourceOrTarget_MAX = 2
};

enum ERetargetTranslationMode
{
    None = 0,
    GloballyScaled = 1,
    Absolute = 2,
    ERetargetTranslationMode_MAX = 3
};

enum EReverbSendMethod
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    EReverbSendMethod_MAX = 3
};

enum ERevolvePropertiesCapFillMode
{
    None = 0,
    CenterFan = 1,
    Delaunay = 2,
    EarClipping = 3,
    ERevolvePropertiesCapFillMode_MAX = 4
};

enum ERevolvePropertiesPolygroupMode
{
    PerShape = 0,
    PerFace = 1,
    PerRevolveStep = 2,
    PerPathSegment = 3,
    ERevolvePropertiesPolygroupMode_MAX = 4
};

enum ERevolvePropertiesQuadSplit
{
    Uniform = 0,
    Compact = 1,
    ERevolvePropertiesQuadSplit_MAX = 2
};

enum ERevolveSplineSampleMode
{
    ControlPointsOnly = 0,
    PolyLineMaxError = 1,
    UniformSpacingAlongCurve = 2,
    ERevolveSplineSampleMode_MAX = 3
};

enum ERewardPageType
{
    Reward = 0,
    Quest = 1,
    Bonus = 2,
    Customization = 3,
    Weekly = 4,
    MAX = 5
};

enum ERewardPlacementBonusType
{
    Solo = 0,
    Duo = 1,
    Squad = 2,
    LargeTeam = 3,
    None = 4,
    TwoTeam = 5,
    MediumTeam = 6,
    QuickSolo = 7,
    QuickDuo = 8,
    QuickSquad = 9,
    QuickLargeTeam = 10,
    QuickTwoTeam = 11,
    QuickMediumTeam = 12,
    SinglePlacement = 13,
    ERewardPlacementBonusType_MAX = 14
};

enum ERewardSource
{
    Invalid = 0,
    MinutesPlayed = 1,
    FirstKill = 2,
    TeamKills = 3,
    FirstRevive = 4,
    AdditionalRevives = 5,
    Placement = 6,
    Medals = 7,
    FirstWin = 8,
    SeasonLevelUp = 9,
    BookLevelUp = 10,
    MatchXP = 11,
    MAX_COUNT = 12,
    ERewardSource_MAX = 13
};

enum ERewardTimePlayedType
{
    Default = 0,
    NoReward = 1,
    FlatValue = 2,
    ERewardTimePlayedType_MAX = 3
};

enum ERewardWarningTooltipType31
{
    None = 0,
    Custom = 1,
    AgeGating = 2,
    Max = 3
};

enum ERichCurveCompressionFormat
{
    RCCF_Empty = 0,
    RCCF_Constant = 1,
    RCCF_Linear = 2,
    RCCF_Cubic = 3,
    RCCF_Mixed = 4,
    RCCF_Weighted = 5,
    RCCF_MAX = 6
};

enum ERichCurveExtrapolation
{
    RCCE_Cycle = 0,
    RCCE_CycleWithOffset = 1,
    RCCE_Oscillate = 2,
    RCCE_Linear = 3,
    RCCE_Constant = 4,
    RCCE_None = 5,
    RCCE_MAX = 6
};

enum ERichCurveInterpMode
{
    RCIM_Linear = 0,
    RCIM_Constant = 1,
    RCIM_Cubic = 2,
    RCIM_None = 3,
    RCIM_MAX = 4
};

enum ERichCurveKeyTimeCompressionFormat
{
    RCKTCF_uint16 = 0,
    RCKTCF_float32 = 1,
    RCKTCF_MAX = 2
};

enum ERichCurveTangentMode
{
    RCTM_Auto = 0,
    RCTM_User = 1,
    RCTM_Break = 2,
    RCTM_None = 3,
    RCTM_SmartAuto = 4,
    RCTM_MAX = 5
};

enum ERichCurveTangentWeightMode
{
    RCTWM_WeightedNone = 0,
    RCTWM_WeightedArrive = 1,
    RCTWM_WeightedLeave = 2,
    RCTWM_WeightedBoth = 3,
    RCTWM_MAX = 4
};

enum ERichPresenceStateChange
{
    AutoUpdate = 0,
    Idle = 1,
    Active = 2,
    Busy = 3,
    NotBusy = 4,
    ERichPresenceStateChange_MAX = 5
};

enum ERichTextInlineIconDisplayMode
{
    IconOnly = 0,
    TextOnly = 1,
    IconAndText = 2,
    MAX = 3
};

enum ERidingControlInputStyle
{
    SteeringControl = 0,
    DirectControl = 1,
    ERidingControlInputStyle_MAX = 2
};

enum ERidingFootPhase
{
    FeetInAir = 0,
    FrontFeetPlanted = 1,
    BackFeetPlanted = 2,
    LeftBackFeetForward = 3,
    RightBackFeetForward = 4,
    LeftPlantedRightPass = 5,
    RightPlantedLeftPass = 6,
    ERidingFootPhase_MAX = 7
};

enum ERiftCosmeticState
{
    None = 0,
    Intro = 1,
    Idle = 2,
    RampUp = 3,
    ShouldDie = 4,
    ERiftCosmeticState_MAX = 5
};

enum ERigBoneType
{
    Imported = 0,
    User = 1,
    ERigBoneType_MAX = 2
};

enum ERigControlAnimationType
{
    AnimationControl = 0,
    AnimationChannel = 1,
    ProxyControl = 2,
    VisualCue = 3,
    ERigControlAnimationType_MAX = 4
};

enum ERigControlAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    ERigControlAxis_MAX = 3
};

enum ERigControlTransformChannel
{
    TranslationX = 0,
    TranslationY = 1,
    TranslationZ = 2,
    Pitch = 3,
    Yaw = 4,
    Roll = 5,
    ScaleX = 6,
    ScaleY = 7,
    ScaleZ = 8,
    ERigControlTransformChannel_MAX = 9
};

enum ERigControlType
{
    Bool = 0,
    Float = 1,
    Integer = 2,
    Vector2D = 3,
    Position = 4,
    Scale = 5,
    Rotator = 6,
    Transform = 7,
    TransformNoScale = 8,
    EulerTransform = 9,
    ScaleFloat = 10,
    ERigControlType_MAX = 11
};

enum ERigControlValueType
{
    Initial = 0,
    Current = 1,
    Minimum = 2,
    Maximum = 3,
    ERigControlValueType_MAX = 4
};

enum ERigControlVisibility
{
    UserDefined = 0,
    BasedOnSelection = 1,
    ERigControlVisibility_MAX = 2
};

enum ERigElementResolveState
{
    Unknown = 0,
    InvalidTarget = 1,
    PossibleTarget = 2,
    DefaultTarget = 3,
    Max = 4
};

enum ERigElementType
{
    None = 0,
    Bone = 1,
    Null = 2,
    Space = 3,
    Control = 4,
    Curve = 5,
    RigidBody = 6,
    Reference = 7,
    Connector = 8,
    Socket = 9,
    First = 10,
    Last = 11,
    All = 12,
    ToResetAfterConstructionEvent = 13,
    ERigElementType_MAX = 14
};

enum ERigEvent
{
    None = 0,
    RequestAutoKey = 1,
    OpenUndoBracket = 2,
    CloseUndoBracket = 3,
    Max = 4
};

enum ERigExecutionType
{
    Runtime = 0,
    Editing = 1,
    Max = 2
};

enum ERigHierarchyNotification
{
    ElementAdded = 0,
    ElementRemoved = 1,
    ElementRenamed = 2,
    ElementSelected = 3,
    ElementDeselected = 4,
    ParentChanged = 5,
    HierarchyReset = 6,
    ControlSettingChanged = 7,
    ControlVisibilityChanged = 8,
    ControlDrivenListChanged = 9,
    ControlShapeTransformChanged = 10,
    ParentWeightsChanged = 11,
    InteractionBracketOpened = 12,
    InteractionBracketClosed = 13,
    ElementReordered = 14,
    ConnectorSettingChanged = 15,
    SocketColorChanged = 16,
    SocketDescriptionChanged = 17,
    SocketDesiredParentChanged = 18,
    HierarchyCopied = 19,
    Max = 20
};

enum ERigLogicCalculationType
{
    Scalar = 0,
    SSE = 1,
    AVX = 2,
    ERigLogicCalculationType_MAX = 3
};

enum ERigMetaDataNameSpace
{
    None = 0,
    Self = 1,
    Parent = 2,
    Root = 3,
    Last = 4,
    ERigMetaDataNameSpace_MAX = 5
};

enum ERigMetadataType
{
    Bool = 0,
    BoolArray = 1,
    Float = 2,
    FloatArray = 3,
    Int32 = 4,
    Int32Array = 5,
    Name = 6,
    NameArray = 7,
    Vector = 8,
    VectorArray = 9,
    Rotator = 10,
    RotatorArray = 11,
    Quat = 12,
    QuatArray = 13,
    Transform = 14,
    TransformArray = 15,
    LinearColor = 16,
    LinearColorArray = 17,
    RigElementKey = 18,
    RigElementKeyArray = 19,
    Invalid = 20,
    ERigMetadataType_MAX = 21
};

enum ERigSpaceType
{
    Global = 0,
    Bone = 1,
    Control = 2,
    Space = 3,
    ERigSpaceType_MAX = 4
};

enum ERigSwitchParentMode
{
    World = 0,
    DefaultParent = 1,
    ParentItem = 2,
    ERigSwitchParentMode_MAX = 3
};

enum ERigTransformStackEntryType
{
    TransformPose = 0,
    ControlOffset = 1,
    ControlShape = 2,
    CurveValue = 3,
    ERigTransformStackEntryType_MAX = 4
};

enum ERigTransformType
{
    InitialLocal = 0,
    CurrentLocal = 1,
    InitialGlobal = 2,
    CurrentGlobal = 3,
    NumTransformTypes = 4,
    ERigTransformType_MAX = 5
};

enum ERigUnitDebugPointMode
{
    Point = 0,
    Vector = 1,
    Max = 2
};

enum ERigUnitDebugTransformMode
{
    Point = 0,
    Axes = 1,
    Box = 2,
    Max = 3
};

enum ERigUnitVisualDebugPointMode
{
    Point = 0,
    Vector = 1,
    Max = 2
};

enum ERigVMAnimEasingType
{
    Linear = 0,
    QuadraticEaseIn = 1,
    QuadraticEaseOut = 2,
    QuadraticEaseInOut = 3,
    CubicEaseIn = 4,
    CubicEaseOut = 5,
    CubicEaseInOut = 6,
    QuarticEaseIn = 7,
    QuarticEaseOut = 8,
    QuarticEaseInOut = 9,
    QuinticEaseIn = 10,
    QuinticEaseOut = 11,
    QuinticEaseInOut = 12,
    SineEaseIn = 13,
    SineEaseOut = 14,
    SineEaseInOut = 15,
    CircularEaseIn = 16,
    CircularEaseOut = 17,
    CircularEaseInOut = 18,
    ExponentialEaseIn = 19,
    ExponentialEaseOut = 20,
    ExponentialEaseInOut = 21,
    ElasticEaseIn = 22,
    ElasticEaseOut = 23,
    ElasticEaseInOut = 24,
    BackEaseIn = 25,
    BackEaseOut = 26,
    BackEaseInOut = 27,
    BounceEaseIn = 28,
    BounceEaseOut = 29,
    BounceEaseInOut = 30,
    ERigVMAnimEasingType_MAX = 31
};

enum ERigVMBreakpointAction
{
    None = 0,
    Resume = 1,
    StepOver = 2,
    StepInto = 3,
    StepOut = 4,
    Max = 5
};

enum ERigVMClampSpatialMode
{
    Plane = 0,
    Cylinder = 1,
    Sphere = 2,
    Capsule = 3,
    ERigVMClampSpatialMode_MAX = 4
};

enum ERigVMCopyType
{
    Default = 0,
    FloatToDouble = 1,
    DoubleToFloat = 2,
    ERigVMCopyType_MAX = 3
};

enum ERigVMDrawSettings
{
    Points = 0,
    Lines = 1,
    LineStrip = 2,
    DynamicMesh = 3,
    ERigVMDrawSettings_MAX = 4
};

enum ERigVMFunctionArgumentDirection
{
    Input = 0,
    Output = 1,
    Invalid = 2,
    ERigVMFunctionArgumentDirection_MAX = 3
};

enum ERigVMMemoryType
{
    Work = 0,
    Literal = 1,
    External = 2,
    Debug = 3,
    Invalid = 4,
    ERigVMMemoryType_MAX = 5
};

enum ERigVMOpCode
{
    Execute_0_Operands = 0,
    Execute_1_Operands = 1,
    Execute_2_Operands = 2,
    Execute_3_Operands = 3,
    Execute_4_Operands = 4,
    Execute_5_Operands = 5,
    Execute_6_Operands = 6,
    Execute_7_Operands = 7,
    Execute_8_Operands = 8,
    Execute_9_Operands = 9,
    Execute_10_Operands = 10,
    Execute_11_Operands = 11,
    Execute_12_Operands = 12,
    Execute_13_Operands = 13,
    Execute_14_Operands = 14,
    Execute_15_Operands = 15,
    Execute_16_Operands = 16,
    Execute_17_Operands = 17,
    Execute_18_Operands = 18,
    Execute_19_Operands = 19,
    Execute_20_Operands = 20,
    Execute_21_Operands = 21,
    Execute_22_Operands = 22,
    Execute_23_Operands = 23,
    Execute_24_Operands = 24,
    Execute_25_Operands = 25,
    Execute_26_Operands = 26,
    Execute_27_Operands = 27,
    Execute_28_Operands = 28,
    Execute_29_Operands = 29,
    Execute_30_Operands = 30,
    Execute_31_Operands = 31,
    Execute_32_Operands = 32,
    Execute_33_Operands = 33,
    Execute_34_Operands = 34,
    Execute_35_Operands = 35,
    Execute_36_Operands = 36,
    Execute_37_Operands = 37,
    Execute_38_Operands = 38,
    Execute_39_Operands = 39,
    Execute_40_Operands = 40,
    Execute_41_Operands = 41,
    Execute_42_Operands = 42,
    Execute_43_Operands = 43,
    Execute_44_Operands = 44,
    Execute_45_Operands = 45,
    Execute_46_Operands = 46,
    Execute_47_Operands = 47,
    Execute_48_Operands = 48,
    Execute_49_Operands = 49,
    Execute_50_Operands = 50,
    Execute_51_Operands = 51,
    Execute_52_Operands = 52,
    Execute_53_Operands = 53,
    Execute_54_Operands = 54,
    Execute_55_Operands = 55,
    Execute_56_Operands = 56,
    Execute_57_Operands = 57,
    Execute_58_Operands = 58,
    Execute_59_Operands = 59,
    Execute_60_Operands = 60,
    Execute_61_Operands = 61,
    Execute_62_Operands = 62,
    Execute_63_Operands = 63,
    Execute_64_Operands = 64,
    Zero = 65,
    BoolFalse = 66,
    BoolTrue = 67,
    Copy = 68,
    Increment = 69,
    Decrement = 70,
    Equals = 71,
    NotEquals = 72,
    JumpAbsolute = 73,
    JumpForward = 74,
    JumpBackward = 75,
    JumpAbsoluteIf = 76,
    JumpForwardIf = 77,
    JumpBackwardIf = 78,
    ChangeType = 79,
    Exit = 80,
    BeginBlock = 81,
    EndBlock = 82,
    ArrayReset = 83,
    ArrayGetNum = 84,
    ArraySetNum = 85,
    ArrayGetAtIndex = 86,
    ArraySetAtIndex = 87,
    ArrayAdd = 88,
    ArrayInsert = 89,
    ArrayRemove = 90,
    ArrayFind = 91,
    ArrayAppend = 92,
    ArrayClone = 93,
    ArrayIterator = 94,
    ArrayUnion = 95,
    ArrayDifference = 96,
    ArrayIntersection = 97,
    ArrayReverse = 98,
    InvokeEntry = 99,
    JumpToBranch = 100,
    Execute = 101,
    RunInstructions = 102,
    SetupTraits = 103,
    Invalid = 104,
    FirstArrayOpCode = 105,
    LastArrayOpCode = 106,
    ERigVMOpCode_MAX = 107
};

enum ERigVMParameterType
{
    Input = 0,
    Output = 1,
    Invalid = 2,
    ERigVMParameterType_MAX = 3
};

enum ERigVMPinDirection
{
    Input = 0,
    Output = 1,
    IO = 2,
    Visible = 3,
    Hidden = 4,
    Invalid = 5,
    ERigVMPinDirection_MAX = 6
};

enum ERigVMRegisterType
{
    Plain = 0,
    String = 1,
    Name = 2,
    Struct = 3,
    Invalid = 4,
    ERigVMRegisterType_MAX = 5
};

enum ERigVMSimPointIntegrateType
{
    Verlet = 0,
    SemiExplicitEuler = 1,
    ERigVMSimPointIntegrateType_MAX = 2
};

enum ERigVMTransformSpace
{
    LocalSpace = 0,
    GlobalSpace = 1,
    Max = 2
};

enum ERigVMUserWorkflowType
{
    Invalid = 0,
    NodeContext = 1,
    PinContext = 2,
    OnPinDefaultChanged = 3,
    All = 4,
    ERigVMUserWorkflowType_MAX = 5
};

enum ERingModulatorTypeSourceEffect
{
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Count = 4,
    ERingModulatorTypeSourceEffect_MAX = 5
};

enum ERockBoostLogic
{
    Standard = 0,
    Recharge = 1,
    Infinite = 2,
    ERockBoostLogic_MAX = 3
};

enum ERollModifierOperation
{
    Add = 0,
    Multiply = 1,
    Zero = 2,
    ERollModifierOperation_MAX = 3
};

enum ERootMotionAccumulateMode
{
    Override = 0,
    Additive = 1,
    ERootMotionAccumulateMode_MAX = 2
};

enum ERootMotionFinishVelocityMode
{
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ERootMotionFinishVelocityMode_MAX = 3
};

enum ERootMotionHeightSource
{
    CopyHeightFromSource = 0,
    SnapToGround = 1,
    ERootMotionHeightSource_MAX = 2
};

enum ERootMotionMMEFinishVelocityMode
{
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ERootMotionMMEFinishVelocityMode_MAX = 3
};

enum ERootMotionMMEMode
{
    ConstantForce = 0,
    MoveToTarget = 1,
    MoveToActor = 2,
    ERootMotionMMEMode_MAX = 3
};

enum ERootMotionMMETargetOffsetType
{
    AlignFromTargetToSource = 0,
    AlignToTargetForward = 1,
    AlignToWorldSpace = 2,
    ERootMotionMMETargetOffsetType_MAX = 3
};

enum ERootMotionMode
{
    NoRootMotionExtraction = 0,
    IgnoreRootMotion = 1,
    RootMotionFromEverything = 2,
    RootMotionFromMontagesOnly = 3,
    ERootMotionMode_MAX = 4
};

enum ERootMotionModifierState
{
    Waiting = 0,
    Active = 1,
    MarkedForRemoval = 2,
    Disabled = 3,
    ERootMotionModifierState_MAX = 4
};

enum ERootMotionMoveToActorTargetOffsetType
{
    AlignFromTargetToSource = 0,
    AlignToTargetForward = 1,
    AlignToWorldSpace = 2,
    ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

enum ERootMotionRootLock
{
    RefPose = 0,
    AnimFirstFrame = 1,
    Zero = 2,
    ERootMotionRootLock_MAX = 3
};

enum ERootMotionSource
{
    CopyFromSourceRoot = 0,
    GenerateFromTargetPelvis = 1,
    ERootMotionSource_MAX = 2
};

enum ERootMotionSourceSettingsFlags
{
    UseSensitiveLiftoffCheck = 0,
    DisablePartialEndTick = 1,
    IgnoreZAccumulate = 2,
    ERootMotionSourceSettingsFlags_MAX = 3
};

enum ERootMotionSourceStatusFlags
{
    Prepared = 0,
    Finished = 1,
    MarkedForRemoval = 2,
    ERootMotionSourceStatusFlags_MAX = 3
};

enum ERotationComponent
{
    EulerX = 0,
    EulerY = 1,
    EulerZ = 2,
    QuaternionAngle = 3,
    SwingAngle = 4,
    TwistAngle = 5,
    ERotationComponent_MAX = 6
};

enum ERotationUnit
{
    Degrees = 0,
    Radians = 1,
    ERotationUnit_MAX = 2
};

enum ERotatorDirection
{
    Right = 0,
    Left = 1,
    ERotatorDirection_MAX = 2
};

enum ERotatorQuantization
{
    ByteComponents = 0,
    ShortComponents = 1,
    ERotatorQuantization_MAX = 2
};

enum ERoundVictoryAnimation
{
    Default = 0,
    None = 1,
    ERoundVictoryAnimation_MAX = 2
};

enum ERoundingMode
{
    HalfToEven = 0,
    HalfFromZero = 1,
    HalfToZero = 2,
    FromZero = 3,
    ToZero = 4,
    ToNegativeInfinity = 5,
    ToPositiveInfinity = 6,
    ERoundingMode_MAX = 7
};

enum ERouteAvoidancePrimitiveType
{
    Disc = 0,
    Curve = 1,
    ProceduralRoutes = 2,
    ERouteAvoidancePrimitiveType_MAX = 3
};

enum ERouteGenerationState
{
    Inactive = 0,
    Active = 1,
    Dormant = 2,
    ERouteGenerationState_MAX = 3
};

enum ERuntimeGenerationType
{
    Static = 0,
    DynamicModifiersOnly = 1,
    Dynamic = 2,
    LegacyGeneration = 3,
    ERuntimeGenerationType_MAX = 4
};

enum ERuntimePartitionCellBoundsMethod
{
    UseContent = 0,
    UseCellBounds = 1,
    UseMinContentCellBounds = 2,
    ERuntimePartitionCellBoundsMethod_MAX = 3
};

enum ERuntimeVirtualTextureMainPassType
{
    Never = 0,
    Exclusive = 1,
    Always = 2,
    ERuntimeVirtualTextureMainPassType_MAX = 3
};

enum ERuntimeVirtualTextureMaterialQuality
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    ERuntimeVirtualTextureMaterialQuality_MAX = 4
};

enum ERuntimeVirtualTextureMaterialType
{
    BaseColor = 0,
    Mask4 = 1,
    BaseColor_Normal_Roughness = 2,
    BaseColor_Normal_Specular = 3,
    BaseColor_Normal_Specular_YCoCg = 4,
    BaseColor_Normal_Specular_Mask_YCoCg = 5,
    WorldHeight = 6,
    Displacement = 7,
    Count = 8,
    ERuntimeVirtualTextureMaterialType_MAX = 9
};

enum ERuntimeVirtualTextureMipValueMode
{
    RVTMVM_None = 0,
    RVTMVM_MipLevel = 1,
    RVTMVM_MipBias = 2,
    RVTMVM_RecalculateDerivatives = 3,
    RVTMVM_DerivativeUV = 4,
    RVTMVM_DerivativeWorld = 5,
    RVTMVM_MAX = 6
};

enum ERuntimeVirtualTextureTextureAddressMode
{
    RVTTA_Clamp = 0,
    RVTTA_Wrap = 1,
    RVTTA_MAX = 2
};

enum ESCCModification
{
    Modified = 0,
    Added = 1,
    Removed = 2,
    Conflicted = 3,
    ESCCModification_MAX = 4
};

enum ESTFortAthenaPlayMontageExecMode
{
    NewMontage = 0,
    SetNextSection = 1,
    JumpToSection = 2,
    ESTFortAthenaPlayMontageExecMode_MAX = 3
};

enum ESTFortAthenaPlayMontageLoopMode
{
    Task = 0,
    Montage = 1,
    ESTFortAthenaPlayMontageLoopMode_MAX = 2
};

enum ESafeZoneStartUp
{
    UseDefaultGameBehavior = 0,
    StartsWithWarmUp = 1,
    StartsWithAirCraft = 2,
    StartsWithNoAirCraft = 3,
    ESafeZoneStartUp_MAX = 4
};

enum ESamplePlayerSeekType
{
    FromBeginning = 0,
    FromCurrentPosition = 1,
    FromEnd = 2,
    Count = 3,
    ESamplePlayerSeekType_MAX = 4
};

enum ESamplerSourceMode
{
    SSM_FromTextureAsset = 0,
    SSM_Wrap_WorldGroupSettings = 1,
    SSM_Clamp_WorldGroupSettings = 2,
    SSM_TerrainWeightmapGroupSettings = 3,
    SSM_MAX = 4
};

enum ESanctionType
{
    OwnerWithoutPartyMultiplayerBan = 0,
    OwnerWithPartyMultiplayerBan = 1,
    KeyHolderBan = 2,
    CompleteBan = 3,
    None = 4,
    ESanctionType_MAX = 5
};

enum ESaveLocation
{
    Local_ForDevice = 0,
    Local_MAX = 1
};

enum ESavePlayerQuestUpdate
{
    QuestGiven = 0,
    QuestCompleted = 1,
    ESavePlayerQuestUpdate_MAX = 2
};

enum ESaveProfileForBanners
{
    SaveTheWorld = 0,
    BattleRoyale = 1,
    ESaveProfileForBanners_MAX = 2
};

enum ESavedAccountType
{
    None = 0,
    Facebook = 1,
    Google = 2,
    Epic = 3,
    Device = 4,
    Headless = 5,
    Refresh = 6,
    ESavedAccountType_MAX = 7
};

enum ESavedSupportStatus
{
    UnknownState = 0,
    Supported = 1,
    UnSupported = 2,
    ESavedSupportStatus_MAX = 3
};

enum EScaleAxis
{
    All = 0,
    X = 1,
    Y = 2,
    Z = 3,
    EScaleAxis_MAX = 4
};

enum EScaleChainInitialLength
{
    FixedDefaultLengthValue = 0,
    Distance = 1,
    ChainLength = 2,
    EScaleChainInitialLength_MAX = 3
};

enum ESceneCaptureCompositeMode
{
    SCCM_Overwrite = 0,
    SCCM_Additive = 1,
    SCCM_Composite = 2,
    SCCM_MAX = 3
};

enum ESceneCapturePrimitiveRenderMode
{
    PRM_LegacySceneCapture = 0,
    PRM_RenderScenePrimitives = 1,
    PRM_UseShowOnlyList = 2,
    PRM_MAX = 3
};

enum ESceneCaptureSource
{
    SCS_SceneColorHDR = 0,
    SCS_SceneColorHDRNoAlpha = 1,
    SCS_FinalColorLDR = 2,
    SCS_SceneColorSceneDepth = 3,
    SCS_SceneDepth = 4,
    SCS_DeviceDepth = 5,
    SCS_Normal = 6,
    SCS_BaseColor = 7,
    SCS_FinalColorHDR = 8,
    SCS_FinalToneCurveHDR = 9,
    SCS_MAX = 10
};

enum ESceneDepthPriorityGroup
{
    SDPG_World = 0,
    SDPG_Foreground = 1,
    SDPG_MAX = 2
};

enum ESceneQueryShape
{
    Sphere = 0,
    Box = 1,
    Capsule = 2,
    VolumeBounds = 3,
    ESceneQueryShape_MAX = 4
};

enum ESceneSnapQueryTargetType
{
    None = 0,
    MeshVertex = 1,
    MeshEdge = 2,
    Grid = 3,
    All = 4,
    ESceneSnapQueryTargetType_MAX = 5
};

enum ESceneSnapQueryType
{
    Position = 0,
    Rotation = 1,
    ESceneSnapQueryType_MAX = 2
};

enum ESceneTextureId
{
    PPI_SceneColor = 0,
    PPI_SceneDepth = 1,
    PPI_DiffuseColor = 2,
    PPI_SpecularColor = 3,
    PPI_SubsurfaceColor = 4,
    PPI_BaseColor = 5,
    PPI_Specular = 6,
    PPI_Metallic = 7,
    PPI_WorldNormal = 8,
    PPI_SeparateTranslucency = 9,
    PPI_Opacity = 10,
    PPI_Roughness = 11,
    PPI_MaterialAO = 12,
    PPI_CustomDepth = 13,
    PPI_PostProcessInput0 = 14,
    PPI_PostProcessInput1 = 15,
    PPI_PostProcessInput2 = 16,
    PPI_PostProcessInput3 = 17,
    PPI_PostProcessInput4 = 18,
    PPI_PostProcessInput5 = 19,
    PPI_PostProcessInput6 = 20,
    PPI_DecalMask = 21,
    PPI_ShadingModelColor = 22,
    PPI_ShadingModelID = 23,
    PPI_AmbientOcclusion = 24,
    PPI_CustomStencil = 25,
    PPI_StoredBaseColor = 26,
    PPI_StoredSpecular = 27,
    PPI_Velocity = 28,
    PPI_WorldTangent = 29,
    PPI_Anisotropy = 30,
    PPI_UserSceneTexture0 = 31,
    PPI_UserSceneTexture1 = 32,
    PPI_UserSceneTexture2 = 33,
    PPI_UserSceneTexture3 = 34,
    PPI_UserSceneTexture4 = 35,
    PPI_UserSceneTexture5 = 36,
    PPI_UserSceneTexture6 = 37,
    PPI_MAX = 38
};

enum ESceneTransitionType
{
    NoTransition = 0,
    Clockwise = 1,
    CounterClockwise = 2,
    ESceneTransitionType_MAX = 3
};

enum ESchemaModificationType
{
    AddOrModify = 0,
    Remove = 1,
    Count = 2,
    ESchemaModificationType_MAX = 3
};

enum EScoreDistributionType
{
    Default = 0,
    DivideByDamage = 1,
    DivideEvenly = 2,
    AllToEliminator = 3,
    EScoreDistributionType_MAX = 4
};

enum EScoreMatchOperator
{
    Invalid = 0,
    LessThan = 1,
    LessThanOrEqual = 2,
    Equal = 3,
    GreaterThan = 4,
    GreaterThanOrEqual = 5,
    EScoreMatchOperator_MAX = 6
};

enum EScoringMistakeType
{
    Miss = 0,
    Pass = 1,
    EScoringMistakeType_MAX = 2
};

enum EScreenOrientation
{
    Unknown = 0,
    Portrait = 1,
    PortraitUpsideDown = 2,
    LandscapeLeft = 3,
    LandscapeRight = 4,
    FaceUp = 5,
    FaceDown = 6,
    PortraitSensor = 7,
    LandscapeSensor = 8,
    FullSensor = 9,
    EScreenOrientation_MAX = 10
};

enum EScreenPercentageMode
{
    Manual = 0,
    BasedOnDisplayResolution = 1,
    BasedOnDPIScale = 2,
    EScreenPercentageMode_MAX = 3
};

enum EScriptDiagnosticMessageType
{
    Debug = 0,
    Verbose = 1,
    Normal = 2,
    Warning = 3,
    Error = 4,
    EScriptDiagnosticMessageType_MAX = 5
};

enum EScriptExecutionMode
{
    EveryParticle = 0,
    SpawnedParticles = 1,
    SingleParticle = 2,
    EScriptExecutionMode_MAX = 3
};

enum EScriptPropertyOverridesVersion
{
    Initial = 0,
    UsingSoftObjectPathSerialization = 1,
    ObjectClassSerialization = 2,
    LatestPlusOne = 3,
    Latest = 4,
    EScriptPropertyOverridesVersion_MAX = 5
};

enum EScriptedActionStatus
{
    Pending = 0,
    Running = 1,
    Completed = 2,
    EScriptedActionStatus_MAX = 3
};

enum EScrollDirection
{
    Scroll_Down = 0,
    Scroll_Up = 1,
    Scroll_MAX = 2
};

enum EScrollIntoViewAlignment
{
    IntoView = 0,
    TopOrLeft = 1,
    CenterAligned = 2,
    BottomOrRight = 3,
    EScrollIntoViewAlignment_MAX = 4
};

enum EScrollWhenFocusChanges
{
    NoScroll = 0,
    InstantScroll = 1,
    AnimatedScroll = 2,
    EScrollWhenFocusChanges_MAX = 3
};

enum ESearchCase
{
    CaseSensitive = 0,
    IgnoreCase = 1,
    ESearchCase_MAX = 2
};

enum ESearchDir
{
    FromStart = 0,
    FromEnd = 1,
    ESearchDir_MAX = 2
};

enum ESeasonTitleDisplayType
{
    ChapterAndSeason = 0,
    OnlySeason = 1,
    OnlyChapter = 2,
    ESeasonTitleDisplayType_MAX = 3
};

enum ESeatSelectionRule
{
    TwoClosest = 0,
    ClosestToPlayer = 1,
    ClosestToAim = 2,
    TwoClosestThenClosestToPlayer = 3,
    ESeatSelectionRule_MAX = 4
};

enum ESectionEvaluationFlags
{
    None = 0,
    PreRoll = 1,
    PostRoll = 2,
    ForceKeepState = 3,
    ForceRestoreState = 4,
    ESectionEvaluationFlags_MAX = 5
};

enum ESeekPointType
{
    BarBeat = 0,
    Millisecond = 1,
    ESeekPointType_MAX = 2
};

enum ESelectInfo
{
    OnKeyPress = 0,
    OnNavigation = 1,
    OnMouseClick = 2,
    Direct = 3,
    ESelectInfo_MAX = 4
};

enum ESelectRecipeButtonState
{
    SelectRecipeHeroState = 0,
    SelectRecipeCommonState = 1,
    DepositState = 2,
    ESelectRecipeButtonState_MAX = 3
};

enum ESelectedObjectsModificationType
{
    Replace = 0,
    Add = 1,
    Remove = 2,
    Clear = 3,
    ESelectedObjectsModificationType_MAX = 4
};

enum ESelectionMode
{
    None = 0,
    Single = 1,
    SingleToggle = 2,
    Multi = 3,
    ESelectionMode_MAX = 4
};

enum ESelectionProperty
{
    SingleObject = 0,
    SingleObjectMoveOnGrid = 1,
    MultipleObjects = 2,
    MultipleObjectsMoveOnGrid = 3,
    None = 4,
    ESelectionProperty_MAX = 5
};

enum ESelectiveTessellatePatternType
{
    ConcentricRings = 0,
    ESelectiveTessellatePatternType_MAX = 1
};

enum ESelfDamageTargetPreset
{
    NonPlayers = 0,
    PlayersOnly = 1,
    All = 2,
    ESelfDamageTargetPreset_MAX = 3
};

enum ESelfDamageWeaponTypePreset
{
    PickaxeOnly = 0,
    MeleeOnly = 1,
    RangedOnly = 2,
    All = 3,
    ESelfDamageWeaponTypePreset_MAX = 4
};

enum ESendFriendInviteFailureReason
{
    NotFound = 0,
    AlreadyFriends = 1,
    InvitePending = 2,
    AddingSelfFail = 3,
    AddingBlockedFail = 4,
    AutoDeclined = 5,
    BlockedByTarget = 6,
    InviteeInboxFull = 7,
    SelfOutboxFull = 8,
    MissingPin = 9,
    InvalidPin = 10,
    PinAttemptsExceeded = 11,
    UnknownError = 12,
    ESendFriendInviteFailureReason_MAX = 13
};

enum ESendLevelControlMethod
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESendLevelControlMethod_MAX = 3
};

enum ESequenceEvalReinit
{
    NoReset = 0,
    StartPosition = 1,
    ExplicitTime = 2,
    ESequenceEvalReinit_MAX = 3
};

enum ESequenceTimeUnit
{
    DisplayRate = 0,
    TickResolution = 1,
    ESequenceTimeUnit_MAX = 2
};

enum ESequencerType
{
    MultiTrack = 0,
    SingleTrack = 1,
    ESequencerType_MAX = 2
};

enum EServerContentReadinessV2
{
    Initializing = 0,
    GeneratingManifests = 1,
    WaitingForClient = 2,
    ReadyToJoin = 3,
    Disconnecting = 4,
    EServerContentReadinessV2_MAX = 5
};

enum EServerInitializationState
{
    UNINITIALIZED = 0,
    STARTING_UP = 1,
    READY_FOR_PLAYERS = 2,
    EServerInitializationState_MAX = 3
};

enum EServerRestartReason
{
    HotfixApplied = 0,
    GracefulShutdown = 1,
    BeaconJoinDelayRestart = 2,
    Other = 3,
    EServerRestartReason_MAX = 4
};

enum EServerStability
{
    Stable = 0,
    LowUnstability = 1,
    HighUnstability = 2,
    Count = 3,
    EServerStability_MAX = 4
};

enum ESetCVarType
{
    Numeric = 0,
    String = 1,
    ESetCVarType_MAX = 2
};

enum ESetCollisionGeometryInputMode
{
    CombineAll = 0,
    PerInputObject = 1,
    PerMeshComponent = 2,
    PerMeshGroup = 3,
    ESetCollisionGeometryInputMode_MAX = 4
};

enum ESetMaskConditionType
{
    Field_Set_Always = 0,
    Field_Set_IFF_NOT_Interior = 1,
    Field_Set_IFF_NOT_Exterior = 2,
    Field_MaskCondition_Max = 3,
    Field_MAX = 4
};

enum ESetMeshMaterialMode
{
    Original = 0,
    Checkerboard = 1,
    Override = 2,
    ESetMeshMaterialMode_MAX = 3
};

enum ESetParamResult
{
    Succeeded = 0,
    Failed = 1,
    ESetParamResult_MAX = 2
};

enum ESetResolutionMethod
{
    Independent = 0,
    MaxAxis = 1,
    CellSize = 2,
    ESetResolutionMethod_MAX = 3
};

enum ESettingTab
{
    None = 0,
    Video = 1,
    Game = 2,
    GameUI = 3,
    Brightness = 4,
    Audio = 5,
    Accessibility = 6,
    Input = 7,
    MouseAndKeyboard = 8,
    Controller = 9,
    ControllerSensitivity = 10,
    TouchAndMotion = 11,
    TouchWeapon = 12,
    Account = 13,
    CreativeWorld = 14,
    CreativePlayer = 15,
    ESettingTab_MAX = 16
};

enum ESettingType
{
    None = 0,
    Header = 1,
    WindowMode = 2,
    DisplayResolution = 3,
    FrameRateLimit = 4,
    VideoQuality = 5,
    ThreeDResolution = 6,
    ViewDistance = 7,
    Shadows = 8,
    AntiAliasing = 9,
    Textures = 10,
    Effects = 11,
    PostProcessing = 12,
    VSync = 13,
    MotionBlur = 14,
    ShowGrass = 15,
    MobileFPSType = 16,
    ShowFPS = 17,
    AllowLowPower = 18,
    AllowVideoPlayback = 19,
    AllowDynamicResolution = 20,
    Disabled_AllowMultithreadedRendering = 21,
    RenderingAPI = 22,
    UseGPUCrashDebugging = 23,
    RegionHeader = 24,
    Language = 25,
    Region = 26,
    MouseSensitivityYaw = 27,
    MouseSensitivityPitch = 28,
    MouseSensitivityMultiplierForAircraft = 29,
    TouchDragSensitivity = 30,
    ControllerLookSensitivityYaw = 31,
    ControllerLookSensitivityPitch = 32,
    MouseTargetingMultiplier = 33,
    MouseScopedMultiplier = 34,
    GamepadTargetingMultiplier = 35,
    GamepadScopedMultiplier = 36,
    GamepadBuildingMultiplier = 37,
    GamepadEditModeMultiplier = 38,
    TouchLookAccelerationMultiplier = 39,
    TouchDragTargetingSensitivity = 40,
    TouchDragScopedSensitivity = 41,
    TouchBuildingMultiplier = 42,
    TouchEditModeMultiplier = 43,
    TouchVerticalSensitivity = 44,
    InvertPitch = 45,
    InvertYaw = 46,
    InvertPitchForMotion = 47,
    InvertPitchForAircraftPrimary = 48,
    InvertPitchForAircraftSecondary = 49,
    InvertYawForMotion = 50,
    GyroEnabled = 51,
    GyroYawAxis = 52,
    GyroSensitivity = 53,
    GyroTargetingSensitivity = 54,
    GyroScopedSensitivity = 55,
    GyroHarvestingToolSensitivity = 56,
    SafeZone = 57,
    AnonymousMode = 58,
    AnonymousCharacterMode = 59,
    HideOtherPlayerNames = 60,
    HiddenMatchmakingDelay = 61,
    AutoJoinGameVoiceChannel = 62,
    ShowVoiceIndicators = 63,
    HUDScale = 64,
    ShowViewerCount = 65,
    FirstPersonCamera = 66,
    PeripheralLighting = 67,
    PingPlaceDangerMarkerWhenTargeting = 68,
    ShowGlobalChat = 69,
    ConsoleUnlockedFPS = 70,
    ToggleDoubleTapAutorun = 71,
    AutorunLockZonePreference = 72,
    ToggleSprint = 73,
    SprintByDefault = 74,
    SprintCancelsReload = 75,
    TapInteract = 76,
    InWorldInteract = 77,
    ToggleTargeting = 78,
    HoldToSwapPickup = 79,
    AutoEquipBetterItems = 80,
    EquipFirstBuildingPieceWhenSwappingQuickbars = 81,
    EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 82,
    DisablePreEditsWhenPlacingBuilding = 83,
    AimAssist = 84,
    EditModeAimAssist = 85,
    TouchEdit = 86,
    EditConfirmOnRelease = 87,
    QuickEdit = 88,
    TurboBuild = 89,
    CreativeTurboDelete = 90,
    AutoChangeMaterial = 91,
    GamepadAutoRun = 92,
    CrossplayPreference = 93,
    AutoOpenDoors = 94,
    AutoPickupWeapons = 95,
    AutoPickupWeaponsConsolePC = 96,
    AutoSortConsumablesToRight = 97,
    EnableTryBuildOnFocus = 98,
    EditButtonHoldTime = 99,
    SlideButtonHoldTime = 100,
    AccessoriesHeader = 101,
    ForceFeedback = 102,
    ContextTutorial = 103,
    ReplayRecording = 104,
    ReplayRecordingLargeTeams = 105,
    ReplayRecordingCreativeMode = 106,
    UsePowerSavingMode = 107,
    ShadowPlayHighlights = 108,
    ShowTemperature = 109,
    BuildingPossession = 110,
    GammaValue = 111,
    MasterVolume = 112,
    MusicVolume = 113,
    SoundFXVolume = 114,
    DialogVolume = 115,
    VoiceChatVolume = 116,
    CinematicsVolume = 117,
    Subtitles = 118,
    Quality = 119,
    VoiceChat = 120,
    PushToTalk = 121,
    ProximityVoiceChat = 122,
    VoiceChatInputDevice = 123,
    VoiceChatOutputDevice = 124,
    AllowBackgroundAudio = 125,
    ColorBlindMode = 126,
    ColorBlindStrength = 127,
    IgnoreGamepadInput = 128,
    LockPrimaryInputMethodToMouse = 129,
    EnableRudderControl = 130,
    RudderDeadZone = 131,
    RudderMaxThrottle = 132,
    FOVMinimum = 133,
    FOVMaximum = 134,
    VisualizeSoundEffects = 135,
    VisualizeSoundEffectsHeader = 136,
    MoveStickDeadZone = 137,
    LookStickDeadZone = 138,
    LookSensitivityPreset = 139,
    LookSensitivityPresetAds = 140,
    LookBuildModeMultiplier = 141,
    LookEditModeMultiplier = 142,
    UseAdvancedOptions = 143,
    LookHorizontalSpeed = 144,
    LookVerticalSpeed = 145,
    LookHorizontalSpeedAds = 146,
    LookVerticalSpeedAds = 147,
    LookHorizontalBoostSpeed = 148,
    LookVerticalBoostSpeed = 149,
    LookBoostAccelerationTime = 150,
    LookHorizontalBoostSpeedAds = 151,
    LookVerticalBoostSpeedAds = 152,
    LookBoostAccelerationTimeAds = 153,
    InstantBoostWhenBuilding = 154,
    LookEaseTime = 155,
    LookInputCurve = 156,
    AimAssistStrength = 157,
    UseLegacyControls = 158,
    PlayerSurveysAllowed = 159,
    LocalNotifications = 160,
    FireMode = 161,
    COUNT = 162,
    ESettingType_MAX = 163
};

enum ESettingsDOF
{
    Full3D = 0,
    YZPlane = 1,
    XZPlane = 2,
    XYPlane = 3,
    ESettingsDOF_MAX = 4
};

enum ESettingsLockedAxis
{
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    Invalid = 4,
    ESettingsLockedAxis_MAX = 5
};

enum EShaderCompressionFormat
{
    None = 0,
    LZ4 = 1,
    Oodle = 2,
    Zlib = 3,
    EShaderCompressionFormat_MAX = 4
};

enum EShaderFundamentalDimensionType
{
    Scalar = 0,
    Vector = 1,
    Matrix = 2,
    EShaderFundamentalDimensionType_MAX = 3
};

enum EShaderFundamentalType
{
    Bool = 0,
    Int = 1,
    Uint = 2,
    Float = 3,
    Struct = 4,
    None = 5,
    EShaderFundamentalType_MAX = 6
};

enum EShaderParamBindingType
{
    None = 0,
    ConstantParameter = 1,
    ReadOnlyResource = 2,
    ReadWriteResource = 3,
    EShaderParamBindingType_MAX = 4
};

enum EShaderResourceType
{
    None = 0,
    Texture1D = 1,
    Texture2D = 2,
    Texture3D = 3,
    TextureCube = 4,
    Buffer = 5,
    StructuredBuffer = 6,
    ByteAddressBuffer = 7,
    EShaderResourceType_MAX = 8
};

enum EShadowCacheInvalidationBehavior
{
    Auto = 0,
    Always = 1,
    Rigid = 2,
    Static = 3,
    EShadowCacheInvalidationBehavior_MAX = 4
};

enum EShadowMapFlags
{
    SMF_None = 0,
    SMF_Streamed = 1,
    SMF_MAX = 2
};

enum EShadowMapMethod
{
    ShadowMaps = 0,
    VirtualShadowMaps = 1,
    EShadowMapMethod_MAX = 2
};

enum EShallowWaterCollisionContextType
{
    Pawn = 0,
    Vehicle = 1,
    Custom = 2,
    EShallowWaterCollisionContextType_MAX = 3
};

enum EShareActorWith
{
    None = 0,
    SquadOnTeam = 1,
    AllTeam = 2,
    EShareActorWith_MAX = 3
};

enum EShareActorWithMask
{
    None = 0,
    SquadOnTeam = 1,
    AllTeam = 2,
    Target = 3,
    EShareActorWithMask_MAX = 4
};

enum EShareButtonType
{
    IOS = 0,
    Android = 1,
    Generic = 2,
    EShareButtonType_MAX = 3
};

enum ESharedQuestScopePolicy
{
    Party = 0,
    Squad = 1,
    ESharedQuestScopePolicy_MAX = 2
};

enum EShouldCookBlueprintPropertyGuids
{
    No = 0,
    Yes = 1,
    Inherit = 2,
    EShouldCookBlueprintPropertyGuids_MAX = 3
};

enum EShowChannelDetails
{
    FromMinigameSettings = 0,
    ForceShow = 1,
    ForceHide = 2,
    EShowChannelDetails_MAX = 3
};

enum EShowInGamePictureInPicture
{
    Default = 0,
    Hide = 1,
    Show = 2,
    EShowInGamePictureInPicture_MAX = 3
};

enum EShowOnHudMode
{
    No = 0,
    Detailed = 1,
    List = 2,
    Both = 3,
    MAX = 4
};

enum EShowPlacardPhase
{
    None = 0,
    StartShow = 1,
    WaitBeforeInitialFadeOut = 2,
    PreShowFadeOut = 3,
    Show = 4,
    FadeOut = 5,
    PostShowFadeIn = 6,
    DoneShowingScreen = 7,
    MAX = 8
};

enum EShowProgressMode
{
    Total = 0,
    Remaining = 1,
    Off = 2,
    MAX = 3
};

enum ESideEffect_NewIconVisibility
{
    MakeIconVisible = 0,
    HideIcon = 1,
    ESideEffect_MAX = 2
};

enum ESideEffect_NewTargetVisibility
{
    MakeActorVisible = 0,
    HideActor = 1,
    ESideEffect_MAX = 2
};

enum ESideScrollerCrouch
{
    Disabled = 0,
    Dedicated = 1,
    Movement = 2,
    ESideScrollerCrouch_MAX = 3
};

enum ESideScrollerJump
{
    Disabled = 0,
    Dedicated = 1,
    Movement = 2,
    ESideScrollerJump_MAX = 3
};

enum ESidebarExitActions
{
    None = 0,
    LeaveExperience = 1,
    AthenaLeaveAction = 2,
    LogOut = 3,
    QuitGame = 4,
    ESidebarExitActions_MAX = 5
};

enum ESidebarExitConfirmationNavBehavior
{
    None = 0,
    ButtonYesFocus = 1,
    ButtonYesSelection = 2,
    ButtonYesFocusSelection = 3,
    ButtonNoFocus = 4,
    ButtonNoSelection = 5,
    ButtonNoFocusSelection = 6,
    ESidebarExitConfirmationNavBehavior_MAX = 7
};

enum ESidebarState
{
    TabButtons = 0,
    UserListPanels = 1,
    ExitPopup = 2,
    ESidebarState_MAX = 3
};

enum ESidewaysState
{
    InNormalWorld = 0,
    InSidewaysWorld = 1,
    ESidewaysState_MAX = 2
};

enum ESimObjectRepNodeMapping
{
    NotReplicated = 0,
    RelevantAllInsidePlayspace = 1,
    Spatial_Static = 2,
    Spatial_Dynamic = 3,
    Spatial_Dormancy = 4,
    ESimObjectRepNodeMapping_MAX = 5
};

enum ESimpleCollisionEditorToolAction
{
    NoAction = 0,
    AddSphere = 1,
    AddBox = 2,
    AddCapsule = 3,
    Duplicate = 4,
    DeleteSelected = 5,
    DeleteAll = 6,
    ESimpleCollisionEditorToolAction_MAX = 7
};

enum ESimpleDestructiblePropCollisionFlags
{
    Disabled = 0,
    ClientEnabled = 1,
    ServerEnabled = 2,
    ESimpleDestructiblePropCollisionFlags_MAX = 3
};

enum ESimulationOverlap
{
    CollisionOverlap = 0,
    ShadeOverlap = 1,
    None = 2,
    ESimulationOverlap_MAX = 3
};

enum ESimulationQuery
{
    None = 0,
    CollisionOverlap = 1,
    ShadeOverlap = 2,
    AnyOverlap = 3,
    ESimulationQuery_MAX = 4
};

enum ESimulationSpace
{
    ComponentSpace = 0,
    WorldSpace = 1,
    BaseBoneSpace = 2,
    ESimulationSpace_MAX = 3
};

enum ESimulationTiming
{
    Default = 0,
    Synchronous = 1,
    Deferred = 2,
    ESimulationTiming_MAX = 3
};

enum ESineWaveTarget
{
    TranslationX = 0,
    TranslationY = 1,
    TranslationZ = 2,
    RotationPitch = 3,
    RotationRoll = 4,
    RotationYaw = 5,
    ESineWaveTarget_MAX = 6
};

enum ESkeletalAudioBoneEvent
{
    None = 0,
    SlowThresholdStart = 1,
    SlowThresholdStop = 2,
    MediumThreshold = 3,
    FastThreshold = 4,
    ESkeletalAudioBoneEvent_MAX = 5
};

enum ESkeletalAudioBoneSpace
{
    Relative = 0,
    World = 1,
    ESkeletalAudioBoneSpace_MAX = 2
};

enum ESkeletalAudioBoneVelocityType
{
    Linear = 0,
    Rotational = 1,
    Custom = 2,
    ESkeletalAudioBoneVelocityType_MAX = 3
};

enum ESkeletalMeshAsyncProperties
{
    None = 0,
    Materials = 1,
    Skeleton = 2,
    RefSkeleton = 3,
    RetargetBasePose = 4,
    RefBasesInvMatrix = 5,
    MeshClothingAssets = 6,
    SourceModels = 7,
    HasActiveClothingAssets = 8,
    LODSettings = 9,
    HasVertexColors = 10,
    VertexColorGuid = 11,
    MorphTargets = 12,
    SkeletalMeshRenderData = 13,
    MeshEditorDataObject = 14,
    NeverStream = 15,
    OverrideLODStreamingSettings = 16,
    SupportLODStreaming = 17,
    MaxNumStreamedLODs = 18,
    MaxNumOptionalLODs = 19,
    ImportedModel = 20,
    LODInfo = 21,
    SkinWeightProfiles = 22,
    CachedComposedRefPoseMatrices = 23,
    SamplingInfo = 24,
    NodeMappingData = 25,
    ShadowPhysicsAsset = 26,
    SkelMirrorTable = 27,
    MinLod = 28,
    DisableBelowMinLodStripping = 29,
    SkelMirrorAxis = 30,
    SkelMirrorFlipAxis = 31,
    DefaultAnimationRig = 32,
    NegativeBoundsExtension = 33,
    PositiveBoundsExtension = 34,
    ExtendedBounds = 35,
    EnablePerPolyCollision = 36,
    BodySetup = 37,
    MorphTargetIndexMap = 38,
    FloorOffset = 39,
    ImportedBounds = 40,
    PhysicsAsset = 41,
    AssetImportData = 42,
    ThumbnailInfo = 43,
    HasCustomDefaultEditorCamera = 44,
    DefaultEditorCameraLocation = 45,
    DefaultEditorCameraRotation = 46,
    RequiresLODScreenSizeConversion = 47,
    PostProcessAnimBlueprint = 48,
    DefaultEditorCameraLookAt = 49,
    PreviewAttachedAssetContainer = 50,
    DefaultEditorCameraOrthoZoom = 51,
    RequiresLODHysteresisConversion = 52,
    bSupportRayTracing = 53,
    RayTracingMinLOD = 54,
    ClothLODBiasMode = 55,
    DefaultMeshDeformer = 56,
    OverlayMaterial = 57,
    OverlayMaterialMaxDrawDistance = 58,
    All = 59,
    ESkeletalMeshAsyncProperties_MAX = 60
};

enum ESkeletalMeshVertexAttributeDataType
{
    Float = 0,
    HalfFloat = 1,
    NUInt8 = 2,
    ESkeletalMeshVertexAttributeDataType_MAX = 3
};

enum ESkinCacheDefaultBehavior
{
    Exclusive = 0,
    Inclusive = 1,
    ESkinCacheDefaultBehavior_MAX = 2
};

enum ESkinCacheUsage
{
    Auto = 0,
    Disabled = 1,
    Enabled = 2,
    ESkinCacheUsage_MAX = 3
};

enum ESkyAtmosphereTransformMode
{
    PlanetTopAtAbsoluteWorldOrigin = 0,
    PlanetTopAtComponentTransform = 1,
    PlanetCenterAtComponentTransform = 2,
    ESkyAtmosphereTransformMode_MAX = 3
};

enum ESkyCapState
{
    Hidden = 0,
    StormStarting = 1,
    ESkyCapState_MAX = 2
};

enum ESkyLightSourceType
{
    SLS_CapturedScene = 0,
    SLS_SpecifiedCubemap = 1,
    SLS_MAX = 2
};

enum ESkyTubeMovementDirection
{
    BothWays = 0,
    Forward = 1,
    Reverse = 2,
    ESkyTubeMovementDirection_MAX = 3
};

enum ESkydiveFeedbackPhase
{
    Initial = 0,
    WithGlider = 1,
    InVortex = 2,
    None = 3,
    ESkydiveFeedbackPhase_MAX = 4
};

enum ESkydivingDirection
{
    Center = 0,
    Right = 1,
    Left = 2,
    Forward = 3,
    Back = 4,
    ESkydivingDirection_MAX = 5
};

enum ESlateAccessibleBehavior
{
    NotAccessible = 0,
    Auto = 1,
    Summary = 2,
    Custom = 3,
    ToolTip = 4,
    ESlateAccessibleBehavior_MAX = 5
};

enum ESlateBrushDrawType
{
    NoDrawType = 0,
    Box = 1,
    Border = 2,
    Image = 3,
    RoundedBox = 4,
    ESlateBrushDrawType_MAX = 5
};

enum ESlateBrushImageType
{
    NoImage = 0,
    FullColor = 1,
    Linear = 2,
    Vector = 3,
    ESlateBrushImageType_MAX = 4
};

enum ESlateBrushMirrorType
{
    NoMirror = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
    ESlateBrushMirrorType_MAX = 4
};

enum ESlateBrushRoundingType
{
    FixedRadius = 0,
    HalfHeightRadius = 1,
    ESlateBrushRoundingType_MAX = 2
};

enum ESlateBrushTileType
{
    NoTile = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
    ESlateBrushTileType_MAX = 4
};

enum ESlateCheckBoxType
{
    CheckBox = 0,
    ToggleButton = 1,
    ESlateCheckBoxType_MAX = 2
};

enum ESlateColorStylingMode
{
    UseColor_Specified = 0,
    UseColor_ColorTable = 1,
    UseColor_Foreground = 2,
    UseColor_Foreground_Subdued = 3,
    UseColor_UseStyle = 4,
    UseColor_MAX = 5
};

enum ESlateDebuggingFocusEvent
{
    FocusChanging = 0,
    FocusLost = 1,
    FocusReceived = 2,
    MAX = 3
};

enum ESlateDebuggingInputEvent
{
    MouseMove = 0,
    MouseEnter = 1,
    MouseLeave = 2,
    PreviewMouseButtonDown = 3,
    MouseButtonDown = 4,
    MouseButtonUp = 5,
    MouseButtonDoubleClick = 6,
    MouseWheel = 7,
    TouchStart = 8,
    TouchEnd = 9,
    TouchForceChanged = 10,
    TouchFirstMove = 11,
    TouchMoved = 12,
    DragDetected = 13,
    DragEnter = 14,
    DragLeave = 15,
    DragOver = 16,
    DragDrop = 17,
    DropMessage = 18,
    PreviewKeyDown = 19,
    KeyDown = 20,
    KeyUp = 21,
    KeyChar = 22,
    AnalogInput = 23,
    TouchGesture = 24,
    MotionDetected = 25,
    MAX = 26
};

enum ESlateDebuggingNavigationMethod
{
    Unknown = 0,
    Explicit = 1,
    CustomDelegateBound = 2,
    CustomDelegateUnbound = 3,
    NextOrPrevious = 4,
    HitTestGrid = 5,
    ESlateDebuggingNavigationMethod_MAX = 6
};

enum ESlateDebuggingStateChangeEvent
{
    MouseCaptureGained = 0,
    MouseCaptureLost = 1,
    ESlateDebuggingStateChangeEvent_MAX = 2
};

enum ESlateGesture
{
    None = 0,
    Scroll = 1,
    Magnify = 2,
    Swipe = 3,
    Rotate = 4,
    LongPress = 5,
    ESlateGesture_MAX = 6
};

enum ESlateParentWindowSearchMethod
{
    ActiveWindow = 0,
    MainWindow = 1,
    ESlateParentWindowSearchMethod_MAX = 2
};

enum ESlatePostRT
{
    None = 0,
    ESlatePostRT_0 = 1,
    ESlatePostRT_1 = 2,
    ESlatePostRT_2 = 3,
    ESlatePostRT_3 = 4,
    ESlatePostRT_4 = 5,
    Num = 6,
    ESlatePostRT_MAX = 7
};

enum ESlateSizeRule
{
    Automatic = 0,
    Fill = 1,
    ESlateSizeRule_MAX = 2
};

enum ESlateVisibility
{
    Visible = 0,
    Collapsed = 1,
    Hidden = 2,
    HitTestInvisible = 3,
    SelfHitTestInvisible = 4,
    ESlateVisibility_MAX = 5
};

enum ESleepFamily
{
    Normal = 0,
    Sensitive = 1,
    Custom = 2,
    ESleepFamily_MAX = 3
};

enum ESlotEnvironmentExposure
{
    Unknown = 0,
    Exposed = 1,
    Protected = 2,
    ESlotEnvironmentExposure_MAX = 3
};

enum ESmartBuildMode
{
    None = 0,
    Auto = 1,
    Box = 2,
    Bridge = 3,
    Tower = 4,
    ProtectedRamp = 5,
    ESmartBuildMode_MAX = 6
};

enum ESmartBuildPlayerLocationInCell
{
    Anywhere = 0,
    Forward = 1,
    Back = 2,
    ESmartBuildPlayerLocationInCell_MAX = 3
};

enum ESmartObjectChangeReason
{
    None = 0,
    OnEvent = 1,
    OnTagAdded = 2,
    OnTagRemoved = 3,
    OnClaimed = 4,
    OnOccupied = 5,
    OnReleased = 6,
    OnSlotEnabled = 7,
    OnSlotDisabled = 8,
    OnObjectEnabled = 9,
    OnObjectDisabled = 10,
    OnComponentBound = 11,
    OnComponentUnbound = 12,
    ESmartObjectChangeReason_MAX = 13
};

enum ESmartObjectClaimPriority
{
    None = 0,
    Low = 1,
    BelowNormal = 2,
    Normal = 3,
    AboveNormal = 4,
    High = 5,
    MIN = 6,
    MAX = 7
};

enum ESmartObjectCollectionRegistrationResult
{
    Failed_InvalidCollection = 0,
    Failed_AlreadyRegistered = 1,
    Failed_NotFromPersistentLevel = 2,
    Succeeded = 3,
    ESmartObjectCollectionRegistrationResult_MAX = 4
};

enum ESmartObjectEntrancePriority
{
    Lowest = 0,
    Lower = 1,
    Low = 2,
    BelowNormal = 3,
    Normal = 4,
    AboveNormal = 5,
    High = 6,
    Higher = 7,
    Highest = 8,
    MIN = 9,
    MAX = 10
};

enum ESmartObjectSlotNavigationLocationType
{
    Entry = 0,
    Exit = 1,
    ESmartObjectSlotNavigationLocationType_MAX = 2
};

enum ESmartObjectSlotShape
{
    Circle = 0,
    Rectangle = 1,
    ESmartObjectSlotShape_MAX = 2
};

enum ESmartObjectSlotState
{
    Invalid = 0,
    Free = 1,
    Claimed = 2,
    Occupied = 3,
    Disabled = 4,
    ESmartObjectSlotState_MAX = 5
};

enum ESmartObjectTagFilteringPolicy
{
    NoFilter = 0,
    Combine = 1,
    Override = 2,
    ESmartObjectTagFilteringPolicy_MAX = 3
};

enum ESmartObjectTagMergingPolicy
{
    Combine = 0,
    Override = 1,
    ESmartObjectTagMergingPolicy_MAX = 2
};

enum ESmartObjectTraceType
{
    ByChannel = 0,
    ByProfile = 1,
    ByObjectTypes = 2,
    ESmartObjectTraceType_MAX = 3
};

enum ESmoothCameraBlendType
{
    SmoothStep = 0,
    SmootherStep = 1,
    ESmoothCameraBlendType_MAX = 2
};

enum ESmoothMeshToolSmoothType
{
    Iterative = 0,
    Implicit = 1,
    Diffusion = 2,
    ESmoothMeshToolSmoothType_MAX = 3
};

enum ESmoothProgressState
{
    Enabled = 0,
    DisabledByState = 1,
    ESmoothProgressState_MAX = 2
};

enum ESnapshotSourceMode
{
    NamedSnapshot = 0,
    SnapshotPin = 1,
    ESnapshotSourceMode_MAX = 2
};

enum ESocialChannelType
{
    General = 0,
    Founder = 1,
    Party = 2,
    Team = 3,
    System = 4,
    Private = 5,
    ESocialChannelType_MAX = 6
};

enum ESocialCommsPermission
{
    Nobody = 0,
    FriendsOnly = 1,
    FriendsAndTeammates = 2,
    Everybody = 3,
    ESocialCommsPermission_MAX = 4
};

enum ESocialImportPanelPlatform
{
    Facebook = 0,
    VK = 1,
    Steam = 2,
    Xbox = 3,
    Playstation = 4,
    Switch = 5,
    None = 6,
    ESocialImportPanelPlatform_MAX = 7
};

enum ESocialImportPanelType
{
    Athena = 0,
    SaveTheWorld = 1,
    ESocialImportPanelType_MAX = 2
};

enum ESocialLinkType
{
    X = 0,
    TikTok = 1,
    Instagram = 2,
    Discord = 3,
    YouTube = 4,
    Max = 5
};

enum ESocialPartyInviteFailureReason
{
    Success = 0,
    NotOnline = 1,
    NotAcceptingMembers = 2,
    NotFriends = 3,
    AlreadyInParty = 4,
    OssValidationFailed = 5,
    PlatformInviteFailed = 6,
    PartyInviteFailed = 7,
    InviteRateLimitExceeded = 8,
    ESocialPartyInviteFailureReason_MAX = 9
};

enum ESocialPartyInviteMethod
{
    Other = 0,
    Notification = 1,
    AcceptRequestToJoin = 2,
    Custom0 = 3,
    Custom1 = 4,
    Custom2 = 5,
    Custom3 = 6,
    Custom4 = 7,
    Custom5 = 8,
    Custom6 = 9,
    Custom7 = 10,
    Custom8 = 11,
    Custom9 = 12,
    MAX = 13
};

enum ESocialProfilePrivacySettingBadges
{
    FriendsOnly = 0,
    Private = 1,
    ESocialProfilePrivacySettingBadges_MAX = 2
};

enum ESocialProfilePrivacySettingLevel
{
    Public = 0,
    FriendsOnly = 1,
    Private = 2,
    ESocialProfilePrivacySettingLevel_MAX = 3
};

enum ESocialRelationship
{
    Any = 0,
    FriendInviteReceived = 1,
    FriendInviteSent = 2,
    PartyInvite = 3,
    Friend = 4,
    BlockedPlayer = 5,
    SuggestedFriend = 6,
    RecentPlayer = 7,
    JoinRequest = 8,
    ESocialRelationship_MAX = 9
};

enum ESocialRequirementGateGroupType
{
    Solo = 0,
    Squad = 1,
    Party = 2,
    ESocialRequirementGateGroupType_MAX = 3
};

enum ESocialRequirementsRequiredForGate
{
    AllSocialRequirements = 0,
    AnySocialRequirements = 1,
    NoSocialRequirements = 2,
    ESocialRequirementsRequiredForGate_MAX = 3
};

enum ESocialSubsystem
{
    Primary = 0,
    Platform = 1,
    MAX = 2
};

enum ESocialTagCategory
{
    GameModes = 0,
    Mood = 1,
    Utility = 2,
    Competitive = 3,
    Other = 4,
    ESocialTagCategory_MAX = 5
};

enum ESocialTagListHighlightPolicy
{
    All = 0,
    TagList = 1,
    LocalUser = 2,
    FullColor = 3,
    ESocialTagListHighlightPolicy_MAX = 4
};

enum ESocialTagsChangeReason
{
    Service = 0,
    Editor = 1,
    ESocialTagsChangeReason_MAX = 2
};

enum ESocialTutorialType
{
    None = 0,
    TagsEditor = 1,
    LookingForParty = 2,
    LikeIsland = 3,
    RebootRallyUsers = 4,
    KWSSidebarSupervisedSettings = 5,
    KWSVoiceChannelPanelSupervisedSettings = 6,
    VoiceReport = 7,
    ContentRatingSettings = 8,
    ContentUnlockedSettings = 9,
    CreativeContentSettings = 10,
    FollowThisCreatorInFortnite = 11,
    FollowedYourFirstCreator = 12,
    SearchForCreators = 13,
    ShareActivitySetting = 14,
    LibraryInHomebar = 15,
    ESocialTutorialType_MAX = 16
};

enum ESolarisDebugMessageClientId
{
    None = 0,
    Max = 1
};

enum ESolarisDebugMessageCommand
{
    Connect = 0,
    Disconnect = 1,
    Message = 2,
    PackageMapping = 3,
    ESolarisDebugMessageCommand_MAX = 4
};

enum ESongShortNameMatchType
{
    AlwaysMatch = 0,
    MatchAny = 1,
    MatchAll = 2,
    MatchNone = 3,
    ESongShortNameMatchType_MAX = 4
};

enum ESongSortDirection
{
    Ascending = 0,
    Descending = 1,
    None = 2,
    ESongSortDirection_MAX = 3
};

enum ESongSortMethod
{
    Title = 0,
    Shortname = 1,
    Artist = 2,
    Album = 3,
    Genre = 4,
    ReleaseYear = 5,
    None = 6,
    ESongSortMethod_MAX = 7
};

enum ESoundAssetCompressionType
{
    BinkAudio = 0,
    ADPCM = 1,
    PCM = 2,
    Opus = 3,
    PlatformSpecific = 4,
    ProjectDefined = 5,
    RADAudio = 6,
    ESoundAssetCompressionType_MAX = 7
};

enum ESoundContainerType
{
    Concatenate = 0,
    Randomize = 1,
    Mix = 2,
    ESoundContainerType_MAX = 3
};

enum ESoundDistanceCalc
{
    SOUNDDISTANCE_Normal = 0,
    SOUNDDISTANCE_InfiniteXYPlane = 1,
    SOUNDDISTANCE_InfiniteXZPlane = 2,
    SOUNDDISTANCE_InfiniteYZPlane = 3,
    SOUNDDISTANCE_MAX = 4
};

enum ESoundGroup
{
    SOUNDGROUP_Default = 0,
    SOUNDGROUP_Effects = 1,
    SOUNDGROUP_UI = 2,
    SOUNDGROUP_Music = 3,
    SOUNDGROUP_Voice = 4,
    SOUNDGROUP_GameSoundGroup1 = 5,
    SOUNDGROUP_GameSoundGroup2 = 6,
    SOUNDGROUP_GameSoundGroup3 = 7,
    SOUNDGROUP_GameSoundGroup4 = 8,
    SOUNDGROUP_GameSoundGroup5 = 9,
    SOUNDGROUP_GameSoundGroup6 = 10,
    SOUNDGROUP_GameSoundGroup7 = 11,
    SOUNDGROUP_GameSoundGroup8 = 12,
    SOUNDGROUP_GameSoundGroup9 = 13,
    SOUNDGROUP_GameSoundGroup10 = 14,
    SOUNDGROUP_GameSoundGroup11 = 15,
    SOUNDGROUP_GameSoundGroup12 = 16,
    SOUNDGROUP_GameSoundGroup13 = 17,
    SOUNDGROUP_GameSoundGroup14 = 18,
    SOUNDGROUP_GameSoundGroup15 = 19,
    SOUNDGROUP_GameSoundGroup16 = 20,
    SOUNDGROUP_GameSoundGroup17 = 21,
    SOUNDGROUP_GameSoundGroup18 = 22,
    SOUNDGROUP_GameSoundGroup19 = 23,
    SOUNDGROUP_GameSoundGroup20 = 24,
    SOUNDGROUP_MAX = 25
};

enum ESoundLibraryNotifyTriggerType
{
    Play = 0,
    Stop = 1,
    None = 2,
    ESoundLibraryNotifyTriggerType_MAX = 3
};

enum ESoundLibrarySelectionBehavior
{
    SelectAll = 0,
    Random = 1,
    Shuffle = 2,
    Max_None = 3,
    ESoundLibrarySelectionBehavior_MAX = 4
};

enum ESoundModulationLFOShape
{
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    COUNT = 7,
    ESoundModulationLFOShape_MAX = 8
};

enum ESoundSpatializationAlgorithm
{
    SPATIALIZATION_Default = 0,
    SPATIALIZATION_HRTF = 1,
    SPATIALIZATION_MAX = 2
};

enum ESoundWaveCloudStreamingPlatformEnableType
{
    Inherited = 0,
    Disabled = 1,
    SWC_MultipleValues = 2,
    ESoundWaveCloudStreamingPlatformEnableType_MAX = 3
};

enum ESoundWaveCloudStreamingPlatformProjectEnableType
{
    Enabled = 0,
    Disabled = 1,
    ESoundWaveCloudStreamingPlatformProjectEnableType_MAX = 2
};

enum ESoundWaveFFTSize
{
    VerySmall_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    VeryLarge_2048 = 4,
    ESoundWaveFFTSize_MAX = 5
};

enum ESoundWaveLoadingBehavior
{
    Inherited = 0,
    RetainOnLoad = 1,
    PrimeOnLoad = 2,
    LoadOnDemand = 3,
    ForceInline = 4,
    Uninitialized = 5,
    ESoundWaveLoadingBehavior_MAX = 6
};

enum ESoundwaveSampleRateSettings
{
    Max = 0,
    High = 1,
    Medium = 2,
    Low = 3,
    Min = 4
};

enum ESourceBusChannels
{
    Mono = 0,
    Stereo = 1,
    ESourceBusChannels_MAX = 2
};

enum ESourceBusSendLevelControlMethod
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESourceBusSendLevelControlMethod_MAX = 3
};

enum ESourceEffectDynamicsPeakMode
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ESourceEffectDynamicsPeakMode_MAX = 4
};

enum ESourceEffectDynamicsProcessorType
{
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    UpwardsCompressor = 4,
    Count = 5,
    ESourceEffectDynamicsProcessorType_MAX = 6
};

enum ESourceEffectFilterCircuit
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESourceEffectFilterCircuit_MAX = 4
};

enum ESourceEffectFilterParam
{
    FilterFrequency = 0,
    FilterResonance = 1,
    Count = 2,
    ESourceEffectFilterParam_MAX = 3
};

enum ESourceEffectFilterType
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESourceEffectFilterType_MAX = 5
};

enum ESourceEffectMotionFilterCircuit
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESourceEffectMotionFilterCircuit_MAX = 4
};

enum ESourceEffectMotionFilterModDestination
{
    FilterACutoffFrequency = 0,
    FilterAResonance = 1,
    FilterAOutputVolumeDB = 2,
    FilterBCutoffFrequency = 3,
    FilterBResonance = 4,
    FilterBOutputVolumeDB = 5,
    FilterMix = 6,
    Count = 7,
    ESourceEffectMotionFilterModDestination_MAX = 8
};

enum ESourceEffectMotionFilterModSource
{
    DistanceFromListener = 0,
    SpeedRelativeToListener = 1,
    SpeedOfSourceEmitter = 2,
    SpeedOfListener = 3,
    SpeedOfAngleDelta = 4,
    Count = 5,
    ESourceEffectMotionFilterModSource_MAX = 6
};

enum ESourceEffectMotionFilterTopology
{
    SerialMode = 0,
    ParallelMode = 1,
    Count = 2,
    ESourceEffectMotionFilterTopology_MAX = 3
};

enum ESourceEffectMotionFilterType
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESourceEffectMotionFilterType_MAX = 5
};

enum ESourceManagerRenderThreadPhase
{
    Begin = 0,
    PumpMpscCmds = 1,
    PumpCmds = 2,
    ProcessModulators = 3,
    UpdatePendingReleaseData = 4,
    GenerateSrcAudio_WithBusses = 5,
    ComputeBusses = 6,
    GenerateSrcAudio_WithoutBusses = 7,
    UpdateBusses = 8,
    SpatialInterface_OnAllSourcesProcessed = 9,
    SourceDataOverride_OnAllSourcesProcessed = 10,
    UpdateGameThreadCopies = 11,
    Finished = 12,
    ESourceManagerRenderThreadPhase_MAX = 13
};

enum ESourceSelectionMode
{
    MaxDifference = 0,
    ESourceSelectionMode_MAX = 1
};

enum ESourceType
{
    SRC_PreviousRegexMatch = 0,
    SRC_GPUFamily = 1,
    SRC_GLVersion = 2,
    SRC_AndroidVersion = 3,
    SRC_DeviceMake = 4,
    SRC_DeviceModel = 5,
    SRC_DeviceBuildNumber = 6,
    SRC_VulkanVersion = 7,
    SRC_UsingHoudini = 8,
    SRC_VulkanAvailable = 9,
    SRC_CommandLine = 10,
    SRC_Hardware = 11,
    SRC_Chipset = 12,
    SRC_ConfigRuleVar = 13,
    SRC_HMDSystemName = 14,
    SRC_SM5Available = 15,
    SRC_MAX = 16
};

enum ESpaceCurveControlPointFalloffType
{
    Linear = 0,
    Smooth = 1,
    ESpaceCurveControlPointFalloffType_MAX = 2
};

enum ESpaceCurveControlPointOriginMode
{
    Shared = 0,
    First = 1,
    Last = 2,
    ESpaceCurveControlPointOriginMode_MAX = 3
};

enum ESpaceCurveControlPointTransformMode
{
    Shared = 0,
    PerVertex = 1,
    ESpaceCurveControlPointTransformMode_MAX = 2
};

enum ESparksAccountItemSubtype
{
    Aura = 0,
    Guitar = 1,
    Bass = 2,
    Keyboard = 3,
    Microphone = 4,
    Drums = 5,
    SpotlightAnim = 6,
    Song = 7,
    None = 8,
    NumAccountItemTypes = 9,
    ESparksAccountItemSubtype_MAX = 10
};

enum ESparksAnimatableState
{
    None = 0,
    AnimatableWithoutBeat = 1,
    Animatable = 2,
    AnimatableAndPlayable = 3,
    ESparksAnimatableState_MAX = 4
};

enum ESparksCameraConfigType
{
    Main = 0,
    QA = 1,
    Perf = 2,
    Custom = 3,
    ESparksCameraConfigType_MAX = 4
};

enum ESparksCameraLogType
{
    ShotGenerator = 0,
    ShotName = 1,
    SectionName = 2,
    Unknown = 3,
    ESparksCameraLogType_MAX = 4
};

enum ESparksFilterResult
{
    Match = 0,
    FailedRequired = 1,
    FailedExcluded = 2,
    ESparksFilterResult_MAX = 3
};

enum ESparksGenre
{
    None = 0,
    RapHipHop = 1,
    RnB = 2,
    Pop = 3,
    Rock = 4,
    DanceElectronic = 5,
    Country = 6,
    LatinCarribean = 7,
    Other = 8,
    Count = 9,
    ESparksGenre_MAX = 10
};

enum ESparksInstrumentType
{
    Guitar = 0,
    Bass = 1,
    Vocals = 2,
    Drum = 3,
    Keyboard = 4,
    None = 5,
    NumInstrumentTypes = 6,
    ESparksInstrumentType_MAX = 7
};

enum ESparksSectionGeneratorResult
{
    Success = 0,
    SuccessTooShort = 1,
    SuccessTooLong = 2,
    Failed = 3,
    ESparksSectionGeneratorResult_MAX = 4
};

enum ESparksSongAgeRating
{
    None = 0,
    E = 1,
    E10p = 2,
    T = 3,
    ESparksSongAgeRating_MAX = 4
};

enum ESparksStreamerStatus
{
    Idle = 0,
    DownloadingMidi = 1,
    Preparing = 2,
    Opening = 3,
    Ready = 4,
    Streaming = 5,
    Errored = 6,
    ESparksStreamerStatus_MAX = 7
};

enum ESparseVolumeTexturePreviewAttribute
{
    ESVTPA_AttributesA_R = 0,
    ESVTPA_AttributesA_G = 1,
    ESVTPA_AttributesA_B = 2,
    ESVTPA_AttributesA_A = 3,
    ESVTPA_AttributesB_R = 4,
    ESVTPA_AttributesB_G = 5,
    ESVTPA_AttributesB_B = 6,
    ESVTPA_AttributesB_A = 7,
    ESVTPA_MAX = 8
};

enum ESpatialCustomizationCategoryState
{
    LockedByBattlePass = 0,
    LockedByChallenge = 1,
    LockedByChallengeCompletion = 2,
    UnlockAvailable = 3,
    UnlockUsed = 4,
    Max_NONE = 5,
    ESpatialCustomizationCategoryState_MAX = 6
};

enum ESpatialCustomizationRoomState
{
    None = 0,
    CategorySelection = 1,
    CustomizationSelection = 2,
    ESpatialCustomizationRoomState_MAX = 3
};

enum ESpatialLoadingState
{
    Uninitialized = 0,
    ReadOnly = 1,
    Initializing = 2,
    Ready = 3,
    ESpatialLoadingState_MAX = 4
};

enum ESpatialMetricsConnectorResponseCode
{
    Pending = 0,
    Success = 1,
    Failed = 2,
    InvalidRequest = 3,
    UnknownRequest = 4,
    TimedOut = 5,
    ESpatialMetricsConnectorResponseCode_MAX = 6
};

enum ESpatialSceneQueryShape
{
    Sphere = 0,
    Box = 1,
    Capsule = 2,
    VolumeBounds = 3,
    ESpatialSceneQueryShape_MAX = 4
};

enum ESpatialStyleCharacterUnlockPrerequisite
{
    BattlepassPurchase = 0,
    BattlepassLevel = 1,
    ESpatialStyleCharacterUnlockPrerequisite_MAX = 2
};

enum ESpawnActorCollisionHandlingMethod
{
    Undefined = 0,
    AlwaysSpawn = 1,
    AdjustIfPossibleButAlwaysSpawn = 2,
    AdjustIfPossibleButDontSpawnIfColliding = 3,
    DontSpawnIfColliding = 4,
    ESpawnActorCollisionHandlingMethod_MAX = 5
};

enum ESpawnActorPersistenceBehavior
{
    Destroy = 0,
    Transient = 1,
    Persistent = 2,
    ESpawnActorPersistenceBehavior_MAX = 3
};

enum ESpawnActorScaleMethod
{
    OverrideRootScale = 0,
    MultiplyWithRoot = 1,
    SelectDefaultAtRuntime = 2,
    ESpawnActorScaleMethod_MAX = 3
};

enum ESpawnMachineState
{
    Default = 0,
    WaitingForUse = 1,
    BeingUsed = 2,
    Active = 3,
    Complete = 4,
    OnCooldown = 5,
    ESpawnMachineState_MAX = 6
};

enum ESpawnMachineSubTextState
{
    NoCards = 0,
    VanInUse = 1,
    TeamOnOtherVan = 2,
    None = 3,
    HasResource = 4,
    NoResource = 5,
    NotEnabledForPlayer = 6,
    ESpawnMachineSubTextState_MAX = 7
};

enum ESpawnOwnership
{
    InnerSequence = 0,
    RootSequence = 1,
    External = 2,
    ESpawnOwnership_MAX = 3
};

enum ESpawnPointState
{
    Inactive = 0,
    Active_CarryObjectInRange = 1,
    Active_CarryObjectOutOfRange = 2,
    IntelCaptured = 3,
    IntelDownloaded = 4,
    ESpawnPointState_MAX = 5
};

enum ESpawnRequestStatus
{
    None = 0,
    Pending = 1,
    Processing = 2,
    Succeeded = 3,
    Failed = 4,
    RetryPending = 5,
    ESpawnRequestStatus_MAX = 6
};

enum ESpawnResult
{
    Success = 0,
    Failure_NoLocationFound = 1,
    Failure_NoActorClass = 2,
    Failure_BadQueryData = 3,
    ESpawnResult_MAX = 4
};

enum ESpeakerChannelAssignment
{
    LeftFront = 0,
    RightFront = 1,
    Center = 2,
    LFE = 3,
    LeftSurround = 4,
    RightSurround = 5,
    LeftRear = 6,
    RightRear = 7,
    FrontPair = 8,
    CenterAndLFE = 9,
    SurroundPair = 10,
    RearPair = 11,
    AmbisonicW = 12,
    AmbisonicX = 13,
    AmbisonicY = 14,
    AmbisonicZ = 15,
    AmbisonicWXPair = 16,
    AmbisonicYZPair = 17,
    UnspecifiedMono = 18,
    Num = 19,
    Invalid = 20,
    ESpeakerChannelAssignment_MAX = 21
};

enum ESpecialActorStatType
{
    NumEliminationsNearby = 0,
    TimeInWorld = 1,
    PickupNumSpawns = 2,
    PickupNumDespawns = 3,
    PickupNumDropped = 4,
    PickupNumTaken = 5,
    PlayerWon = 6,
    PlayerNumEliminations = 7,
    PlayerNum = 8,
    TotalStats = 9,
    ESpecialActorStatType_MAX = 10
};

enum ESpecialEventGameUserSettingsResult
{
    Success = 0,
    Failure = 1,
    ESpecialEventGameUserSettingsResult_MAX = 2
};

enum ESpecialEventInputActionBindType
{
    Consume = 0,
    Bind = 1,
    None = 2,
    ESpecialEventInputActionBindType_MAX = 3
};

enum ESpecialEventMannequinLoadoutType
{
    None = 0,
    Default = 1,
    Override = 2,
    Pawn = 3,
    ESpecialEventMannequinLoadoutType_MAX = 4
};

enum ESpecialEventPhaseComponentNetModeType
{
    ClientControlled = 0,
    Client = 1,
    DedicatedServer = 2,
    ESpecialEventPhaseComponentNetModeType_MAX = 3
};

enum ESpecialEventPhaseState
{
    Unregistered = 0,
    Inactive = 1,
    Active = 2,
    Deactivated = 3,
    ESpecialEventPhaseState_MAX = 4
};

enum ESpecialEventRewindComponentState
{
    Stop = 0,
    Record = 1,
    Rewind = 2,
    ESpecialEventRewindComponentState_MAX = 3
};

enum ESpecialEventTODMModifyType
{
    Keep = 0,
    Hide = 1,
    Show = 2,
    Spawn = 3,
    Persistent = 4,
    Destroy = 5,
    DestroyAll = 6,
    DestroyAllButGameState = 7,
    ESpecialEventTODMModifyType_MAX = 8
};

enum ESpecialRelevancyMode
{
    NormalRelevancy = 0,
    SoloRelevancy = 1,
    SquadRelevancy = 2,
    MultiSquad = 3,
    Custom = 4,
    MAX = 5
};

enum ESpecializationType
{
    Tier1 = 0,
    Tier2 = 1,
    Tier3 = 2,
    Tier4 = 3,
    NumTiers = 4,
    ESpecializationType_MAX = 5
};

enum ESpectateBlendEasing
{
    Linear = 0,
    EaseOutQuad = 1,
    ESpectateBlendEasing_MAX = 2
};

enum ESpectatorBuildCountType
{
    BuildCount = 0,
    Wood = 1,
    Stone = 2,
    Metal = 3,
    Gold = 4,
    ESpectatorBuildCountType_MAX = 5
};

enum ESpectatorCameraType
{
    ThirdPerson = 0,
    DroneFree = 1,
    Gameplay = 2,
    ReverseShot = 3,
    FollowShot = 4,
    DroneFollow = 5,
    DroneAttach = 6,
    BattleMap = 7,
    ARDrone = 8,
    MAX = 9
};

enum ESpectatorClientRequestType
{
    NonePending = 0,
    ExistingSessionReservation = 1,
    ReservationUpdate = 2,
    EmptyServerReservation = 3,
    Reconnect = 4,
    Abandon = 5,
    ESpectatorClientRequestType_MAX = 6
};

enum ESpectatorLeaderboardEntryType
{
    ScoreWithEndScore = 0,
    NoEndScore = 1,
    Time = 2,
    Invalid = 3,
    ESpectatorLeaderboardEntryType_MAX = 4
};

enum ESpectatorMapPlayerListState
{
    Default = 0,
    Irrelevant = 1,
    Eliminated = 2,
    ESpectatorMapPlayerListState_MAX = 3
};

enum ESpectatorPlayerListSortMethod
{
    SquadId = 0,
    PlayerName = 1,
    Eliminations = 2,
    EventScore = 3,
    State = 4,
    Count = 5,
    ESpectatorPlayerListSortMethod_MAX = 6
};

enum ESpectatorReservationResult
{
    NoResult = 0,
    RequestPending = 1,
    GeneralError = 2,
    SpectatorLimitReached = 3,
    IncorrectPlayerCount = 4,
    RequestTimedOut = 5,
    ReservationDuplicate = 6,
    ReservationNotFound = 7,
    ReservationAccepted = 8,
    ReservationDenied = 9,
    ReservationDenied_CrossPlayRestriction = 10,
    ReservationDenied_Banned = 11,
    ReservationRequestCanceled = 12,
    ReservationInvalid = 13,
    BadSessionId = 14,
    ReservationDenied_ContainsExistingPlayers = 15,
    ESpectatorReservationResult_MAX = 16
};

enum ESpectatorScreenMode
{
    Disabled = 0,
    SingleEyeLetterboxed = 1,
    Undistorted = 2,
    Distorted = 3,
    SingleEye = 4,
    SingleEyeCroppedToFill = 5,
    Texture = 6,
    TexturePlusEye = 7,
    ESpectatorScreenMode_MAX = 8
};

enum ESpectatorSquadIdMode
{
    AlwaysOff = 0,
    AlwaysOn = 1,
    HoldToDisplay = 2,
    ESpectatorSquadIdMode_MAX = 3
};

enum ESpecularProfileFormat
{
    ViewLightVector = 0,
    HalfVector = 1,
    ESpecularProfileFormat_MAX = 2
};

enum ESpeedTreeGeometryType
{
    STG_Branch = 0,
    STG_Frond = 1,
    STG_Leaf = 2,
    STG_FacingLeaf = 3,
    STG_Billboard = 4,
    STG_MAX = 5
};

enum ESpeedTreeLODType
{
    STLOD_Pop = 0,
    STLOD_Smooth = 1,
    STLOD_MAX = 2
};

enum ESpeedTreeWindType
{
    STW_None = 0,
    STW_Fastest = 1,
    STW_Fast = 2,
    STW_Better = 3,
    STW_Best = 4,
    STW_Palm = 5,
    STW_BestPlus = 6,
    STW_MAX = 7
};

enum ESpeedWarpingAxisMode
{
    IKFootRootLocalX = 0,
    IKFootRootLocalY = 1,
    IKFootRootLocalZ = 2,
    WorldSpaceVectorInput = 3,
    ComponentSpaceVectorInput = 4,
    ActorSpaceVectorInput = 5,
    ESpeedWarpingAxisMode_MAX = 6
};

enum ESphericalLimitType
{
    Inner = 0,
    Outer = 1,
    ESphericalLimitType_MAX = 2
};

enum ESplineBoneAxis
{
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    ESplineBoneAxis_MAX = 4
};

enum ESplineCoordinateSpace
{
    Local = 0,
    World = 1,
    ESplineCoordinateSpace_MAX = 2
};

enum ESplineMeshAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    ESplineMeshAxis_MAX = 3
};

enum ESplineModulationColorMask
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    ESplineModulationColorMask_MAX = 4
};

enum ESplinePointType
{
    Linear = 0,
    Curve = 1,
    Constant = 2,
    CurveClamped = 3,
    CurveCustomTangent = 4,
    ESplinePointType_MAX = 5
};

enum ESplineType
{
    BSpline = 0,
    Hermite = 1,
    Max = 2
};

enum ESplineWaterAudioFacingDirection
{
    None = 0,
    Inwards = 1,
    Outwards = 2,
    ESplineWaterAudioFacingDirection_MAX = 3
};

enum ESplineWaterAudioWindingOrder
{
    Clockwise = 0,
    Counterclockwise = 1,
    ESplineWaterAudioWindingOrder_MAX = 2
};

enum ESplitMeshesMethod
{
    ByMeshTopology = 0,
    ByVertexOverlap = 1,
    ByMaterialID = 2,
    ByPolyGroup = 3,
    ESplitMeshesMethod_MAX = 4
};

enum ESplitNormalMethod
{
    UseExistingTopology = 0,
    FaceNormalThreshold = 1,
    FaceGroupID = 2,
    PerTriangle = 3,
    PerVertex = 4,
    ESplitNormalMethod_MAX = 5
};

enum ESplitScreenType
{
    None = 0,
    TwoPlayer_Horizontal = 1,
    TwoPlayer_Vertical = 2,
    ThreePlayer_FavorTop = 3,
    ThreePlayer_FavorBottom = 4,
    ThreePlayer_Vertical = 5,
    ThreePlayer_Horizontal = 6,
    FourPlayer_Grid = 7,
    FourPlayer_Vertical = 8,
    FourPlayer_Horizontal = 9,
    SplitTypeCount = 10,
    ESplitScreenType_MAX = 11
};

enum ESplitStormProxyPhase
{
    None = 0,
    MovingToHold = 1,
    MovingToEnd = 2,
    ESplitStormProxyPhase_MAX = 3
};

enum ESprintLoggingVerbosityLevel
{
    Error = 0,
    Warning = 1,
    Display = 2,
    Log = 3,
    Verbose = 4,
    VeryVerbose = 5,
    ESprintLoggingVerbosityLevel_MAX = 6
};

enum ESpriteCollisionMode
{
    None = 0,
    Use2DPhysics = 1,
    Use3DPhysics = 2,
    ESpriteCollisionMode_MAX = 3
};

enum ESpritePivotMode
{
    Top_Left = 0,
    Top_Center = 1,
    Top_Right = 2,
    Center_Left = 3,
    Center_Center = 4,
    Center_Right = 5,
    Bottom_Left = 6,
    Bottom_Center = 7,
    Bottom_Right = 8,
    Custom = 9,
    ESpritePivotMode_MAX = 10
};

enum ESpritePolygonMode
{
    SourceBoundingBox = 0,
    TightBoundingBox = 1,
    ShrinkWrapped = 2,
    FullyCustom = 3,
    Diced = 4,
    ESpritePolygonMode_MAX = 5
};

enum ESpriteShapeType
{
    Box = 0,
    Circle = 1,
    Polygon = 2,
    ESpriteShapeType_MAX = 3
};

enum ESquadChangeType
{
    JoinSquad = 0,
    BenchSelf = 1,
    UnbenchSelf = 2,
    Swap = 3,
    None = 4,
    ESquadChangeType_MAX = 5
};

enum ESquadSlotSortType
{
    ByRating = 0,
    ByLevel = 1,
    ByRarity = 2,
    ByBonus = 3,
    ByMatch = 4,
    ESquadSlotSortType_MAX = 5
};

enum ESquadSlotType
{
    HeroSquadMissionDefender = 0,
    SurvivorSquadLeadSurvivor = 1,
    SurvivorSquadSurvivor = 2,
    DefenderSquadMember = 3,
    ExpeditionSquadMember = 4,
    ESquadSlotType_MAX = 5
};

enum ESqueegeeDataTypes
{
    GameActivity = 0,
    None = 1,
    ESqueegeeDataTypes_MAX = 2
};

enum ESqueegeeText
{
    LobbyGameModeAction = 0,
    LobbyGameModeActionCabined = 1,
    GameModeInfoAction = 2,
    GameModeDetailsDisplayAction = 3,
    OptionSettingName = 4,
    OptionSettingDescription = 5,
    ActionSettingName = 6,
    ActionSettingDescription = 7,
    SidebarButton = 8,
    ESqueegeeText_MAX = 9
};

enum ESqueegeeWidgetInjection
{
    None = 0,
    RatingTag = 1,
    RatingCard = 2,
    GameModeInfo = 3,
    PinModalInfo = 4,
    ManagementScreen = 5,
    ParentalControlsModal = 6,
    LockIcon = 7,
    VideoBumper = 8,
    ESqueegeeWidgetInjection_MAX = 9
};

enum EStandardToolContextMaterials
{
    VertexColorMaterial = 0,
    EStandardToolContextMaterials_MAX = 1
};

enum EStandbyType
{
    STDBY_Rx = 0,
    STDBY_Tx = 1,
    STDBY_BadPing = 2,
    STDBY_MAX = 3
};

enum EStartMode
{
    Timed = 0,
    Triggered = 1,
    EStartMode_MAX = 2
};

enum EStashInventoryServiceSyncState
{
    Uninitialized = 0,
    Syncing = 1,
    Ready = 2,
    EStashInventoryServiceSyncState_MAX = 3
};

enum EStatCategory
{
    Combat = 0,
    Building = 1,
    Utility = 2,
    Max_None = 3,
    EStatCategory_MAX = 4
};

enum EStatMod
{
    Delta = 0,
    Set = 1,
    Maximum = 2,
    EStatMod_MAX = 3
};

enum EStatRecordingPeriod
{
    Frame = 0,
    Minute = 1,
    AthenaSafeZonePhase = 2,
    Life = 3,
    Map = 4,
    Campaign = 5,
    Persistent = 6,
    Max = 7
};

enum EStatTeamAggregateFunction
{
    Add = 0,
    Max = 1,
    Min = 2
};

enum EStateChartResourceScope
{
    StateChart = 0,
    Player = 1,
    Global = 2,
    EStateChartResourceScope_MAX = 3
};

enum EStateComponentStatus
{
    Inactive = 0,
    PreparingForLoad = 1,
    Loading = 2,
    DoneLoading = 3,
    Operational = 4,
    PreparingForUnload = 5,
    Unloading = 6,
    DoneUnloading = 7,
    EStateComponentStatus_MAX = 8
};

enum EStateDrivenStateID
{
    Invalid = 0,
    Success = 1,
    Failure = 2,
    State_A = 3,
    State_B = 4,
    State_C = 5,
    State_D = 6,
    State_E = 7,
    State_F = 8,
    State_G = 9,
    State_H = 10,
    State_I = 11,
    State_J = 12,
    EStateDrivenStateID_MAX = 13
};

enum EStateOfGetPersistence
{
    NotStarted = 0,
    Failed = 1,
    WaitingToRetry = 2,
    Success = 3,
    InProgress = 4,
    EStateOfGetPersistence_MAX = 5
};

enum EStateTransitionControlEvent
{
    OnStateTransitionPaused = 0,
    OnStateTransitionComplete = 1,
    Count = 2,
    EStateTransitionControlEvent_MAX = 3
};

enum EStateTransitionPauseRequestHandleClearType
{
    ClearWhenAllHandlesAreRemoved = 0,
    ClearRightAway = 1,
    EStateTransitionPauseRequestHandleClearType_MAX = 2
};

enum EStateTreeBindableStructSource
{
    Context = 0,
    Parameter = 1,
    Evaluator = 2,
    GlobalTask = 3,
    StateParameter = 4,
    Task = 5,
    Condition = 6,
    Consideration = 7,
    TransitionEvent = 8,
    StateEvent = 9,
    PropertyFunction = 10,
    EStateTreeBindableStructSource_MAX = 11
};

enum EStateTreeBlueprintPropertyCategory
{
    NotSet = 0,
    Input = 1,
    Parameter = 2,
    Output = 3,
    ContextObject = 4,
    EStateTreeBlueprintPropertyCategory_MAX = 5
};

enum EStateTreeBreakpointType
{
    Unset = 0,
    OnEnter = 1,
    OnExit = 2,
    OnTransition = 3,
    EStateTreeBreakpointType_MAX = 4
};

enum EStateTreeConditionEvaluationMode
{
    Evaluated = 0,
    ForcedTrue = 1,
    ForcedFalse = 2,
    EStateTreeConditionEvaluationMode_MAX = 3
};

enum EStateTreeDataSourceType
{
    None = 0,
    GlobalInstanceData = 1,
    GlobalInstanceDataObject = 2,
    ActiveInstanceData = 3,
    ActiveInstanceDataObject = 4,
    SharedInstanceData = 5,
    SharedInstanceDataObject = 6,
    ContextData = 7,
    ExternalData = 8,
    GlobalParameterData = 9,
    SubtreeParameterData = 10,
    StateParameterData = 11,
    TransitionEvent = 12,
    StateEvent = 13,
    EStateTreeDataSourceType_MAX = 14
};

enum EStateTreeExpressionOperand
{
    Copy = 0,
    And = 1,
    Or = 2,
    EStateTreeExpressionOperand_MAX = 3
};

enum EStateTreeExternalDataRequirement
{
    Required = 0,
    Optional = 1,
    EStateTreeExternalDataRequirement_MAX = 2
};

enum EStateTreeLinkerStatus
{
    Succeeded = 0,
    Failed = 1,
    EStateTreeLinkerStatus_MAX = 2
};

enum EStateTreeLoopEvents
{
    Next = 0,
    Break = 1,
    Consume = 2,
    EStateTreeLoopEvents_MAX = 3
};

enum EStateTreeNodeFormatting
{
    RichText = 0,
    Text = 1,
    EStateTreeNodeFormatting_MAX = 2
};

enum EStateTreePropertyAccessType
{
    Offset = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    ObjectInstance = 4,
    StructInstance = 5,
    IndexArray = 6,
    EStateTreePropertyAccessType_MAX = 7
};

enum EStateTreePropertyCopyType
{
    None = 0,
    CopyPlain = 1,
    CopyComplex = 2,
    CopyBool = 3,
    CopyStruct = 4,
    CopyObject = 5,
    CopyName = 6,
    CopyFixedArray = 7,
    StructReference = 8,
    PromoteBoolToByte = 9,
    PromoteBoolToInt32 = 10,
    PromoteBoolToUInt32 = 11,
    PromoteBoolToInt64 = 12,
    PromoteBoolToFloat = 13,
    PromoteBoolToDouble = 14,
    PromoteByteToInt32 = 15,
    PromoteByteToUInt32 = 16,
    PromoteByteToInt64 = 17,
    PromoteByteToFloat = 18,
    PromoteByteToDouble = 19,
    PromoteInt32ToInt64 = 20,
    PromoteInt32ToFloat = 21,
    PromoteInt32ToDouble = 22,
    PromoteUInt32ToInt64 = 23,
    PromoteUInt32ToFloat = 24,
    PromoteUInt32ToDouble = 25,
    PromoteFloatToInt32 = 26,
    PromoteFloatToInt64 = 27,
    PromoteFloatToDouble = 28,
    DemoteDoubleToInt32 = 29,
    DemoteDoubleToInt64 = 30,
    DemoteDoubleToFloat = 31,
    EStateTreePropertyCopyType_MAX = 32
};

enum EStateTreePropertyRefType
{
    None = 0,
    Bool = 1,
    Byte = 2,
    Int32 = 3,
    Int64 = 4,
    Float = 5,
    Double = 6,
    Name = 7,
    String = 8,
    Text = 9,
    Enum = 10,
    Struct = 11,
    Object = 12,
    SoftObject = 13,
    Class = 14,
    SoftClass = 15,
    EStateTreePropertyRefType_MAX = 16
};

enum EStateTreePropertyUsage
{
    Invalid = 0,
    Context = 1,
    Input = 2,
    Parameter = 3,
    Output = 4,
    EStateTreePropertyUsage_MAX = 5
};

enum EStateTreeRecordTransitions
{
    No = 0,
    Yes = 1,
    EStateTreeRecordTransitions_MAX = 2
};

enum EStateTreeRunStatus
{
    Running = 0,
    Failed = 1,
    Succeeded = 2,
    Stopped = 3,
    Unset = 4,
    EStateTreeRunStatus_MAX = 5
};

enum EStateTreeSelectionFallback
{
    None = 0,
    NextSelectableSibling = 1,
    EStateTreeSelectionFallback_MAX = 2
};

enum EStateTreeStateChangeType
{
    None = 0,
    Changed = 1,
    Sustained = 2,
    EStateTreeStateChangeType_MAX = 3
};

enum EStateTreeStateSelectionBehavior
{
    None = 0,
    TryEnterState = 1,
    TrySelectChildrenInOrder = 2,
    TrySelectChildrenAtUniformRandom = 3,
    TrySelectChildrenWithHighestUtility = 4,
    TrySelectChildrenBasedOnRelativeUtility = 5,
    TryFollowTransitions = 6,
    EStateTreeStateSelectionBehavior_MAX = 7
};

enum EStateTreeStateType
{
    State = 0,
    Group = 1,
    Linked = 2,
    LinkedAsset = 3,
    Subtree = 4,
    EStateTreeStateType_MAX = 5
};

enum EStateTreeTraceEventType
{
    Unset = 0,
    OnEntering = 1,
    OnEntered = 2,
    OnExiting = 3,
    OnExited = 4,
    Push = 5,
    Pop = 6,
    OnStateSelected = 7,
    OnStateCompleted = 8,
    OnTicking = 9,
    OnTaskCompleted = 10,
    OnTicked = 11,
    Passed = 12,
    Failed = 13,
    ForcedSuccess = 14,
    ForcedFailure = 15,
    InternalForcedFailure = 16,
    OnEvaluating = 17,
    OnTransition = 18,
    OnTreeStarted = 19,
    OnTreeStopped = 20,
    EStateTreeTraceEventType_MAX = 21
};

enum EStateTreeTraceStatus
{
    TracesStarted = 0,
    StoppingTrace = 1,
    TracesStopped = 2,
    EStateTreeTraceStatus_MAX = 3
};

enum EStateTreeTransitionPriority
{
    None = 0,
    Low = 1,
    Normal = 2,
    Medium = 3,
    High = 4,
    Critical = 5,
    EStateTreeTransitionPriority_MAX = 6
};

enum EStateTreeTransitionSourceType
{
    Unset = 0,
    Asset = 1,
    ExternalRequest = 2,
    Internal = 3,
    EStateTreeTransitionSourceType_MAX = 4
};

enum EStateTreeTransitionTrigger
{
    None = 0,
    OnStateCompleted = 1,
    OnStateSucceeded = 2,
    OnStateFailed = 3,
    OnTick = 4,
    OnEvent = 5,
    MAX = 6
};

enum EStateTreeTransitionType
{
    None = 0,
    Succeeded = 1,
    Failed = 2,
    GotoState = 3,
    NextState = 4,
    NextSelectableState = 5,
    NotSet = 6,
    EStateTreeTransitionType_MAX = 7
};

enum EStateTreeUpdatePhase
{
    Unset = 0,
    StartTree = 1,
    StopTree = 2,
    StartGlobalTasks = 3,
    StopGlobalTasks = 4,
    TickStateTree = 5,
    ApplyTransitions = 6,
    TriggerTransitions = 7,
    TickingGlobalTasks = 8,
    TickingTasks = 9,
    TransitionConditions = 10,
    StateSelection = 11,
    TrySelectBehavior = 12,
    EnterConditions = 13,
    EnterStates = 14,
    ExitStates = 15,
    StateCompleted = 16,
    EStateTreeUpdatePhase_MAX = 17
};

enum EStaticMeshReductionTerimationCriterion
{
    Triangles = 0,
    Vertices = 1,
    Any = 2,
    EStaticMeshReductionTerimationCriterion_MAX = 3
};

enum EStationInventoryState
{
    CanCraft = 0,
    InputIsEmpty = 1,
    InputAndProcessingEmpty = 2,
    Processing = 3,
    OutputFull = 4,
    EStationInventoryState_MAX = 5
};

enum EStdMidiControllerID
{
    BankSelection = 0,
    ModWheel = 1,
    Breath = 2,
    Undefined3 = 3,
    FootController = 4,
    PortamentoTime = 5,
    DataCoarse = 6,
    Volume = 7,
    Balance = 8,
    Undefined9 = 9,
    Pan = 10,
    Expression = 11,
    EffectControl1 = 12,
    EffectControl2 = 13,
    Undefined14 = 14,
    Undefined15 = 15,
    GeneralPurposeController1 = 16,
    GeneralPurposeController2 = 17,
    GeneralPurposeController3 = 18,
    GeneralPurposeController4 = 19,
    Undefined20 = 20,
    Undefined21 = 21,
    Undefined22 = 22,
    Undefined23 = 23,
    Undefined24 = 24,
    Undefined25 = 25,
    Undefined26 = 26,
    Undefined27 = 27,
    Undefined28 = 28,
    Undefined29 = 29,
    Undefined30 = 30,
    Undefined31 = 31,
    LSBControl0 = 32,
    LSBControl1 = 33,
    LSBControl2 = 34,
    LSBControl3 = 35,
    LSBControl4 = 36,
    LSBControl5 = 37,
    LSBControl6 = 38,
    LSBControl7 = 39,
    LSBControl8 = 40,
    LSBControl9 = 41,
    LSBControl10 = 42,
    LSBControl11 = 43,
    LSBControl12 = 44,
    LSBControl13 = 45,
    LSBControl14 = 46,
    LSBControl15 = 47,
    LSBControl16 = 48,
    LSBControl17 = 49,
    LSBControl18 = 50,
    LSBControl19 = 51,
    LSBControl20 = 52,
    LSBControl21 = 53,
    LSBControl22 = 54,
    LSBControl23 = 55,
    LSBControl24 = 56,
    LSBControl25 = 57,
    LSBControl26 = 58,
    LSBControl27 = 59,
    LSBControl28 = 60,
    LSBControl29 = 61,
    LSBControl30 = 62,
    LSBControl31 = 63,
    Hold = 64,
    PortamentoSwitch = 65,
    Sustenuto = 66,
    SoftPedal = 67,
    Legato = 68,
    Hold2 = 69,
    SoundController1 = 70,
    SoundController2 = 71,
    SoundController3 = 72,
    SoundController4 = 73,
    SoundController5 = 74,
    SoundController6 = 75,
    SoundController7 = 76,
    SoundController8 = 77,
    SoundController9 = 78,
    SoundController10 = 79,
    GeneralPurposeController5 = 80,
    GeneralPurposeController6 = 81,
    GeneralPurposeController7 = 82,
    GeneralPurposeController8 = 83,
    PortamentoControl = 84,
    Undefined85 = 85,
    Undefined86 = 86,
    Undefined87 = 87,
    HighResolutionVelocityPrefix = 88,
    Undefined89 = 89,
    Undefined90 = 90,
    Effects1Depth = 91,
    Effects2Depth = 92,
    Effects3Depth = 93,
    Effects4Depth = 94,
    Effects5Depth = 95,
    DataIncrement = 96,
    DataDecrement = 97,
    NRPNFine = 98,
    NRPNCoarse = 99,
    RPNFine = 100,
    RPNCoarse = 101,
    Undefined102 = 102,
    Undefined103 = 103,
    Undefined104 = 104,
    Undefined105 = 105,
    Undefined106 = 106,
    Undefined107 = 107,
    Undefined108 = 108,
    Undefined109 = 109,
    Undefined110 = 110,
    Undefined111 = 111,
    Undefined112 = 112,
    Undefined113 = 113,
    Undefined114 = 114,
    Undefined115 = 115,
    Undefined116 = 116,
    Undefined117 = 117,
    Undefined118 = 118,
    Undefined119 = 119,
    AllSoundOff = 120,
    Reset = 121,
    LocalKeyboardSwitch = 122,
    AllNotesOff = 123,
    OmniModeOff = 124,
    OmniModeOn = 125,
    MonoMode = 126,
    PolyMode = 127,
    NUM = 128,
    EStdMidiControllerID_MAX = 129
};

enum EStereoChannelMode
{
    MidSide = 0,
    LeftRight = 1,
    count = 2,
    EStereoChannelMode_MAX = 3
};

enum EStereoDelayFiltertype
{
    Lowpass = 0,
    Highpass = 1,
    Bandpass = 2,
    Notch = 3,
    Count = 4,
    EStereoDelayFiltertype_MAX = 5
};

enum EStereoDelaySourceEffect
{
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
    EStereoDelaySourceEffect_MAX = 4
};

enum EStereoLayerShape
{
    SLSH_QuadLayer = 0,
    SLSH_CylinderLayer = 1,
    SLSH_CubemapLayer = 2,
    SLSH_EquirectLayer = 3,
    SLSH_MAX = 4
};

enum EStereoLayerType
{
    SLT_WorldLocked = 0,
    SLT_TrackerLocked = 1,
    SLT_FaceLocked = 2,
    SLT_MAX = 3
};

enum EStimType
{
    Seeing = 0,
    Seen = 1,
    MightHaveSeen = 2,
    Hurt = 3,
    Heard = 4,
    Obstacle = 5,
    Enemy = 6,
    Touched = 7,
    Unknown = 8,
    Count = 9,
    EStimType_MAX = 10
};

enum EStoreCurrencyType
{
    RealMoney = 0,
    MtxCurrency = 1,
    GameItem = 2,
    Other = 3,
    MAX = 4
};

enum EStormShieldDefense
{
    NotSSD = 0,
    StormShieldExpansion = 1,
    WargameSimulation = 2,
    EStormShieldDefense_MAX = 3
};

enum EStormSurgeThresholdType
{
    None = 0,
    Above = 1,
    Below = 2,
    Equal = 3,
    EStormSurgeThresholdType_MAX = 4
};

enum EStrandsTexturesMeshType
{
    Static = 0,
    Skeletal = 1,
    EStrandsTexturesMeshType_MAX = 2
};

enum EStrandsTexturesTraceType
{
    TraceInside = 0,
    TraceOuside = 1,
    TraceBidirectional = 2,
    EStrandsTexturesTraceType_MAX = 3
};

enum EStreamMediaContainerType
{
    DASH = 0,
    HLS = 1,
    MP4 = 2,
    UNKNOWN = 3,
    EStreamMediaContainerType_MAX = 4
};

enum EStreamingRadioSourceState
{
    None = 0,
    LoadingPlayer = 1,
    LoadedPlayer = 2,
    Playing = 3,
    EStreamingRadioSourceState_MAX = 4
};

enum EStreamingSourcePriority
{
    Highest = 0,
    High = 1,
    Normal = 2,
    Low = 3,
    Lowest = 4,
    Default = 5,
    EStreamingSourcePriority_MAX = 6
};

enum EStreamingSourceTargetBehavior
{
    Include = 0,
    Exclude = 1,
    EStreamingSourceTargetBehavior_MAX = 2
};

enum EStreamingSourceTargetState
{
    Loaded = 0,
    Activated = 1,
    EStreamingSourceTargetState_MAX = 2
};

enum EStreamingVolumeUsage
{
    SVB_Loading = 0,
    SVB_LoadingAndVisibility = 1,
    SVB_VisibilityBlockingOnLoad = 2,
    SVB_BlockingOnLoad = 3,
    SVB_LoadingNotVisible = 4,
    SVB_MAX = 5
};

enum EStretch
{
    None = 0,
    Fill = 1,
    ScaleToFit = 2,
    ScaleToFitX = 3,
    ScaleToFitY = 4,
    ScaleToFill = 5,
    ScaleBySafeZone = 6,
    UserSpecified = 7,
    UserSpecifiedWithClipping = 8,
    EStretch_MAX = 9
};

enum EStretchDirection
{
    Both = 0,
    DownOnly = 1,
    UpOnly = 2,
    EStretchDirection_MAX = 3
};

enum EStripAnimDataOnDedicatedServerSettings
{
    UseProjectSetting = 0,
    StripAnimDataOnDedicatedServer = 1,
    DoNotStripAnimDataOnDedicatedServer = 2,
    EStripAnimDataOnDedicatedServerSettings_MAX = 3
};

enum EStructUtilsResult
{
    Valid = 0,
    NotValid = 1,
    EStructUtilsResult_MAX = 2
};

enum EStructuralFloorPosition
{
    Top = 0,
    Bottom = 1,
    EStructuralFloorPosition_MAX = 2
};

enum EStructuralSupportCheck
{
    Stable = 0,
    Unstable = 1,
    Max_None = 2,
    EStructuralSupportCheck_MAX = 3
};

enum EStructuralWallPosition
{
    Left = 0,
    Right = 1,
    Front = 2,
    Back = 3,
    EStructuralWallPosition_MAX = 4
};

enum EStyleColor
{
    Black = 0,
    Background = 1,
    Title = 2,
    WindowBorder = 3,
    Foldout = 4,
    Input = 5,
    InputOutline = 6,
    Recessed = 7,
    Panel = 8,
    Header = 9,
    Dropdown = 10,
    DropdownOutline = 11,
    Hover = 12,
    Hover2 = 13,
    White = 14,
    White25 = 15,
    Highlight = 16,
    Primary = 17,
    PrimaryHover = 18,
    PrimaryPress = 19,
    Secondary = 20,
    Foreground = 21,
    ForegroundHover = 22,
    ForegroundInverted = 23,
    ForegroundHeader = 24,
    Select = 25,
    SelectInactive = 26,
    SelectParent = 27,
    SelectHover = 28,
    Notifications = 29,
    AccentBlue = 30,
    AccentPurple = 31,
    AccentPink = 32,
    AccentRed = 33,
    AccentOrange = 34,
    AccentYellow = 35,
    AccentGreen = 36,
    AccentBrown = 37,
    AccentBlack = 38,
    AccentGray = 39,
    AccentWhite = 40,
    AccentFolder = 41,
    Warning = 42,
    Error = 43,
    Success = 44,
    User1 = 45,
    User2 = 46,
    User3 = 47,
    User4 = 48,
    User5 = 49,
    User6 = 50,
    User7 = 51,
    User8 = 52,
    User9 = 53,
    User10 = 54,
    User11 = 55,
    User12 = 56,
    User13 = 57,
    User14 = 58,
    User15 = 59,
    User16 = 60,
    MAX = 61
};

enum EStyleRequestArbitrationPolicy
{
    ReplaceActive = 0,
    QueueBack = 1,
    QueueFront = 2,
    EStyleRequestArbitrationPolicy_MAX = 3
};

enum EStyleRequirementMatchPolicy
{
    RequireAll = 0,
    RequireAny = 1,
    EStyleRequirementMatchPolicy_MAX = 2
};

enum EStyleSpecificationMethod
{
    StyleSetLookup = 0,
    DirectReference = 1,
    EStyleSpecificationMethod_MAX = 2
};

enum ESubGame
{
    Campaign = 0,
    Athena = 1,
    Invalid = 2,
    Count = 3,
    Creative = 4,
    ESubGame_MAX = 5
};

enum ESubGameAccessReason
{
    NoAccess = 0,
    OpenAccess = 1,
    TokenItemAccess = 2,
    XboxHomeSharingAccess = 3,
    XboxServiceOutageAccess = 4,
    LimitedAccess = 5,
    ESubGameAccessReason_MAX = 6
};

enum ESubGameAccessStatus
{
    Disabled = 0,
    LimitedAccess = 1,
    OpenAccess = 2,
    ESubGameAccessStatus_MAX = 3
};

enum ESubGameMatchmakingStatus
{
    Disabled = 0,
    Enabled = 1,
    ESubGameMatchmakingStatus_MAX = 2
};

enum ESubLevelStripMode
{
    ExactClass = 0,
    IsChildOf = 1,
    ESubLevelStripMode_MAX = 2
};

enum ESubUVBoundingVertexCount
{
    BVC_FourVertices = 0,
    BVC_EightVertices = 1,
    BVC_MAX = 2
};

enum ESubdivisionLOD
{
    Low = 0,
    Medium = 1,
    High = 2,
    Ultra = 3,
    ESubdivisionLOD_MAX = 4
};

enum ESubgameLoadFromCMS
{
    DoNotLoadFromCMS = 0,
    LoadImageFromCMS = 1,
    ESubgameLoadFromCMS_MAX = 2
};

enum ESubgameTileType
{
    Campaign = 0,
    Athena = 1,
    Creative = 2,
    ESubgameTileType_MAX = 3
};

enum ESubmixEffectConvolutionReverbBlockSize
{
    BlockSize256 = 0,
    BlockSize512 = 1,
    BlockSize1024 = 2,
    ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

enum ESubmixEffectDynamicsChannelLinkMode
{
    Disabled = 0,
    Average = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

enum ESubmixEffectDynamicsKeySource
{
    Default = 0,
    AudioBus = 1,
    Submix = 2,
    Count = 3,
    ESubmixEffectDynamicsKeySource_MAX = 4
};

enum ESubmixEffectDynamicsPeakMode
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsPeakMode_MAX = 4
};

enum ESubmixEffectDynamicsProcessorType
{
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    UpwardsCompressor = 4,
    Count = 5,
    ESubmixEffectDynamicsProcessorType_MAX = 6
};

enum ESubmixFilterAlgorithm
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESubmixFilterAlgorithm_MAX = 4
};

enum ESubmixFilterType
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESubmixFilterType_MAX = 5
};

enum ESubmixSendStage
{
    PostDistanceAttenuation = 0,
    PreDistanceAttenuation = 1,
    ESubmixSendStage_MAX = 2
};

enum ESubscriptionCancellability
{
    NotCancellable = 0,
    CancellabeOnPlatform = 1,
    CancellableAnywhere = 2,
    ESubscriptionCancellability_MAX = 3
};

enum ESubscriptionContentTab
{
    SubscriptionManagementScreen = 0,
    ProgressiveItemScreen = 1,
    TemporaryItemsScreen = 2,
    ESubscriptionContentTab_MAX = 3
};

enum ESubtitleDisplayBackgroundOpacity
{
    Clear = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Solid = 4,
    ESubtitleDisplayBackgroundOpacity_MAX = 5
};

enum ESubtitleDisplayTextBorder
{
    None = 0,
    Outline = 1,
    DropShadow = 2,
    ESubtitleDisplayTextBorder_MAX = 3
};

enum ESubtitleDisplayTextColor
{
    White = 0,
    Yellow = 1,
    ESubtitleDisplayTextColor_MAX = 2
};

enum ESubtitleDisplayTextSize
{
    ExtraSmall = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    ExtraLarge = 4,
    ESubtitleDisplayTextSize_MAX = 5
};

enum ESuggestProjVelocityTraceOption
{
    DoNotTrace = 0,
    TraceFullPath = 1,
    OnlyTraceWhileAscending = 2,
    ESuggestProjVelocityTraceOption_MAX = 3
};

enum ESupervisedSettingRestrictionReason
{
    ParentalLimit = 0,
    EnforcedLimit = 1,
    None = 2,
    ESupervisedSettingRestrictionReason_MAX = 3
};

enum ESupervisedSettingScheduleCadence
{
    SameEveryDay = 0,
    ByDayOfWeek = 1,
    None = 2,
    MAX_NUM = 3,
    ESupervisedSettingScheduleCadence_MAX = 4
};

enum ESupervisedSettingsRestrictiveOrder
{
    FirstRestrictive = 0,
    FirstPermissive = 1,
    LowRestrictive = 2,
    LowPermissive = 3,
    FalseRestrictive = 4,
    FalsePermissive = 5,
    None = 6,
    ESupervisedSettingsRestrictiveOrder_MAX = 7
};

enum ESupervisedSettingsValueType
{
    Boolean = 0,
    Numeric = 1,
    Option = 2,
    None = 3,
    ESupervisedSettingsValueType_MAX = 4
};

enum ESupplyDropItemTrackType
{
    SpecialActors = 0,
    ESupplyDropItemTrackType_MAX = 1
};

enum ESupplyDropRadioBalloonState
{
    Invalid = 0,
    Closed = 1,
    Opened = 2,
    Destroyed = 3,
    ESupplyDropRadioBalloonState_MAX = 4
};

enum ESupplyDropSpawnLocationPolicy
{
    RadiusAroundLocation = 0,
    SafeZone = 1,
    ESupplyDropSpawnLocationPolicy_MAX = 2
};

enum ESupplyDropSpawnType
{
    SafeZoneDriven = 0,
    ItemDeliveryManagement = 1,
    MutatorManaged = 2,
    ESupplyDropSpawnType_MAX = 3
};

enum ESupportedQuestPlatforms
{
    PlatformsNone = 0,
    Android = 1,
    iPhone = 2,
    Linux = 3,
    Mac = 4,
    WindowsPC = 5,
    GFN = 6,
    GFNMobile = 7,
    Luna = 8,
    LunaMobile = 9,
    Salmon = 10,
    Helios = 11,
    HeliosMobile = 12,
    PSN = 13,
    SWITCH = 14,
    XBL = 15,
    PS5 = 16,
    XSX = 17,
    ESupportedQuestPlatforms_MAX = 18
};

enum ESurvivalObjectiveIconState
{
    None = 0,
    Spawned = 1,
    Destroyed = 2,
    ESurvivalObjectiveIconState_MAX = 3
};

enum ESwapAudioOutputDeviceResultState
{
    Failure = 0,
    Success = 1,
    None = 2,
    ESwapAudioOutputDeviceResultState_MAX = 3
};

enum ESwapRootBone
{
    SwapRootBone_Component = 0,
    SwapRootBone_Actor = 1,
    SwapRootBone_None = 2,
    SwapRootBone_MAX = 3
};

enum ESwingSequence
{
    UpperBodySwing = 0,
    UpperBodyReturn = 1,
    CrouchUpperBodySwing = 2,
    CrouchUpperBodyReturn = 3,
    CrouchInPlaceAdditiveSwing = 4,
    CrouchInPlaceAdditiveReturn = 5,
    SwingSequenceCount = 6,
    ESwingSequence_MAX = 7
};

enum ESwingType
{
    Swing1 = 0,
    Swing2 = 1,
    Swing3 = 2,
    Swing4 = 3,
    UniqueSwingCount = 4,
    ESwingType_MAX = 5
};

enum ESwingingState
{
    Unattached = 0,
    Attached = 1,
    ESwingingState_MAX = 2
};

enum ESwipeLenghtUnit
{
    Pixels = 0,
    Inches = 1,
    ESwipeLenghtUnit_MAX = 2
};

enum ESwitchMaterialOutputType
{
    TMMOT_Float1 = 0,
    TMMOT_Float2 = 1,
    TMMOT_Float3 = 2,
    TMMOT_Float4 = 3,
    TMMOT_MAX = 4
};

enum ESyncAnimBeatTo
{
    None = 0,
    Now = 1,
    PrevBeat = 2,
    Num = 3,
    ESyncAnimBeatTo_MAX = 4
};

enum ESyncOption
{
    Drive = 0,
    Passive = 1,
    Disabled = 2,
    ESyncOption_MAX = 3
};

enum ESynchronizedTeleportHealthAndShieldResetType
{
    None = 0,
    EvaluateHealthAndShieldMutators = 1,
    MaxHealth = 2,
    ESynchronizedTeleportHealthAndShieldResetType_MAX = 3
};

enum ESynth1OscType
{
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Noise = 4,
    Count = 5,
    ESynth1OscType_MAX = 6
};

enum ESynth1PatchDestination
{
    Osc1Gain = 0,
    Osc1Frequency = 1,
    Osc1Pulsewidth = 2,
    Osc2Gain = 3,
    Osc2Frequency = 4,
    Osc2Pulsewidth = 5,
    FilterFrequency = 6,
    FilterQ = 7,
    Gain = 8,
    Pan = 9,
    LFO1Frequency = 10,
    LFO1Gain = 11,
    LFO2Frequency = 12,
    LFO2Gain = 13,
    Count = 14,
    ESynth1PatchDestination_MAX = 15
};

enum ESynth1PatchSource
{
    LFO1 = 0,
    LFO2 = 1,
    Envelope = 2,
    BiasEnvelope = 3,
    Count = 4,
    ESynth1PatchSource_MAX = 5
};

enum ESynthFilterAlgorithm
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESynthFilterAlgorithm_MAX = 4
};

enum ESynthFilterType
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESynthFilterType_MAX = 5
};

enum ESynthKnobSize
{
    Medium = 0,
    Large = 1,
    Count = 2,
    ESynthKnobSize_MAX = 3
};

enum ESynthLFOMode
{
    Sync = 0,
    OneShot = 1,
    Free = 2,
    Count = 3,
    ESynthLFOMode_MAX = 4
};

enum ESynthLFOPatchType
{
    PatchToNone = 0,
    PatchToGain = 1,
    PatchToOscFreq = 2,
    PatchToFilterFreq = 3,
    PatchToFilterQ = 4,
    PatchToOscPulseWidth = 5,
    PatchToOscPan = 6,
    PatchLFO1ToLFO2Frequency = 7,
    PatchLFO1ToLFO2Gain = 8,
    Count = 9,
    ESynthLFOPatchType_MAX = 10
};

enum ESynthLFOType
{
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
    ESynthLFOType_MAX = 8
};

enum ESynthModEnvBiasPatch
{
    PatchToNone = 0,
    PatchToOscFreq = 1,
    PatchToFilterFreq = 2,
    PatchToFilterQ = 3,
    PatchToLFO1Gain = 4,
    PatchToLFO2Gain = 5,
    PatchToLFO1Freq = 6,
    PatchToLFO2Freq = 7,
    Count = 8,
    ESynthModEnvBiasPatch_MAX = 9
};

enum ESynthModEnvPatch
{
    PatchToNone = 0,
    PatchToOscFreq = 1,
    PatchToFilterFreq = 2,
    PatchToFilterQ = 3,
    PatchToLFO1Gain = 4,
    PatchToLFO2Gain = 5,
    PatchToLFO1Freq = 6,
    PatchToLFO2Freq = 7,
    Count = 8,
    ESynthModEnvPatch_MAX = 9
};

enum ESynthSlateColorStyle
{
    Light = 0,
    Dark = 1,
    Count = 2,
    ESynthSlateColorStyle_MAX = 3
};

enum ESynthSlateSizeType
{
    Small = 0,
    Medium = 1,
    Large = 2,
    Count = 3,
    ESynthSlateSizeType_MAX = 4
};

enum ESynthStereoDelayMode
{
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
    ESynthStereoDelayMode_MAX = 4
};

enum ESystemGetResult
{
    Valid = 0,
    Invalid = 1,
    ESystemGetResult_MAX = 2
};

enum ETDMScoreProgressTypes
{
    None = 0,
    ProgressSoundMild = 1,
    ProgressSoundMedium = 2,
    ProgressSoundStrong = 3,
    CountdownSoundNormal = 4,
    CountdownSoundStrong = 5,
    ETDMScoreProgressTypes_MAX = 6
};

enum ETableViewMode
{
    List = 0,
    Tile = 1,
    Tree = 2,
    ETableViewMode_MAX = 3
};

enum ETagComparisonType
{
    HasAny = 0,
    HasAll = 1,
    HasNone = 2,
    HasAnyExact = 3,
    HasAllExact = 4,
    ETagComparisonType_MAX = 5
};

enum ETagForChildDirectedTreatment
{
    TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED = 0,
    TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE = 1,
    TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE = 2,
    TAG_FOR_CHILD_DIRECTED_TREATMENT_MAX = 3
};

enum ETagForUnderAgeOfConsent
{
    TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED = 0,
    TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE = 1,
    TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE = 2,
    TAG_FOR_UNDER_AGE_OF_CONSENT_MAX = 3
};

enum ETagGoalScoringCategory
{
    Ignore = 0,
    HighInterest = 1,
    NumCategories = 2,
    ETagGoalScoringCategory_MAX = 3
};

enum ETankAimingMode
{
    CameraRotationNoTrace = 0,
    CameraTraceFromPivotSocket = 1,
    CameraTraceFromDistanceScalar = 2,
    ETankAimingMode_MAX = 3
};

enum ETapLineMode
{
    SendToChannel = 0,
    Panning = 1,
    Disabled = 2,
    ETapLineMode_MAX = 3
};

enum ETargetContext
{
    Default = 0,
    Unreachable = 1,
    OutsideOfLeash = 2,
    ETargetContext_MAX = 3
};

enum ETargetDataFilterSelf
{
    TDFS_Any = 0,
    TDFS_NoSelf = 1,
    TDFS_NoOthers = 2,
    TDFS_MAX = 3
};

enum ETargetDistanceComparisonType
{
    TwoDimensions = 0,
    ThreeDimensions = 1,
    CollisionHalfHeightMultiplier = 2,
    ETargetDistanceComparisonType_MAX = 3
};

enum ETargetingAOEShape
{
    Box = 0,
    Cylinder = 1,
    Sphere = 2,
    Capsule = 3,
    SourceComponent = 4,
    ETargetingAOEShape_MAX = 5
};

enum ETargetingPresetType
{
    Ranged = 0,
    Retention = 1,
    Aiming = 2,
    Melee = 3,
    ETargetingPresetType_MAX = 4
};

enum ETargetingTraceType
{
    Line = 0,
    Sphere = 1,
    Capsule = 2,
    Box = 3,
    ETargetingTraceType_MAX = 4
};

enum ETaskObjectStateChangeType
{
    None = 0,
    BeginState = 1,
    EndState = 2,
    ETaskObjectStateChangeType_MAX = 3
};

enum ETaskResourceOverlapPolicy
{
    StartOnTop = 0,
    StartAtEnd = 1,
    RequestCancelAndStartOnTop = 2,
    RequestCancelAndStartAtEnd = 3,
    ETaskResourceOverlapPolicy_MAX = 4
};

enum ETasksOverFramesSchedulePriorityCategory
{
    Default = 0,
    CharacterCustomization = 1,
    ETasksOverFramesSchedulePriorityCategory_MAX = 2
};

enum ETeamAttitude
{
    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
    ETeamAttitude_MAX = 3
};

enum ETeamChatRoomState
{
    NotCreated = 0,
    Creating = 1,
    Created = 2,
    Timeout = 3,
    ETeamChatRoomState_MAX = 4
};

enum ETeamMemberState
{
    None = 0,
    FIRST_CHAT_MESSAGE = 1,
    NeedAmmoHeavy = 2,
    NeedAmmoLight = 3,
    NeedAmmoMedium = 4,
    NeedAmmoShells = 5,
    NeedAmmoRocket = 6,
    ChatBubble = 7,
    EnemySpotted = 8,
    NeedBandages = 9,
    NeedMaterials = 10,
    NeedShields = 11,
    NeedWeapon = 12,
    LAST_CHAT_MESSAGE = 13,
    MAX = 14
};

enum ETeamOption
{
    Index = 0,
    WildlifeAndCreature = 1,
    Neutral = 2,
    ETeamOption_MAX = 3
};

enum ETeamPerformanceMessageReplicationType
{
    VariableReplication = 0,
    MulticastFunction_Unreliable = 1,
    MulticastFunction_Reliable = 2,
    ETeamPerformanceMessageReplicationType_MAX = 3
};

enum ETeamPerformanceMessageTrackingStat
{
    TeamScore = 0,
    TeamScorePercent = 1,
    ETeamPerformanceMessageTrackingStat_MAX = 2
};

enum ETeleportReason
{
    AgentNotOnNavmesh = 0,
    AgentDestinationNotOnNavMesh = 1,
    AgentStuckInRepetitivePartialPaths = 2,
    AgentBlocked = 3,
    AgentNoPathFound = 4,
    Unknown = 5,
    ETeleportReason_MAX = 6
};

enum ETeleportType
{
    None = 0,
    TeleportPhysics = 1,
    ResetPhysics = 2,
    ETeleportType_MAX = 3
};

enum ETemperatureMethod
{
    TEMP_WhiteBalance = 0,
    TEMP_ColorTemperature = 1,
    TEMP_MAX = 2
};

enum ETemperatureSeverityType
{
    Unknown = 0,
    Good = 1,
    Bad = 2,
    Serious = 3,
    Critical = 4,
    NumSeverities = 5,
    ETemperatureSeverityType_MAX = 6
};

enum ETempestMovementMode
{
    EnvQuery = 0,
    Path = 1,
    ETempestMovementMode_MAX = 2
};

enum ETempestState
{
    Unformed = 0,
    Forming = 1,
    Active = 2,
    Dissipating = 3,
    Complete = 4,
    ETempestState_MAX = 5
};

enum ETemplateSectionPropertyScaleType
{
    FloatProperty = 0,
    TransformPropertyLocationOnly = 1,
    TransformPropertyRotationOnly = 2,
    ETemplateSectionPropertyScaleType_MAX = 3
};

enum ETenacityType
{
    Default = 0,
    MaxHealth = 1,
    Custom = 2,
    ETenacityType_MAX = 3
};

enum ETerrainCoordMappingType
{
    TCMT_Auto = 0,
    TCMT_XY = 1,
    TCMT_XZ = 2,
    TCMT_YZ = 3,
    TCMT_MAX = 4
};

enum ETestInstanceDataObjectBird
{
    TIDOB_None = 0,
    TIDOB_Cardinal = 1,
    TIDOB_Crow = 2,
    TIDOB_Eagle = 3,
    TIDOB_Hawk = 4,
    TIDOB_Owl = 5,
    TIDOB_Raven = 6,
    TIDOB_MAX = 7
};

enum ETestInstanceDataObjectDirection
{
    None = 0,
    North = 1,
    East = 2,
    South = 3,
    West = 4,
    ETestInstanceDataObjectDirection_MAX = 5
};

enum ETestInstanceDataObjectDirectionAlternate
{
    None = 0,
    Up = 1,
    Down = 2,
    North = 3,
    East = 4,
    South = 5,
    West = 6,
    ETestInstanceDataObjectDirectionAlternate_MAX = 7
};

enum ETestInstanceDataObjectFruit
{
    None = 0,
    Apple = 1,
    Banana = 2,
    Orange = 3,
    ETestInstanceDataObjectFruit_MAX = 4
};

enum ETestInstanceDataObjectFruitAlternate
{
    None = 0,
    Apple = 1,
    Cherry = 2,
    Orange = 3,
    Pear = 4,
    ETestInstanceDataObjectFruitAlternate_MAX = 5
};

enum ETestInstanceDataObjectGrain
{
    None = 0,
    Barley = 1,
    Corn = 2,
    Quinoa = 3,
    Rice = 4,
    Wheat = 5,
    ETestInstanceDataObjectGrain_MAX = 6
};

enum ETestInstanceDataObjectGrainAlternate
{
    None = 0,
    Corn = 1,
    Rice = 2,
    Rye = 3,
    Wheat = 4,
    ETestInstanceDataObjectGrainAlternate_MAX = 5
};

enum ETetherEndReason
{
    None = 0,
    PawnStuck = 1,
    Cancelled = 2,
    ReachedReelInTarget = 3,
    ETetherEndReason_MAX = 4
};

enum ETetherState
{
    None = 0,
    Created = 1,
    Active = 2,
    Dormant = 3,
    RequestToEnd = 4,
    ETetherState_MAX = 5
};

enum ETextCommit
{
    Default = 0,
    OnEnter = 1,
    OnUserMovedFocus = 2,
    OnCleared = 3,
    ETextCommit_MAX = 4
};

enum ETextFlowDirection
{
    Auto = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    Culture = 3,
    ETextFlowDirection_MAX = 4
};

enum ETextGender
{
    Masculine = 0,
    Feminine = 1,
    Neuter = 2,
    ETextGender_MAX = 3
};

enum ETextJustify
{
    Left = 0,
    Center = 1,
    Right = 2,
    InvariantLeft = 3,
    InvariantRight = 4,
    ETextJustify_MAX = 5
};

enum ETextKeyOperation
{
    Equal = 0,
    NotEqual = 1,
    Contain = 2,
    NotContain = 3,
    ETextKeyOperation_MAX = 4
};

enum ETextOverflowPolicy
{
    Clip = 0,
    Ellipsis = 1,
    MultilineEllipsis = 2,
    ETextOverflowPolicy_MAX = 3
};

enum ETextShapingMethod
{
    Auto = 0,
    KerningOnly = 1,
    FullShaping = 2,
    ETextShapingMethod_MAX = 3
};

enum ETextTransformPolicy
{
    None = 0,
    ToLower = 1,
    ToUpper = 2,
    ETextTransformPolicy_MAX = 3
};

enum ETextWrappingPolicy
{
    DefaultWrapping = 0,
    AllowPerCharacterWrapping = 1,
    ETextWrappingPolicy_MAX = 2
};

enum ETextureAvailability
{
    GPU = 0,
    CPU = 1,
    ETextureAvailability_MAX = 2
};

enum ETextureChromaticAdaptationMethod
{
    TCAM_None = 0,
    TCAM_Bradford = 1,
    TCAM_CAT02 = 2,
    TCAM_MAX = 3
};

enum ETextureClass
{
    Invalid = 0,
    TwoD = 1,
    Cube = 2,
    Array = 3,
    CubeArray = 4,
    Volume = 5,
    TwoDDynamic = 6,
    RenderTarget = 7,
    Other2DNoSource = 8,
    OtherUnknown = 9,
    ETextureClass_MAX = 10
};

enum ETextureCollectionMemberType
{
    Texture2D = 0,
    TextureCube = 1,
    Texture2DArray = 2,
    TextureCubeArray = 3,
    TextureVolume = 4,
    Max = 5
};

enum ETextureColorChannel
{
    TCC_Red = 0,
    TCC_Green = 1,
    TCC_Blue = 2,
    TCC_Alpha = 3,
    TCC_MAX = 4
};

enum ETextureColorSpace
{
    TCS_None = 0,
    TCS_sRGB = 1,
    TCS_Rec2020 = 2,
    TCS_ACESAP0 = 3,
    TCS_ACESAP1 = 4,
    TCS_P3DCI = 5,
    TCS_P3D65 = 6,
    TCS_REDWideGamut = 7,
    TCS_SonySGamut3 = 8,
    TCS_SonySGamut3Cine = 9,
    TCS_AlexaWideGamut = 10,
    TCS_CanonCinemaGamut = 11,
    TCS_GoProProtuneNative = 12,
    TCS_PanasonicVGamut = 13,
    TCS_Custom = 14,
    TCS_MAX = 15
};

enum ETextureCompressionQuality
{
    TCQ_Default = 0,
    TCQ_Lowest = 1,
    TCQ_Low = 2,
    TCQ_Medium = 3,
    TCQ_High = 4,
    TCQ_Highest = 5,
    TCQ_MAX = 6
};

enum ETextureCompressionStrategy
{
    None = 0,
    DontCompressRuntime = 1,
    NeverCompress = 2,
    ETextureCompressionStrategy_MAX = 3
};

enum ETextureDownscaleOptions
{
    Default = 0,
    Unfiltered = 1,
    SimpleAverage = 2,
    Sharpen0 = 3,
    Sharpen1 = 4,
    Sharpen2 = 5,
    Sharpen3 = 6,
    Sharpen4 = 7,
    Sharpen5 = 8,
    Sharpen6 = 9,
    Sharpen7 = 10,
    Sharpen8 = 11,
    Sharpen9 = 12,
    Sharpen10 = 13,
    ETextureDownscaleOptions_MAX = 14
};

enum ETextureEncodeEffort
{
    Default = 0,
    Low = 1,
    Normal = 2,
    High = 3,
    ETextureEncodeEffort_MAX = 4
};

enum ETextureEncodeSpeed
{
    Final = 0,
    FinalIfAvailable = 1,
    Fast = 2,
    ETextureEncodeSpeed_MAX = 3
};

enum ETextureEncodeSpeedOverride
{
    Disabled = 0,
    Final = 1,
    FinalIfAvailable = 2,
    Fast = 3,
    ETextureEncodeSpeedOverride_MAX = 4
};

enum ETextureImportFloatingPointFormat
{
    HDR_F16 = 0,
    HDRCompressed_BC6 = 1,
    HDR_F32_or_F16 = 2,
    PreviousDefault = 3,
    ETextureImportFloatingPointFormat_MAX = 4
};

enum ETextureImportPNGInfill
{
    Default = 0,
    Never = 1,
    OnlyOnBinaryTransparency = 2,
    Always = 3,
    ETextureImportPNGInfill_MAX = 4
};

enum ETextureLossyCompressionAmount
{
    TLCA_Default = 0,
    TLCA_None = 1,
    TLCA_Lowest = 2,
    TLCA_Low = 3,
    TLCA_Medium = 4,
    TLCA_High = 5,
    TLCA_Highest = 6,
    TLCA_MAX = 7
};

enum ETextureMipCount
{
    TMC_ResidentMips = 0,
    TMC_AllMips = 1,
    TMC_AllMipsBiased = 2,
    TMC_MAX = 3
};

enum ETextureMipLoadOptions
{
    Default = 0,
    AllMips = 1,
    OnlyFirstMip = 2,
    ETextureMipLoadOptions_MAX = 3
};

enum ETextureMipValueMode
{
    TMVM_None = 0,
    TMVM_MipLevel = 1,
    TMVM_MipBias = 2,
    TMVM_Derivative = 3,
    TMVM_MAX = 4
};

enum ETexturePowerOfTwoSetting
{
    None = 0,
    PadToPowerOfTwo = 1,
    PadToSquarePowerOfTwo = 2,
    StretchToPowerOfTwo = 3,
    StretchToSquarePowerOfTwo = 4,
    ResizeToSpecificResolution = 5,
    ETexturePowerOfTwoSetting_MAX = 6
};

enum ETextureRenderTargetFormat
{
    RTF_R8 = 0,
    RTF_RG8 = 1,
    RTF_RGBA8 = 2,
    RTF_RGBA8_SRGB = 3,
    RTF_R16f = 4,
    RTF_RG16f = 5,
    RTF_RGBA16f = 6,
    RTF_R32f = 7,
    RTF_RG32f = 8,
    RTF_RGBA32f = 9,
    RTF_RGB10A2 = 10,
    RTF_MAX = 11
};

enum ETextureRenderTargetSampleCount
{
    RTSC_1 = 0,
    RTSC_2 = 1,
    RTSC_4 = 2,
    RTSC_8 = 3,
    RTSC_MAX = 4
};

enum ETextureSamplerFilter
{
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    AnisotropicPoint = 3,
    AnisotropicLinear = 4,
    ETextureSamplerFilter_MAX = 5
};

enum ETextureSizingType
{
    TextureSizingType_UseSingleTextureSize = 0,
    TextureSizingType_UseAutomaticBiasedSizes = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing = 3,
    TextureSizingType_AutomaticFromTexelDensity = 4,
    TextureSizingType_AutomaticFromMeshScreenSize = 5,
    TextureSizingType_AutomaticFromMeshDrawDistance = 6,
    TextureSizingType_MAX = 7
};

enum ETextureSourceCompressionFormat
{
    TSCF_None = 0,
    TSCF_PNG = 1,
    TSCF_JPEG = 2,
    TSCF_UEJPEG = 3,
    TSCF_UEDELTA = 4,
    TSCF_MAX = 5
};

enum ETextureSourceEncoding
{
    TSE_None = 0,
    TSE_Linear = 1,
    TSE_sRGB = 2,
    TSE_ST2084 = 3,
    TSE_Gamma22 = 4,
    TSE_BT1886 = 5,
    TSE_Gamma26 = 6,
    TSE_Cineon = 7,
    TSE_REDLog = 8,
    TSE_REDLog3G10 = 9,
    TSE_SLog1 = 10,
    TSE_SLog2 = 11,
    TSE_SLog3 = 12,
    TSE_AlexaV3LogC = 13,
    TSE_CanonLog = 14,
    TSE_ProTune = 15,
    TSE_VLog = 16,
    TSE_MAX = 17
};

enum ETextureSourceFormat
{
    TSF_Invalid = 0,
    TSF_G8 = 1,
    TSF_BGRA8 = 2,
    TSF_BGRE8 = 3,
    TSF_RGBA16 = 4,
    TSF_RGBA16F = 5,
    TSF_RGBA8_DEPRECATED = 6,
    TSF_RGBE8_DEPRECATED = 7,
    TSF_G16 = 8,
    TSF_RGBA32F = 9,
    TSF_R16F = 10,
    TSF_R32F = 11,
    TSF_MAX = 12
};

enum ETextureUniversalTiling
{
    Disabled = 0,
    Enabled_256KB = 1,
    Enabled_64KB = 2,
    ETextureUniversalTiling_MAX = 3
};

enum EThirdPersonAutoFollowMode
{
    Off = 0,
    Auto = 1,
    Lazy = 2,
    EThirdPersonAutoFollowMode_MAX = 3
};

enum EThreePlayerSplitScreenType
{
    FavorTop = 0,
    FavorBottom = 1,
    Vertical = 2,
    Horizontal = 3,
    EThreePlayerSplitScreenType_MAX = 4
};

enum EThresholdRequirement
{
    LessThan = 0,
    LessThanOrEqual = 1,
    Equal = 2,
    GreaterThan = 3,
    GreaterThanOrEqual = 4,
    EThresholdRequirement_MAX = 5
};

enum EThrowingToyItemRemovedReason
{
    None = 0,
    ManuallyDropped = 1,
    DeviceForcedDropped = 2,
    DeviceForcedDeleted = 3,
    EThrowingToyItemRemovedReason_MAX = 4
};

enum ETickMode
{
    Disabled = 0,
    Enabled = 1,
    Automatic = 2,
    ETickMode_MAX = 3
};

enum ETickingGroup
{
    TG_PrePhysics = 0,
    TG_StartPhysics = 1,
    TG_DuringPhysics = 2,
    TG_EndPhysics = 3,
    TG_PostPhysics = 4,
    TG_PostUpdateWork = 5,
    TG_LastDemotable = 6,
    TG_NewlySpawned = 7,
    TG_MAX = 8
};

enum ETileMapProjectionMode
{
    Orthogonal = 0,
    IsometricDiamond = 1,
    IsometricStaggered = 2,
    HexagonalStaggered = 3,
    ETileMapProjectionMode_MAX = 4
};

enum ETileOverlapResolveType
{
    Ignore = 0,
    Feathering = 1,
    ETileOverlapResolveType_MAX = 2
};

enum ETimeLimitForReplayCinematic
{
    OpenTimeLimit = 0,
    DurationTimeLimit = 1,
    DurationExtraTime = 2,
    ETimeLimitForReplayCinematic_MAX = 3
};

enum ETimeStretchCurveMapping
{
    T_Original = 0,
    T_TargetMin = 1,
    T_TargetMax = 2,
    MAX = 3
};

enum ETimeSyncOption
{
    None = 0,
    TempoSync = 1,
    SpeedScale = 2,
    Num = 3,
    ETimeSyncOption_MAX = 4
};

enum ETimecodeProviderSynchronizationState
{
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ETimecodeProviderSynchronizationState_MAX = 4
};

enum ETimedDataInputEvaluationType
{
    None = 0,
    Timecode = 1,
    PlatformTime = 2,
    ETimedDataInputEvaluationType_MAX = 3
};

enum ETimedDataInputState
{
    Connected = 0,
    Unresponsive = 1,
    Disconnected = 2,
    ETimedDataInputState_MAX = 3
};

enum ETimelineDirection
{
    Forward = 0,
    Backward = 1,
    ETimelineDirection_MAX = 2
};

enum ETimelineLengthMode
{
    TL_TimelineLength = 0,
    TL_LastKeyFrame = 1,
    TL_MAX = 2
};

enum ETimelineSigType
{
    ETS_EventSignature = 0,
    ETS_FloatSignature = 1,
    ETS_VectorSignature = 2,
    ETS_LinearColorSignature = 3,
    ETS_InvalidSignature = 4,
    ETS_MAX = 5
};

enum ETimerDeviceState
{
    Enabled = 0,
    Activated = 1,
    Paused = 2,
    Completed = 3,
    Disabled = 4,
    MAX = 5
};

enum ETimerOverrideSetting
{
    DefaultBehavior = 0,
    ForceShow = 1,
    ForceHide = 2,
    ShowAtEnd = 3,
    ETimerOverrideSetting_MAX = 4
};

enum ETimespanAsTextFormat
{
    DaysHoursMinutesSeconds = 0,
    Colons = 1,
    ColonsWithMilliseconds = 2,
    Approximate = 3,
    ApproximateWithWeeks = 4,
    ApproximateWithMonths = 5,
    ApproximateWithYears = 6,
    ETimespanAsTextFormat_MAX = 7
};

enum ETimespanUnitDisplayFormat
{
    Full = 0,
    Abbreviated = 1,
    ETimespanUnitDisplayFormat_MAX = 2
};

enum ETimestampEventType
{
    NamedEvent = 0,
    ChangeBPM = 1,
    Max_None = 2,
    ETimestampEventType_MAX = 3
};

enum ETireStates
{
    Default = 0,
    Popped = 1,
    ETireStates_MAX = 2
};

enum ETireSurfaces
{
    Road = 0,
    Dirt = 1,
    Grass = 2,
    Air = 3,
    Water = 4,
    ETireSurfaces_MAX = 5
};

enum ETokenState
{
    Owned = 0,
    Awaiting = 1,
    Invalid = 2,
    ETokenState_MAX = 3
};

enum EToolChangeTrackingMode
{
    NoChangeTracking = 0,
    UndoToExit = 1,
    FullUndoRedo = 2,
    EToolChangeTrackingMode_MAX = 3
};

enum EToolContextCoordinateSystem
{
    World = 0,
    Local = 1,
    EToolContextCoordinateSystem_MAX = 2
};

enum EToolContextTransformGizmoMode
{
    NoGizmo = 0,
    Translation = 1,
    Rotation = 2,
    Scale = 3,
    Combined = 4,
    EToolContextTransformGizmoMode_MAX = 5
};

enum EToolMessageLevel
{
    Internal = 0,
    UserMessage = 1,
    UserNotification = 2,
    UserWarning = 3,
    UserError = 4,
    EToolMessageLevel_MAX = 5
};

enum EToolShutdownType
{
    Completed = 0,
    Accept = 1,
    Cancel = 2,
    EToolShutdownType_MAX = 3
};

enum EToolSide
{
    Left = 0,
    Mouse = 1,
    Right = 2,
    EToolSide_MAX = 3
};

enum ETooltipAlignment
{
    Up = 0,
    Down = 1,
    Left = 2,
    Right = 3,
    ETooltipAlignment_MAX = 4
};

enum ETouchIndex
{
    Touch1 = 0,
    Touch2 = 1,
    Touch3 = 2,
    Touch4 = 3,
    Touch5 = 4,
    Touch6 = 5,
    Touch7 = 6,
    Touch8 = 7,
    Touch9 = 8,
    Touch10 = 9,
    CursorPointerIndex = 10,
    MAX_TOUCHES = 11,
    ETouchIndex_MAX = 12
};

enum ETouchInteractMode
{
    Off = 0,
    InWorld = 1,
    Buttons = 2,
    ETouchInteractMode_MAX = 3
};

enum ETouchState
{
    None = 0,
    WaitingForStart = 1,
    Started = 2,
    Active = 3,
    COUNT = 4,
    ETouchState_MAX = 5
};

enum ETouchType
{
    Began = 0,
    Moved = 1,
    Stationary = 2,
    ForceChanged = 3,
    FirstMove = 4,
    Ended = 5,
    NumTypes = 6,
    ETouchType_MAX = 7
};

enum ETournamentDisplayType
{
    Default = 0,
    Creative = 1,
    ETournamentDisplayType_MAX = 2
};

enum ETournmentPosterViolatorState
{
    Hidden = 0,
    Live = 1,
    Countdown = 2,
    Info = 3,
    ETournmentPosterViolatorState_MAX = 4
};

enum ETraceDirection
{
    N = 0,
    E = 1,
    S = 2,
    W = 3,
    Up = 4,
    None = 5,
    ETraceDirection_MAX = 6
};

enum ETraceTypeQuery
{
    TraceTypeQuery1 = 0,
    TraceTypeQuery2 = 1,
    TraceTypeQuery3 = 2,
    TraceTypeQuery4 = 3,
    TraceTypeQuery5 = 4,
    TraceTypeQuery6 = 5,
    TraceTypeQuery7 = 6,
    TraceTypeQuery8 = 7,
    TraceTypeQuery9 = 8,
    TraceTypeQuery10 = 9,
    TraceTypeQuery11 = 10,
    TraceTypeQuery12 = 11,
    TraceTypeQuery13 = 12,
    TraceTypeQuery14 = 13,
    TraceTypeQuery15 = 14,
    TraceTypeQuery16 = 15,
    TraceTypeQuery17 = 16,
    TraceTypeQuery18 = 17,
    TraceTypeQuery19 = 18,
    TraceTypeQuery20 = 19,
    TraceTypeQuery21 = 20,
    TraceTypeQuery22 = 21,
    TraceTypeQuery23 = 22,
    TraceTypeQuery24 = 23,
    TraceTypeQuery25 = 24,
    TraceTypeQuery26 = 25,
    TraceTypeQuery27 = 26,
    TraceTypeQuery28 = 27,
    TraceTypeQuery29 = 28,
    TraceTypeQuery30 = 29,
    TraceTypeQuery31 = 30,
    TraceTypeQuery32 = 31,
    TraceTypeQuery_MAX = 32,
    ETraceTypeQuery_MAX = 33
};

enum ETrackDirection
{
    YNegative = 0,
    XPositive = 1,
    YPositive = 2,
    XNegative = 3,
    Max_None = 4,
    ETrackDirection_MAX = 5
};

enum ETrackIncline
{
    NoNeighbor = 0,
    Flat = 1,
    Up = 2,
    Down = 3,
    GradualUp = 4,
    GradualDown = 5,
    Max_None = 6,
    ETrackIncline_MAX = 7
};

enum ETrackPieceType
{
    None = 0,
    Straight = 1,
    Turn = 2,
    TShape = 3,
    Cross = 4,
    Max_None = 5,
    ETrackPieceType_MAX = 6
};

enum ETrackVerticality
{
    Floor = 0,
    Ramp = 1,
    GradualRamp = 2,
    Max_None = 3,
    ETrackVerticality_MAX = 4
};

enum ETrackedInputPointerEndType
{
    Unknown = 0,
    Released = 1,
    Cancelled = 2,
    ExitBounds = 3,
    ETrackedInputPointerEndType_MAX = 4
};

enum ETrackedInputPointerStartType
{
    Invalid = 0,
    Pressed = 1,
    EnterBounds = 2,
    ETrackedInputPointerStartType_MAX = 3
};

enum ETrackedObjectiveQuery
{
    All = 0,
    ExactTeam = 1,
    Friendly = 2,
    Neutral = 3,
    Hostile = 4,
    NotFriendly = 5,
    MAX = 6
};

enum ETrackedTagType
{
    TrackExactTagHierarchyMatches = 0,
    TrackDirectChildTagMatches = 1,
    ETrackedTagType_MAX = 2
};

enum ETrackingOffsetModifierCurve
{
    Default = 0,
    CombatStart = 1,
    TargetLowHealth = 2,
    MAX = 3
};

enum ETrackingStatus
{
    NotTracked = 0,
    InertialOnly = 1,
    Tracked = 2,
    ETrackingStatus_MAX = 3
};

enum ETractorBeamState
{
    TBS_Inactive = 0,
    TBS_Charging = 1,
    TBS_Active = 2,
    TBS_MAX = 3
};

enum ETrail2SourceMethod
{
    PET2SRCM_Default = 0,
    PET2SRCM_Particle = 1,
    PET2SRCM_Actor = 2,
    PET2SRCM_MAX = 3
};

enum ETrailWidthMode
{
    ETrailWidthMode_FromCentre = 0,
    ETrailWidthMode_FromFirst = 1,
    ETrailWidthMode_FromSecond = 2,
    ETrailWidthMode_MAX = 3
};

enum ETrailsRenderAxisOption
{
    Trails_CameraUp = 0,
    Trails_SourceUp = 1,
    Trails_WorldUp = 2,
    Trails_MAX = 3
};

enum ETrainDynamicTickMode
{
    Near = 0,
    Mid = 1,
    Far = 2,
    None = 3,
    ETrainDynamicTickMode_MAX = 4
};

enum ETransferBoneWeightsMethod
{
    ClosestPointOnSurface = 0,
    InpaintWeights = 1,
    ETransferBoneWeightsMethod_MAX = 2
};

enum ETransformConstraintType
{
    Translation = 0,
    Rotation = 1,
    Scale = 2,
    Parent = 3,
    LookAt = 4,
    ETransformConstraintType_MAX = 5
};

enum ETransformCurveChannel
{
    Position = 0,
    Rotation = 1,
    Scale = 2,
    Invalid = 3,
    ETransformCurveChannel_MAX = 4
};

enum ETransformGetterType
{
    Initial = 0,
    Current = 1,
    Max = 2
};

enum ETransformGizmoSubElements
{
    None = 0,
    TranslateAxisX = 1,
    TranslateAxisY = 2,
    TranslateAxisZ = 3,
    TranslateAllAxes = 4,
    TranslatePlaneXY = 5,
    TranslatePlaneXZ = 6,
    TranslatePlaneYZ = 7,
    TranslateAllPlanes = 8,
    RotateAxisX = 9,
    RotateAxisY = 10,
    RotateAxisZ = 11,
    RotateAllAxes = 12,
    ScaleAxisX = 13,
    ScaleAxisY = 14,
    ScaleAxisZ = 15,
    ScaleAllAxes = 16,
    ScalePlaneYZ = 17,
    ScalePlaneXZ = 18,
    ScalePlaneXY = 19,
    ScaleAllPlanes = 20,
    ScaleUniform = 21,
    StandardTranslateRotate = 22,
    TranslateRotateUniformScale = 23,
    FullTranslateRotateScale = 24,
    ETransformGizmoSubElements_MAX = 25
};

enum ETransformMeshesSnapDragRotationMode
{
    Ignore = 0,
    Align = 1,
    AlignFlipped = 2,
    LastValue = 3,
    ETransformMeshesSnapDragRotationMode_MAX = 4
};

enum ETransformMeshesSnapDragSource
{
    ClickPoint = 0,
    Pivot = 1,
    LastValue = 2,
    ETransformMeshesSnapDragSource_MAX = 3
};

enum ETransformMeshesTransformMode
{
    SharedGizmo = 0,
    SharedGizmoLocal = 1,
    PerObjectGizmo = 2,
    LastValue = 3,
    ETransformMeshesTransformMode_MAX = 4
};

enum ETransformSpaceMode
{
    LocalSpace = 0,
    GlobalSpace = 1,
    BaseSpace = 2,
    BaseJoint = 3,
    Max = 4
};

enum ETransformationType
{
    Translation = 0,
    Rotation = 1,
    Scale = 2,
    None = 3,
    ETransformationType_MAX = 4
};

enum ETransitionBlendMode
{
    TBM_Linear = 0,
    TBM_Cubic = 1,
    TBM_MAX = 2
};

enum ETransitionCurve
{
    Linear = 0,
    QuadIn = 1,
    QuadOut = 2,
    QuadInOut = 3,
    CubicIn = 4,
    CubicOut = 5,
    CubicInOut = 6,
    ETransitionCurve_MAX = 7
};

enum ETransitionLogicType
{
    TLT_StandardBlend = 0,
    TLT_Inertialization = 1,
    TLT_Custom = 2,
    TLT_MAX = 3
};

enum ETransitionRequestOverwriteMode
{
    Append = 0,
    Ignore = 1,
    Overwrite = 2,
    ETransitionRequestOverwriteMode_MAX = 3
};

enum ETransitionRequestQueueMode
{
    Shared = 0,
    Unique = 1,
    ETransitionRequestQueueMode_MAX = 2
};

enum ETransitionType
{
    None = 0,
    Paused = 1,
    Loading = 2,
    Saving = 3,
    Connecting = 4,
    Precaching = 5,
    WaitingToConnect = 6,
    MAX = 7
};

enum ETranslationUnit
{
    CM = 0,
    M = 1,
    ETranslationUnit_MAX = 2
};

enum ETranslucencyLightingMode
{
    TLM_VolumetricNonDirectional = 0,
    TLM_VolumetricDirectional = 1,
    TLM_VolumetricPerVertexNonDirectional = 2,
    TLM_VolumetricPerVertexDirectional = 3,
    TLM_Surface = 4,
    TLM_SurfacePerPixelLighting = 5,
    TLM_MAX = 6
};

enum ETranslucencyType
{
    Raster = 0,
    RayTracing = 1,
    ETranslucencyType_MAX = 2
};

enum ETranslucentSortPolicy
{
    SortByDistance = 0,
    SortByProjectedZ = 1,
    SortAlongAxis = 2,
    ETranslucentSortPolicy_MAX = 3
};

enum ETravelFailure
{
    NoLevel = 0,
    LoadMapFailure = 1,
    InvalidURL = 2,
    PackageMissing = 3,
    PackageVersion = 4,
    NoDownload = 5,
    TravelFailure = 6,
    CheatCommands = 7,
    PendingNetGameCreateFailure = 8,
    CloudSaveFailure = 9,
    ServerTravelFailure = 10,
    ClientTravelFailure = 11,
    ETravelFailure_MAX = 12
};

enum ETravelType
{
    TRAVEL_Absolute = 0,
    TRAVEL_Partial = 1,
    TRAVEL_Relative = 2,
    TRAVEL_MAX = 3
};

enum ETraversePointState
{
    None = 0,
    Hidden = 1,
    Active = 2,
    TouchedByPlayer = 3,
    Finished = 4,
    ETraversePointState_MAX = 5
};

enum ETreadSide
{
    Invalid = 0,
    Left = 1,
    Right = 2,
    ETreadSide_MAX = 3
};

enum ETriState
{
    DefaultState = 0,
    TrueState = 1,
    FalseState = 2,
    ETriState_MAX = 3
};

enum ETriggerEvent
{
    None = 0,
    Triggered = 1,
    Started = 2,
    Ongoing = 3,
    Canceled = 4,
    Completed = 5,
    ETriggerEvent_MAX = 6
};

enum ETriggerEventsSupported
{
    None = 0,
    Instant = 1,
    Uninterruptible = 2,
    Ongoing = 3,
    All = 4,
    ETriggerEventsSupported_MAX = 5
};

enum ETriggerState
{
    None = 0,
    Ongoing = 1,
    Triggered = 2,
    ETriggerState_MAX = 3
};

enum ETriggerType
{
    Explicit = 0,
    Implicit = 1,
    Blocker = 2,
    ETriggerType_MAX = 3
};

enum ETriggeredSpawnFacingDirection
{
    Forward = 0,
    Backward = 1,
    Left = 2,
    Right = 3,
    Up = 4,
    Down = 5,
    ETriggeredSpawnFacingDirection_MAX = 6
};

enum ETriggeredSpawnLocationType
{
    AuthorLocation = 0,
    EventLocation = 1,
    NamedSubjectLocation = 2,
    ETriggeredSpawnLocationType_MAX = 3
};

enum ETrimOperation
{
    TrimA = 0,
    TrimB = 1,
    ETrimOperation_MAX = 2
};

enum ETrimSide
{
    RemoveInside = 0,
    RemoveOutside = 1,
    ETrimSide_MAX = 2
};

enum ETrustedPlatformType
{
    Unknown = 0,
    Untrusted = 1,
    PS4 = 2,
    PS5 = 3,
    XboxOne = 4,
    Switch = 5,
    ETrustedPlatformType_MAX = 6
};

enum ETryExitVehicleBehavior
{
    DoNotForce = 0,
    ForceOnBlocking = 1,
    ForceAlways = 2,
    ETryExitVehicleBehavior_MAX = 3
};

enum ETrySpawnActorIfDehydrated
{
    No = 0,
    Yes = 1,
    ETrySpawnActorIfDehydrated_MAX = 2
};

enum ETutorialButtonInteractionType
{
    Click = 0,
    Press = 1,
    ETutorialButtonInteractionType_MAX = 2
};

enum ETutorialType
{
    None = 0,
    Callout = 1,
    GuardScreen = 2,
    WidgetIntro = 3,
    Highlight = 4,
    ETutorialType_MAX = 5
};

enum ETweenBuiltInEasing
{
    Linear = 0,
    SinIn = 1,
    SinOut = 2,
    SinInOut = 3,
    QuadIn = 4,
    QuadOut = 5,
    QuadInOut = 6,
    CubicIn = 7,
    CubicOut = 8,
    CubicInOut = 9,
    QuartIn = 10,
    QuartOut = 11,
    QuartInOut = 12,
    QuintIn = 13,
    QuintOut = 14,
    QuintInOut = 15,
    ExpoIn = 16,
    ExpoOut = 17,
    ExpoInOut = 18,
    CircIn = 19,
    CircOut = 20,
    CircInOut = 21,
    BackIn = 22,
    BackOut = 23,
    BackInOut = 24,
    ElasticIn = 25,
    ElasticOut = 26,
    ElasticInOut = 27,
    BounceIn = 28,
    BounceOut = 29,
    BounceInOut = 30,
    ETweenBuiltInEasing_MAX = 31
};

enum ETweenInitializationPoint
{
    AfterDelay = 0,
    OnPlay = 1,
    ETweenInitializationPoint_MAX = 2
};

enum ETweenLoopType
{
    None = 0,
    Repeat = 1,
    PingPong = 2,
    ETweenLoopType_MAX = 3
};

enum ETweenPlayDirection
{
    Forward = 0,
    Backward = 1,
    ETweenPlayDirection_MAX = 2
};

enum ETweenResetDestination
{
    Beginning = 0,
    End = 1,
    ETweenResetDestination_MAX = 2
};

enum ETweenSplineAlignmentOption
{
    NoAlignment = 0,
    AlignWithSpline = 1,
    AlignWithTween = 2,
    ETweenSplineAlignmentOption_MAX = 3
};

enum ETwitterIntegrationDelegate
{
    TID_AuthorizeComplete = 0,
    TID_TweetUIComplete = 1,
    TID_RequestComplete = 2,
    TID_MAX = 3
};

enum ETwitterRequestMethod
{
    TRM_Get = 0,
    TRM_Post = 1,
    TRM_Delete = 2,
    TRM_MAX = 3
};

enum ETwoOptionExperimentBucketType
{
    Option1 = 0,
    Option2 = 1,
    ETwoOptionExperimentBucketType_MAX = 2
};

enum ETwoPlayerSplitScreenType
{
    Horizontal = 0,
    Vertical = 1,
    ETwoPlayerSplitScreenType_MAX = 2
};

enum ETwoPointSolverRotationA
{
    PointAToQuerier = 0,
    QuerierToPointA = 1,
    PointAToQuerierWithRandomOffset = 2,
    QuerierToPointAWithRandomOffset = 3,
    Custom = 4,
    ETwoPointSolverRotationA_MAX = 5
};

enum ETypeAdvanceAnim
{
    ETAA_Default = 0,
    ETAA_Finished = 1,
    ETAA_Looped = 2,
    ETAA_MAX = 3
};

enum ETypeOfBuildingActor
{
    Anything = 0,
    PlayerBuilt = 1,
    NonPlayerBuilt = 2,
    ETypeOfBuildingActor_MAX = 3
};

enum ETypedElementChildInclusionMethod
{
    None = 0,
    Immediate = 1,
    Recursive = 2,
    ETypedElementChildInclusionMethod_MAX = 3
};

enum ETypedElementSelectionMethod
{
    Primary = 0,
    Secondary = 1,
    ETypedElementSelectionMethod_MAX = 2
};

enum ETypedElementWorldType
{
    Game = 0,
    Editor = 1,
    ETypedElementWorldType_MAX = 2
};

enum EUIChartRegionTransitionScope
{
    ThisRegionOnly = 0,
    ThisRegionOrChildRegions = 1,
    EUIChartRegionTransitionScope_MAX = 2
};

enum EUIExtensionSlot
{
    Invalid = 0,
    Primary = 1,
    Secondary = 2,
    TopRightCorner = 3,
    GameInfoBox = 4,
    Quickbar = 5,
    QuickbarUnderlay = 6,
    UpperCenter = 7,
    CrosshairRight = 8,
    MobileCrosshairRight = 9,
    UnderSquadInfo = 10,
    FullScreenMap = 11,
    BelowRespawnWidget = 12,
    BelowCompass = 13,
    UnderTeammateStatus = 14,
    ControllerBindingCallout = 15,
    AboveStormMessageSlot = 16,
    CustomMinigameCallouts = 17,
    UnderLocalPlayerInfo = 18,
    PlayerHealthbarOverlay = 19,
    PlayerOverHealthbarOverlay = 20,
    UnderMinimapMessageContainer = 21,
    VehicleActionsSpacer = 22,
    InventoryScreenReplacement = 23,
    Reticle = 24,
    KillfeedSlot = 25,
    PrioritizedContextualSlot = 26,
    RightOfTeammateStatus = 27,
    RightOfTeammateStatusBars = 28,
    TeammateStatusPortraitOverlay = 29,
    TeammateStatusPortraitUnderlay = 30,
    TeammateStatusPortraitOverlay_IGM = 31,
    TeammateOverHealthbarOverlay = 32,
    TeammateOverShieldbarOverlay = 33,
    MobileHUDBottomRight = 34,
    InventoryScreenTab = 35,
    InventoryPanelSubTab = 36,
    MiniMapOverlay = 37,
    AboveResourcesOverlay = 38,
    UnderResourcesOverlay = 39,
    InventoryEquipSlot = 40,
    InventoryItemInfoBelowItemType = 41,
    HUDEquippedItemInfo = 42,
    HUDEquippedItemInfo_Ammo = 43,
    UnderneathTeammateStatusList = 44,
    FullScreenMapSquadEliminationsOverlay = 45,
    FullScreenMapStormInfo = 46,
    PrimaryQuickBarSlot = 47,
    MainMenuButtonListInZone = 48,
    MainMenuButtonListFrontEnd = 49,
    DynamicOverlayLobby = 50,
    PostMatchXPRecap = 51,
    PostMatchXPRecap_RightSide = 52,
    PostMatchXPRecap_TopLeft = 53,
    PostMatchXPDetails_AccoladeList = 54,
    MobileHUDUnderMinimap = 55,
    SidebarPanels = 56,
    SpectatorRightOfPlayerStatus = 57,
    LastKillerInfoStatus = 58,
    BehindMobileLocalPlayerInfo = 59,
    UnderMobileLocalPlayerInfo = 60,
    AboveMobileLocalPlayerInfo = 61,
    DynamicOverlayFrontEnd = 62,
    NPCStatusWidgetBarsPrefix = 63,
    NPCStatusWidgetAboveBars = 64,
    AbovePlayerIndicatorWidget = 65,
    AthenaDashboardWidgetOverlay = 66,
    FullScreenMapTab = 67,
    PostMatchScreenTab = 68,
    AboveBacchusEquippedItemReloadWidget = 69,
    InventoryExtensionRow = 70,
    UnderDefaultLobbyDetails = 71,
    VisitedAreaDisplayUnderlay = 72,
    DiscoveredAreaTextUnderlay = 73,
    StaminaOverlay = 74,
    LevelUpMobile = 75,
    ExpMobile = 76,
    InventoryGroupPanel = 77,
    InventoryQuickbarEditor = 78,
    VisitedAreaDisplayMainBoxOverride = 79,
    InventoryItemInfoContents = 80,
    DiscoverInLobby = 81,
    PlaylistUIExtensionMobile = 82,
    InventoryItemInfoInspectPreview = 83,
    LastKillerWeaponInfo = 84,
    UnderPlayerVehicleHealthbar = 85,
    AboveQuestsMobileUI = 86,
    PinnedContentList = 87,
    AboveMobileMinimap = 88,
    POIProgressBarWidgetExtension = 89,
    VehicleSecondaryInteractionInfo = 90,
    VehicleFuelGaugeOverlay = 91,
    VehicleDashboardActionSlot = 92,
    MarkerDetailsWidgetExtension = 93,
    PostGamePlacementOverlayVictory = 94,
    TeammateStatusHealthShieldsReplacement = 95,
    GameInfoBelowMap = 96,
    HUDEquippedItemReticle = 97,
    HUDUnderKnockedPlayer = 98,
    HUDAboveReticle = 99,
    Count = 100,
    EUIExtensionSlot_MAX = 101
};

enum EUIFrameworkGameLayerType
{
    Viewport = 0,
    PlayerScreen = 1,
    EUIFrameworkGameLayerType_MAX = 2
};

enum EUIFrameworkInputMode
{
    UI = 0,
    Game = 1,
    EUIFrameworkInputMode_MAX = 2
};

enum EUIKitBlockInstantTransitionState
{
    Invalid = 0,
    InstantEnabled = 1,
    InstantDisabled = 2,
    InstantSelected = 3,
    InstantDeselected = 4,
    InstantLocked = 5,
    InstantUnlocked = 6,
    EUIKitBlockInstantTransitionState_MAX = 7
};

enum EUIKitBlockVisualState
{
    Invalid = 0,
    Hovered = 1,
    Unhovered = 2,
    Focused = 3,
    Unfocused = 4,
    Pressed = 5,
    Released = 6,
    Disabled = 7,
    Enabled = 8,
    Selected = 9,
    DeselectedIdle = 10,
    DeselectedFocused = 11,
    EUIKitBlockVisualState_MAX = 12
};

enum EUINavigation
{
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Next = 4,
    Previous = 5,
    Num = 6,
    Invalid = 7,
    EUINavigation_MAX = 8
};

enum EUINavigationAction
{
    Accept = 0,
    Back = 1,
    Num = 2,
    Invalid = 3,
    EUINavigationAction_MAX = 4
};

enum EUINavigationRule
{
    Escape = 0,
    Explicit = 1,
    Wrap = 2,
    Stop = 3,
    Custom = 4,
    CustomBoundary = 5,
    Invalid = 6,
    EUINavigationRule_MAX = 7
};

enum EUIScalingRule
{
    ShortestSide = 0,
    LongestSide = 1,
    Horizontal = 2,
    Vertical = 3,
    ScaleToFit = 4,
    Custom = 5,
    EUIScalingRule_MAX = 6
};

enum EUIStateAutomationType
{
    Initial = 0,
    Continual = 1,
    EUIStateAutomationType_MAX = 2
};

enum EUIStateChartContextConditionType
{
    IsEmpty = 0,
    IsNotEmpty = 1,
    IsEqualTo = 2,
    IsNotEqualTo = 3,
    IsGreaterThan = 4,
    IsGreaterThanOrEqualTo = 5,
    IsLessThan = 6,
    IsLessThanOrEqualTo = 7,
    IsTrue = 8,
    IsNotTrue = 9,
    StartsWith = 10,
    EndsWith = 11,
    Contains = 12,
    EUIStateChartContextConditionType_MAX = 13
};

enum EUIStateTransitionUrgency
{
    Normal = 0,
    High = 1,
    EUIStateTransitionUrgency_MAX = 2
};

enum EUMGSequencePlayMode
{
    Forward = 0,
    Reverse = 1,
    PingPong = 2,
    EUMGSequencePlayMode_MAX = 3
};

enum EUVLayoutPreviewSide
{
    Left = 0,
    Right = 1,
    EUVLayoutPreviewSide_MAX = 2
};

enum EUVLayoutType
{
    Transform = 0,
    Stack = 1,
    Repack = 2,
    Normalize = 3,
    EUVLayoutType_MAX = 4
};

enum EUVOutput
{
    DoNotOutputChannel = 0,
    OutputChannel = 1,
    EUVOutput_MAX = 2
};

enum EUVProjectionMethod
{
    Box = 0,
    Cylinder = 1,
    Plane = 2,
    ExpMap = 3,
    EUVProjectionMethod_MAX = 4
};

enum EUVProjectionToolActions
{
    NoAction = 0,
    AutoFit = 1,
    AutoFitAlign = 2,
    Reset = 3,
    EUVProjectionToolActions_MAX = 4
};

enum EUVProjectionToolInitializationMode
{
    Default = 0,
    UsePrevious = 1,
    AutoFit = 2,
    AutoFitAlign = 3,
    EUVProjectionToolInitializationMode_MAX = 4
};

enum EUdpMessageFormat
{
    None = 0,
    Json = 1,
    TaggedProperty = 2,
    CborPlatformEndianness = 3,
    CborStandardEndianness = 4,
    EUdpMessageFormat_MAX = 5
};

enum EUefnPlaytimeQuestType
{
    Other = 0,
    XP = 1,
    LevelUp = 2,
    EUefnPlaytimeQuestType_MAX = 3
};

enum EUnableToLoadReason
{
    None = 0,
    PackageDoesNotExist = 1,
    EndPlay = 2,
    UnableToUnload = 3,
    EUnableToLoadReason_MAX = 4
};

enum EUnableToUnloadReason
{
    None = 0,
    EndPlay = 1,
    EUnableToUnloadReason_MAX = 2
};

enum EUnconvertReason
{
    StealByOtherPlayer = 0,
    ConverterDeath = 1,
    ConvertedDeath = 2,
    TooManyConverted = 3,
    TooFarFromConverter = 4,
    GameplayTagBlockConvert = 5,
    EndPlay = 6,
    Dismiss = 7,
    Unknown = 8,
    EUnconvertReason_MAX = 9
};

enum EUnicornSocialFeatures
{
    INVALID = 0,
    FriendPlay = 1,
    DancePartyManpower = 2,
    CongaLineManpower = 3,
    SocialPartyDuration = 4,
    COUNT = 5,
    EUnicornSocialFeatures_MAX = 6
};

enum EUnit
{
    Micrometers = 0,
    Millimeters = 1,
    Centimeters = 2,
    Meters = 3,
    Kilometers = 4,
    Inches = 5,
    Feet = 6,
    Yards = 7,
    Miles = 8,
    Lightyears = 9,
    Degrees = 10,
    Radians = 11,
    CentimetersPerSecond = 12,
    MetersPerSecond = 13,
    KilometersPerHour = 14,
    MilesPerHour = 15,
    DegreesPerSecond = 16,
    RadiansPerSecond = 17,
    CentimetersPerSecondSquared = 18,
    MetersPerSecondSquared = 19,
    Celsius = 20,
    Farenheit = 21,
    Kelvin = 22,
    Micrograms = 23,
    Milligrams = 24,
    Grams = 25,
    Kilograms = 26,
    MetricTons = 27,
    Ounces = 28,
    Pounds = 29,
    Stones = 30,
    GramsPerCubicCentimeter = 31,
    GramsPerCubicMeter = 32,
    KilogramsPerCubicCentimeter = 33,
    KilogramsPerCubicMeter = 34,
    Newtons = 35,
    PoundsForce = 36,
    KilogramsForce = 37,
    KilogramCentimetersPerSecondSquared = 38,
    NewtonMeters = 39,
    KilogramCentimetersSquaredPerSecondSquared = 40,
    NewtonSeconds = 41,
    KilogramCentimeters = 42,
    KilogramMeters = 43,
    Hertz = 44,
    Kilohertz = 45,
    Megahertz = 46,
    Gigahertz = 47,
    RevolutionsPerMinute = 48,
    Bytes = 49,
    Kilobytes = 50,
    Megabytes = 51,
    Gigabytes = 52,
    Terabytes = 53,
    Lumens = 54,
    Candela = 55,
    Lux = 56,
    CandelaPerMeter2 = 57,
    ExposureValue = 58,
    Nanoseconds = 59,
    Microseconds = 60,
    Milliseconds = 61,
    Seconds = 62,
    Minutes = 63,
    Hours = 64,
    Days = 65,
    Months = 66,
    Years = 67,
    PixelsPerInch = 68,
    Percentage = 69,
    Multiplier = 70,
    Pascals = 71,
    KiloPascals = 72,
    MegaPascals = 73,
    GigaPascals = 74,
    Unspecified = 75,
    EUnit_MAX = 76
};

enum EUnlockGameModeFailureReason
{
    InvalidPin = 0,
    PinAttemptsExceeded = 1,
    UnknownError = 2,
    EUnlockGameModeFailureReason_MAX = 3
};

enum EUnstuckSteeringReason
{
    Unknown = 0,
    OffNavMesh = 1,
    IsolatedIsland = 2,
    AgentBlocked = 3,
    NoPathFound = 4,
    EUnstuckSteeringReason_MAX = 5
};

enum EUnusedAttributeBehaviour
{
    Copy = 0,
    Zero = 1,
    None = 2,
    MarkInvalid = 3,
    PassThrough = 4,
    EUnusedAttributeBehaviour_MAX = 5
};

enum EUpdateAnimationTimer_ExecutionPin
{
    Active = 0,
    Expired = 1,
    EUpdateAnimationTimer_MAX = 2
};

enum EUpdateClockSource
{
    Tick = 0,
    Platform = 1,
    Audio = 2,
    RelativeTimecode = 3,
    Timecode = 4,
    PlayEveryFrame = 5,
    Custom = 6,
    EUpdateClockSource_MAX = 7
};

enum EUpdateCompletionStatus
{
    UpdateUnknown = 0,
    UpdateSuccess = 1,
    UpdateSuccess_NoChange = 2,
    UpdateSuccess_NeedsReload = 3,
    UpdateSuccess_NeedsRelaunch = 4,
    UpdateSuccess_NeedsPatch = 5,
    UpdateFailure_PatchCheck = 6,
    UpdateFailure_HotfixCheck = 7,
    UpdateFailure_NotLoggedIn = 8,
    EUpdateCompletionStatus_MAX = 9
};

enum EUpdateCustomDepthOptimDirtyFlags
{
    None = 0,
    CharacterParts = 1,
    Weapon = 2,
    PossessedProp = 3,
    EUpdateCustomDepthOptimDirtyFlags_MAX = 4
};

enum EUpdatePositionMethod
{
    Play = 0,
    Jump = 1,
    Scrub = 2,
    EUpdatePositionMethod_MAX = 3
};

enum EUpdateRateShiftBucket
{
    ShiftBucket0 = 0,
    ShiftBucket1 = 1,
    ShiftBucket2 = 2,
    ShiftBucket3 = 3,
    ShiftBucket4 = 4,
    ShiftBucket5 = 5,
    ShiftBucketMax = 6,
    EUpdateRateShiftBucket_MAX = 7
};

enum EUpdateResult
{
    Success = 0,
    Warning = 1,
    Error = 2,
    ErrorOptimized = 3,
    ErrorReplaced = 4,
    ErrorDiscarded = 5,
    Error16BitBoneIndex = 6,
    EUpdateResult_MAX = 7
};

enum EUpdateState
{
    UpdateIdle = 0,
    UpdatePending = 1,
    CheckingForPatch = 2,
    CheckingForHotfix = 3,
    WaitingOnInitialLoad = 4,
    InitialLoadComplete = 5,
    UpdateComplete = 6,
    EUpdateState_MAX = 7
};

enum EUpgradeInfoImageSize
{
    Small = 0,
    Large = 1,
    EUpgradeInfoImageSize_MAX = 2
};

enum EUraniumCartMovementRuleOnNewRound
{
    NoChange = 0,
    MoveToNextCheckpoint = 1,
    MoveToStartOfNewSpline = 2,
    MoveToRandomCheckPointOfNewSpline = 3,
    MoveToNextCheckPointOfNewSpline = 4,
    EUraniumCartMovementRuleOnNewRound_MAX = 5
};

enum EUraniumEventId
{
    Intro = 0,
    CartBecomesPushable = 1,
    CheckPointReached = 2,
    NearCheckPoint = 3,
    NearFinalCheckPoint = 4,
    TimeIsLow = 5,
    TimeIsExtraLow = 6,
    OvertimeStarted = 7,
    RoundEnd_PushersWin = 8,
    RoundEnd_DefendersWin = 9,
    RoundStart = 10,
    GameEnded_AllRoundsPlayed = 11,
    GameEndedEarly_BlowOut = 12,
    GameEndedEarly_OutNumbered = 13,
    EUraniumEventId_MAX = 14
};

enum EUraniumGameEndedReason
{
    GameIsStillInProgress = 0,
    AllRoundsPlayed = 1,
    EarlyGameEnd_BlowOut = 2,
    EarlyGameEnd_OutNumbered = 3,
    EUraniumGameEndedReason_MAX = 4
};

enum EUraniumRoundEndCondition
{
    RanOutOfTime_Or_CheckpointReached = 0,
    RanOutOfTime_Or_LastCheckpointReached = 1,
    RanOutOfTime_Or_MAX = 2
};

enum EUraniumRoundPhase
{
    None = 0,
    EndOfRoundStart = 1,
    ShowRoundEnd = 2,
    HideRoundEnd = 3,
    FadeOut = 4,
    SetupForNextRound = 5,
    ShowRoundIntro = 6,
    ShowPOICamera = 7,
    PerkSelect = 8,
    RoundActive = 9,
    FadeIn = 10,
    EndOfRoundFinish = 11,
    FadeBeforeReleasePlayerIntoGameplay = 12,
    ReleasePlayersIntoGameplay = 13,
    EndGame = 14,
    MAX = 15
};

enum EUseInputWithPartyResult
{
    Success = 0,
    LocalPlayerNeedsToAllowCrossplay = 1,
    LocalPlayerRestricted = 2,
    RemotePlayerRestricted = 3,
    UnknownFailure = 4,
    EUseInputWithPartyResult_MAX = 5
};

enum EUserDefinedStructureStatus
{
    UDSS_UpToDate = 0,
    UDSS_Dirty = 1,
    UDSS_Error = 2,
    UDSS_Duplicate = 3,
    UDSS_MAX = 4
};

enum EUserEmoteBeatSyncingPermission
{
    Invalid = 0,
    Allowed = 1,
    Blocked = 2,
    EUserEmoteBeatSyncingPermission_MAX = 3
};

enum EUserInterfaceActionType
{
    None = 0,
    Button = 1,
    ToggleButton = 2,
    RadioButton = 3,
    Check = 4,
    CollapsedButton = 5,
    EUserInterfaceActionType_MAX = 6
};

enum EUserOptionDefinitionContextTagQueryFailBehavior
{
    Disables = 0,
    Hides = 1,
    EUserOptionDefinitionContextTagQueryFailBehavior_MAX = 2
};

enum EUserOptionDefinitionGenerationFlags
{
    None = 0,
    AutoAdded = 1,
    Inherited = 2,
    EUserOptionDefinitionGenerationFlags_MAX = 3
};

enum EValkyrieProjectDescriptorFileVersion
{
    Invalid = 0,
    Initial = 1,
    AddProjectMetadata = 2,
    AddedCompatibilityLabel = 3,
    AddBindings = 4,
    AddEditorPermissions = 5,
    AddEpicApp = 6,
    AddDataSets = 7,
    AddVersionSuffix = 8,
    AddProjectKind = 9,
    AddMetaDataTags = 10,
    RevertMetaDataTags = 11,
    AddDocsUrl = 12,
    AddTemplateCategory = 13,
    BranchDependencies = 14,
    AddFeatureSet = 15,
    LatestPlusOne = 16,
    Latest = 17,
    EValkyrieProjectDescriptorFileVersion_MAX = 18
};

enum EValkyrieProjectKind
{
    Island = 0,
    Library = 1,
    Count = 2,
    Unspecified = 3,
    Default = 4,
    EValkyrieProjectKind_MAX = 5
};

enum EValkyrieProjectReferenceDescriptorFileVersion
{
    Invalid = 0,
    Initial = 1,
    AddLinkCode = 2,
    LatestPlusOne = 3,
    Latest = 4,
    EValkyrieProjectReferenceDescriptorFileVersion_MAX = 5
};

enum EValueCostCalculationMethod
{
    Assets = 0,
    Max = 1,
    InstancePayload = 2
};

enum EVariantUnlockType
{
    UnlockAll = 0,
    ExclusiveChoice = 1,
    EVariantUnlockType_MAX = 2
};

enum EVaultItemLimitStatus
{
    WellBelowCapacity = 0,
    NearCapacity = 1,
    AtCapacity = 2,
    OverCapacity = 3,
    EVaultItemLimitStatus_MAX = 4
};

enum EVectorCurveChannel
{
    X = 0,
    Y = 1,
    Z = 2,
    Invalid = 3,
    EVectorCurveChannel_MAX = 4
};

enum EVectorCurveFloat
{
    VectorCurve_X = 0,
    VectorCurve_Y = 1,
    VectorCurve_Z = 2,
    VectorCurve_MAX = 3
};

enum EVectorCurveType
{
    Original = 0,
    Modified = 1,
    EVectorCurveType_MAX = 2
};

enum EVectorFieldConstructionOp
{
    VFCO_Extrude = 0,
    VFCO_Revolve = 1,
    VFCO_MAX = 2
};

enum EVectorNoiseFunction
{
    VNF_CellnoiseALU = 0,
    VNF_VectorALU = 1,
    VNF_GradientALU = 2,
    VNF_CurlALU = 3,
    VNF_VoronoiALU = 4,
    VNF_MAX = 5
};

enum EVectorQuantization
{
    RoundWholeNumber = 0,
    RoundOneDecimal = 1,
    RoundTwoDecimals = 2,
    EVectorQuantization_MAX = 3
};

enum EVectorVMBaseTypes
{
    Float = 0,
    Int = 1,
    Bool = 2,
    Num = 3,
    EVectorVMBaseTypes_MAX = 4
};

enum EVectorVMOperandLocation
{
    Register = 0,
    Constant = 1,
    Num = 2,
    EVectorVMOperandLocation_MAX = 3
};

enum EVehicleAudioInterpolationType
{
    None = 0,
    CustomCurve = 1,
    Linear = 2,
    EVehicleAudioInterpolationType_MAX = 3
};

enum EVehicleAudioTriggerDir
{
    Forward = 0,
    Backward = 1,
    EVehicleAudioTriggerDir_MAX = 2
};

enum EVehicleClass
{
    Sedan = 0,
    Sport = 1,
    PickupTruck = 2,
    SemiTruck = 3,
    EVehicleClass_MAX = 4
};

enum EVehicleCosmeticsFailureReason
{
    BodyTypeMismatch = 0,
    NoBodyEquipped = 1,
    ActiveArchetypeNoBodyEquipped = 2,
    NoOwningVehicle = 3,
    NoLoadoutComponent = 4,
    CustomizationDisabled = 5,
    LoadoutIsTheSame = 6,
    UsingDefaultItem = 7,
    NumAllowedIsZero = 8,
    Unknown = 9,
    EVehicleCosmeticsFailureReason_MAX = 10
};

enum EVehicleEnteredCosmeticReaction
{
    Driver = 0,
    Passenger = 1,
    Both = 2,
    EVehicleEnteredCosmeticReaction_MAX = 3
};

enum EVehicleExitLocationSelectionBehavior
{
    Unspecified = 0,
    BySeat = 1,
    ByPlayerCameraForward = 2,
    ByClosestToGivenLocation = 3,
    EVehicleExitLocationSelectionBehavior_MAX = 4
};

enum EVehicleFuelState
{
    Uninitialized = 0,
    UsingVehicleFuel = 1,
    NotUsingVehicleFuel = 2,
    EVehicleFuelState_MAX = 3
};

enum EVehicleInitialOverlapBehavior
{
    None = 0,
    DontCollideUntilNotOverlapping = 1,
    DestroyWhenVehicleOccupied = 2,
    DestroyIfBackingInto = 3,
    EVehicleInitialOverlapBehavior_MAX = 4
};

enum EVehicleModCameraOriginCalculation
{
    UseParentCameraModeOriginCalculation = 0,
    OriginFromModStaticMeshComponent = 1,
    EVehicleModCameraOriginCalculation_MAX = 2
};

enum EVehicleModWeaponUpdateDamageStartSetting
{
    UseWeaponRangedDamageStart = 0,
    UseVehicleMountedTurretDamageStart = 1,
    EVehicleModWeaponUpdateDamageStartSetting_MAX = 2
};

enum EVehicleMovementMode
{
    OnGround = 0,
    InAir = 1,
    WipeOut = 2,
    MaxCount = 3,
    EVehicleMovementMode_MAX = 4
};

enum EVehicleSeats
{
    Driver = 0,
    Passenger1 = 1,
    Passenger2 = 2,
    Passenger3 = 3,
    Passenger4 = 4,
    Passenger5 = 5,
    Passenger6 = 6,
    MaxCount = 7,
    EVehicleSeats_MAX = 8
};

enum EVehicleSessionEndReason
{
    Invalid = 0,
    NoPassengers = 1,
    EVehicleSessionEndReason_MAX = 2
};

enum EVehicleSimStep
{
    None = 0,
    Update = 1,
    UpdateSleepType = 2,
    UpdatePlatform = 3,
    UpdateBoundarySpline = 4,
    UpdateIgnoredPawnsForDamage = 5,
    UpdatePredictedDestroyedBuildings = 6,
    UpdateForcedDebugInput = 7,
    UpdateAutoCameraTimer = 8,
    UpdateCameraOffset = 9,
    UpdateLocalPlayerInVehicle = 10,
    UpdateOverlappingWaterBodies = 11,
    UpdateIgnoredBuildingActors = 12,
    UpdateFOV = 13,
    UpdateAutoEject = 14,
    UpdateHonk = 15,
    UpdateOnFire = 16,
    UpdateExplodeDelay = 17,
    UpdateWaterIdle = 18,
    UpdateFX = 19,
    UpdateAutoRun = 20,
    UpdateWorldMovementDir = 21,
    UpdatePlayerGravityScales = 22,
    UpdateSafeTeleport = 23,
    UpdateWaterLevel = 24,
    UpdateWaterTest = 25,
    UpdatePontoons = 26,
    UpdateOrientationCorrection = 27,
    UpdateReplicatedAttributes = 28,
    UpdateImpactBuckets = 29,
    UpdateCameraShakeTick = 30,
    UpdateForceFeedbackTick = 31,
    UpdateAudioTick = 32,
    UpdateFXTick = 33,
    UpdatePhysicsSimulation = 34,
    UpdateSurfaceTypeVehicleIsOn = 35,
    UpdateRimScraping = 36,
    UpdateInterfaceFrameUpdate = 37,
    AsyncTick = 38,
    SKVehicleUpdateWheels = 39,
    SKMotorUpdateCosmeticEffectParams = 40,
    DagwoodUpdateAsyncDriverIO = 41,
    DagwoodUpdatePushDriveMode = 42,
    DagwoodUpdateBoost = 43,
    DagwoodUpdateCameraAssist = 44,
    DagwoodUpdatePassengersLeaning = 45,
    DagwoodUpdateDestroyInitiallyOverlappingActors = 46,
    DagwoodUpdatePlayersBasedOnVehicle = 47,
    DagwoodUpdateSelfDestruct = 48,
    MotorcycleUpdatePassengerAnimations = 49,
    MotorcycleUpdateCameraAssist = 50,
    MotorcycleUpdateDoorBash = 51,
    MAX = 52
};

enum EVehicleSimStepFlags
{
    None = 0,
    ServerEnabled = 1,
    LocalClientEnabled = 2,
    RemoteClientEnabled = 3,
    RemoteDisabled = 4,
    AllEnabled = 5,
    EVehicleSimStepFlags_MAX = 6
};

enum EVehicleSurfaceType
{
    None = 0,
    InAir = 1,
    InWater = 2,
    OnDirt = 3,
    OnGrass = 4,
    OnGround = 5,
    OnIce = 6,
    OnRoad = 7,
    OnSnow = 8,
    EVehicleSurfaceType_MAX = 9
};

enum EVehicleTrickAxis
{
    X = 0,
    XNeg = 1,
    Y = 2,
    YNeg = 3,
    Z = 4,
    ZNeg = 5,
    Count = 6,
    EVehicleTrickAxis_MAX = 7
};

enum EVehicleTrickType
{
    None = 0,
    RollIncrement = 1,
    ReverseRollIncrement = 2,
    YawIncrement = 3,
    ReverseYawIncrement = 4,
    PitchIncrement = 5,
    ReversePitchIncrement = 6,
    HeightIncrement = 7,
    DistanceIncrement = 8,
    AirTimeIncrement = 9,
    ShoppingCart_Flying = 10,
    ShoppingCart_Stooping = 11,
    StartedLanding = 12,
    FailedLanding = 13,
    Cancelled = 14,
    StuckLanding = 15,
    GenericTrick1 = 16,
    GenericTrick2 = 17,
    GenericTrick3 = 18,
    GenericTrick4 = 19,
    IncrementGenericTrick1 = 20,
    IncrementGenericTrick2 = 21,
    IncrementGenericTrick3 = 22,
    IncrementGenericTrick4 = 23,
    Count = 24,
    EVehicleTrickType_MAX = 25
};

enum EVehicleWheelAndTireNiagaraParams
{
    None = 0,
    Sparks_Wheel_FL = 1,
    Sparks_Wheel_FR = 2,
    Sparks_Wheel_ML = 3,
    Sparks_Wheel_MR = 4,
    Sparks_Wheel_RL = 5,
    Sparks_Wheel_RR = 6,
    UNUSED_6 = 7,
    UNUSED_7 = 8,
    Dust_Wheel_FL = 9,
    Dust_Wheel_FR = 10,
    Dust_Wheel_ML = 11,
    Dust_Wheel_MR = 12,
    Dust_Wheel_RL = 13,
    Dust_Wheel_RR = 14,
    UNUSED_14 = 15,
    UNUSED_15 = 16,
    TireIntactFL = 17,
    TireIntactFR = 18,
    TireIntactRL = 19,
    TireIntactRR = 20,
    TireIntactML = 21,
    TireIntactMR = 22,
    IsShifting = 23,
    UNUSED_23 = 24,
    PeelOut_Wheel_RL = 25,
    PeelOut_Wheel_RR = 26,
    IsBigRig = 27,
    IsWaterDeep = 28,
    VehicleHasDriver = 29,
    VehicleHasFuel = 30,
    Downshifting = 31,
    UNUSED_31 = 32,
    EVehicleWheelAndTireNiagaraParams_MAX = 33
};

enum EVehicleWheelLocations
{
    FrontRight = 0,
    FrontLeft = 1,
    BackRight = 2,
    BackLeft = 3,
    MiddleRight = 4,
    MiddleLeft = 5,
    Max = 6
};

enum EVelocityOutputPass
{
    DepthPass = 0,
    BasePass = 1,
    AfterBasePass = 2,
    EVelocityOutputPass_MAX = 3
};

enum EVelocityUnits
{
    CentimetersPerSecond = 0,
    KilometersPerHour = 1,
    EVelocityUnits_MAX = 2
};

enum EVerifierModeOverride
{
    DefaultToConfig = 0,
    OccurrenceOnlyRemoveReceipts = 1,
    MigrateIfNeeded = 2,
    MAX = 3
};

enum EVerseDigestVariant
{
    PublicAndEpicInternal = 0,
    PublicOnly = 1,
    EVerseDigestVariant_MAX = 2
};

enum EVerseEnumFlags
{
    None = 0,
    NativeBound = 1,
    EVerseEnumFlags_MAX = 2
};

enum EVerseFalse
{
    Value = 0,
    EVerseFalse_MAX = 1
};

enum EVersePackageScope
{
    PublicAPI = 0,
    InternalAPI = 1,
    PublicUser = 2,
    InternalUser = 3,
    EVersePackageScope_MAX = 4
};

enum EVersePackageType
{
    VNI = 0,
    Content = 1,
    PublishedContent = 2,
    Assets = 3,
    EVersePackageType_MAX = 4
};

enum EVerseTrue
{
    Value = 0,
    EVerseTrue_MAX = 1
};

enum EVertexColorMaskChannel
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    MAX_None = 4,
    EVertexColorMaskChannel_MAX = 5
};

enum EVertexColorPaintBrushOpBlendMode
{
    Lerp = 0,
    Mix = 1,
    Multiply = 2,
    EVertexColorPaintBrushOpBlendMode_MAX = 3
};

enum EVertexDeformationOutputsVelocity
{
    Off = 0,
    On = 1,
    Auto = 2,
    EVertexDeformationOutputsVelocity_MAX = 3
};

enum EVertexPaintAxis
{
    X = 0,
    Y = 1,
    Z = 2,
    EVertexPaintAxis_MAX = 3
};

enum EVerticalAlignment
{
    VAlign_Fill = 0,
    VAlign_Top = 1,
    VAlign_Center = 2,
    VAlign_Bottom = 3,
    VAlign_MAX = 4
};

enum EVerticalDirection
{
    Both = 0,
    DownwardOnly = 1,
    UpwardOnly = 2,
    EVerticalDirection_MAX = 3
};

enum EVerticalTextAligment
{
    EVRTA_TextTop = 0,
    EVRTA_TextCenter = 1,
    EVRTA_TextBottom = 2,
    EVRTA_QuadTop = 3,
    EVRTA_MAX = 4
};

enum EVideoManagerJobTypes
{
    EliminationExtraction = 0,
    DefinedShotSequence = 1,
    EVideoManagerJobTypes_MAX = 2
};

enum EVideoManagerStates
{
    INVALID = 0,
    LoadingReplay = 1,
    ScrubbingReplay = 2,
    WaitingForShotSetup = 3,
    WatchingShot = 4,
    ExportingShot = 5,
    PostExportedShot = 6,
    EVideoManagerStates_MAX = 7
};

enum EVideoScheduleDeviceRepeat
{
    None = 0,
    Hourly = 1,
    Daily = 2,
    EVideoScheduleDeviceRepeat_MAX = 3
};

enum EViewInteractionState
{
    None = 0,
    Hovered = 1,
    Focused = 2,
    EViewInteractionState_MAX = 3
};

enum EViewModeIndex
{
    VMI_BrushWireframe = 0,
    VMI_Wireframe = 1,
    VMI_Unlit = 2,
    VMI_Lit = 3,
    VMI_Lit_DetailLighting = 4,
    VMI_LightingOnly = 5,
    VMI_LightComplexity = 6,
    VMI_ShaderComplexity = 7,
    VMI_LightmapDensity = 8,
    VMI_LitLightmapDensity = 9,
    VMI_ReflectionOverride = 10,
    VMI_VisualizeBuffer = 11,
    VMI_StationaryLightOverlap = 12,
    VMI_CollisionPawn = 13,
    VMI_CollisionVisibility = 14,
    VMI_LODColoration = 15,
    VMI_QuadOverdraw = 16,
    VMI_PrimitiveDistanceAccuracy = 17,
    VMI_MeshUVDensityAccuracy = 18,
    VMI_ShaderComplexityWithQuadOverdraw = 19,
    VMI_HLODColoration = 20,
    VMI_GroupLODColoration = 21,
    VMI_MaterialTextureScaleAccuracy = 22,
    VMI_RequiredTextureResolution = 23,
    VMI_PathTracing = 24,
    VMI_RayTracingDebug = 25,
    VMI_VisualizeNanite = 26,
    VMI_VirtualTexturePendingMips = 27,
    VMI_VisualizeLumen = 28,
    VMI_VisualizeVirtualShadowMap = 29,
    VMI_VisualizeGPUSkinCache = 30,
    VMI_VisualizeSubstrate = 31,
    VMI_VisualizeGroom = 32,
    VMI_LWCComplexity = 33,
    VMI_Lit_Wireframe = 34,
    VMI_Max = 35,
    VMI_Unknown = 36
};

enum EViewStatusForScreenPercentage
{
    NonRealtime = 0,
    Desktop = 1,
    Mobile = 2,
    VR = 3,
    PathTracer = 4,
    EViewStatusForScreenPercentage_MAX = 5
};

enum EViewTargetBlendFunction
{
    VTBlend_Linear = 0,
    VTBlend_Cubic = 1,
    VTBlend_EaseIn = 2,
    VTBlend_EaseOut = 3,
    VTBlend_EaseInOut = 4,
    VTBlend_PreBlended = 5,
    VTBlend_MAX = 6
};

enum EViewTargetBlendOrder
{
    VTBlendOrder_Base = 0,
    VTBlendOrder_Override = 1,
    VTBlendOrder_MAX = 2
};

enum EViewerNavigationDirection
{
    Previous = 0,
    Next = 1,
    EViewerNavigationDirection_MAX = 2
};

enum EViolatorIntensity
{
    Low = 0,
    Medium = 1,
    High = 2,
    EViolatorIntensity_MAX = 3
};

enum EVirtualKeyboardDismissAction
{
    TextChangeOnDismiss = 0,
    TextCommitOnAccept = 1,
    TextCommitOnDismiss = 2,
    EVirtualKeyboardDismissAction_MAX = 3
};

enum EVirtualKeyboardTrigger
{
    OnFocusByPointer = 0,
    OnAllFocusEvents = 1,
    EVirtualKeyboardTrigger_MAX = 2
};

enum EVirtualKeyboardType
{
    Default = 0,
    Number = 1,
    Web = 2,
    Email = 3,
    Password = 4,
    AlphaNumeric = 5,
    EVirtualKeyboardType_MAX = 6
};

enum EVirtualizationMode
{
    Disabled = 0,
    PlayWhenSilent = 1,
    Restart = 2,
    EVirtualizationMode_MAX = 3
};

enum EVisibilityAggressiveness
{
    VIS_LeastAggressive = 0,
    VIS_ModeratelyAggressive = 1,
    VIS_MostAggressive = 2,
    VIS_Max = 3
};

enum EVisibilityBasedAnimTickOption
{
    AlwaysTickPoseAndRefreshBones = 0,
    AlwaysTickPose = 1,
    OnlyTickMontagesAndRefreshBonesWhenPlayingMontages = 2,
    OnlyTickMontagesWhenNotRendered = 3,
    OnlyTickPoseWhenRendered = 4,
    EVisibilityBasedAnimTickOption_MAX = 5
};

enum EVisibilityResponse
{
    Hide = 0,
    Show = 1,
    Custom = 2,
    EVisibilityResponse_MAX = 3
};

enum EVisualizeAudioPriority
{
    HighPriority = 0,
    All = 1,
    EVisualizeAudioPriority_MAX = 2
};

enum EVkConversationRequirement_FailureTypeEnum
{
    Hide = 0,
    Disable = 1,
    EVkConversationRequirement_MAX = 2
};

enum EVkConversationRequirement_TargetEnum
{
    Instigator = 0,
    ConversationDevice = 1,
    EVkConversationRequirement_MAX = 2
};

enum EVkConversationRequirement_TypeOfCheckEnum
{
    All = 0,
    None = 1,
    Any = 2,
    EVkConversationRequirement_MAX = 3
};

enum EVkEditStatus
{
    DEFAULT = 0,
    UpToDate = 1,
    RefreshRequested = 2,
    RefreshRequired = 3,
    Uploading = 4,
    Staging = 5,
    Preparing = 6,
    Downloading = 7,
    LoadingProject = 8,
    Error = 9,
    NumStatuses = 10,
    EVkEditStatus_MAX = 11
};

enum EVkIdType
{
    Account = 0,
    Team = 1,
    EVkIdType_MAX = 2
};

enum EVkInventoryMoveBehaviour
{
    SwapSlotNumber = 0,
    EmplaceSlotNumber = 1,
    EVkInventoryMoveBehaviour_MAX = 2
};

enum EVkInventoryMoveResult
{
    Success = 0,
    Failed = 1,
    InvalidRequest = 2,
    NoChange = 3,
    EVkInventoryMoveResult_MAX = 4
};

enum EVkLinkPublishMode
{
    Live = 0,
    Playtest = 1,
    EVkLinkPublishMode_MAX = 2
};

enum EVkModuleAccess
{
    Private = 0,
    Protected = 1,
    Public = 2,
    EVkModuleAccess_MAX = 3
};

enum EVkModuleModerationSource
{
    System = 0,
    Manual = 1,
    Error = 2,
    AdminAction = 3,
    CommandletError = 4,
    IngestionError = 5,
    EVkModuleModerationSource_MAX = 6
};

enum EVkModulePublishStatus
{
    Unreleased = 0,
    PublishedLive = 1,
    EVkModulePublishStatus_MAX = 2
};

enum EVkModuleSafetyStatus
{
    Unknown = 0,
    Passed = 1,
    FailedSoft = 2,
    FailedHard = 3,
    EVkModuleSafetyStatus_MAX = 4
};

enum EVkTeamAccessLevel
{
    Edit = 0,
    Operate = 1,
    Publish = 2,
    Admin = 3,
    EVkTeamAccessLevel_MAX = 4
};

enum EVkTeamMembershipStatus
{
    Pending = 0,
    Accepted = 1,
    EVkTeamMembershipStatus_MAX = 2
};

enum EVkTicketStatus
{
    None = 0,
    Succeeded = 1,
    Running = 2,
    Failed = 3,
    EVkTicketStatus_MAX = 4
};

enum EVkValidationFlags
{
    None = 0,
    VF_IgnoreValidation = 1,
    VF_AllowMissingGameFeatureDataAsset = 2,
    VF_AllowEngineContent = 3,
    VF_AllowGameContent = 4,
    VF_NoPreCheckVerse = 5,
    VF_ErrorsAsWarnings = 6,
    EVkValidationFlags_MAX = 7
};

enum EVocalsMidiNoteEvent
{
    None = 0,
    EVocalsMidiNoteEvent_MAX = 1
};

enum EVocalsMidiTextEvent
{
    None = 0,
    PlayingMellow = 1,
    PlayingStandard = 2,
    PlayingIntense = 3,
    IdleRhythmMellow = 4,
    IdleRhythmStandard = 5,
    IdleRhythmIntense = 6,
    IdleRealtime = 7,
    Pickup = 8,
    EVocalsMidiTextEvent_MAX = 9
};

enum EVocoderBandConfig
{
    k4 = 0,
    k8 = 1,
    k16 = 2,
    k32 = 3,
    k64 = 4,
    k128 = 5,
    k256 = 6,
    Num = 7,
    None = 8,
    EVocoderBandConfig_MAX = 9
};

enum EVoiceBlockReasons
{
    None = 0,
    Muted = 1,
    Gameplay = 2,
    Blocked = 3,
    BlockedBy = 4,
    EVoiceBlockReasons_MAX = 5
};

enum EVoiceChatRecordingPreference
{
    PreferRecording = 0,
    PreferNotRecording = 1,
    EVoiceChatRecordingPreference_MAX = 2
};

enum EVoiceIndicatorOnNameplateDisplayMode
{
    Default = 0,
    Team = 1,
    Hostiles = 2,
    All = 3,
    Disable = 4,
    EVoiceIndicatorOnNameplateDisplayMode_MAX = 5
};

enum EVoiceRepUploadRecordResult
{
    Success = 0,
    Cancelled = 1,
    NoAudioToUpload = 2,
    EmeraldError = 3,
    FailedUpload = 4,
    EVoiceRepUploadRecordResult_MAX = 5
};

enum EVoiceSampleRate
{
    Low16000Hz = 0,
    Normal24000Hz = 1,
    EVoiceSampleRate_MAX = 2
};

enum EVolumeCacheType
{
    OpenVDB = 0,
    EVolumeCacheType_MAX = 1
};

enum EVolumeEnableOverlapBehavior
{
    Never = 0,
    Game = 1,
    Always = 2,
    EVolumeEnableOverlapBehavior_MAX = 3
};

enum EVolumeLightingMethod
{
    VLM_VolumetricLightmap = 0,
    VLM_SparseVolumeLightingSamples = 1,
    VLM_MAX = 2
};

enum EVolumeShape
{
    Sphere = 0,
    Box = 1,
    EVolumeShape_MAX = 2
};

enum EVolumeValidityResult
{
    Valid = 0,
    Invalid = 1,
    EVolumeValidityResult_MAX = 2
};

enum EVolumetricCloudTracingMaxDistanceMode
{
    DistanceFromCloudLayerEntryPoint = 0,
    DistanceFromPointOfView = 1,
    EVolumetricCloudTracingMaxDistanceMode_MAX = 2
};

enum EVoteSessionNetworkType
{
    NotDetermined = 0,
    DedicatedServer = 1,
    MeshNetwork = 2,
    EVoteSessionNetworkType_MAX = 3
};

enum EVoteSessionState
{
    None = 0,
    Setup = 1,
    Voting = 2,
    Complete = 3,
    Shutdown = 4,
    EVoteSessionState_MAX = 5
};

enum EVoteState
{
    None = 0,
    Setup = 1,
    Active = 2,
    Completed = 3,
    EVoteState_MAX = 4
};

enum EVoxelBlendOperation
{
    Union = 0,
    Subtract = 1,
    EVoxelBlendOperation_MAX = 2
};

enum EWaitAttributeChangeComparison
{
    None = 0,
    GreaterThan = 1,
    LessThan = 2,
    GreaterThanOrEqualTo = 3,
    LessThanOrEqualTo = 4,
    NotEqualTo = 5,
    ExactlyEqualTo = 6,
    MAX = 7
};

enum EWaitGameplayTagQueryTriggerCondition
{
    WhenTrue = 0,
    WhenFalse = 1,
    EWaitGameplayTagQueryTriggerCondition_MAX = 2
};

enum EWalkableSlopeBehavior
{
    WalkableSlope_Default = 0,
    WalkableSlope_Increase = 1,
    WalkableSlope_Decrease = 2,
    WalkableSlope_Unwalkable = 3,
    WalkableSlope_Max = 4
};

enum EWarEffortFundingStationType
{
    Final = 0,
    Tower = 1,
    Choice = 2,
    EWarEffortFundingStationType_MAX = 3
};

enum EWardAffectType
{
    AffectsBothStartAndEndPoints = 0,
    AffectsOnlyStartPoints = 1,
    AffectsOnlyEndPoints = 2,
    EWardAffectType_MAX = 3
};

enum EWarpPointAnimProvider
{
    None = 0,
    Static = 1,
    Bone = 2,
    EWarpPointAnimProvider_MAX = 3
};

enum EWarpingDirectionSource
{
    Goals = 0,
    Chain = 1,
    RootBone = 2,
    EWarpingDirectionSource_MAX = 3
};

enum EWarpingEvaluationMode
{
    Manual = 0,
    Graph = 1,
    EWarpingEvaluationMode_MAX = 2
};

enum EWarpingVectorMode
{
    ComponentSpaceVector = 0,
    ActorSpaceVector = 1,
    WorldSpaceVector = 2,
    IKFootRootLocalSpaceVector = 3,
    EWarpingVectorMode_MAX = 4
};

enum EWaterBodyType
{
    River = 0,
    Lake = 1,
    Ocean = 2,
    Transition = 3,
    Num = 4,
    EWaterBodyType_MAX = 5
};

enum EWaterBrushBlendType
{
    AlphaBlend = 0,
    Min = 1,
    Max = 2,
    Additive = 3
};

enum EWaterBrushFalloffMode
{
    Angle = 0,
    Width = 1,
    EWaterBrushFalloffMode_MAX = 2
};

enum EWaterExclusionMode
{
    AddWaterBodiesListToExclusion = 0,
    RemoveWaterBodiesListFromExclusion = 1,
    EWaterExclusionMode_MAX = 2
};

enum EWaveFunctionType
{
    Field_Wave_Cosine = 0,
    Field_Wave_Gaussian = 1,
    Field_Wave_Falloff = 2,
    Field_Wave_Decay = 3,
    Field_Wave_Max = 4
};

enum EWaveRules
{
    KillAllEnemies = 0,
    Timed = 1,
    KillPoints = 2,
    KillSpecificEnemy = 3,
    Mission = 4,
    DestroyRifts = 5,
    EWaveRules_MAX = 6
};

enum EWaveShape
{
    Sine = 0,
    Square = 1,
    SawUp = 2,
    SawDown = 3,
    Triangle = 4,
    Random = 5,
    Num = 6,
    None = 7,
    EWaveShape_MAX = 8
};

enum EWaveSpectrumType
{
    Phillips = 0,
    PiersonMoskowitz = 1,
    JONSWAP = 2,
    EWaveSpectrumType_MAX = 3
};

enum EWaveTableBitDepth
{
    PCM_16 = 0,
    IEEE_Float = 1,
    COUNT = 2,
    EWaveTableBitDepth_MAX = 3
};

enum EWaveTableCurve
{
    Linear = 0,
    Linear_Inv = 1,
    Exp = 2,
    Exp_Inverse = 3,
    Log = 4,
    Sin = 5,
    Sin_Full = 6,
    SCurve = 7,
    Shared = 8,
    Custom = 9,
    File = 10,
    Count = 11,
    EWaveTableCurve_MAX = 12
};

enum EWaveTableResolution
{
    None = 0,
    Res_8 = 1,
    Res_16 = 2,
    Res_32 = 3,
    Res_64 = 4,
    Res_128 = 5,
    Res_256 = 6,
    Res_512 = 7,
    Res_1024 = 8,
    Res_2048 = 9,
    Res_4096 = 10,
    Res_Max = 11,
    Maximum = 12,
    EWaveTableResolution_MAX = 13
};

enum EWaveTableSamplingMode
{
    FixedSampleRate = 0,
    FixedResolution = 1,
    COUNT = 2,
    EWaveTableSamplingMode_MAX = 3
};

enum EWaxMinimapDrawMode
{
    NoDrawing = 0,
    DrawCloseAndMoveOrShoot = 1,
    DrawMoveOrShoot = 2,
    DrawAlways = 3,
    EWaxMinimapDrawMode_MAX = 4
};

enum EWaxState
{
    None = 0,
    SomewhatVisible = 1,
    ModeratelyVisible = 2,
    VeryVisible = 3,
    Undeniable = 4,
    EWaxState_MAX = 5
};

enum EWaxTokenState
{
    None = 0,
    FirstSpline = 1,
    Interpolation = 2,
    LastSpline = 3,
    Finished = 4,
    EWaxTokenState_MAX = 5
};

enum EWeaponSelectionPreservationType
{
    KeepSelectionWhenRespawning = 0,
    NeverKeepSelection = 1,
    EWeaponSelectionPreservationType_MAX = 2
};

enum EWeightMapTargetCommon
{
    None = 0,
    MaxDistance = 1,
    BackstopDistance = 2,
    BackstopRadius = 3,
    AnimDriveStiffness = 4,
    AnimDriveDamping_DEPRECATED = 5,
    EWeightMapTargetCommon_MAX = 6
};

enum EWeightScheme
{
    Uniform = 0,
    Umbrella = 1,
    Valence = 2,
    MeanValue = 3,
    Cotangent = 4,
    ClampedCotangent = 5,
    IDTCotangent = 6,
    EWeightScheme_MAX = 7
};

enum EWeightmapRTType
{
    WeightmapRT_Scratch_RGBA = 0,
    WeightmapRT_Scratch1 = 1,
    WeightmapRT_Scratch2 = 2,
    WeightmapRT_Scratch3 = 3,
    WeightmapRT_Mip0 = 4,
    WeightmapRT_Mip1 = 5,
    WeightmapRT_Mip2 = 6,
    WeightmapRT_Mip3 = 7,
    WeightmapRT_Mip4 = 8,
    WeightmapRT_Mip5 = 9,
    WeightmapRT_Mip6 = 10,
    WeightmapRT_Mip7 = 11,
    WeightmapRT_Count = 12,
    WeightmapRT_MAX = 13
};

enum EWeldMeshEdgesAttributeUIMode
{
    None = 0,
    OnWeldedMeshEdgesOnly = 1,
    OnFullMesh = 2,
    EWeldMeshEdgesAttributeUIMode_MAX = 3
};

enum EWidgetAnimationEvent
{
    Started = 0,
    Finished = 1,
    EWidgetAnimationEvent_MAX = 2
};

enum EWidgetBlendMode
{
    Opaque = 0,
    Masked = 1,
    Transparent = 2,
    EWidgetBlendMode_MAX = 3
};

enum EWidgetClipping
{
    Inherit = 0,
    ClipToBounds = 1,
    ClipToBoundsWithoutIntersecting = 2,
    ClipToBoundsAlways = 3,
    OnDemand = 4,
    EWidgetClipping_MAX = 5
};

enum EWidgetDesignFlags
{
    None = 0,
    Designing = 1,
    ShowOutline = 2,
    ExecutePreConstruct = 3,
    Previewing = 4,
    EWidgetDesignFlags_MAX = 5
};

enum EWidgetGeometryMode
{
    Plane = 0,
    Cylinder = 1,
    EWidgetGeometryMode_MAX = 2
};

enum EWidgetInteractionSource
{
    World = 0,
    Mouse = 1,
    CenterScreen = 2,
    Custom = 3,
    EWidgetInteractionSource_MAX = 4
};

enum EWidgetInterfaceTimerStatus
{
    None = 0,
    Active = 1,
    Paused = 2,
    Inactive = 3,
    EWidgetInterfaceTimerStatus_MAX = 4
};

enum EWidgetPixelSnapping
{
    Inherit = 0,
    Disabled = 1,
    SnapToPixel = 2,
    EWidgetPixelSnapping_MAX = 3
};

enum EWidgetSpace
{
    World = 0,
    Screen = 1,
    EWidgetSpace_MAX = 2
};

enum EWidgetStateComponentUnloadDefaultBehavior
{
    WaitForAnimations = 0,
    DoNotWaitForAnimations = 1,
    EWidgetStateComponentUnloadDefaultBehavior_MAX = 2
};

enum EWidgetTickFrequency
{
    Never = 0,
    Auto = 1,
    EWidgetTickFrequency_MAX = 2
};

enum EWidgetTimingPolicy
{
    RealTime = 0,
    GameTime = 1,
    EWidgetTimingPolicy_MAX = 2
};

enum EWidgetTouchKbmControllerTransitionType
{
    Opacity = 0,
    Collapse = 1,
    DoNothing = 2,
    Count = 3,
    EWidgetTouchKbmControllerTransitionType_MAX = 4
};

enum EWidgetTransitionerInitialStatus
{
    Hidden = 0,
    Shown = 1,
    EWidgetTransitionerInitialStatus_MAX = 2
};

enum EWidgetTransitionerStatus
{
    Hidden = 0,
    AnimatingIn = 1,
    Shown = 2,
    AnimatingOut = 3,
    EWidgetTransitionerStatus_MAX = 4
};

enum EWinConditionParentType
{
    None = 0,
    Desktop = 1,
    Mobile = 2,
    EWinConditionParentType_MAX = 3
};

enum EWindSourceType
{
    Directional = 0,
    Point = 1,
    EWindSourceType_MAX = 2
};

enum EWindVolumePriority
{
    Priority_1 = 0,
    Priority_2 = 1,
    Priority_3 = 2,
    Priority_4 = 3,
    Priority_5 = 4,
    Priority_6 = 5,
    Priority_7 = 6,
    Priority_8 = 7,
    Priority_9 = 8,
    Priority_10 = 9,
    Priority_Default = 10,
    Priority_MAX = 11
};

enum EWindowMode
{
    Fullscreen = 0,
    WindowedFullscreen = 1,
    Windowed = 2,
    EWindowMode_MAX = 3
};

enum EWindowTitleBarMode
{
    Overlay = 0,
    VerticalBox = 1,
    EWindowTitleBarMode_MAX = 2
};

enum EWindowVisibility
{
    Visible = 0,
    SelfHitTestInvisible = 1,
    EWindowVisibility_MAX = 2
};

enum EWingedFlyingStatus
{
    Default = 0,
    Boosting = 1,
    Ascending = 2,
    Crashing = 3,
    DodgingLeft = 4,
    DodgingRight = 5,
    Charging = 6,
    EWingedFlyingStatus_MAX = 7
};

enum EWithinBoundsEvaluationType
{
    UseOverlaps = 0,
    UseBoxBounds = 1,
    UseSphereBounds = 2,
    EWithinBoundsEvaluationType_MAX = 3
};

enum EWorkingColorSpace
{
    sRGB = 0,
    Rec2020 = 1,
    ACESAP0 = 2,
    ACESAP1 = 3,
    P3DCI = 4,
    P3D65 = 5,
    Custom = 6,
    EWorkingColorSpace_MAX = 7
};

enum EWorldConditionContextDataType
{
    Dynamic = 0,
    Persistent = 1,
    EWorldConditionContextDataType_MAX = 2
};

enum EWorldConditionOperator
{
    And = 0,
    Or = 1,
    Copy = 2,
    EWorldConditionOperator_MAX = 3
};

enum EWorldConditionResultValue
{
    IsFalse = 0,
    IsTrue = 1,
    Invalid = 2,
    EWorldConditionResultValue_MAX = 3
};

enum EWorldContentState
{
    NoContent = 0,
    ContentBundleInjected = 1,
    EWorldContentState_MAX = 2
};

enum EWorldDataAvailable
{
    Undefined = 0,
    WasLoadedFromPersistentData = 1,
    WasInitializedFromWorldMetadata = 2,
    EWorldDataAvailable_MAX = 3
};

enum EWorldItemDropBehavior
{
    DropAsPickup = 0,
    DestroyOnDrop = 1,
    DropAsPickupDestroyOnEmpty = 2,
    DropAsPickupEvenWhenEmpty = 3,
    EWorldItemDropBehavior_MAX = 4
};

enum EWorldPartitionCVarProjectDefaultOverride
{
    ProjectDefault = 0,
    Disabled = 1,
    Enabled = 2,
    EWorldPartitionCVarProjectDefaultOverride_MAX = 3
};

enum EWorldPartitionDataLayersLogicOperator
{
    Or = 0,
    And = 1,
    EWorldPartitionDataLayersLogicOperator_MAX = 2
};

enum EWorldPartitionRuntimeCellState
{
    Unloaded = 0,
    Loaded = 1,
    Activated = 2,
    EWorldPartitionRuntimeCellState_MAX = 3
};

enum EWorldPartitionServerStreamingMode
{
    ProjectDefault = 0,
    Disabled = 1,
    Enabled = 2,
    EnabledInPIE = 3,
    EWorldPartitionServerStreamingMode_MAX = 4
};

enum EWorldPartitionServerStreamingOutMode
{
    ProjectDefault = 0,
    Disabled = 1,
    Enabled = 2,
    EWorldPartitionServerStreamingOutMode_MAX = 3
};

enum EWorldPartitionStreamingPerformance
{
    Good = 0,
    Slow = 1,
    Critical = 2,
    EWorldPartitionStreamingPerformance_MAX = 3
};

enum EWorldPositionIncludedOffsets
{
    WPT_Default = 0,
    WPT_ExcludeAllShaderOffsets = 1,
    WPT_CameraRelative = 2,
    WPT_CameraRelativeNoOffsets = 3,
    WPT_MAX = 4
};

enum EWorldStatUpdateType
{
    Increment = 0,
    Set = 1,
    Maximum = 2,
    EWorldStatUpdateType_MAX = 3
};

enum EWrapPreviewCamera
{
    Weapon = 0,
    LargeWeapon = 1,
    Vehicle = 2,
    EWrapPreviewCamera_MAX = 3
};

enum EWrapPreviewGridLockerMode
{
    IgnoreLockerConfiguration = 0,
    SupportedWeaponsOnly = 1,
    UnsupportedWeaponsOnly = 2,
    EWrapPreviewGridLockerMode_MAX = 3
};

enum EXAxisLabelsUnit
{
    Samples = 0,
    Seconds = 1,
    EXAxisLabelsUnit_MAX = 2
};

enum EXPEventPriorityType
{
    NearReticle = 0,
    XPBarOnly = 1,
    TopCenter = 2,
    Feed = 3,
    EXPEventPriorityType_MAX = 4
};

enum EXRDeviceConnectionResult
{
    NoTrackingSystem = 0,
    FeatureNotSupported = 1,
    NoValidViewport = 2,
    MiscFailure = 3,
    Success = 4,
    EXRDeviceConnectionResult_MAX = 5
};

enum EXRSystemFlags
{
    NoFlags = 0,
    IsAR = 1,
    IsTablet = 2,
    IsHeadMounted = 3,
    SupportsHandTracking = 4,
    EXRSystemFlags_MAX = 5
};

enum EXRTrackedDeviceType
{
    HeadMountedDisplay = 0,
    Controller = 1,
    TrackingReference = 2,
    Tracker = 3,
    Other = 4,
    Invalid = 5,
    Any = 6,
    EXRTrackedDeviceType_MAX = 7
};

enum EXRVisualType
{
    Controller = 0,
    Hand = 1,
    EXRVisualType_MAX = 2
};

enum EYAxisLabelsUnit
{
    Linear = 0,
    Db = 1,
    EYAxisLabelsUnit_MAX = 2
};

enum EYieldReason
{
    PlayerLoggedIn = 0,
    PlayerCanceledLogin = 1,
    PlayerYielded = 2,
    ControllerDisconnect = 3,
    EYieldReason_MAX = 4
};

enum EZiplineMovementDirection
{
    Unset = 0,
    Forward = 1,
    Backward = 2,
    EZiplineMovementDirection_MAX = 3
};

enum EZoneGraphLaneRoutingCountRule
{
    Any = 0,
    One = 1,
    Many = 2,
    EZoneGraphLaneRoutingCountRule_MAX = 3
};

enum EZoneGraphObstacleDisturbanceAreaAction
{
    Add = 0,
    Remove = 1,
    EZoneGraphObstacleDisturbanceAreaAction_MAX = 2
};

enum EZoneGraphTags
{
    MaxTags = 0,
    MaxTagIndex = 1,
    EZoneGraphTags_MAX = 2
};

enum EZoneLaneDirection
{
    None = 0,
    Forward = 1,
    Backward = 2,
    EZoneLaneDirection_MAX = 3
};

enum EZoneLaneLinkFlags
{
    None = 0,
    All = 1,
    Left = 2,
    Right = 3,
    Splitting = 4,
    Merging = 5,
    OppositeDirection = 6,
    EZoneLaneLinkFlags_MAX = 7
};

enum EZoneLaneLinkType
{
    None = 0,
    All = 1,
    Outgoing = 2,
    Incoming = 3,
    Adjacent = 4,
    EZoneLaneLinkType_MAX = 5
};

enum EZoneLaneTagMaskComparison
{
    Any = 0,
    All = 1,
    Not = 2,
    EZoneLaneTagMaskComparison_MAX = 3
};

enum EZoneShapeLaneConnectionRestrictions
{
    None = 0,
    NoLeftTurn = 1,
    NoRightTurn = 2,
    OneLanePerDestination = 3,
    MergeLanesToOneDestinationLane = 4,
    EZoneShapeLaneConnectionRestrictions_MAX = 5
};

enum EZoneShapePolygonRoutingType
{
    Bezier = 0,
    Arcs = 1,
    EZoneShapePolygonRoutingType_MAX = 2
};

enum FAIDistanceType
{
    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    MAX = 3
};

enum FBattlePassLandingPageButtonDisplayBehavior
{
    None = 0,
    MainRewards = 1,
    BonusRewards = 2,
    WeeklyRewards = 3,
    QuestRewards = 4,
    Subscription = 5,
    Customization = 6,
    FBattlePassLandingPageButtonDisplayBehavior_MAX = 7
};

enum FCollisionReactionType
{
    Nothing = 0,
    Pawn = 1,
    Vehicle = 2,
    PhysicsObject = 3,
    BuildingActor = 4,
    FCollisionReactionType_MAX = 5
};

enum FCollisionWithBuildingActorReactionTypes
{
    DoNothing = 0,
    PlayAttackAbility = 1,
    Destroy = 2,
    ApplyGameplayEffect = 3,
    FCollisionWithBuildingActorReactionTypes_MAX = 4
};

enum FCollisionWithLaunchableReactionTypes
{
    DoNothing = 0,
    Launch = 1,
    OverrideOther = 2,
    FCollisionWithLaunchableReactionTypes_MAX = 3
};

enum FDataDrivenCVarType
{
    CVarFloat = 0,
    CVarInt = 1,
    CVarBool = 2,
    FDataDrivenCVarType_MAX = 3
};

enum FDynamicBuildOrder
{
    X = 0,
    Y = 1,
    Z = 2,
    None = 3,
    FDynamicBuildOrder_MAX = 4
};

enum FFortActivityImageShape
{
    Rectangular = 0,
    Square = 1,
    FFortActivityImageShape_MAX = 2
};

enum FLightOverrideLevel
{
    Default = 0,
    High = 1,
    Count = 2,
    FLightOverrideLevel_MAX = 3
};

enum FNavigationSystemRunMode
{
    InvalidMode = 0,
    GameMode = 1,
    EditorMode = 2,
    SimulationMode = 3,
    PIEMode = 4,
    InferFromWorldMode = 5,
    EditorWorldPartitionBuildMode = 6,
    FNavigationSystemRunMode_MAX = 7
};

enum FNiagaraCompileEventSeverity
{
    Log = 0,
    Display = 1,
    Warning = 2,
    Error = 3,
    FNiagaraCompileEventSeverity_MAX = 4
};

enum FNiagaraCompileEventSource
{
    Unset = 0,
    ScriptDependency = 1,
    FNiagaraCompileEventSource_MAX = 2
};

enum FSmartObjectSlotEntrySelectionMethod
{
    First = 0,
    NearestToSearchLocation = 1,
    FSmartObjectSlotEntrySelectionMethod_MAX = 2
};

enum FTowhookExtensionState
{
    Hold = 0,
    Extend = 1,
    Contract = 2,
    FTowhookExtensionState_MAX = 3
};

enum FTurnTransitionCondition
{
    None = 0,
    Inplace = 1,
    Start = 2,
    Moving = 3,
    FTurnTransitionCondition_MAX = 4
};

enum FTypedElementAlertColumnType
{
    Error = 0,
    Warning = 1,
    MAX = 2
};

enum FZoneShapePointType
{
    Sharp = 0,
    Bezier = 1,
    AutoBezier = 2,
    LaneProfile = 3,
    FZoneShapePointType_MAX = 4
};

enum FZoneShapeType
{
    Spline = 0,
    Polygon = 1,
    FZoneShapeType_MAX = 2
};

enum FoliageVertexColorMask
{
    FOLIAGEVERTEXCOLORMASK_Disabled = 0,
    FOLIAGEVERTEXCOLORMASK_Red = 1,
    FOLIAGEVERTEXCOLORMASK_Green = 2,
    FOLIAGEVERTEXCOLORMASK_Blue = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha = 4,
    FOLIAGEVERTEXCOLORMASK_MAX = 5
};

enum LandscapeSplineMeshOrientation
{
    LSMO_XUp = 0,
    LSMO_YUp = 1,
    LSMO_MAX = 2
};

enum MapConstraintsBehaviorType
{
    AuthoredSkeleton = 0,
    DefaultTransform = 1,
    None = 2,
    MapConstraintsBehaviorType_MAX = 3
};

enum MediaTextureOrientation
{
    MTORI_Original = 0,
    MTORI_CW90 = 1,
    MTORI_CW180 = 2,
    MTORI_CW270 = 3,
    MTORI_MAX = 4
};

enum MediaTextureOutputFormat
{
    MTOF_Default = 0,
    MTOF_SRGB_LINOUT = 1,
    MTOF_MAX = 2
};

enum ModulationParamMode
{
    MPM_Normal = 0,
    MPM_Abs = 1,
    MPM_Direct = 2,
    MPM_MAX = 3
};

enum MountedCannonLaunchPlayerMode
{
    Off = 0,
    PrimaryFire = 1,
    SecondaryFire = 2,
    PrimaryWhileTargeting = 3,
    MountedCannonLaunchPlayerMode_MAX = 4
};

enum MovieScene3DPathSection_Axis
{
    X = 0,
    Y = 1,
    Z = 2,
    NEG_X = 3,
    NEG_Y = 4,
    NEG_Z = 5,
    MovieScene3DPathSection_MAX = 6
};

enum PCGDistanceShape
{
    SphereBounds = 0,
    BoxBounds = 1,
    Center = 2,
    PCGDistanceShape_MAX = 3
};

enum PCGJunoApplyMaskNodeMode
{
    Subtract = 0,
    Intersect = 1,
    SubtractSmaller = 2,
    SubtractLarger = 3,
    PCGJunoApplyMaskNodeMode_MAX = 4
};

enum PCGJunoFractalDensityMode
{
    Ignore = 0,
    Set = 1,
    Add = 2,
    Multiply = 3,
    PCGJunoFractalDensityMode_MAX = 4
};

enum PCGJunoFractalNoise2DEdgeMode
{
    Perlin = 0,
    Caustic = 1,
    Brownian = 2,
    PCGJunoFractalNoise2DEdgeMode_MAX = 3
};

enum PCGJunoFractalNoise2DMode
{
    Perlin = 0,
    Caustic = 1,
    Voronoi = 2,
    TiledVoronoi = 3,
    Brownian = 4,
    EdgeMask = 5,
    PCGJunoFractalNoise2DMode_MAX = 6
};

enum PCGNormalToDensityMode
{
    Set = 0,
    Minimum = 1,
    Maximum = 2,
    Add = 3,
    Subtract = 4,
    Multiply = 5,
    Divide = 6,
    PCGNormalToDensityMode_MAX = 7
};

enum PCGSpatialNoiseMask2DMode
{
    Perlin = 0,
    Caustic = 1,
    FractionalBrownian = 2,
    PCGSpatialNoiseMask2DMode_MAX = 3
};

enum PCGSpatialNoiseMode
{
    Perlin2D = 0,
    Caustic2D = 1,
    Voronoi2D = 2,
    FractionalBrownian2D = 3,
    EdgeMask2D = 4,
    PCGSpatialNoiseMode_MAX = 5
};

enum ParticleReplayState
{
    PRS_Disabled = 0,
    PRS_Capturing = 1,
    PRS_Replaying = 2,
    PRS_MAX = 3
};

enum ParticleSystemLODMethod
{
    PARTICLESYSTEMLODMETHOD_Automatic = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
    PARTICLESYSTEMLODMETHOD_MAX = 3
};

enum PingCommandType
{
    GoTo = 0,
    BackToMe = 1,
    BackToDefault = 2,
    HoldPosition = 3,
    Revive = 4,
    Dismiss = 5,
    Item = 6,
    Attack = 7,
    Invalid = 8,
    MAX = 9
};

enum RankingType
{
    StandardCompetition = 0,
    ModifiedCompetition = 1,
    RankingType_MAX = 2
};

enum ReverbPreset
{
    REVERB_Default = 0,
    REVERB_Bathroom = 1,
    REVERB_StoneRoom = 2,
    REVERB_Auditorium = 3,
    REVERB_ConcertHall = 4,
    REVERB_Cave = 5,
    REVERB_Hallway = 6,
    REVERB_StoneCorridor = 7,
    REVERB_Alley = 8,
    REVERB_Forest = 9,
    REVERB_City = 10,
    REVERB_Mountains = 11,
    REVERB_Quarry = 12,
    REVERB_Plain = 13,
    REVERB_ParkingLot = 14,
    REVERB_SewerPipe = 15,
    REVERB_Underwater = 16,
    REVERB_SmallRoom = 17,
    REVERB_MediumRoom = 18,
    REVERB_LargeRoom = 19,
    REVERB_MediumHall = 20,
    REVERB_LargeHall = 21,
    REVERB_Plate = 22,
    REVERB_MAX = 23
};

enum SeatStatusType
{
    Driver = 0,
    Passenger = 1,
    Gunner = 2,
    Spotter = 3,
    SeatStatusType_MAX = 4
};

enum SegmentPathStatus
{
    INVALID = 0,
    CALCULATING = 1,
    RECALCULATING_PENDING = 2,
    PATH_FAILED = 3,
    PATH_SUCCESS = 4,
    SegmentPathStatus_MAX = 5
};

enum SkeletalMeshOptimizationImportance
{
    SMOI_Off = 0,
    SMOI_Lowest = 1,
    SMOI_Low = 2,
    SMOI_Normal = 3,
    SMOI_High = 4,
    SMOI_Highest = 5,
    SMOI_MAX = 6
};

enum SkeletalMeshOptimizationType
{
    SMOT_NumOfTriangles = 0,
    SMOT_MaxDeviation = 1,
    SMOT_TriangleOrDeviation = 2,
    SMOT_MAX = 3
};

enum SkeletalMeshTerminationCriterion
{
    SMTC_NumOfTriangles = 0,
    SMTC_NumOfVerts = 1,
    SMTC_TriangleOrVert = 2,
    SMTC_AbsNumOfTriangles = 3,
    SMTC_AbsNumOfVerts = 4,
    SMTC_AbsTriangleOrVert = 5,
    SMTC_MAX = 6
};

enum SwitchSeatType
{
    ToDriver = 0,
    ToPassenger = 1,
    ToGunner = 2,
    ToSpotter = 3,
    SwitchSeatType_MAX = 4
};

enum TInteractionType
{
    IT_NoInteraction = 0,
    IT_Simple = 1,
    IT_LongPress = 2,
    IT_BuildingEdit = 3,
    IT_BuildingImprovement = 4,
    IT_TrapPlacement = 5,
    IT_MAX = 6
};

enum TextureAddress
{
    TA_Wrap = 0,
    TA_Clamp = 1,
    TA_Mirror = 2,
    TA_MAX = 3
};

enum TextureCompressionSettings
{
    TC_Default = 0,
    TC_Normalmap = 1,
    TC_Masks = 2,
    TC_Grayscale = 3,
    TC_Displacementmap = 4,
    TC_VectorDisplacementmap = 5,
    TC_HDR = 6,
    TC_EditorIcon = 7,
    TC_Alpha = 8,
    TC_DistanceFieldFont = 9,
    TC_HDR_Compressed = 10,
    TC_BC7 = 11,
    TC_HalfFloat = 12,
    TC_LQ = 13,
    TC_EncodedReflectionCapture = 14,
    TC_SingleFloat = 15,
    TC_HDR_F32 = 16,
    TC_MAX = 17
};

enum TextureCookPlatformTilingSettings
{
    TCPTS_FromTextureGroup = 0,
    TCPTS_Tile = 1,
    TCPTS_DoNotTile = 2,
    TCPTS_MAX = 3
};

enum TextureFilter
{
    TF_Nearest = 0,
    TF_Bilinear = 1,
    TF_Trilinear = 2,
    TF_Default = 3,
    TF_MAX = 4
};

enum TextureGroup
{
    TEXTUREGROUP_World = 0,
    TEXTUREGROUP_WorldNormalMap = 1,
    TEXTUREGROUP_WorldSpecular = 2,
    TEXTUREGROUP_Character = 3,
    TEXTUREGROUP_CharacterNormalMap = 4,
    TEXTUREGROUP_CharacterSpecular = 5,
    TEXTUREGROUP_Weapon = 6,
    TEXTUREGROUP_WeaponNormalMap = 7,
    TEXTUREGROUP_WeaponSpecular = 8,
    TEXTUREGROUP_Vehicle = 9,
    TEXTUREGROUP_VehicleNormalMap = 10,
    TEXTUREGROUP_VehicleSpecular = 11,
    TEXTUREGROUP_Cinematic = 12,
    TEXTUREGROUP_Effects = 13,
    TEXTUREGROUP_EffectsNotFiltered = 14,
    TEXTUREGROUP_Skybox = 15,
    TEXTUREGROUP_UI = 16,
    TEXTUREGROUP_Lightmap = 17,
    TEXTUREGROUP_RenderTarget = 18,
    TEXTUREGROUP_MobileFlattened = 19,
    TEXTUREGROUP_ProcBuilding_Face = 20,
    TEXTUREGROUP_ProcBuilding_LightMap = 21,
    TEXTUREGROUP_Shadowmap = 22,
    TEXTUREGROUP_ColorLookupTable = 23,
    TEXTUREGROUP_Terrain_Heightmap = 24,
    TEXTUREGROUP_Terrain_Weightmap = 25,
    TEXTUREGROUP_Bokeh = 26,
    TEXTUREGROUP_IESLightProfile = 27,
    TEXTUREGROUP_Pixels2D = 28,
    TEXTUREGROUP_HierarchicalLOD = 29,
    TEXTUREGROUP_Impostor = 30,
    TEXTUREGROUP_ImpostorNormalDepth = 31,
    TEXTUREGROUP_8BitData = 32,
    TEXTUREGROUP_16BitData = 33,
    TEXTUREGROUP_Project01 = 34,
    TEXTUREGROUP_Project02 = 35,
    TEXTUREGROUP_Project03 = 36,
    TEXTUREGROUP_Project04 = 37,
    TEXTUREGROUP_Project05 = 38,
    TEXTUREGROUP_Project06 = 39,
    TEXTUREGROUP_Project07 = 40,
    TEXTUREGROUP_Project08 = 41,
    TEXTUREGROUP_Project09 = 42,
    TEXTUREGROUP_Project10 = 43,
    TEXTUREGROUP_Project11 = 44,
    TEXTUREGROUP_Project12 = 45,
    TEXTUREGROUP_Project13 = 46,
    TEXTUREGROUP_Project14 = 47,
    TEXTUREGROUP_Project15 = 48,
    TEXTUREGROUP_Project16 = 49,
    TEXTUREGROUP_Project17 = 50,
    TEXTUREGROUP_Project18 = 51,
    TEXTUREGROUP_Project19 = 52,
    TEXTUREGROUP_Project20 = 53,
    TEXTUREGROUP_Project21 = 54,
    TEXTUREGROUP_Project22 = 55,
    TEXTUREGROUP_Project23 = 56,
    TEXTUREGROUP_Project24 = 57,
    TEXTUREGROUP_Project25 = 58,
    TEXTUREGROUP_Project26 = 59,
    TEXTUREGROUP_Project27 = 60,
    TEXTUREGROUP_Project28 = 61,
    TEXTUREGROUP_Project29 = 62,
    TEXTUREGROUP_Project30 = 63,
    TEXTUREGROUP_Project31 = 64,
    TEXTUREGROUP_Project32 = 65,
    TEXTUREGROUP_MAX = 66
};

enum TextureMipGenSettings
{
    TMGS_FromTextureGroup = 0,
    TMGS_SimpleAverage = 1,
    TMGS_Sharpen0 = 2,
    TMGS_Sharpen1 = 3,
    TMGS_Sharpen2 = 4,
    TMGS_Sharpen3 = 5,
    TMGS_Sharpen4 = 6,
    TMGS_Sharpen5 = 7,
    TMGS_Sharpen6 = 8,
    TMGS_Sharpen7 = 9,
    TMGS_Sharpen8 = 10,
    TMGS_Sharpen9 = 11,
    TMGS_Sharpen10 = 12,
    TMGS_NoMipmaps = 13,
    TMGS_LeaveExistingMips = 14,
    TMGS_Blur1 = 15,
    TMGS_Blur2 = 16,
    TMGS_Blur3 = 17,
    TMGS_Blur4 = 18,
    TMGS_Blur5 = 19,
    TMGS_Unfiltered = 20,
    TMGS_Angular = 21,
    TMGS_MAX = 22
};

enum UCPTypes
{
    UCPAudio = 0,
    UCPVideo = 1,
    UCPBoth = 2,
    UCPNone = 3,
    UCPTypes_MAX = 4
};

enum UDLSSMode
{
    Off = 0,
    Auto = 1,
    UltraQuality = 2,
    Quality = 3,
    Balanced = 4,
    Performance = 5,
    UltraPerformance = 6,
    UDLSSMode_MAX = 7
};

enum UDLSSSupport
{
    Supported = 0,
    NotSupported = 1,
    NotSupportedIncompatibleHardware = 2,
    NotSupportedDriverOutOfDate = 3,
    NotSupportedOperatingSystemOutOfDate = 4,
    NotSupportedByPlatformAtBuildTime = 5,
    NotSupportedIncompatibleAPICaptureToolActive = 6,
    UDLSSSupport_MAX = 7
};

enum UFortActivatablePrePostRollStates
{
    None = 0,
    PreRoll = 1,
    PreRollComplete = 2,
    PostRoll = 3,
    PostRollComplete = 4,
    BeginningStepOne = 5,
    BeginningStepTwo = 6,
    Middle = 7,
    End = 8,
    UFortActivatablePrePostRollStates_MAX = 9
};

enum UFortActivatableVideoEvents
{
    Finished = 0,
    Skipped = 1,
    UFortActivatableVideoEvents_MAX = 2
};

enum UFortActivatableVideoPanelEvents
{
    Finished = 0,
    Skipped = 1,
    UFortActivatableVideoPanelEvents_MAX = 2
};

enum UFortMatchmakingKnobsDataSource
{
    None = 0,
    Playlist = 1,
    Mutator = 2,
    GameMode = 3,
    Permissions = 4,
    UISettings = 5,
    CreativeGlobalOption = 6,
    MatchmakingGenerated = 7,
    Debug = 8,
    Max = 9
};

enum UFortVideoWidgetBaseEvents
{
    Finished = 0,
    Skipped = 1,
    UFortVideoWidgetBaseEvents_MAX = 2
};

enum UFortVoiceReportIntroModalType
{
    IsFreshAccount = 0,
    IsUnder18 = 1,
    Over18VoiceChatEnabled = 2,
    Over18VoiceChatDisabled = 3,
    UFortVoiceReportIntroModalType_MAX = 4
};

enum UPFWCheat_RootArea
{
    Player = 0,
    WorldForPlayer = 1,
    World = 2,
    UPFWCheat_MAX = 3
};

enum UStreamlineDLSSGMode
{
    Off = 0,
    On = 1,
    UStreamlineDLSSGMode_MAX = 2
};

enum UStreamlineFeature
{
    DLSSG = 0,
    Reflex = 1,
    Count = 2,
    UStreamlineFeature_MAX = 3
};

enum UStreamlineFeatureRequirementsFlags
{
    None = 0,
    D3D11Supported = 1,
    D3D12Supported = 2,
    VulkanSupported = 3,
    VSyncOffRequired = 4,
    HardwareSchedulingRequired = 5,
    UStreamlineFeatureRequirementsFlags_MAX = 6
};

enum UStreamlineFeatureSupport
{
    Supported = 0,
    NotSupported = 1,
    NotSupportedIncompatibleHardware = 2,
    NotSupportedDriverOutOfDate = 3,
    NotSupportedOperatingSystemOutOfDate = 4,
    NotSupportedHardewareSchedulingDisabled = 5,
    NotSupportedByRHI = 6,
    NotSupportedByPlatformAtBuildTime = 7,
    NotSupportedIncompatibleAPICaptureToolActive = 8,
    UStreamlineFeatureSupport_MAX = 9
};

enum UStreamlineReflexMode
{
    Disabled = 0,
    Enabled = 1,
    EnabledPlusBoost = 2,
    UStreamlineReflexMode_MAX = 3
};

enum VideoWidgetPerfControl
{
    None = 0,
    WorldRendering = 1,
    ShaderCache = 2,
    PhysicalSizeLimit = 3,
    GarbageCollection = 4,
    VideoWidgetPerfControl_MAX = 5
};
