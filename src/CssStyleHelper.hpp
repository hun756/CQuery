#ifndef CQUERY_CSS_STYLE_HELPER_rz41fr
#define CQUERY_CSS_STYLE_HELPER_rz41fr

#include <cheerp/clientlib.h>

enum class CSSStyleHelper
{
    AnimationFillMode,
    AnimationIterationCount,
    AnimationName,
    AnimationPlayState,
    AnimationTimingFunction,
    BackfaceVisibility,
    Background,
    BackgroundAttachment,
    BackgroundClip,
    BackgroundColor,
    BackgroundImage,
    BackgroundOrigin,
    BackgroundPosition,
    BackgroundPositionX,
    BackgroundPositionY,
    BackgroundRepeat,
    BackgroundSize,
    BaselineShift,
    Border,
    BorderBottom,
    BorderBottomColor,
    BorderBottomLeftRadius,
    BorderBottomRightRadius,
    BorderBottomStyle,
    BorderBottomWidth,
    BorderCollapse,
    BorderColor,
    BorderImage,
    BorderImageOutset,
    BorderImageRepeat,
    BorderImageSlice,
    BorderImageWidth,
    BorderLeft,
    BorderLeftColor,
    BorderLeftStyle,
    BorderLeftWidth,
    BorderRadius,
    BorderRight,
    BorderRightColor,
    BorderRightStyle,
    BorderRightWidth,
    BorderSpacing,
    BorderStyle,
    BorderTop,
    BorderTopColor,
    BorderTopLeftRadius,
    BorderTopRightRadius,
    BorderTopStyle,
    BorderTopWidth,
    BorderWidth,
    Bottom,
    BoxShadow,
    BoxSizing,
    BreakAfter,
    BreakBefore,
    BreakInside,
    CaptionSide,
    Clear,
    Clip,
    ClipPath,
    ClipRule,
    Color,
    ColorInterpolationFilters,
    ColumnCount,
    ColumnFill,
    ColumnGap,
    ColumnRule,
    ColumnRuleColor,
    ColumnRuleStyle,
    ColumnRuleWidth,
    ColumnSpan,
    ColumnWidth,
    Columns,
    Content,
    CounterIncrement,
    CounterReset,
    CssFloat,
    CssText,
    Cursor,
    Direction,
    Display,
    DominantBaseline,
    EmptyCells,
    EnableBackground,
    Fill,
    FillOpacity,
    FillRule,
    Filter,
    Flex,
    FlexBasis,
    FlexDirection,
    FlexFlow,
    FlexGrow,
    FlexShrink,
    FlexWrap,
    FloodColor,
    FloodOpacity,
    Font,
    FontFamily,
    FontFeatureSettings,
    FontSize,
    FontSizeadjust,
    FontStretch,
    FontStyle,
    FontVariant,
    FontWeight,
    Gap,
    GlyphOrientationHorizontal,
    GlyphOrientationVertical,
    Grid,
    GridArea,
    GridAutoColumns,
    GridAutoFlow,
    GridAutoRows,
    GridColumn,
    GridColumnEnd,
    GridColumnGap,
    GridColumnStart,
    GridGap,
    GridRow,
    GridRowend,
    GridRowgap,
    GridRowstart,
    GridTemplate,
    GridTemplateAreas,
    GridTemplateColumns,
    GridTemplateRows,
    Height,
    ImeMode,
    JustifyContent,
    JustifyItems,
    JustifySelf,
    Kerning,
    LayoutGrid,
    LayoutGridChar,
    LayoutGridLine,
    LayoutGridMode,
    LayoutGridType,
    Left,
    Lengt,
    LetterSpacing,
    LightingColor,
    LineBreak,
    LineHeight,
    ListStyle,
    ListStyleImage,
    ListStylePosition,
    ListStyleType,
    Margin,
    MarginBottom,
    MarginLeft,
    MarginRight,
    MarginTop,
    Marker,
    MarkerEnd,
    MarkerMid,
    MarkerStart,
    Mask,
    MaskImage,
    MaxHeight,
    MaxWidth,
    MinHeight,
    MinWidth,
    MsContentZoomChaining,
    MsContentZoomLimit,
    MsContentZoomLimitMax,
    MsContentZoomLimitMin,
    MsContentZoomSnap,
    MsContentZoomSnapPoints,
    MsContentZoomSnapType,
    MsContentZooming,
    MsFlowFrom,
    MsFlowInto,
    MsFontFeatureSettings,
    MsGridColumn,
    MsGridColumnAlign,
    MsGridColumnSpan,
    MsGridColumns,
    MsGridRow,
    MsGridRowAlign,
    MsGridRowSpan,
    MsGridRows,
    MsHighContrastAdjust,
    MsHyphenateLimitChars,
    MsHyphenateLimitLines,
    MsHyphenateLimitZone,
    MsHyphens,
    MsImeAlign,
    MsOverflowStyle,
    MsScrollChaining,
    MsScrollLimit,
    MsScrollLimitXMax,
    MsScrollLimitXMin,
    MsScrollLimitYMax,
    MsScrollLimitYMin,
    MsScrollRails,
    MsScrollSnapPointsX,
    MsScrollSnapPointsY,
    MsScrollSnapType,
    MsScrollSnapX,
    MsScrollSnapY,
    MsScrollTranslation,
    MsTextCombineHorizontal,
    MsTextSizeAdjust,
    MsTouchAction,
    MsTouchSelect,
    MsUserSelect,
    MsWrapFlow,
    MsWrapMargin,
    MsWrapThrough,
    ObjectFit,
    ObjectPosition,
    Opacity,
    Order,
    Orphans,
    Outline,
    OutlineColor,
    OutlineOffset,
    OutlineStyle,
    OutlineWidth,
    Overflow,
    OverflowX,
    OverflowY,
    Padding,
    PaddingBottom,
    PaddingLeft,
    PaddingRight,
    PaddingTop,
    PageBreakAfter,
    PageBreakBefore,
    PageBreakInside,
    ParentRul,
    PenAction,
    Perspective,
    PerspectiveOrigin,
    PointerEvents,
    Position,
    Quotes,
    Resize,
    Right,
    Rotate,
    RowGap,
    RubyAlign,
    RubyOverhang,
    RubyPosition,
    Scale,
    StopColor,
    StopOpacity,
    Stroke,
    StrokeDasharray,
    StrokeDashoffset,
    StrokeLinecap,
    StrokeLinejoin,
    StrokeMiterlimit,
    StrokeOpacity,
    StrokeWidth,
    TableLayout,
    TextAlign,
    TextAlignLast,
    TextAnchor,
    TextCombineUpright,
    TextDecoration,
    TextIndent,
    TextJustify,
    TextKashida,
    TextKashidaSpace,
    TextOverflow,
    TextShadow,
    TextTransform,
    TextUnderlinePosition,
    Top,
    TouchAction,
    Transform,
    TransformOrigin,
    TransformStyle,
    Transition,
    TransitionDelay,
    TransitionDuration,
    TransitionProperty,
    TransitionTimingFunction,
    Translate,
    UnicodeBidi,
    UserSelect,
    VerticalAlign,
    Visibility,
    WebkitAlignContent,
    WebkitAlignItems,
    WebkitAlignSelf,
    WebkitAnimation,
    WebkitAnimationDelay,
    WebkitAnimationDirection,
    WebkitAnimationDuration,
    WebkitAnimationFillMode,
    WebkitAnimationIterationCount,
    WebkitAnimationName,
    WebkitAnimationPlayState,
    WebkitAnimationTimingFunction,
    WebkitAppearance,
    WebkitBackfaceVisibility,
    WebkitBackgroundClip,
    WebkitBackgroundOrigin,
    WebkitBackgroundSize,
    WebkitBorderBottomLeftRadius,
    WebkitBorderBottomRightRadius,
    WebkitBorderImage,
    WebkitBorderRadius,
    WebkitBorderTopLeftRadius,
    WebkitBorderTopRightRadius,
    WebkitBoxAlign,
    WebkitBoxDirection,
    WebkitBoxFlex,
    WebkitBoxOrdinalGroup,
    WebkitBoxOrient,
    WebkitBoxPack,
    WebkitBoxSizing,
    WebkitColumnBreakAfter,
    WebkitColumnBreakBefore,
    WebkitColumnBreakInside,
    WebkitColumnCount,
    WebkitColumnGap,
    WebkitColumnRule,
    WebkitColumnRuleColor,
    WebkitColumnRuleStyle,
    WebkitColumnRuleWidth,
    WebkitColumnSpan,
    WebkitColumnWidth,
    WebkitColumns,
    WebkitFilter,
    WebkitFlex,
    WebkitFlexBasis,
    WebkitFlexDirection,
    WebkitFlexFlow,
    WebkitFlexGrow,
    WebkitFlexShrink,
    WebkitFlexWrap,
    WebkitJustifyContent,
    WebkitOrder,
    WebkitPerspective,
    WebkitPerspectiveOrigin,
    WebkitTapHighlightColor,
    WebkitTextFillColor,
    WebkitTextsizeAdjust,
    WebkitTextstroke,
    WebkitTextStrokeColor,
    WebkitTextStrokeWidth,
    WebkitTransform,
    WebkitTransformOrigin,
    WebkitTransformStyle,
    WebkitTransition,
    WebkitTransitionDelay,
    WebkitTransitionDuration,
    WebkitTransitionProperty,
    WebkitTransitionTimingFunction,
    WebkitUserModify,
    WebkitUserSelect,
    WebkitWritinGmode,
    WhiteSpace,
    Widows,
    Width,
    WordBreak,
    WordSpacing,
    WordWrap,
    WritingMode,
    ZIndex,
    Zoom
};

