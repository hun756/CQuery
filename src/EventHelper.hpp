#ifndef CQUERY_EVENT_HELPER_fi163x
#define CQUERY_EVENT_HELPER_fi163x

enum class CQueryEventHelper
{
    Abort,
    AnimationCancel,
    AnimationEnd,
    AnimationIteration,
    AnimationStart,
    AuxClick,
    BeforeInput,
    Blur,
    Canplay,
    CanPlayThrough,
    Change,
    Click,
    Close,
    CompositionEnd,
    CompositionStart,
    CompositionUpdate,
    ContextMenu,
    Copy,
    CueChange,
    Cut,
    DblClick,
    Drag,
    DragEnd,
    Dragenter,
    DragLeave,
    DragOver,
    DragStart,
    Drop,
    DurationChange,
    Emptied,
    Ended,
    Error,
    Focus,
    FocusIn,
    FocusOut,
    FormData,
    FullScreenChange,
    FullScreenError,
    GotPointerCapture,
    Input,
    Invalid,
    Keydown,
    Keypress,
    Keyup,
    Load,
    LoadMetadata,
    LoadMetadataData,
    LoadStart,
    LostPointerCapture,
    MouseDown,
    MouseEnter,
    MouseLeave,
    MouseMove,
    MouseOut,
    MouseOver,
    MouseUp,
    Paste,
    Pause,
    Play,
    Playing,
    PointerCancel,
    PointerDown,
    PointerCenter,
    PointerLeave,
    PointerLockChange,
    PointerLockError,
    PointerMove,
    PointerOut,
    PointerUp,
    Progress,
    RateChange,
    ReadyStateChange,
    Reset,
    Resize,
    Scroll,
    SecurityPolicyViolation,
    Seekend,
    Seeking,
    Select,
    SelectionChange,
    SelectStart,
    SlotChange,
    Stalled,
    Submit,
    Suspend,
    TimeUpdate,
    Toggle,
    TouchChannel,
    TouchEnd,
    TouchMove,
    TouchStart,
    TransitionCancel,
    TransitionEnd,
    TransitionRun,
    TransitionStart,
    VisibilityChange,
    VolumeChange,
    Waiting,
    WebkitAnimationEnd,
    WebkitAnimationIteration,
    WebkitAnimationStart
};

