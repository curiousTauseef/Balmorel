* Decommissioning introduced by Juan Gea Berm�dez 2018.

$ifi not %LIFETIME_DECOM_ENDO_G%==yes $ifi not %ECONOMIC_DECOM_ENDO_G%==yes  $goto DECOMMISSIONING_ENDOGENOUS_GENERATION
-VDECOM_ENDO(IY411,IA,IGKFIND)$IGDECOM(IGKFIND)
+VDECOM_ENDO_BACK(IY411,IA,IGKFIND)$IGDECOM(IGKFIND)
$label  DECOMMISSIONING_ENDOGENOUS_GENERATION