constexpr void addCssStyle(client::ElementCSSInlineStyle* element, CSSStyleHelper cssEnumValue, const client::String& value)
{
    using namespace client;
    switch (cssEnumValue)
    {
        case CSSStyleHelper::AnimationFillMode:                 { element->get_style()->set_animationFillMode(value);                   }   break;
        case CSSStyleHelper::AnimationIterationCount:           { element->get_style()->set_animationIterationCount(value);             }   break;
        case CSSStyleHelper::AnimationName:                     { element->get_style()->set_animationName(value);                       }   break;
        case CSSStyleHelper::AnimationPlayState:                { element->get_style()->set_animationPlayState(value);                  }   break;
        case CSSStyleHelper::AnimationTimingFunction:           { element->get_style()->set_animationTimingFunction(value);             }   break;
        case CSSStyleHelper::BackfaceVisibility:                { element->get_style()->set_backfaceVisibility(value);                  }   break;
        case CSSStyleHelper::Background:                        { element->get_style()->set_background(value);                          }   break;
        case CSSStyleHelper::BackgroundAttachment:              { element->get_style()->set_backgroundAttachment(value);                }   break;
        case CSSStyleHelper::BackgroundClip:                    { element->get_style()->set_backgroundClip(value);                      }   break;
        case CSSStyleHelper::BackgroundColor:                   { element->get_style()->set_backgroundColor(value);                     }   break;
        case CSSStyleHelper::BackgroundImage:                   { element->get_style()->set_backgroundImage(value);                     }   break;
        case CSSStyleHelper::BackgroundOrigin:                  { element->get_style()->set_backgroundOrigin(value);                    }   break;
        case CSSStyleHelper::BackgroundPosition:                { element->get_style()->set_backgroundPosition(value);                  }   break;
        case CSSStyleHelper::BackgroundPositionX:               { element->get_style()->set_backgroundPositionX(value);                 }   break;
        case CSSStyleHelper::BackgroundPositionY:               { element->get_style()->set_backgroundPositionY(value);                 }   break;
        case CSSStyleHelper::BackgroundRepeat:                  { element->get_style()->set_backgroundRepeat(value);                    }   break;
        case CSSStyleHelper::BackgroundSize:                    { element->get_style()->set_backgroundSize(value);                      }   break;
        case CSSStyleHelper::BaselineShift:                     { element->get_style()->set_baselineShift(value);                       }   break;
        case CSSStyleHelper::Border:                            { element->get_style()->set_border(value);                              }   break;
        case CSSStyleHelper::BorderBottom:                      { element->get_style()->set_borderBottom(value);                        }   break;
        case CSSStyleHelper::BorderBottomColor:                 { element->get_style()->set_borderBottomColor(value);                   }   break;
        case CSSStyleHelper::BorderBottomLeftRadius:            { element->get_style()->set_borderBottomLeftRadius(value);              }   break;
        case CSSStyleHelper::BorderBottomRightRadius:           { element->get_style()->set_borderBottomRightRadius(value);             }   break;
        case CSSStyleHelper::BorderBottomStyle:                 { element->get_style()->set_borderBottomStyle(value);                   }   break;
        case CSSStyleHelper::BorderBottomWidth:                 { element->get_style()->set_borderBottomWidth(value);                   }   break;
        case CSSStyleHelper::BorderCollapse:                    { element->get_style()->set_borderCollapse(value);                      }   break;
        case CSSStyleHelper::BorderColor:                       { element->get_style()->set_borderColor(value);                         }   break;
        case CSSStyleHelper::BorderImage:                       { element->get_style()->set_borderImage(value);                         }   break;
        case CSSStyleHelper::BorderImageOutset:                 { element->get_style()->set_borderImageOutset(value);                   }   break;
        case CSSStyleHelper::BorderImageRepeat:                 { element->get_style()->set_borderImageRepeat(value);                   }   break;
        case CSSStyleHelper::BorderImageSlice:                  { element->get_style()->set_borderImageSlice(value);                    }   break;
        case CSSStyleHelper::BorderImageWidth:                  { element->get_style()->set_borderImageWidth(value);                    }   break;
        case CSSStyleHelper::BorderLeft:                        { element->get_style()->set_borderLeft(value);                          }   break;
        case CSSStyleHelper::BorderLeftColor:                   { element->get_style()->set_borderLeftColor(value);                     }   break;
        case CSSStyleHelper::BorderLeftStyle:                   { element->get_style()->set_borderLeftStyle(value);                     }   break;
        case CSSStyleHelper::BorderLeftWidth:                   { element->get_style()->set_borderLeftWidth(value);                     }   break;
        case CSSStyleHelper::BorderRadius:                      { element->get_style()->set_borderRadius(value);                        }   break;
        case CSSStyleHelper::BorderRight:                       { element->get_style()->set_borderRight(value);                         }   break;
        case CSSStyleHelper::BorderRightColor:                  { element->get_style()->set_borderRightColor(value);                    }   break;
        case CSSStyleHelper::BorderRightStyle:                  { element->get_style()->set_borderRightStyle(value);                    }   break;
        case CSSStyleHelper::BorderRightWidth:                  { element->get_style()->set_borderRightWidth(value);                    }   break;
        case CSSStyleHelper::BorderSpacing:                     { element->get_style()->set_borderSpacing(value);                       }   break;
        case CSSStyleHelper::BorderStyle:                       { element->get_style()->set_borderStyle(value);                         }   break;
        case CSSStyleHelper::BorderTop:                         { element->get_style()->set_borderTop(value);                           }   break;
        case CSSStyleHelper::BorderTopColor:                    { element->get_style()->set_borderTopColor(value);                      }   break;
        case CSSStyleHelper::BorderTopLeftRadius:               { element->get_style()->set_borderTopLeftRadius(value);                 }   break;
        case CSSStyleHelper::BorderTopRightRadius:              { element->get_style()->set_borderTopRightRadius(value);                }   break;
        case CSSStyleHelper::BorderTopStyle:                    { element->get_style()->set_borderTopStyle(value);                      }   break;
        case CSSStyleHelper::BorderTopWidth:                    { element->get_style()->set_borderTopWidth(value);                      }   break;
        case CSSStyleHelper::BorderWidth:                       { element->get_style()->set_borderWidth(value);                         }   break;
        case CSSStyleHelper::Bottom:                            { element->get_style()->set_bottom(value);                              }   break;
        case CSSStyleHelper::BoxShadow:                         { element->get_style()->set_boxShadow(value);                           }   break;
        case CSSStyleHelper::BoxSizing:                         { element->get_style()->set_boxSizing(value);                           }   break;
        case CSSStyleHelper::BreakAfter:                        { element->get_style()->set_breakAfter(value);                          }   break;
        case CSSStyleHelper::BreakBefore:                       { element->get_style()->set_breakBefore(value);                         }   break;
        case CSSStyleHelper::BreakInside:                       { element->get_style()->set_breakInside(value);                         }   break;
        case CSSStyleHelper::CaptionSide:                       { element->get_style()->set_captionSide(value);                         }   break;
        case CSSStyleHelper::Clear:                             { element->get_style()->set_clear(value);                               }   break;
        case CSSStyleHelper::Clip:                              { element->get_style()->set_clip(value);                                }   break;
        case CSSStyleHelper::ClipPath:                          { element->get_style()->set_clipPath(value);                            }   break;
        case CSSStyleHelper::ClipRule:                          { element->get_style()->set_clipRule(value);                            }   break;
        case CSSStyleHelper::Color:                             { element->get_style()->set_color(value);                               }   break;
        case CSSStyleHelper::ColorInterpolationFilters:         { element->get_style()->set_colorInterpolationFilters(value);           }   break;
        case CSSStyleHelper::ColumnCount:                       { element->get_style()->set_columnCount(new String(value));             }   break;
        case CSSStyleHelper::ColumnFill:                        { element->get_style()->set_columnFill(value);                          }   break;
        case CSSStyleHelper::ColumnGap:                         { element->get_style()->set_columnGap(new String(value));               }   break;
        case CSSStyleHelper::ColumnRule:                        { element->get_style()->set_columnRule(value);                          }   break;
        case CSSStyleHelper::ColumnRuleColor:                   { element->get_style()->set_columnRuleColor(new String(value));         }   break;
        case CSSStyleHelper::ColumnRuleStyle:                   { element->get_style()->set_columnRuleStyle(value);                     }   break;
        case CSSStyleHelper::ColumnRuleWidth:                   { element->get_style()->set_columnRuleWidth(new String(value));         }   break;
        case CSSStyleHelper::ColumnSpan:                        { element->get_style()->set_columnSpan(value);                          }   break;
        case CSSStyleHelper::ColumnWidth:                       { element->get_style()->set_columnWidth(new String(value));             }   break;
        case CSSStyleHelper::Columns:                           { element->get_style()->set_columns(value);                             }   break;
        case CSSStyleHelper::Content:                           { element->get_style()->set_content(value);                             }   break;
        case CSSStyleHelper::CounterIncrement:                  { element->get_style()->set_counterIncrement(value);                    }   break;
        case CSSStyleHelper::CounterReset:                      { element->get_style()->set_counterReset(value);                        }   break;
        case CSSStyleHelper::CssFloat:                          { element->get_style()->set_cssFloat(value);                            }   break;
        case CSSStyleHelper::CssText:                           { element->get_style()->set_cssText(value);                             }   break;
        case CSSStyleHelper::Cursor:                            { element->get_style()->set_cursor(value);                              }   break;
        case CSSStyleHelper::Direction:                         { element->get_style()->set_direction(value);                           }   break;
        case CSSStyleHelper::Display:                           { element->get_style()->set_display(value);                             }   break;
        case CSSStyleHelper::DominantBaseline:                  { element->get_style()->set_dominantBaseline(value);                    }   break;
        case CSSStyleHelper::EmptyCells:                        { element->get_style()->set_emptyCells(value);                          }   break;
        case CSSStyleHelper::EnableBackground:                  { element->get_style()->set_enableBackground(value);                    }   break;
        case CSSStyleHelper::Fill:                              { element->get_style()->set_fill(value);                                }   break;
        case CSSStyleHelper::FillOpacity:                       { element->get_style()->set_fillOpacity(value);                         }   break;
        case CSSStyleHelper::FillRule:                          { element->get_style()->set_fillRule(value);                            }   break;
        case CSSStyleHelper::Filter:                            { element->get_style()->set_filter(value);                              }   break;
        case CSSStyleHelper::Flex:                              { element->get_style()->set_flex(value);                                }   break;
        case CSSStyleHelper::FlexBasis:                         { element->get_style()->set_flexBasis(value);                           }   break;
        case CSSStyleHelper::FlexDirection:                     { element->get_style()->set_flexDirection(value);                       }   break;
        case CSSStyleHelper::FlexFlow:                          { element->get_style()->set_flexFlow(value);                            }   break;
        case CSSStyleHelper::FlexGrow:                          { element->get_style()->set_flexGrow(value);                            }   break;
        case CSSStyleHelper::FlexShrink:                        { element->get_style()->set_flexShrink(value);                          }   break;
        case CSSStyleHelper::FlexWrap:                          { element->get_style()->set_flexWrap(value);                            }   break;
        case CSSStyleHelper::FloodColor:                        { element->get_style()->set_floodColor(value);                          }   break;
        case CSSStyleHelper::FloodOpacity:                      { element->get_style()->set_floodOpacity(value);                        }   break;
        case CSSStyleHelper::Font:                              { element->get_style()->set_font(value);                                }   break;
        case CSSStyleHelper::FontFamily:                        { element->get_style()->set_fontFamily(value);                          }   break;
        case CSSStyleHelper::FontFeatureSettings:               { element->get_style()->set_fontFeatureSettings(value);                 }   break;
        case CSSStyleHelper::FontSize:                          { element->get_style()->set_fontSize(value);                            }   break;
        case CSSStyleHelper::FontSizeadjust:                    { element->get_style()->set_fontSizeAdjust(value);                      }   break;
        case CSSStyleHelper::FontStretch:                       { element->get_style()->set_fontStretch(value);                         }   break;
        case CSSStyleHelper::FontStyle:                         { element->get_style()->set_fontStyle(value);                           }   break;
        case CSSStyleHelper::FontVariant:                       { element->get_style()->set_fontVariant(value);                         }   break;
        case CSSStyleHelper::FontWeight:                        { element->get_style()->set_fontWeight(value);                          }   break;
        case CSSStyleHelper::Gap:                               { element->get_style()->set_gap(value);                                 }   break;
        case CSSStyleHelper::GlyphOrientationHorizontal:        { element->get_style()->set_glyphOrientationHorizontal(value);          }   break;
        case CSSStyleHelper::GlyphOrientationVertical:          { element->get_style()->set_glyphOrientationVertical(value);            }   break;
        case CSSStyleHelper::Grid:                              { element->get_style()->set_grid(value);                                }   break;
        case CSSStyleHelper::GridArea:                          { element->get_style()->set_gridArea(value);                            }   break;
        case CSSStyleHelper::GridAutoColumns:                   { element->get_style()->set_gridAutoColumns(value);                     }   break;
        case CSSStyleHelper::GridAutoFlow:                      { element->get_style()->set_gridAutoFlow(value);                        }   break;
        case CSSStyleHelper::GridAutoRows:                      { element->get_style()->set_gridAutoRows(value);                        }   break;
        case CSSStyleHelper::GridColumn:                        { element->get_style()->set_gridColumn(value);                          }   break;
        case CSSStyleHelper::GridColumnEnd:                     { element->get_style()->set_gridColumnEnd(value);                       }   break;
        case CSSStyleHelper::GridColumnGap:                     { element->get_style()->set_gridColumnGap(value);                       }   break;
        case CSSStyleHelper::GridColumnStart:                   { element->get_style()->set_gridColumnStart(value);                     }   break;
        case CSSStyleHelper::GridGap:                           { element->get_style()->set_gridGap(value);                             }   break;
        case CSSStyleHelper::GridRow:                           { element->get_style()->set_gridRow(value);                             }   break;
        case CSSStyleHelper::GridRowend:                        { element->get_style()->set_gridRowEnd(value);                          }   break;
        case CSSStyleHelper::GridRowgap:                        { element->get_style()->set_gridRowGap(value);                          }   break;
        case CSSStyleHelper::GridRowstart:                      { element->get_style()->set_gridRowStart(value);                        }   break;
        case CSSStyleHelper::GridTemplate:                      { element->get_style()->set_gridTemplate(value);                        }   break;
        case CSSStyleHelper::GridTemplateAreas:                 { element->get_style()->set_gridTemplateAreas(value);                   }   break;
        case CSSStyleHelper::GridTemplateColumns:               { element->get_style()->set_gridTemplateColumns(value);                 }   break;
        case CSSStyleHelper::GridTemplateRows:                  { element->get_style()->set_gridTemplateRows(value);                    }   break;
        case CSSStyleHelper::Height:                            { element->get_style()->set_height(value);                              }   break;
        case CSSStyleHelper::ImeMode:                           { element->get_style()->set_imeMode(value);                             }   break;
        case CSSStyleHelper::JustifyContent:                    { element->get_style()->set_justifyContent(value);                      }   break;
        case CSSStyleHelper::JustifyItems:                      { element->get_style()->set_justifyItems(value);                        }   break;
        case CSSStyleHelper::JustifySelf:                       { element->get_style()->set_justifySelf(value);                         }   break;
        case CSSStyleHelper::Kerning:                           { element->get_style()->set_kerning(value);                             }   break;
        case CSSStyleHelper::LayoutGrid:                        { element->get_style()->set_layoutGrid(value);                          }   break;
        case CSSStyleHelper::LayoutGridChar:                    { element->get_style()->set_layoutGridChar(value);                      }   break;
        case CSSStyleHelper::LayoutGridLine:                    { element->get_style()->set_layoutGridLine(value);                      }   break;
        case CSSStyleHelper::LayoutGridMode:                    { element->get_style()->set_layoutGridMode(value);                      }   break;
        case CSSStyleHelper::LayoutGridType:                    { element->get_style()->set_layoutGridType(value);                      }   break;
        case CSSStyleHelper::Left:                              { element->get_style()->set_left(value);                                }   break;
        case CSSStyleHelper::LetterSpacing:                     { element->get_style()->set_letterSpacing(value);                       }   break;
        case CSSStyleHelper::LightingColor:                     { element->get_style()->set_lightingColor(value);                       }   break;
        case CSSStyleHelper::LineBreak:                         { element->get_style()->set_lineBreak(value);                           }   break;
        case CSSStyleHelper::LineHeight:                        { element->get_style()->set_lineHeight(value);                          }   break;
        case CSSStyleHelper::ListStyle:                         { element->get_style()->set_listStyle(value);                           }   break;
        case CSSStyleHelper::ListStyleImage:                    { element->get_style()->set_listStyleImage(value);                      }   break;
        case CSSStyleHelper::ListStylePosition:                 { element->get_style()->set_listStylePosition(value);                   }   break;
        case CSSStyleHelper::ListStyleType:                     { element->get_style()->set_listStyleType(value);                       }   break; 
        case CSSStyleHelper::Margin:                            { element->get_style()->set_margin(value);                              }   break;
        case CSSStyleHelper::MarginBottom:                      { element->get_style()->set_marginBottom(value);                        }   break;
        case CSSStyleHelper::MarginLeft:                        { element->get_style()->set_marginLeft(value);                          }   break;
        case CSSStyleHelper::MarginRight:                       { element->get_style()->set_marginRight(value);                         }   break;
        case CSSStyleHelper::MarginTop:                         { element->get_style()->set_marginTop(value);                           }   break;
        case CSSStyleHelper::Marker:                            { element->get_style()->set_marker(value);                              }   break;
        case CSSStyleHelper::MarkerEnd:                         { element->get_style()->set_markerEnd(value);                           }   break;
        case CSSStyleHelper::MarkerMid:                         { element->get_style()->set_markerMid(value);                           }   break;
        case CSSStyleHelper::MarkerStart:                       { element->get_style()->set_markerStart(value);                         }   break;
        case CSSStyleHelper::Mask:                              { element->get_style()->set_mask(value);                                }   break;
        case CSSStyleHelper::MaskImage:                         { element->get_style()->set_maskImage(value);                           }   break;
        case CSSStyleHelper::MaxHeight:                         { element->get_style()->set_maxHeight(value);                           }   break; 
        case CSSStyleHelper::MaxWidth:                          { element->get_style()->set_maxWidth(value);                            }   break;  
        case CSSStyleHelper::MinHeight:                         { element->get_style()->set_minHeight(value);                           }   break;
        case CSSStyleHelper::MinWidth:                          { element->get_style()->set_minWidth(value);                            }   break;
        case CSSStyleHelper::MsContentZoomChaining:             { element->get_style()->set_msContentZoomChaining(value);               }   break;
        case CSSStyleHelper::MsContentZoomLimit:                { element->get_style()->set_msContentZoomLimit(value);                  }   break;
        case CSSStyleHelper::MsContentZoomLimitMax:             { element->get_style()->set_msContentZoomLimitMax(new String(value));   }   break;
        case CSSStyleHelper::MsContentZoomLimitMin:             { element->get_style()->set_msContentZoomLimitMin(new String(value));   }   break;
        case CSSStyleHelper::MsContentZoomSnap:                 { element->get_style()->set_msContentZoomSnap(value);                   }   break;
        case CSSStyleHelper::MsContentZoomSnapPoints:           { element->get_style()->set_msContentZoomSnapPoints(value);             }   break;
        case CSSStyleHelper::MsContentZoomSnapType:             { element->get_style()->set_msContentZoomSnapType(value);               }   break;
        case CSSStyleHelper::MsContentZooming:                  { element->get_style()->set_msContentZooming(value);                    }   break;
        case CSSStyleHelper::MsFlowFrom:                        { element->get_style()->set_msFlowFrom(value);                          }   break;
        case CSSStyleHelper::MsFlowInto:                        { element->get_style()->set_msFlowInto(value);                          }   break;
        case CSSStyleHelper::MsFontFeatureSettings:             { element->get_style()->set_msFontFeatureSettings(value);               }   break;
        case CSSStyleHelper::MsGridColumn:                      { element->get_style()->set_msGridColumn(new String(value));            }   break;
        case CSSStyleHelper::MsGridColumnAlign:                 { element->get_style()->set_msGridColumnAlign(value);                   }   break;
        case CSSStyleHelper::MsGridColumnSpan:                  { element->get_style()->set_msGridColumnSpan(new String(value));        }   break;
        case CSSStyleHelper::MsGridColumns:                     { element->get_style()->set_msGridColumns(value);                       }   break;
        case CSSStyleHelper::MsGridRow:                         { element->get_style()->set_msGridRow(new String(value));               }   break;
        case CSSStyleHelper::MsGridRowAlign:                    { element->get_style()->set_msGridRowAlign(value);                      }   break;
        case CSSStyleHelper::MsGridRowSpan:                     { element->get_style()->set_msGridRowSpan(new String(value));           }   break;
        case CSSStyleHelper::MsGridRows:                        { element->get_style()->set_msGridRows(value);                          }   break;
        case CSSStyleHelper::MsHighContrastAdjust:              { element->get_style()->set_msHighContrastAdjust(value);                }   break;
        case CSSStyleHelper::MsHyphenateLimitChars:             { element->get_style()->set_msHyphenateLimitChars(value);               }   break;
        case CSSStyleHelper::MsHyphenateLimitLines:             { element->get_style()->set_msHyphenateLimitLines(new String(value));   }   break;
        case CSSStyleHelper::MsHyphenateLimitZone:              { element->get_style()->set_msHyphenateLimitZone(new String(value));    }   break;
        case CSSStyleHelper::MsHyphens:                         { element->get_style()->set_msHyphens(value);                           }   break;
        case CSSStyleHelper::MsImeAlign:                        { element->get_style()->set_msImeAlign(value);                          }   break;
        case CSSStyleHelper::MsOverflowStyle:                   { element->get_style()->set_msOverflowStyle(value);                     }   break;
        case CSSStyleHelper::MsScrollChaining:                  { element->get_style()->set_msScrollChaining(value);                    }   break;
        case CSSStyleHelper::MsScrollLimit:                     { element->get_style()->set_msScrollLimit(value);                       }   break;
        case CSSStyleHelper::MsScrollLimitXMax:                 { element->get_style()->set_msScrollLimitXMax(new String(value));       }   break;
        case CSSStyleHelper::MsScrollLimitXMin:                 { element->get_style()->set_msScrollLimitXMin(new String(value));       }   break;
        case CSSStyleHelper::MsScrollLimitYMax:                 { element->get_style()->set_msScrollLimitYMax(new String(value));       }   break;
        case CSSStyleHelper::MsScrollLimitYMin:                 { element->get_style()->set_msScrollLimitYMin(new String(value));       }   break;
        case CSSStyleHelper::MsScrollRails:                     { element->get_style()->set_msScrollRails(value);                       }   break;
        case CSSStyleHelper::MsScrollSnapPointsX:               { element->get_style()->set_msScrollSnapPointsX(value);                 }   break;
        case CSSStyleHelper::MsScrollSnapPointsY:               { element->get_style()->set_msScrollSnapPointsY(value);                 }   break;
        case CSSStyleHelper::MsScrollSnapType:                  { element->get_style()->set_msScrollSnapType(value);                    }   break;
        case CSSStyleHelper::MsScrollSnapX:                     { element->get_style()->set_msScrollSnapX(value);                       }   break;
        case CSSStyleHelper::MsScrollSnapY:                     { element->get_style()->set_msScrollSnapY(value);                       }   break;
        case CSSStyleHelper::MsScrollTranslation:               { element->get_style()->set_msScrollTranslation(value);                 }   break;
        case CSSStyleHelper::MsTextCombineHorizontal:           { element->get_style()->set_msTextCombineHorizontal(value);             }   break;
        case CSSStyleHelper::MsTextSizeAdjust:                  { element->get_style()->set_msTextSizeAdjust(new String(value));        }   break;
        case CSSStyleHelper::MsTouchAction:                     { element->get_style()->set_msTouchAction(value);                       }   break;
        case CSSStyleHelper::MsTouchSelect:                     { element->get_style()->set_msTouchSelect(value);                       }   break;
        case CSSStyleHelper::MsUserSelect:                      { element->get_style()->set_msUserSelect(value);                        }   break;
        case CSSStyleHelper::MsWrapFlow:                        { element->get_style()->set_msWrapFlow(value);                          }   break;
        case CSSStyleHelper::MsWrapMargin:                      { element->get_style()->set_msWrapMargin(new String(value));            }   break;
        case CSSStyleHelper::MsWrapThrough:                     { element->get_style()->set_msWrapThrough(value);                       }   break;
        case CSSStyleHelper::ObjectFit:                         { element->get_style()->set_objectFit(value);                           }   break;
        case CSSStyleHelper::ObjectPosition:                    { element->get_style()->set_objectPosition(value);                      }   break;
        case CSSStyleHelper::Opacity:                           { element->get_style()->set_opacity(value);                             }   break;
        case CSSStyleHelper::Order:                             { element->get_style()->set_order(value);                               }   break;
        case CSSStyleHelper::Orphans:                           { element->get_style()->set_orphans(value);                             }   break;
        case CSSStyleHelper::Outline:                           { element->get_style()->set_outline(value);                             }   break;
        case CSSStyleHelper::OutlineColor:                      { element->get_style()->set_outlineColor(value);                        }   break;
        case CSSStyleHelper::OutlineOffset:                     { element->get_style()->set_outlineOffset(value);                       }   break;
        case CSSStyleHelper::OutlineStyle:                      { element->get_style()->set_outlineStyle(value);                        }   break;
        case CSSStyleHelper::OutlineWidth:                      { element->get_style()->set_outlineWidth(value);                        }   break;
        case CSSStyleHelper::Overflow:                          { element->get_style()->set_overflow(value);                            }   break;
        case CSSStyleHelper::OverflowX:                         { element->get_style()->set_overflowX(value);                           }   break;
        case CSSStyleHelper::OverflowY:                         { element->get_style()->set_overflowY(value);                           }   break;
        case CSSStyleHelper::Padding:                           { element->get_style()->set_padding(value);                             }   break;
        case CSSStyleHelper::PaddingBottom:                     { element->get_style()->set_paddingBottom(value);                       }   break;
        case CSSStyleHelper::PaddingLeft:                       { element->get_style()->set_paddingLeft(value);                         }   break;
        case CSSStyleHelper::PaddingRight:                      { element->get_style()->set_paddingRight(value);                        }   break;
        case CSSStyleHelper::PaddingTop:                        { element->get_style()->set_paddingTop(value);                          }   break;
        case CSSStyleHelper::PageBreakAfter:                    { element->get_style()->set_pageBreakAfter(value);                      }   break;
        case CSSStyleHelper::PageBreakBefore:                   { element->get_style()->set_pageBreakBefore(value);                     }   break;
        case CSSStyleHelper::PageBreakInside:                   { element->get_style()->set_pageBreakInside(value);                     }   break;
        case CSSStyleHelper::PenAction:                         { element->get_style()->set_penAction(value);                           }   break;
        case CSSStyleHelper::Perspective:                       { element->get_style()->set_perspective(value);                         }   break;
        case CSSStyleHelper::PerspectiveOrigin:                 { element->get_style()->set_perspectiveOrigin(value);                   }   break;
        case CSSStyleHelper::PointerEvents:                     { element->get_style()->set_pointerEvents(value);                       }   break;
        case CSSStyleHelper::Position:                          { element->get_style()->set_position(value);                            }   break;
        case CSSStyleHelper::Quotes:                            { element->get_style()->set_quotes(value);                              }   break;
        case CSSStyleHelper::Resize:                            { element->get_style()->set_resize(value);                              }   break;
        case CSSStyleHelper::Right:                             { element->get_style()->set_right(value);                               }   break;
        case CSSStyleHelper::Rotate:                            { element->get_style()->set_rotate(value);                              }   break;
        case CSSStyleHelper::RowGap:                            { element->get_style()->set_rowGap(value);                              }   break;
        case CSSStyleHelper::RubyAlign:                         { element->get_style()->set_rubyAlign(value);                           }   break;
        case CSSStyleHelper::RubyOverhang:                      { element->get_style()->set_rubyOverhang(value);                        }   break;
        case CSSStyleHelper::RubyPosition:                      { element->get_style()->set_rubyPosition(value);                        }   break;
        case CSSStyleHelper::Scale:                             { element->get_style()->set_scale(value);                               }   break;
        case CSSStyleHelper::StopColor:                         { element->get_style()->set_stopColor(value);                           }   break;
        case CSSStyleHelper::StopOpacity:                       { element->get_style()->set_stopOpacity(value);                         }   break;
        case CSSStyleHelper::Stroke:                            { element->get_style()->set_stroke(value);                              }   break;
        case CSSStyleHelper::StrokeDasharray:                   { element->get_style()->set_strokeDasharray(value);                     }   break;
        case CSSStyleHelper::StrokeDashoffset:                  { element->get_style()->set_strokeDashoffset(value);                    }   break;
        case CSSStyleHelper::StrokeLinecap:                     { element->get_style()->set_strokeLinecap(value);                       }   break;
        case CSSStyleHelper::StrokeLinejoin:                    { element->get_style()->set_strokeLinejoin(value);                      }   break;
        case CSSStyleHelper::StrokeMiterlimit:                  { element->get_style()->set_strokeMiterlimit(value);                    }   break;
        case CSSStyleHelper::StrokeOpacity:                     { element->get_style()->set_strokeOpacity(value);                       }   break;
        case CSSStyleHelper::StrokeWidth:                       { element->get_style()->set_strokeWidth(value);                         }   break;
        case CSSStyleHelper::TableLayout:                       { element->get_style()->set_tableLayout(value);                         }   break;
        case CSSStyleHelper::TextAlign:                         { element->get_style()->set_textAlign(value);                           }   break;
        case CSSStyleHelper::TextAlignLast:                     { element->get_style()->set_textAlignLast(value);                       }   break;
        case CSSStyleHelper::TextAnchor:                        { element->get_style()->set_textAnchor(value);                          }   break;
        case CSSStyleHelper::TextCombineUpright:                { element->get_style()->set_textCombineUpright(value);                  }   break;
        case CSSStyleHelper::TextDecoration:                    { element->get_style()->set_textDecoration(value);                      }   break;
        case CSSStyleHelper::TextIndent:                        { element->get_style()->set_textIndent(value);                          }   break;
        case CSSStyleHelper::TextJustify:                       { element->get_style()->set_textJustify(value);                         }   break;
        case CSSStyleHelper::TextKashida:                       { element->get_style()->set_textKashida(value);                         }   break;
        case CSSStyleHelper::TextKashidaSpace:                  { element->get_style()->set_textKashidaSpace(value);                    }   break;
        case CSSStyleHelper::TextOverflow:                      { element->get_style()->set_textOverflow(value);                        }   break;
        case CSSStyleHelper::TextShadow:                        { element->get_style()->set_textShadow(value);                          }   break;
        case CSSStyleHelper::TextTransform:                     { element->get_style()->set_textTransform(value);                       }   break;
        case CSSStyleHelper::TextUnderlinePosition:             { element->get_style()->set_textUnderlinePosition(value);               }   break;
        case CSSStyleHelper::Top:                               { element->get_style()->set_top(value);                                 }   break;
        case CSSStyleHelper::TouchAction:                       { element->get_style()->set_touchAction(value);                         }   break;
        case CSSStyleHelper::Transform:                         { element->get_style()->set_transform(value);                           }   break;
        case CSSStyleHelper::TransformOrigin:                   { element->get_style()->set_transformOrigin(value);                     }   break;
        case CSSStyleHelper::TransformStyle:                    { element->get_style()->set_transformStyle(value);                      }   break;
        case CSSStyleHelper::Transition:                        { element->get_style()->set_transition(value);                          }   break;
        case CSSStyleHelper::TransitionDelay:                   { element->get_style()->set_transitionDelay(value);                     }   break;
        case CSSStyleHelper::TransitionDuration:                { element->get_style()->set_transitionDuration(value);                  }   break;
        case CSSStyleHelper::TransitionProperty:                { element->get_style()->set_transitionProperty(value);                  }   break;
        case CSSStyleHelper::TransitionTimingFunction:          { element->get_style()->set_transitionTimingFunction(value);            }   break;
        case CSSStyleHelper::Translate:                         { element->get_style()->set_translate(value);                           }   break;
        case CSSStyleHelper::UnicodeBidi:                       { element->get_style()->set_unicodeBidi(value);                         }   break;
        case CSSStyleHelper::UserSelect:                        { element->get_style()->set_userSelect(value);                          }   break;
        case CSSStyleHelper::VerticalAlign:                     { element->get_style()->set_verticalAlign(value);                       }   break;
        case CSSStyleHelper::Visibility:                        { element->get_style()->set_visibility(value);                          }   break;
        case CSSStyleHelper::WebkitAlignContent:                { element->get_style()->set_webkitAlignContent(value);                  }   break;
        case CSSStyleHelper::WebkitAlignItems:                  { element->get_style()->set_webkitAlignItems(value);                    }   break;
        case CSSStyleHelper::WebkitAlignSelf:                   { element->get_style()->set_webkitAlignSelf(value);                     }   break;
        case CSSStyleHelper::WebkitAnimation:                   { element->get_style()->set_webkitAnimation(value);                     }   break;
        case CSSStyleHelper::WebkitAnimationDelay:              { element->get_style()->set_webkitAnimationDelay(value);                }   break;
        case CSSStyleHelper::WebkitAnimationDirection:          { element->get_style()->set_webkitAnimationDirection(value);            }   break;
        case CSSStyleHelper::WebkitAnimationDuration:           { element->get_style()->set_webkitAnimationDuration(value);             }   break;
        case CSSStyleHelper::WebkitAnimationFillMode:           { element->get_style()->set_webkitAnimationFillMode(value);             }   break;
        case CSSStyleHelper::WebkitAnimationIterationCount:     { element->get_style()->set_webkitAnimationIterationCount(value);       }   break;
        case CSSStyleHelper::WebkitAnimationName:               { element->get_style()->set_webkitAnimationName(value);                 }   break;
        case CSSStyleHelper::WebkitAnimationPlayState:          { element->get_style()->set_webkitAnimationPlayState(value);            }   break;
        case CSSStyleHelper::WebkitAnimationTimingFunction:     { element->get_style()->set_webkitAnimationTimingFunction(value);       }   break;
        case CSSStyleHelper::WebkitAppearance:                  { element->get_style()->set_webkitAppearance(value);                    }   break;
        case CSSStyleHelper::WebkitBackfaceVisibility:          { element->get_style()->set_webkitBackfaceVisibility(value);            }   break;
        case CSSStyleHelper::WebkitBackgroundClip:              { element->get_style()->set_webkitBackgroundClip(value);                }   break;
        case CSSStyleHelper::WebkitBackgroundOrigin:            { element->get_style()->set_webkitBackgroundOrigin(value);              }   break;
        case CSSStyleHelper::WebkitBackgroundSize:              { element->get_style()->set_webkitBackgroundSize(value);                }   break;
        case CSSStyleHelper::WebkitBorderBottomLeftRadius:      { element->get_style()->set_webkitBorderBottomLeftRadius(value);        }   break;
        case CSSStyleHelper::WebkitBorderBottomRightRadius:     { element->get_style()->set_webkitBorderBottomRightRadius(value);       }   break;
        case CSSStyleHelper::WebkitBorderImage:                 { element->get_style()->set_webkitBorderImage(value);                   }   break;
        case CSSStyleHelper::WebkitBorderRadius:                { element->get_style()->set_webkitBorderRadius(value);                  }   break;
        case CSSStyleHelper::WebkitBorderTopLeftRadius:         { element->get_style()->set_webkitBorderTopLeftRadius(value);           }   break;
        case CSSStyleHelper::WebkitBorderTopRightRadius:        { element->get_style()->set_webkitBorderTopRightRadius(value);          }   break;
        case CSSStyleHelper::WebkitBoxAlign:                    { element->get_style()->set_webkitBoxAlign(value);                      }   break;
        case CSSStyleHelper::WebkitBoxDirection:                { element->get_style()->set_webkitBoxDirection(value);                  }   break;
        case CSSStyleHelper::WebkitBoxFlex:                     { element->get_style()->set_webkitBoxFlex(value);                       }   break;
        case CSSStyleHelper::WebkitBoxOrdinalGroup:             { element->get_style()->set_webkitBoxOrdinalGroup(value);               }   break;
        case CSSStyleHelper::WebkitBoxOrient:                   { element->get_style()->set_webkitBoxOrient(value);                     }   break;
        case CSSStyleHelper::WebkitBoxPack:                     { element->get_style()->set_webkitBoxPack(value);                       }   break;
        case CSSStyleHelper::WebkitBoxSizing:                   { element->get_style()->set_webkitBoxSizing(value);                     }   break;
        case CSSStyleHelper::WebkitColumnBreakAfter:            { element->get_style()->set_webkitColumnBreakAfter(value);              }   break;
        case CSSStyleHelper::WebkitColumnBreakBefore:           { element->get_style()->set_webkitColumnBreakBefore(value);             }   break;
        case CSSStyleHelper::WebkitColumnBreakInside:           { element->get_style()->set_webkitColumnBreakInside(value);             }   break;
        case CSSStyleHelper::WebkitColumnCount:                 { element->get_style()->set_webkitColumnCount(new String(value));       }   break;
        case CSSStyleHelper::WebkitColumnGap:                   { element->get_style()->set_webkitColumnGap(new String(value));         }   break;
        case CSSStyleHelper::WebkitColumnRule:                  { element->get_style()->set_webkitColumnRule(value);                    }   break;
        case CSSStyleHelper::WebkitColumnRuleColor:             { element->get_style()->set_webkitColumnRuleColor(new String(value));   }   break;
        case CSSStyleHelper::WebkitColumnRuleStyle:             { element->get_style()->set_webkitColumnRuleStyle(value);               }   break;
        case CSSStyleHelper::WebkitColumnRuleWidth:             { element->get_style()->set_webkitColumnRuleWidth(new String(value));   }   break;
        case CSSStyleHelper::WebkitColumnSpan:                  { element->get_style()->set_webkitColumnSpan(value);                    }   break;
        case CSSStyleHelper::WebkitColumnWidth:                 { element->get_style()->set_webkitColumnWidth(new String(value));       }   break;
        case CSSStyleHelper::WebkitColumns:                     { element->get_style()->set_webkitColumns(value);                       }   break;
        case CSSStyleHelper::WebkitFilter:                      { element->get_style()->set_webkitFilter(value);                        }   break;
        case CSSStyleHelper::WebkitFlex:                        { element->get_style()->set_webkitFlex(value);                          }   break;
        case CSSStyleHelper::WebkitFlexBasis:                   { element->get_style()->set_webkitFlexBasis(value);                     }   break;
        case CSSStyleHelper::WebkitFlexDirection:               { element->get_style()->set_webkitFlexDirection(value);                 }   break;
        case CSSStyleHelper::WebkitFlexFlow:                    { element->get_style()->set_webkitFlexFlow(value);                      }   break;
        case CSSStyleHelper::WebkitFlexGrow:                    { element->get_style()->set_webkitFlexGrow(value);                      }   break;
        case CSSStyleHelper::WebkitFlexShrink:                  { element->get_style()->set_webkitFlexShrink(value);                    }   break;
        case CSSStyleHelper::WebkitFlexWrap:                    { element->get_style()->set_webkitFlexWrap(value);                      }   break;
        case CSSStyleHelper::WebkitJustifyContent:              { element->get_style()->set_webkitJustifyContent(value);                }   break;
        case CSSStyleHelper::WebkitOrder:                       { element->get_style()->set_webkitOrder(value);                         }   break;
        case CSSStyleHelper::WebkitPerspective:                 { element->get_style()->set_webkitPerspective(value);                   }   break;
        case CSSStyleHelper::WebkitPerspectiveOrigin:           { element->get_style()->set_webkitPerspectiveOrigin(value);             }   break;
        case CSSStyleHelper::WebkitTapHighlightColor:           { element->get_style()->set_webkitTapHighlightColor(value);             }   break;
        case CSSStyleHelper::WebkitTextFillColor:               { element->get_style()->set_webkitTextFillColor(value);                 }   break;
        case CSSStyleHelper::WebkitTextsizeAdjust:              { element->get_style()->set_webkitTextSizeAdjust(new String(value));    }   break;
        case CSSStyleHelper::WebkitTextstroke:                  { element->get_style()->set_webkitTextStroke(value);                    }   break;
        case CSSStyleHelper::WebkitTextStrokeColor:             { element->get_style()->set_webkitTextStrokeColor(value);               }   break;
        case CSSStyleHelper::WebkitTextStrokeWidth:             { element->get_style()->set_webkitTextStrokeWidth(value);               }   break;
        case CSSStyleHelper::WebkitTransform:                   { element->get_style()->set_webkitTransform(value);                     }   break;
        case CSSStyleHelper::WebkitTransformOrigin:             { element->get_style()->set_webkitTransformOrigin(value);               }   break;
        case CSSStyleHelper::WebkitTransformStyle:              { element->get_style()->set_webkitTransformStyle(value);                }   break;
        case CSSStyleHelper::WebkitTransition:                  { element->get_style()->set_webkitTransition(value);                    }   break;
        case CSSStyleHelper::WebkitTransitionDelay:             { element->get_style()->set_webkitTransitionDelay(value);               }   break;
        case CSSStyleHelper::WebkitTransitionDuration:          { element->get_style()->set_webkitTransitionDuration(value);            }   break;
        case CSSStyleHelper::WebkitTransitionProperty:          { element->get_style()->set_webkitTransitionProperty(value);            }   break;
        case CSSStyleHelper::WebkitTransitionTimingFunction:    { element->get_style()->set_webkitTransitionTimingFunction(value);      }   break;
        case CSSStyleHelper::WebkitUserModify:                  { element->get_style()->set_webkitUserModify(value);                    }   break;
        case CSSStyleHelper::WebkitUserSelect:                  { element->get_style()->set_webkitUserSelect(value);                    }   break;
        case CSSStyleHelper::WebkitWritinGmode:                 { element->get_style()->set_webkitWritingMode(value);                   }   break;
        case CSSStyleHelper::WhiteSpace:                        { element->get_style()->set_whiteSpace(value);                          }   break;
        case CSSStyleHelper::Widows:                            { element->get_style()->set_widows(value);                              }   break;
        case CSSStyleHelper::Width:                             { element->get_style()->set_width(value);                               }   break;
        case CSSStyleHelper::WordBreak:                         { element->get_style()->set_wordBreak(value);                           }   break;
        case CSSStyleHelper::WordSpacing:                       { element->get_style()->set_wordSpacing(value);                         }   break;
        case CSSStyleHelper::WordWrap:                          { element->get_style()->set_wordWrap(value);                            }   break;
        case CSSStyleHelper::WritingMode:                       { element->get_style()->set_writingMode(value);                         }   break;
        case CSSStyleHelper::ZIndex:                            { element->get_style()->set_zIndex(value);                              }   break;
        case CSSStyleHelper::Zoom:                              { element->get_style()->set_zoom(value);                                }   break;

        default:
        break;
    }
}

#endif /* end of include guard : CQUERY_CSS_STYLE_HELPER_rz41fr */