const char* evetTypeResolver(CQueryEventHelper eventType)
{
    switch (eventType) {
        case CQueryEventHelper::Abort:                      { return "abort";                       }
        case CQueryEventHelper::AnimationCancel:            { return "animationcancel";             }
        case CQueryEventHelper::AnimationEnd:               { return "animationend";                }
        case CQueryEventHelper::AnimationIteration:         { return "animationiteration";          }
        case CQueryEventHelper::AnimationStart:             { return "animationstart";              }
        case CQueryEventHelper::AuxClick:                   { return "auxclick";                    }
        case CQueryEventHelper::BeforeInput:                { return "beforeinput";                 }
        case CQueryEventHelper::Blur:                       { return "blur";                        }
        case CQueryEventHelper::Canplay:                    { return "canplay";                     }
        case CQueryEventHelper::CanPlayThrough:             { return "canplaythrough";              }
        case CQueryEventHelper::Change:                     { return "change";                      }
        case CQueryEventHelper::Click:                      { return "click";                       }
        case CQueryEventHelper::Close:                      { return "close";                       }
        case CQueryEventHelper::CompositionEnd:             { return "compositionend";              }
        case CQueryEventHelper::CompositionStart:           { return "compositionstart";            }
        case CQueryEventHelper::CompositionUpdate:          { return "compositionupdate";           }
        case CQueryEventHelper::ContextMenu:                { return "contextmenu";                 }
        case CQueryEventHelper::Copy:                       { return "copy";                        }
        case CQueryEventHelper::CueChange:                  { return "cuechange";                   }
        case CQueryEventHelper::Cut:                        { return "cut";                         }
        case CQueryEventHelper::DblClick:                   { return "dblclick";                    }
        case CQueryEventHelper::Drag:                       { return "drag";                        }
        case CQueryEventHelper::DragEnd:                    { return "dragend";                     }
        case CQueryEventHelper::Dragenter:                  { return "dragenter";                   }
        case CQueryEventHelper::DragLeave:                  { return "dragleave";                   }
        case CQueryEventHelper::DragOver:                   { return "dragover";                    }
        case CQueryEventHelper::DragStart:                  { return "dragstart";                   }
        case CQueryEventHelper::Drop:                       { return "drop";                        }
        case CQueryEventHelper::DurationChange:             { return "durationchange";              }
        case CQueryEventHelper::Emptied:                    { return "emptied";                     }
        case CQueryEventHelper::Ended:                      { return "ended";                       }
        case CQueryEventHelper::Error:                      { return "error";                       }
        case CQueryEventHelper::Focus:                      { return "focus";                       }
        case CQueryEventHelper::FocusIn:                    { return "focusin";                     }
        case CQueryEventHelper::FocusOut:                   { return "focusout";                    }
        case CQueryEventHelper::FormData:                   { return "formdata";                    }
        case CQueryEventHelper::FullScreenChange:           { return "fullscreenchange";            }
        case CQueryEventHelper::FullScreenError:            { return "fullscreenerror";             }
        case CQueryEventHelper::GotPointerCapture:          { return "gotpointercapture";           }
        case CQueryEventHelper::Input:                      { return "input";                       }
        case CQueryEventHelper::Invalid:                    { return "invalid";                     }
        case CQueryEventHelper::Keydown:                    { return "keydown";                     }
        case CQueryEventHelper::Keypress:                   { return "keypress";                    }
        case CQueryEventHelper::Keyup:                      { return "keyup";                       }
        case CQueryEventHelper::Load:                       { return "load";                        }
        case CQueryEventHelper::LoadMetadata:               { return "loadmetadata";                }
        case CQueryEventHelper::LoadMetadataData:           { return "loadmetadatadata";            }
        case CQueryEventHelper::LoadStart:                  { return "loadstart";                   }
        case CQueryEventHelper::LostPointerCapture:         { return "lostpointercapture";          }
        case CQueryEventHelper::MouseDown:                  { return "mousedown";                   }
        case CQueryEventHelper::MouseEnter:                 { return "mouseenter";                  }
        case CQueryEventHelper::MouseLeave:                 { return "mouseleave";                  }
        case CQueryEventHelper::MouseMove:                  { return "mousemove";                   }
        case CQueryEventHelper::MouseOut:                   { return "mouseout";                    }
        case CQueryEventHelper::MouseOver:                  { return "mouseover";                   }
        case CQueryEventHelper::MouseUp:                    { return "mouseup";                     }
        case CQueryEventHelper::Paste:                      { return "paste";                       }
        case CQueryEventHelper::Pause:                      { return "pause";                       }
        case CQueryEventHelper::Play:                       { return "play";                        }
        case CQueryEventHelper::Playing:                    { return "playing";                     }
        case CQueryEventHelper::PointerCancel:              { return "pointercancel";               }
        case CQueryEventHelper::PointerDown:                { return "pointerdown";                 }
        case CQueryEventHelper::PointerCenter:              { return "pointercenter";               }
        case CQueryEventHelper::PointerLeave:               { return "pointerleave";                }
        case CQueryEventHelper::PointerLockChange:          { return "pointerlockchange";           }
        case CQueryEventHelper::PointerLockError:           { return "pointerlockerror";            }
        case CQueryEventHelper::PointerMove:                { return "pointermove";                 }
        case CQueryEventHelper::PointerOut:                 { return "pointerout";                  }
        case CQueryEventHelper::PointerUp:                  { return "pointerup";                   }
        case CQueryEventHelper::Progress:                   { return "progress";                    }
        case CQueryEventHelper::RateChange:                 { return "ratechange";                  }
        case CQueryEventHelper::ReadyStateChange:           { return "readystatechange";            }
        case CQueryEventHelper::Reset:                      { return "reset";                       }
        case CQueryEventHelper::Resize:                     { return "resize";                      }
        case CQueryEventHelper::Scroll:                     { return "scroll";                      }
        case CQueryEventHelper::SecurityPolicyViolation:    { return "securitypolicyviolation";     }
        case CQueryEventHelper::Seekend:                    { return "seekend";                     }
        case CQueryEventHelper::Seeking:                    { return "seeking";                     }
        case CQueryEventHelper::Select:                     { return "select";                      }
        case CQueryEventHelper::SelectionChange:            { return "selectionchange";             }
        case CQueryEventHelper::SelectStart:                { return "selectstart";                 }
        case CQueryEventHelper::SlotChange:                 { return "slotchange";                  }
        case CQueryEventHelper::Stalled:                    { return "stalled";                     }
        case CQueryEventHelper::Submit:                     { return "submit";                      }
        case CQueryEventHelper::Suspend:                    { return "suspend";                     }
        case CQueryEventHelper::TimeUpdate:                 { return "timeupdate";                  }
        case CQueryEventHelper::Toggle:                     { return "toggle";                      }
        case CQueryEventHelper::TouchChannel:               { return "touchchannel";                }
        case CQueryEventHelper::TouchEnd:                   { return "touchend";                    }
        case CQueryEventHelper::TouchMove:                  { return "touchmove";                   }
        case CQueryEventHelper::TouchStart:                 { return "touchstart";                  }
        case CQueryEventHelper::TransitionCancel:           { return "transitioncancel";            }
        case CQueryEventHelper::TransitionEnd:              { return "transitionend";               }
        case CQueryEventHelper::TransitionRun:              { return "transitionrun";               }
        case CQueryEventHelper::TransitionStart:            { return "transitionstart";             }
        case CQueryEventHelper::VisibilityChange:           { return "visibilitychange";            }
        case CQueryEventHelper::VolumeChange:               { return "volumechange";                }
        case CQueryEventHelper::Waiting:                    { return "waiting";                     }
        case CQueryEventHelper::WebkitAnimationEnd:         { return "webkitanimationend";          }
        case CQueryEventHelper::WebkitAnimationIteration:   { return "webkitanimationiteration";    }
        case CQueryEventHelper::WebkitAnimationStart:       { return "webkitanimationstart";        }
        default:
        break;
    }

    return "";
}

#endif /* end of include guard : CQUERY_EVENT_HELPER_fi163x */