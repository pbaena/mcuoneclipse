%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (BlankDisplay)
%;**     Description :
%;**         Blanks the display (this does NOT clear the display memory).
%include Common\GeneralParameters.inc(27)
%;**         blankType%ParblankType %>27 - type of blanking
%;** %>29 CLR_SECT_BRT: Clear Section Bright
%;** %>29 CLR_SECT_BRT_IB: Clear Section Bright,
%;** %>29 inverted
%;** %>29 CLR_SECT_DRK: Clear Section Dark
%;** %>29 CLR_SECT_DRK_IB: Clear Section Dark,
%;** %>29 inverted
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine