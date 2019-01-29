* Decommissioning introduced by Juan Gea Berm�dez 2018.

*Fixing the decommissioning and accumulated  decommissioning from previous optimization for the next optimization (only the first year of IY411 is fixed)
*(IMPORTANT!: The following code only works if the years are optimized consecutively. For example, this two-year mode optimization would not provide coherent results: [2020,2040] and [2030;2050]


$ifi not %LIFETIME_DECOM_ENDO_G%==yes $ifi not %ECONOMIC_DECOM_ENDO_G%==yes  $goto DECOMMISSIONING_ENDOGENOUS_GENERATION
VDECOM_ENDO.FX(IY411FIRST,IA,G)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IAGKNY(Y,IA,G)) = VDECOM_ENDO.L(IY411FIRST,IA,G);
VDECOM_ENDO_ACCUM.FX(IY411FIRST,IA,G)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IAGKNY(Y,IA,G)) = VDECOM_ENDO_ACCUM.L(IY411FIRST,IA,G);
$label  DECOMMISSIONING_ENDOGENOUS_GENERATION    

VDECOM_EXO.FX(IY411FIRST,IA,G)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IAGKFX(Y,IA,G)) = VDECOM_EXO.L(IY411FIRST,IA,G);
VDECOM_EXO_ACCUM.FX(IY411FIRST,IA,G)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IAGKFX(Y,IA,G)) = VDECOM_EXO_ACCUM.L(IY411FIRST,IA,G);