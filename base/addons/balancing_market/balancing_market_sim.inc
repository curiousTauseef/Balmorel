
$ifi not %SOLVETYPE%==MIP $ifi %UnitComm%==yes VUCON.FX(IY411,IA,IGUC,IS3,T)$(GKFX(IY411,IA,IGUC) AND (NOT SUM(Y$(YVALUE(Y) LE YVALUE(IY411)),IAGKNY(Y,IA,IGUC))) AND ((GDATA(IGUC,'GDUCUTMIN') GT WEIGHT_S(IS3)) OR ((GDATA(IGUC,'GDUCDTMIN') GT WEIGHT_S(IS3))))) = UCON(IY411,IA,IGUC,IS3,T);
$ifi     %SOLVETYPE%==MIP $ifi %UnitComm%==yes VUCON.FX(IY411,IA,IGUC,IS3,T)$(GKFX(IY411,IA,IGUC) AND (NOT SUM(Y$(YVALUE(Y) LE YVALUE(IY411)),IAGKNY(Y,IA,IGUC))) AND ((GDATA(IGUC,'GDUCUTMIN') GT WEIGHT_S(IS3)) OR ((GDATA(IGUC,'GDUCDTMIN') GT WEIGHT_S(IS3))))) = ROUND(UCON(IY411,IA,IGUC,IS3,T));

*Nuclear power cannot be used for balancing purposes
VGE_T.FX(IY411,IA,G,IS3,T)$(GKFX(IY411,IA,G) AND (NOT SUM(Y$(YVALUE(Y) LE YVALUE(IY411)),IAGKNY(Y,IA,G))) AND (GDATA(G,'GDFUEL') EQ NUCLEAR)) = GE_T(IY411,IA,G,IS3,T);
VGH_T.FX(IY411,IA,G,IS3,T)$(GKFX(IY411,IA,G) AND (NOT SUM(Y$(YVALUE(Y) LE YVALUE(IY411)),IAGKNY(Y,IA,G))) AND (GDATA(G,'GDFUEL') EQ NUCLEAR)) = GH_T(IY411,IA,G,IS3,T);