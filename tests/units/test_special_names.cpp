#define CATCH_CONFIG_MAIN

#include "catch2/catch_all.hpp"
#include "../../units/special_names.hpp"

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
using namespace scifir;

TEST_CASE("Special names literals") {
	SECTION("Special names literals") {
		CHECK(bool(100_QHz == "100 QHz"));
		CHECK(bool(100_RHz == "100 RHz"));
		CHECK(bool(100_YHz == "100 YHz"));
		CHECK(bool(100_ZHz == "100 ZHz"));
		CHECK(bool(100_EHz == "100 EHz"));
		CHECK(bool(100_PHz == "100 PHz"));
		CHECK(bool(100_THz == "100 THz"));
		CHECK(bool(100_GHz == "100 GHz"));
		CHECK(bool(100_MHz == "100 MHz"));
		CHECK(bool(100_kHz == "100 kHz"));
		CHECK(bool(100_hHz == "100 hHz"));
		CHECK(bool(100_daHz == "100 daHz"));
		CHECK(bool(100_Hz == "100 Hz"));
		CHECK(bool(100_dHz == "100 dHz"));
		CHECK(bool(100_cHz == "100 cHz"));
		CHECK(bool(100_mHz == "100 mHz"));
		CHECK(bool(100_µHz == "100 uHz"));
		CHECK(bool(100_nHz == "100 nHz"));
		CHECK(bool(100_pHz == "100 pHz"));
		CHECK(bool(100_fHz == "100 fHz"));
		CHECK(bool(100_aHz == "100 aHz"));
		CHECK(bool(100_zHz == "100 zHz"));
		CHECK(bool(100_yHz == "100 yHz"));
		CHECK(bool(100_rHz == "100 rHz"));
		CHECK(bool(100_qHz == "100 qHz"));

		CHECK(bool(100_QN == "100 QN"));
		CHECK(bool(100_RN == "100 RN"));
		CHECK(bool(100_YN == "100 YN"));
		CHECK(bool(100_ZN == "100 ZN"));
		CHECK(bool(100_EN == "100 EN"));
		CHECK(bool(100_PN == "100 PN"));
		CHECK(bool(100_TN == "100 TN"));
		CHECK(bool(100_GN == "100 GN"));
		CHECK(bool(100_MN == "100 MN"));
		CHECK(bool(100_kN == "100 kN"));
		CHECK(bool(100_hN == "100 hN"));
		CHECK(bool(100_daN == "100 daN"));
		CHECK(bool(100_N == "100 N"));
		CHECK(bool(100_dN == "100 dN"));
		CHECK(bool(100_cN == "100 cN"));
		CHECK(bool(100_mN == "100 mN"));
		CHECK(bool(100_µN == "100 uN"));
		CHECK(bool(100_nN == "100 nN"));
		CHECK(bool(100_pN == "100 pN"));
		CHECK(bool(100_fN == "100 fN"));
		CHECK(bool(100_aN == "100 aN"));
		CHECK(bool(100_zN == "100 zN"));
		CHECK(bool(100_yN == "100 yN"));
		CHECK(bool(100_rN == "100 rN"));
		CHECK(bool(100_qN == "100 qN"));

		CHECK(bool(100_QPa == "100 QPa"));
		CHECK(bool(100_RPa == "100 RPa"));
		CHECK(bool(100_YPa == "100 YPa"));
		CHECK(bool(100_ZPa == "100 ZPa"));
		CHECK(bool(100_EPa == "100 EPa"));
		CHECK(bool(100_PPa == "100 PPa"));
		CHECK(bool(100_TPa == "100 TPa"));
		CHECK(bool(100_GPa == "100 GPa"));
		CHECK(bool(100_MPa == "100 MPa"));
		CHECK(bool(100_kPa == "100 kPa"));
		CHECK(bool(100_hPa == "100 hPa"));
		CHECK(bool(100_daPa == "100 daPa"));
		CHECK(bool(100_Pa == "100 Pa"));
		CHECK(bool(100_dPa == "100 dPa"));
		CHECK(bool(100_cPa == "100 cPa"));
		CHECK(bool(100_mPa == "100 mPa"));
		CHECK(bool(100_µPa == "100 uPa"));
		CHECK(bool(100_nPa == "100 nPa"));
		CHECK(bool(100_pPa == "100 pPa"));
		CHECK(bool(100_fPa == "100 fPa"));
		CHECK(bool(100_aPa == "100 aPa"));
		CHECK(bool(100_zPa == "100 zPa"));
		CHECK(bool(100_yPa == "100 yPa"));
		CHECK(bool(100_rPa == "100 rPa"));
		CHECK(bool(100_qPa == "100 qPa"));

		CHECK(bool(100_QJ == "100 QJ"));
		CHECK(bool(100_RJ == "100 RJ"));
		CHECK(bool(100_YJ == "100 YJ"));
		CHECK(bool(100_ZJ == "100 ZJ"));
		CHECK(bool(100_EJ == "100 EJ"));
		CHECK(bool(100_PJ == "100 PJ"));
		CHECK(bool(100_TJ == "100 TJ"));
		CHECK(bool(100_GJ == "100 GJ"));
		CHECK(bool(100_MJ == "100 MJ"));
		CHECK(bool(100_kJ == "100 kJ"));
		CHECK(bool(100_hJ == "100 hJ"));
		CHECK(bool(100_daJ == "100 daJ"));
		CHECK(bool(100_J == "100 J"));
		CHECK(bool(100_dJ == "100 dJ"));
		CHECK(bool(100_cJ == "100 cJ"));
		CHECK(bool(100_mJ == "100 mJ"));
		CHECK(bool(100_µJ == "100 uJ"));
		CHECK(bool(100_nJ == "100 nJ"));
		CHECK(bool(100_pJ == "100 pJ"));
		CHECK(bool(100_fJ == "100 fJ"));
		CHECK(bool(100_aJ == "100 aJ"));
		CHECK(bool(100_zJ == "100 zJ"));
		CHECK(bool(100_yJ == "100 yJ"));
		CHECK(bool(100_rJ == "100 rJ"));
		CHECK(bool(100_qJ == "100 qJ"));

		CHECK(bool(100_QW == "100 QW"));
		CHECK(bool(100_RW == "100 RW"));
		CHECK(bool(100_YW == "100 YW"));
		CHECK(bool(100_ZW == "100 ZW"));
		CHECK(bool(100_EW == "100 EW"));
		CHECK(bool(100_PW == "100 PW"));
		CHECK(bool(100_TW == "100 TW"));
		CHECK(bool(100_GW == "100 GW"));
		CHECK(bool(100_MW == "100 MW"));
		CHECK(bool(100_kW == "100 kW"));
		CHECK(bool(100_hW == "100 hW"));
		CHECK(bool(100_daW == "100 daW"));
		CHECK(bool(100_W == "100 W"));
		CHECK(bool(100_dW == "100 dW"));
		CHECK(bool(100_cW == "100 cW"));
		CHECK(bool(100_mW == "100 mW"));
		CHECK(bool(100_µW == "100 uW"));
		CHECK(bool(100_nW == "100 nW"));
		CHECK(bool(100_pW == "100 pW"));
		CHECK(bool(100_fW == "100 fW"));
		CHECK(bool(100_aW == "100 aW"));
		CHECK(bool(100_zW == "100 zW"));
		CHECK(bool(100_yW == "100 yW"));
		CHECK(bool(100_rW == "100 rW"));
		CHECK(bool(100_qW == "100 qW"));

		CHECK(bool(100_QA == "100 QA"));
		CHECK(bool(100_RA == "100 RA"));
		CHECK(bool(100_YA == "100 YA"));
		CHECK(bool(100_ZA == "100 ZA"));
		CHECK(bool(100_EA == "100 EA"));
		CHECK(bool(100_PA == "100 PA"));
		CHECK(bool(100_TA == "100 TA"));
		CHECK(bool(100_GA == "100 GA"));
		CHECK(bool(100_MA == "100 MA"));
		CHECK(bool(100_kA == "100 kA"));
		CHECK(bool(100_hA == "100 hA"));
		CHECK(bool(100_daA == "100 daA"));
		CHECK(bool(100_A == "100 A"));
		CHECK(bool(100_dA == "100 dA"));
		CHECK(bool(100_cA == "100 cA"));
		CHECK(bool(100_mA == "100 mA"));
		CHECK(bool(100_µA == "100 uA"));
		CHECK(bool(100_nA == "100 nA"));
		CHECK(bool(100_pA == "100 pA"));
		CHECK(bool(100_fA == "100 fA"));
		CHECK(bool(100_aA == "100 aA"));
		CHECK(bool(100_zA == "100 zA"));
		CHECK(bool(100_yA == "100 yA"));
		CHECK(bool(100_rA == "100 rA"));
		CHECK(bool(100_qA == "100 qA"));

		CHECK(bool(100_QV == "100 QV"));
		CHECK(bool(100_RV == "100 RV"));
		CHECK(bool(100_YV == "100 YV"));
		CHECK(bool(100_ZV == "100 ZV"));
		CHECK(bool(100_EV == "100 EV"));
		CHECK(bool(100_PV == "100 PV"));
		CHECK(bool(100_TV == "100 TV"));
		CHECK(bool(100_GV == "100 GV"));
		CHECK(bool(100_MV == "100 MV"));
		CHECK(bool(100_kV == "100 kV"));
		CHECK(bool(100_hV == "100 hV"));
		CHECK(bool(100_daV == "100 daV"));
		CHECK(bool(100_V == "100 V"));
		CHECK(bool(100_dV == "100 dV"));
		CHECK(bool(100_cV == "100 cV"));
		CHECK(bool(100_mV == "100 mV"));
		CHECK(bool(100_µV == "100 uV"));
		CHECK(bool(100_nV == "100 nV"));
		CHECK(bool(100_pV == "100 pV"));
		CHECK(bool(100_fV == "100 fV"));
		CHECK(bool(100_aV == "100 aV"));
		CHECK(bool(100_zV == "100 zV"));
		CHECK(bool(100_yV == "100 yV"));
		CHECK(bool(100_rV == "100 rV"));
		CHECK(bool(100_qV == "100 qV"));

		CHECK(bool(100_QF == "100 QF"));
		CHECK(bool(100_RF == "100 RF"));
		CHECK(bool(100_YF == "100 YF"));
		CHECK(bool(100_ZF == "100 ZF"));
		CHECK(bool(100_EF == "100 EF"));
		CHECK(bool(100_PF == "100 PF"));
		CHECK(bool(100_TF == "100 TF"));
		CHECK(bool(100_GF == "100 GF"));
		CHECK(bool(100_MF == "100 MF"));
		CHECK(bool(100_kF == "100 kF"));
		CHECK(bool(100_hF == "100 hF"));
		CHECK(bool(100_daF == "100 daF"));
		CHECK(bool(100_F == "100 F"));
		CHECK(bool(100_dF == "100 dF"));
		CHECK(bool(100_cF == "100 cF"));
		CHECK(bool(100_mF == "100 mF"));
		CHECK(bool(100_µF == "100 uF"));
		CHECK(bool(100_nF == "100 nF"));
		CHECK(bool(100_pF == "100 pF"));
		CHECK(bool(100_fF == "100 fF"));
		CHECK(bool(100_aF == "100 aF"));
		CHECK(bool(100_zF == "100 zF"));
		CHECK(bool(100_yF == "100 yF"));
		CHECK(bool(100_rF == "100 rF"));
		CHECK(bool(100_qF == "100 qF"));

		CHECK(bool(100_QΩ == "100 QOhm"));
		CHECK(bool(100_RΩ == "100 ROhm"));
		CHECK(bool(100_YΩ == "100 YOhm"));
		CHECK(bool(100_ZΩ == "100 ZOhm"));
		CHECK(bool(100_EΩ == "100 EOhm"));
		CHECK(bool(100_PΩ == "100 POhm"));
		CHECK(bool(100_TΩ == "100 TOhm"));
		CHECK(bool(100_GΩ == "100 GOhm"));
		CHECK(bool(100_MΩ == "100 MOhm"));
		CHECK(bool(100_kΩ == "100 kOhm"));
		CHECK(bool(100_hΩ == "100 hOhm"));
		CHECK(bool(100_daΩ == "100 daOhm"));
		CHECK(bool(100_Ω == "100 Ohm"));
		CHECK(bool(100_dΩ == "100 dOhm"));
		CHECK(bool(100_cΩ == "100 cOhm"));
		CHECK(bool(100_mΩ == "100 mOhm"));
		CHECK(bool(100_µΩ == "100 uOhm"));
		CHECK(bool(100_nΩ == "100 nOhm"));
		CHECK(bool(100_pΩ == "100 pOhm"));
		CHECK(bool(100_fΩ == "100 fOhm"));
		CHECK(bool(100_aΩ == "100 aOhm"));
		CHECK(bool(100_zΩ == "100 zOhm"));
		CHECK(bool(100_yΩ == "100 yOhm"));
		CHECK(bool(100_rΩ == "100 rOhm"));
		CHECK(bool(100_qΩ == "100 qOhm"));

		CHECK(bool(100_QS == "100 QS"));
		CHECK(bool(100_RS == "100 RS"));
		CHECK(bool(100_YS == "100 YS"));
		CHECK(bool(100_ZS == "100 ZS"));
		CHECK(bool(100_ES == "100 ES"));
		CHECK(bool(100_PS == "100 PS"));
		CHECK(bool(100_TS == "100 TS"));
		CHECK(bool(100_GS == "100 GS"));
		CHECK(bool(100_MS == "100 MS"));
		CHECK(bool(100_kS == "100 kS"));
		CHECK(bool(100_hS == "100 hS"));
		CHECK(bool(100_daS == "100 daS"));
		CHECK(bool(100_S == "100 S"));
		CHECK(bool(100_dS == "100 dS"));
		CHECK(bool(100_cS == "100 cS"));
		CHECK(bool(100_mS == "100 mS"));
		CHECK(bool(100_µS == "100 uS"));
		CHECK(bool(100_nS == "100 nS"));
		CHECK(bool(100_pS == "100 pS"));
		CHECK(bool(100_fS == "100 fS"));
		CHECK(bool(100_aS == "100 aS"));
		CHECK(bool(100_zS == "100 zS"));
		CHECK(bool(100_yS == "100 yS"));
		CHECK(bool(100_rS == "100 rS"));
		CHECK(bool(100_qS == "100 qS"));

		CHECK(bool(100_QWb == "100 QWb"));
		CHECK(bool(100_RWb == "100 RWb"));
		CHECK(bool(100_YWb == "100 YWb"));
		CHECK(bool(100_ZWb == "100 ZWb"));
		CHECK(bool(100_EWb == "100 EWb"));
		CHECK(bool(100_PWb == "100 PWb"));
		CHECK(bool(100_TWb == "100 TWb"));
		CHECK(bool(100_GWb == "100 GWb"));
		CHECK(bool(100_MWb == "100 MWb"));
		CHECK(bool(100_kWb == "100 kWb"));
		CHECK(bool(100_hWb == "100 hWb"));
		CHECK(bool(100_daWb == "100 daWb"));
		CHECK(bool(100_Wb == "100 Wb"));
		CHECK(bool(100_dWb == "100 dWb"));
		CHECK(bool(100_cWb == "100 cWb"));
		CHECK(bool(100_mWb == "100 mWb"));
		CHECK(bool(100_µWb == "100 uWb"));
		CHECK(bool(100_nWb == "100 nWb"));
		CHECK(bool(100_pWb == "100 pWb"));
		CHECK(bool(100_fWb == "100 fWb"));
		CHECK(bool(100_aWb == "100 aWb"));
		CHECK(bool(100_zWb == "100 zWb"));
		CHECK(bool(100_yWb == "100 yWb"));
		CHECK(bool(100_rWb == "100 rWb"));
		CHECK(bool(100_qWb == "100 qWb"));

		CHECK(bool(100_QT == "100 QT"));
		CHECK(bool(100_RT == "100 RT"));
		CHECK(bool(100_YT == "100 YT"));
		CHECK(bool(100_ZT == "100 ZT"));
		CHECK(bool(100_ET == "100 ET"));
		CHECK(bool(100_PT == "100 PT"));
		CHECK(bool(100_TT == "100 TT"));
		CHECK(bool(100_GT == "100 GT"));
		//CHECK(bool(100_MT == "100 MT"));
		CHECK(bool(100_kT == "100 kT"));
		CHECK(bool(100_hT == "100 hT"));
		CHECK(bool(100_daT == "100 daT"));
		CHECK(bool(100_T == "100 T"));
		CHECK(bool(100_dT == "100 dT"));
		CHECK(bool(100_cT == "100 cT"));
		CHECK(bool(100_mT == "100 mT"));
		CHECK(bool(100_µT == "100 uT"));
		CHECK(bool(100_nT == "100 nT"));
		CHECK(bool(100_pT == "100 pT"));
		CHECK(bool(100_fT == "100 fT"));
		CHECK(bool(100_aT == "100 aT"));
		CHECK(bool(100_zT == "100 zT"));
		CHECK(bool(100_yT == "100 yT"));
		CHECK(bool(100_rT == "100 rT"));
		CHECK(bool(100_qT == "100 qT"));

		CHECK(bool(100_QH == "100 QH"));
		CHECK(bool(100_RH == "100 RH"));
		CHECK(bool(100_YH == "100 YH"));
		CHECK(bool(100_ZH == "100 ZH"));
		CHECK(bool(100_EH == "100 EH"));
		CHECK(bool(100_PH == "100 PH"));
		CHECK(bool(100_TH == "100 TH"));
		CHECK(bool(100_GH == "100 GH"));
		CHECK(bool(100_MH == "100 MH"));
		CHECK(bool(100_kH == "100 kH"));
		CHECK(bool(100_hH == "100 hH"));
		CHECK(bool(100_daH == "100 daH"));
		CHECK(bool(100_H == "100 H"));
		CHECK(bool(100_dH == "100 dH"));
		CHECK(bool(100_cH == "100 cH"));
		CHECK(bool(100_mH == "100 mH"));
		CHECK(bool(100_µH == "100 uH"));
		CHECK(bool(100_nH == "100 nH"));
		CHECK(bool(100_pH == "100 pH"));
		CHECK(bool(100_fH == "100 fH"));
		CHECK(bool(100_aH == "100 aH"));
		CHECK(bool(100_zH == "100 zH"));
		CHECK(bool(100_yH == "100 yH"));
		CHECK(bool(100_rH == "100 rH"));
		CHECK(bool(100_qH == "100 qH"));

		CHECK(bool(100_Qlm == "100 Qlm"));
		CHECK(bool(100_Rlm == "100 Rlm"));
		CHECK(bool(100_Ylm == "100 Ylm"));
		CHECK(bool(100_Zlm == "100 Zlm"));
		CHECK(bool(100_Elm == "100 Elm"));
		CHECK(bool(100_Plm == "100 Plm"));
		CHECK(bool(100_Tlm == "100 Tlm"));
		CHECK(bool(100_Glm == "100 Glm"));
		CHECK(bool(100_Mlm == "100 Mlm"));
		CHECK(bool(100_klm == "100 klm"));
		CHECK(bool(100_hlm == "100 hlm"));
		CHECK(bool(100_dalm == "100 dalm"));
		CHECK(bool(100_lm == "100 lm"));
		CHECK(bool(100_dlm == "100 dlm"));
		CHECK(bool(100_clm == "100 clm"));
		CHECK(bool(100_mlm == "100 mlm"));
		CHECK(bool(100_µlm == "100 ulm"));
		CHECK(bool(100_nlm == "100 nlm"));
		CHECK(bool(100_plm == "100 plm"));
		CHECK(bool(100_flm == "100 flm"));
		CHECK(bool(100_alm == "100 alm"));
		CHECK(bool(100_zlm == "100 zlm"));
		CHECK(bool(100_ylm == "100 ylm"));
		CHECK(bool(100_rlm == "100 rlm"));
		CHECK(bool(100_qlm == "100 qlm"));

		CHECK(bool(100_Qlx == "100 Qlx"));
		CHECK(bool(100_Rlx == "100 Rlx"));
		CHECK(bool(100_Ylx == "100 Ylx"));
		CHECK(bool(100_Zlx == "100 Zlx"));
		CHECK(bool(100_Elx == "100 Elx"));
		CHECK(bool(100_Plx == "100 Plx"));
		CHECK(bool(100_Tlx == "100 Tlx"));
		CHECK(bool(100_Glx == "100 Glx"));
		CHECK(bool(100_Mlx == "100 Mlx"));
		CHECK(bool(100_klx == "100 klx"));
		CHECK(bool(100_hlx == "100 hlx"));
		CHECK(bool(100_dalx == "100 dalx"));
		CHECK(bool(100_lx == "100 lx"));
		CHECK(bool(100_dlx == "100 dlx"));
		CHECK(bool(100_clx == "100 clx"));
		CHECK(bool(100_mlx == "100 mlx"));
		CHECK(bool(100_µlx == "100 ulx"));
		CHECK(bool(100_nlx == "100 nlx"));
		CHECK(bool(100_plx == "100 plx"));
		CHECK(bool(100_flx == "100 flx"));
		CHECK(bool(100_alx == "100 alx"));
		CHECK(bool(100_zlx == "100 zlx"));
		CHECK(bool(100_ylx == "100 ylx"));
		CHECK(bool(100_rlx == "100 rlx"));
		CHECK(bool(100_qlx == "100 qlx"));

		CHECK(bool(100_QBq == "100 QBq"));
		CHECK(bool(100_RBq == "100 RBq"));
		CHECK(bool(100_YBq == "100 YBq"));
		CHECK(bool(100_ZBq == "100 ZBq"));
		CHECK(bool(100_EBq == "100 EBq"));
		CHECK(bool(100_PBq == "100 PBq"));
		CHECK(bool(100_TBq == "100 TBq"));
		CHECK(bool(100_GBq == "100 GBq"));
		CHECK(bool(100_MBq == "100 MBq"));
		CHECK(bool(100_kBq == "100 kBq"));
		CHECK(bool(100_hBq == "100 hBq"));
		CHECK(bool(100_daBq == "100 daBq"));
		CHECK(bool(100_Bq == "100 Bq"));
		CHECK(bool(100_dBq == "100 dBq"));
		CHECK(bool(100_cBq == "100 cBq"));
		CHECK(bool(100_mBq == "100 mBq"));
		CHECK(bool(100_µBq == "100 uBq"));
		CHECK(bool(100_nBq == "100 nBq"));
		CHECK(bool(100_pBq == "100 pBq"));
		CHECK(bool(100_fBq == "100 fBq"));
		CHECK(bool(100_aBq == "100 aBq"));
		CHECK(bool(100_zBq == "100 zBq"));
		CHECK(bool(100_yBq == "100 yBq"));
		CHECK(bool(100_rBq == "100 rBq"));
		CHECK(bool(100_qBq == "100 qBq"));

		CHECK(bool(100_QGy == "100 QGy"));
		CHECK(bool(100_RGy == "100 RGy"));
		CHECK(bool(100_YGy == "100 YGy"));
		CHECK(bool(100_ZGy == "100 ZGy"));
		CHECK(bool(100_EGy == "100 EGy"));
		CHECK(bool(100_PGy == "100 PGy"));
		CHECK(bool(100_TGy == "100 TGy"));
		CHECK(bool(100_GGy == "100 GGy"));
		CHECK(bool(100_MGy == "100 MGy"));
		CHECK(bool(100_kGy == "100 kGy"));
		CHECK(bool(100_hGy == "100 hGy"));
		CHECK(bool(100_daGy == "100 daGy"));
		CHECK(bool(100_Gy == "100 Gy"));
		CHECK(bool(100_dGy == "100 dGy"));
		CHECK(bool(100_cGy == "100 cGy"));
		CHECK(bool(100_mGy == "100 mGy"));
		CHECK(bool(100_µGy == "100 uGy"));
		CHECK(bool(100_nGy == "100 nGy"));
		CHECK(bool(100_pGy == "100 pGy"));
		CHECK(bool(100_fGy == "100 fGy"));
		CHECK(bool(100_aGy == "100 aGy"));
		CHECK(bool(100_zGy == "100 zGy"));
		CHECK(bool(100_yGy == "100 yGy"));
		CHECK(bool(100_rGy == "100 rGy"));
		CHECK(bool(100_qGy == "100 qGy"));

		CHECK(bool(100_QSv == "100 QSv"));
		CHECK(bool(100_RSv == "100 RSv"));
		CHECK(bool(100_YSv == "100 YSv"));
		CHECK(bool(100_ZSv == "100 ZSv"));
		CHECK(bool(100_ESv == "100 ESv"));
		CHECK(bool(100_PSv == "100 PSv"));
		CHECK(bool(100_TSv == "100 TSv"));
		CHECK(bool(100_GSv == "100 GSv"));
		CHECK(bool(100_MSv == "100 MSv"));
		CHECK(bool(100_kSv == "100 kSv"));
		CHECK(bool(100_hSv == "100 hSv"));
		CHECK(bool(100_daSv == "100 daSv"));
		CHECK(bool(100_Sv == "100 Sv"));
		CHECK(bool(100_dSv == "100 dSv"));
		CHECK(bool(100_cSv == "100 cSv"));
		CHECK(bool(100_mSv == "100 mSv"));
		CHECK(bool(100_µSv == "100 uSv"));
		CHECK(bool(100_nSv == "100 nSv"));
		CHECK(bool(100_pSv == "100 pSv"));
		CHECK(bool(100_fSv == "100 fSv"));
		CHECK(bool(100_aSv == "100 aSv"));
		CHECK(bool(100_zSv == "100 zSv"));
		CHECK(bool(100_ySv == "100 ySv"));
		CHECK(bool(100_rSv == "100 rSv"));
		CHECK(bool(100_qSv == "100 qSv"));

		CHECK(bool(100_Qkat == "100 Qkat"));
		CHECK(bool(100_Rkat == "100 Rkat"));
		CHECK(bool(100_Ykat == "100 Ykat"));
		CHECK(bool(100_Zkat == "100 Zkat"));
		CHECK(bool(100_Ekat == "100 Ekat"));
		CHECK(bool(100_Pkat == "100 Pkat"));
		CHECK(bool(100_Tkat == "100 Tkat"));
		CHECK(bool(100_Gkat == "100 Gkat"));
		CHECK(bool(100_Mkat == "100 Mkat"));
		CHECK(bool(100_kkat == "100 kkat"));
		CHECK(bool(100_hkat == "100 hkat"));
		CHECK(bool(100_dakat == "100 dakat"));
		CHECK(bool(100_kat == "100 kat"));
		CHECK(bool(100_dkat == "100 dkat"));
		CHECK(bool(100_ckat == "100 ckat"));
		CHECK(bool(100_mkat == "100 mkat"));
		CHECK(bool(100_µkat == "100 ukat"));
		CHECK(bool(100_nkat == "100 nkat"));
		CHECK(bool(100_pkat == "100 pkat"));
		CHECK(bool(100_fkat == "100 fkat"));
		CHECK(bool(100_akat == "100 akat"));
		CHECK(bool(100_zkat == "100 zkat"));
		CHECK(bool(100_ykat == "100 ykat"));
		CHECK(bool(100_rkat == "100 rkat"));
		CHECK(bool(100_qkat == "100 qkat"));

		CHECK(bool(100.0_QHz == "100 QHz"));
		CHECK(bool(100.0_RHz == "100 RHz"));
		CHECK(bool(100.0_YHz == "100 YHz"));
		CHECK(bool(100.0_ZHz == "100 ZHz"));
		CHECK(bool(100.0_EHz == "100 EHz"));
		CHECK(bool(100.0_PHz == "100 PHz"));
		CHECK(bool(100.0_THz == "100 THz"));
		CHECK(bool(100.0_GHz == "100 GHz"));
		CHECK(bool(100.0_MHz == "100 MHz"));
		CHECK(bool(100.0_kHz == "100 kHz"));
		CHECK(bool(100.0_hHz == "100 hHz"));
		CHECK(bool(100.0_daHz == "100 daHz"));
		CHECK(bool(100.0_Hz == "100 Hz"));
		CHECK(bool(100.0_dHz == "100 dHz"));
		CHECK(bool(100.0_cHz == "100 cHz"));
		CHECK(bool(100.0_mHz == "100 mHz"));
		CHECK(bool(100.0_µHz == "100 uHz"));
		CHECK(bool(100.0_nHz == "100 nHz"));
		CHECK(bool(100.0_pHz == "100 pHz"));
		CHECK(bool(100.0_fHz == "100 fHz"));
		CHECK(bool(100.0_aHz == "100 aHz"));
		CHECK(bool(100.0_zHz == "100 zHz"));
		CHECK(bool(100.0_yHz == "100 yHz"));
		CHECK(bool(100.0_rHz == "100 rHz"));
		CHECK(bool(100.0_qHz == "100 qHz"));

		CHECK(bool(100.0_QN == "100 QN"));
		CHECK(bool(100.0_RN == "100 RN"));
		CHECK(bool(100.0_YN == "100 YN"));
		CHECK(bool(100.0_ZN == "100 ZN"));
		CHECK(bool(100.0_EN == "100 EN"));
		CHECK(bool(100.0_PN == "100 PN"));
		CHECK(bool(100.0_TN == "100 TN"));
		CHECK(bool(100.0_GN == "100 GN"));
		CHECK(bool(100.0_MN == "100 MN"));
		CHECK(bool(100.0_kN == "100 kN"));
		CHECK(bool(100.0_hN == "100 hN"));
		CHECK(bool(100.0_daN == "100 daN"));
		CHECK(bool(100.0_N == "100 N"));
		CHECK(bool(100.0_dN == "100 dN"));
		CHECK(bool(100.0_cN == "100 cN"));
		CHECK(bool(100.0_mN == "100 mN"));
		CHECK(bool(100.0_µN == "100 uN"));
		CHECK(bool(100.0_nN == "100 nN"));
		CHECK(bool(100.0_pN == "100 pN"));
		CHECK(bool(100.0_fN == "100 fN"));
		CHECK(bool(100.0_aN == "100 aN"));
		CHECK(bool(100.0_zN == "100 zN"));
		CHECK(bool(100.0_yN == "100 yN"));
		CHECK(bool(100.0_rN == "100 rN"));
		CHECK(bool(100.0_qN == "100 qN"));

		CHECK(bool(100.0_QPa == "100 QPa"));
		CHECK(bool(100.0_RPa == "100 RPa"));
		CHECK(bool(100.0_YPa == "100 YPa"));
		CHECK(bool(100.0_ZPa == "100 ZPa"));
		CHECK(bool(100.0_EPa == "100 EPa"));
		CHECK(bool(100.0_PPa == "100 PPa"));
		CHECK(bool(100.0_TPa == "100 TPa"));
		CHECK(bool(100.0_GPa == "100 GPa"));
		CHECK(bool(100.0_MPa == "100 MPa"));
		CHECK(bool(100.0_kPa == "100 kPa"));
		CHECK(bool(100.0_hPa == "100 hPa"));
		CHECK(bool(100.0_daPa == "100 daPa"));
		CHECK(bool(100.0_Pa == "100 Pa"));
		CHECK(bool(100.0_dPa == "100 dPa"));
		CHECK(bool(100.0_cPa == "100 cPa"));
		CHECK(bool(100.0_mPa == "100 mPa"));
		CHECK(bool(100.0_µPa == "100 uPa"));
		CHECK(bool(100.0_nPa == "100 nPa"));
		CHECK(bool(100.0_pPa == "100 pPa"));
		CHECK(bool(100.0_fPa == "100 fPa"));
		CHECK(bool(100.0_aPa == "100 aPa"));
		CHECK(bool(100.0_zPa == "100 zPa"));
		CHECK(bool(100.0_yPa == "100 yPa"));
		CHECK(bool(100.0_rPa == "100 rPa"));
		CHECK(bool(100.0_qPa == "100 qPa"));

		CHECK(bool(100.0_QJ == "100 QJ"));
		CHECK(bool(100.0_RJ == "100 RJ"));
		CHECK(bool(100.0_YJ == "100 YJ"));
		CHECK(bool(100.0_ZJ == "100 ZJ"));
		CHECK(bool(100.0_EJ == "100 EJ"));
		CHECK(bool(100.0_PJ == "100 PJ"));
		CHECK(bool(100.0_TJ == "100 TJ"));
		CHECK(bool(100.0_GJ == "100 GJ"));
		CHECK(bool(100.0_MJ == "100 MJ"));
		CHECK(bool(100.0_kJ == "100 kJ"));
		CHECK(bool(100.0_hJ == "100 hJ"));
		CHECK(bool(100.0_daJ == "100 daJ"));
		CHECK(bool(100.0_J == "100 J"));
		CHECK(bool(100.0_dJ == "100 dJ"));
		CHECK(bool(100.0_cJ == "100 cJ"));
		CHECK(bool(100.0_mJ == "100 mJ"));
		CHECK(bool(100.0_µJ == "100 uJ"));
		CHECK(bool(100.0_nJ == "100 nJ"));
		CHECK(bool(100.0_pJ == "100 pJ"));
		CHECK(bool(100.0_fJ == "100 fJ"));
		CHECK(bool(100.0_aJ == "100 aJ"));
		CHECK(bool(100.0_zJ == "100 zJ"));
		CHECK(bool(100.0_yJ == "100 yJ"));
		CHECK(bool(100.0_rJ == "100 rJ"));
		CHECK(bool(100.0_qJ == "100 qJ"));

		CHECK(bool(100.0_QW == "100 QW"));
		CHECK(bool(100.0_RW == "100 RW"));
		CHECK(bool(100.0_YW == "100 YW"));
		CHECK(bool(100.0_ZW == "100 ZW"));
		CHECK(bool(100.0_EW == "100 EW"));
		CHECK(bool(100.0_PW == "100 PW"));
		CHECK(bool(100.0_TW == "100 TW"));
		CHECK(bool(100.0_GW == "100 GW"));
		CHECK(bool(100.0_MW == "100 MW"));
		CHECK(bool(100.0_kW == "100 kW"));
		CHECK(bool(100.0_hW == "100 hW"));
		CHECK(bool(100.0_daW == "100 daW"));
		CHECK(bool(100.0_W == "100 W"));
		CHECK(bool(100.0_dW == "100 dW"));
		CHECK(bool(100.0_cW == "100 cW"));
		CHECK(bool(100.0_mW == "100 mW"));
		CHECK(bool(100.0_µW == "100 uW"));
		CHECK(bool(100.0_nW == "100 nW"));
		CHECK(bool(100.0_pW == "100 pW"));
		CHECK(bool(100.0_fW == "100 fW"));
		CHECK(bool(100.0_aW == "100 aW"));
		CHECK(bool(100.0_zW == "100 zW"));
		CHECK(bool(100.0_yW == "100 yW"));
		CHECK(bool(100.0_rW == "100 rW"));
		CHECK(bool(100.0_qW == "100 qW"));

		CHECK(bool(100.0_QA == "100 QA"));
		CHECK(bool(100.0_RA == "100 RA"));
		CHECK(bool(100.0_YA == "100 YA"));
		CHECK(bool(100.0_ZA == "100 ZA"));
		CHECK(bool(100.0_EA == "100 EA"));
		CHECK(bool(100.0_PA == "100 PA"));
		CHECK(bool(100.0_TA == "100 TA"));
		CHECK(bool(100.0_GA == "100 GA"));
		CHECK(bool(100.0_MA == "100 MA"));
		CHECK(bool(100.0_kA == "100 kA"));
		CHECK(bool(100.0_hA == "100 hA"));
		CHECK(bool(100.0_daA == "100 daA"));
		CHECK(bool(100.0_A == "100 A"));
		CHECK(bool(100.0_dA == "100 dA"));
		CHECK(bool(100.0_cA == "100 cA"));
		CHECK(bool(100.0_mA == "100 mA"));
		CHECK(bool(100.0_µA == "100 uA"));
		CHECK(bool(100.0_nA == "100 nA"));
		CHECK(bool(100.0_pA == "100 pA"));
		CHECK(bool(100.0_fA == "100 fA"));
		CHECK(bool(100.0_aA == "100 aA"));
		CHECK(bool(100.0_zA == "100 zA"));
		CHECK(bool(100.0_yA == "100 yA"));
		CHECK(bool(100.0_rA == "100 rA"));
		CHECK(bool(100.0_qA == "100 qA"));

		CHECK(bool(100.0_QV == "100 QV"));
		CHECK(bool(100.0_RV == "100 RV"));
		CHECK(bool(100.0_YV == "100 YV"));
		CHECK(bool(100.0_ZV == "100 ZV"));
		CHECK(bool(100.0_EV == "100 EV"));
		CHECK(bool(100.0_PV == "100 PV"));
		CHECK(bool(100.0_TV == "100 TV"));
		CHECK(bool(100.0_GV == "100 GV"));
		CHECK(bool(100.0_MV == "100 MV"));
		CHECK(bool(100.0_kV == "100 kV"));
		CHECK(bool(100.0_hV == "100 hV"));
		CHECK(bool(100.0_daV == "100 daV"));
		CHECK(bool(100.0_V == "100 V"));
		CHECK(bool(100.0_dV == "100 dV"));
		CHECK(bool(100.0_cV == "100 cV"));
		CHECK(bool(100.0_mV == "100 mV"));
		CHECK(bool(100.0_µV == "100 uV"));
		CHECK(bool(100.0_nV == "100 nV"));
		CHECK(bool(100.0_pV == "100 pV"));
		CHECK(bool(100.0_fV == "100 fV"));
		CHECK(bool(100.0_aV == "100 aV"));
		CHECK(bool(100.0_zV == "100 zV"));
		CHECK(bool(100.0_yV == "100 yV"));
		CHECK(bool(100.0_rV == "100 rV"));
		CHECK(bool(100.0_qV == "100 qV"));

		CHECK(bool(100.0_QF == "100 QF"));
		CHECK(bool(100.0_RF == "100 RF"));
		CHECK(bool(100.0_YF == "100 YF"));
		CHECK(bool(100.0_ZF == "100 ZF"));
		CHECK(bool(100.0_EF == "100 EF"));
		CHECK(bool(100.0_PF == "100 PF"));
		CHECK(bool(100.0_TF == "100 TF"));
		CHECK(bool(100.0_GF == "100 GF"));
		CHECK(bool(100.0_MF == "100 MF"));
		CHECK(bool(100.0_kF == "100 kF"));
		CHECK(bool(100.0_hF == "100 hF"));
		CHECK(bool(100.0_daF == "100 daF"));
		CHECK(bool(100.0_F == "100 F"));
		CHECK(bool(100.0_dF == "100 dF"));
		CHECK(bool(100.0_cF == "100 cF"));
		CHECK(bool(100.0_mF == "100 mF"));
		CHECK(bool(100.0_µF == "100 uF"));
		CHECK(bool(100.0_nF == "100 nF"));
		CHECK(bool(100.0_pF == "100 pF"));
		CHECK(bool(100.0_fF == "100 fF"));
		CHECK(bool(100.0_aF == "100 aF"));
		CHECK(bool(100.0_zF == "100 zF"));
		CHECK(bool(100.0_yF == "100 yF"));
		CHECK(bool(100.0_rF == "100 rF"));
		CHECK(bool(100.0_qF == "100 qF"));

		CHECK(bool(100.0_QΩ == "100 QOhm"));
		CHECK(bool(100.0_RΩ == "100 ROhm"));
		CHECK(bool(100.0_YΩ == "100 YOhm"));
		CHECK(bool(100.0_ZΩ == "100 ZOhm"));
		CHECK(bool(100.0_EΩ == "100 EOhm"));
		CHECK(bool(100.0_PΩ == "100 POhm"));
		CHECK(bool(100.0_TΩ == "100 TOhm"));
		CHECK(bool(100.0_GΩ == "100 GOhm"));
		CHECK(bool(100.0_MΩ == "100 MOhm"));
		CHECK(bool(100.0_kΩ == "100 kOhm"));
		CHECK(bool(100.0_hΩ == "100 hOhm"));
		CHECK(bool(100.0_daΩ == "100 daOhm"));
		CHECK(bool(100.0_Ω == "100 Ohm"));
		CHECK(bool(100.0_dΩ == "100 dOhm"));
		CHECK(bool(100.0_cΩ == "100 cOhm"));
		CHECK(bool(100.0_mΩ == "100 mOhm"));
		CHECK(bool(100.0_µΩ == "100 uOhm"));
		CHECK(bool(100.0_nΩ == "100 nOhm"));
		CHECK(bool(100.0_pΩ == "100 pOhm"));
		CHECK(bool(100.0_fΩ == "100 fOhm"));
		CHECK(bool(100.0_aΩ == "100 aOhm"));
		CHECK(bool(100.0_zΩ == "100 zOhm"));
		CHECK(bool(100.0_yΩ == "100 yOhm"));
		CHECK(bool(100.0_rΩ == "100 rOhm"));
		CHECK(bool(100.0_qΩ == "100 qOhm"));

		CHECK(bool(100.0_QS == "100 QS"));
		CHECK(bool(100.0_RS == "100 RS"));
		CHECK(bool(100.0_YS == "100 YS"));
		CHECK(bool(100.0_ZS == "100 ZS"));
		CHECK(bool(100.0_ES == "100 ES"));
		CHECK(bool(100.0_PS == "100 PS"));
		CHECK(bool(100.0_TS == "100 TS"));
		CHECK(bool(100.0_GS == "100 GS"));
		CHECK(bool(100.0_MS == "100 MS"));
		CHECK(bool(100.0_kS == "100 kS"));
		CHECK(bool(100.0_hS == "100 hS"));
		CHECK(bool(100.0_daS == "100 daS"));
		CHECK(bool(100.0_S == "100 S"));
		CHECK(bool(100.0_dS == "100 dS"));
		CHECK(bool(100.0_cS == "100 cS"));
		CHECK(bool(100.0_mS == "100 mS"));
		CHECK(bool(100.0_µS == "100 uS"));
		CHECK(bool(100.0_nS == "100 nS"));
		CHECK(bool(100.0_pS == "100 pS"));
		CHECK(bool(100.0_fS == "100 fS"));
		CHECK(bool(100.0_aS == "100 aS"));
		CHECK(bool(100.0_zS == "100 zS"));
		CHECK(bool(100.0_yS == "100 yS"));
		CHECK(bool(100.0_rS == "100 rS"));
		CHECK(bool(100.0_qS == "100 qS"));

		CHECK(bool(100.0_QWb == "100 QWb"));
		CHECK(bool(100.0_RWb == "100 RWb"));
		CHECK(bool(100.0_YWb == "100 YWb"));
		CHECK(bool(100.0_ZWb == "100 ZWb"));
		CHECK(bool(100.0_EWb == "100 EWb"));
		CHECK(bool(100.0_PWb == "100 PWb"));
		CHECK(bool(100.0_TWb == "100 TWb"));
		CHECK(bool(100.0_GWb == "100 GWb"));
		CHECK(bool(100.0_MWb == "100 MWb"));
		CHECK(bool(100.0_kWb == "100 kWb"));
		CHECK(bool(100.0_hWb == "100 hWb"));
		CHECK(bool(100.0_daWb == "100 daWb"));
		CHECK(bool(100.0_Wb == "100 Wb"));
		CHECK(bool(100.0_dWb == "100 dWb"));
		CHECK(bool(100.0_cWb == "100 cWb"));
		CHECK(bool(100.0_mWb == "100 mWb"));
		CHECK(bool(100.0_µWb == "100 uWb"));
		CHECK(bool(100.0_nWb == "100 nWb"));
		CHECK(bool(100.0_pWb == "100 pWb"));
		CHECK(bool(100.0_fWb == "100 fWb"));
		CHECK(bool(100.0_aWb == "100 aWb"));
		CHECK(bool(100.0_zWb == "100 zWb"));
		CHECK(bool(100.0_yWb == "100 yWb"));
		CHECK(bool(100.0_rWb == "100 rWb"));
		CHECK(bool(100.0_qWb == "100 qWb"));

		CHECK(bool(100.0_QT == "100 QT"));
		CHECK(bool(100.0_RT == "100 RT"));
		CHECK(bool(100.0_YT == "100 YT"));
		CHECK(bool(100.0_ZT == "100 ZT"));
		CHECK(bool(100.0_ET == "100 ET"));
		CHECK(bool(100.0_PT == "100 PT"));
		CHECK(bool(100.0_TT == "100 TT"));
		CHECK(bool(100.0_GT == "100 GT"));
		//CHECK(bool(100.0_MT == "100 MT"));
		CHECK(bool(100.0_kT == "100 kT"));
		CHECK(bool(100.0_hT == "100 hT"));
		CHECK(bool(100.0_daT == "100 daT"));
		CHECK(bool(100.0_T == "100 T"));
		CHECK(bool(100.0_dT == "100 dT"));
		CHECK(bool(100.0_cT == "100 cT"));
		CHECK(bool(100.0_mT == "100 mT"));
		CHECK(bool(100.0_µT == "100 uT"));
		CHECK(bool(100.0_nT == "100 nT"));
		CHECK(bool(100.0_pT == "100 pT"));
		CHECK(bool(100.0_fT == "100 fT"));
		CHECK(bool(100.0_aT == "100 aT"));
		CHECK(bool(100.0_zT == "100 zT"));
		CHECK(bool(100.0_yT == "100 yT"));
		CHECK(bool(100.0_rT == "100 rT"));
		CHECK(bool(100.0_qT == "100 qT"));

		CHECK(bool(100.0_QH == "100 QH"));
		CHECK(bool(100.0_RH == "100 RH"));
		CHECK(bool(100.0_YH == "100 YH"));
		CHECK(bool(100.0_ZH == "100 ZH"));
		CHECK(bool(100.0_EH == "100 EH"));
		CHECK(bool(100.0_PH == "100 PH"));
		CHECK(bool(100.0_TH == "100 TH"));
		CHECK(bool(100.0_GH == "100 GH"));
		CHECK(bool(100.0_MH == "100 MH"));
		CHECK(bool(100.0_kH == "100 kH"));
		CHECK(bool(100.0_hH == "100 hH"));
		CHECK(bool(100.0_daH == "100 daH"));
		CHECK(bool(100.0_H == "100 H"));
		CHECK(bool(100.0_dH == "100 dH"));
		CHECK(bool(100.0_cH == "100 cH"));
		CHECK(bool(100.0_mH == "100 mH"));
		CHECK(bool(100.0_µH == "100 uH"));
		CHECK(bool(100.0_nH == "100 nH"));
		CHECK(bool(100.0_pH == "100 pH"));
		CHECK(bool(100.0_fH == "100 fH"));
		CHECK(bool(100.0_aH == "100 aH"));
		CHECK(bool(100.0_zH == "100 zH"));
		CHECK(bool(100.0_yH == "100 yH"));
		CHECK(bool(100.0_rH == "100 rH"));
		CHECK(bool(100.0_qH == "100 qH"));

		CHECK(bool(100.0_Qlm == "100 Qlm"));
		CHECK(bool(100.0_Rlm == "100 Rlm"));
		CHECK(bool(100.0_Ylm == "100 Ylm"));
		CHECK(bool(100.0_Zlm == "100 Zlm"));
		CHECK(bool(100.0_Elm == "100 Elm"));
		CHECK(bool(100.0_Plm == "100 Plm"));
		CHECK(bool(100.0_Tlm == "100 Tlm"));
		CHECK(bool(100.0_Glm == "100 Glm"));
		CHECK(bool(100.0_Mlm == "100 Mlm"));
		CHECK(bool(100.0_klm == "100 klm"));
		CHECK(bool(100.0_hlm == "100 hlm"));
		CHECK(bool(100.0_dalm == "100 dalm"));
		CHECK(bool(100.0_lm == "100 lm"));
		CHECK(bool(100.0_dlm == "100 dlm"));
		CHECK(bool(100.0_clm == "100 clm"));
		CHECK(bool(100.0_mlm == "100 mlm"));
		CHECK(bool(100.0_µlm == "100 ulm"));
		CHECK(bool(100.0_nlm == "100 nlm"));
		CHECK(bool(100.0_plm == "100 plm"));
		CHECK(bool(100.0_flm == "100 flm"));
		CHECK(bool(100.0_alm == "100 alm"));
		CHECK(bool(100.0_zlm == "100 zlm"));
		CHECK(bool(100.0_ylm == "100 ylm"));
		CHECK(bool(100.0_rlm == "100 rlm"));
		CHECK(bool(100.0_qlm == "100 qlm"));

		CHECK(bool(100.0_Qlx == "100 Qlx"));
		CHECK(bool(100.0_Rlx == "100 Rlx"));
		CHECK(bool(100.0_Ylx == "100 Ylx"));
		CHECK(bool(100.0_Zlx == "100 Zlx"));
		CHECK(bool(100.0_Elx == "100 Elx"));
		CHECK(bool(100.0_Plx == "100 Plx"));
		CHECK(bool(100.0_Tlx == "100 Tlx"));
		CHECK(bool(100.0_Glx == "100 Glx"));
		CHECK(bool(100.0_Mlx == "100 Mlx"));
		CHECK(bool(100.0_klx == "100 klx"));
		CHECK(bool(100.0_hlx == "100 hlx"));
		CHECK(bool(100.0_dalx == "100 dalx"));
		CHECK(bool(100.0_lx == "100 lx"));
		CHECK(bool(100.0_dlx == "100 dlx"));
		CHECK(bool(100.0_clx == "100 clx"));
		CHECK(bool(100.0_mlx == "100 mlx"));
		CHECK(bool(100.0_µlx == "100 ulx"));
		CHECK(bool(100.0_nlx == "100 nlx"));
		CHECK(bool(100.0_plx == "100 plx"));
		CHECK(bool(100.0_flx == "100 flx"));
		CHECK(bool(100.0_alx == "100 alx"));
		CHECK(bool(100.0_zlx == "100 zlx"));
		CHECK(bool(100.0_ylx == "100 ylx"));
		CHECK(bool(100.0_rlx == "100 rlx"));
		CHECK(bool(100.0_qlx == "100 qlx"));

		CHECK(bool(100.0_QBq == "100 QBq"));
		CHECK(bool(100.0_RBq == "100 RBq"));
		CHECK(bool(100.0_YBq == "100 YBq"));
		CHECK(bool(100.0_ZBq == "100 ZBq"));
		CHECK(bool(100.0_EBq == "100 EBq"));
		CHECK(bool(100.0_PBq == "100 PBq"));
		CHECK(bool(100.0_TBq == "100 TBq"));
		CHECK(bool(100.0_GBq == "100 GBq"));
		CHECK(bool(100.0_MBq == "100 MBq"));
		CHECK(bool(100.0_kBq == "100 kBq"));
		CHECK(bool(100.0_hBq == "100 hBq"));
		CHECK(bool(100.0_daBq == "100 daBq"));
		CHECK(bool(100.0_Bq == "100 Bq"));
		CHECK(bool(100.0_dBq == "100 dBq"));
		CHECK(bool(100.0_cBq == "100 cBq"));
		CHECK(bool(100.0_mBq == "100 mBq"));
		CHECK(bool(100.0_µBq == "100 uBq"));
		CHECK(bool(100.0_nBq == "100 nBq"));
		CHECK(bool(100.0_pBq == "100 pBq"));
		CHECK(bool(100.0_fBq == "100 fBq"));
		CHECK(bool(100.0_aBq == "100 aBq"));
		CHECK(bool(100.0_zBq == "100 zBq"));
		CHECK(bool(100.0_yBq == "100 yBq"));
		CHECK(bool(100.0_rBq == "100 rBq"));
		CHECK(bool(100.0_qBq == "100 qBq"));

		CHECK(bool(100.0_QGy == "100 QGy"));
		CHECK(bool(100.0_RGy == "100 RGy"));
		CHECK(bool(100.0_YGy == "100 YGy"));
		CHECK(bool(100.0_ZGy == "100 ZGy"));
		CHECK(bool(100.0_EGy == "100 EGy"));
		CHECK(bool(100.0_PGy == "100 PGy"));
		CHECK(bool(100.0_TGy == "100 TGy"));
		CHECK(bool(100.0_GGy == "100 GGy"));
		CHECK(bool(100.0_MGy == "100 MGy"));
		CHECK(bool(100.0_kGy == "100 kGy"));
		CHECK(bool(100.0_hGy == "100 hGy"));
		CHECK(bool(100.0_daGy == "100 daGy"));
		CHECK(bool(100.0_Gy == "100 Gy"));
		CHECK(bool(100.0_dGy == "100 dGy"));
		CHECK(bool(100.0_cGy == "100 cGy"));
		CHECK(bool(100.0_mGy == "100 mGy"));
		CHECK(bool(100.0_µGy == "100 uGy"));
		CHECK(bool(100.0_nGy == "100 nGy"));
		CHECK(bool(100.0_pGy == "100 pGy"));
		CHECK(bool(100.0_fGy == "100 fGy"));
		CHECK(bool(100.0_aGy == "100 aGy"));
		CHECK(bool(100.0_zGy == "100 zGy"));
		CHECK(bool(100.0_yGy == "100 yGy"));
		CHECK(bool(100.0_rGy == "100 rGy"));
		CHECK(bool(100.0_qGy == "100 qGy"));

		CHECK(bool(100.0_QSv == "100 QSv"));
		CHECK(bool(100.0_RSv == "100 RSv"));
		CHECK(bool(100.0_YSv == "100 YSv"));
		CHECK(bool(100.0_ZSv == "100 ZSv"));
		CHECK(bool(100.0_ESv == "100 ESv"));
		CHECK(bool(100.0_PSv == "100 PSv"));
		CHECK(bool(100.0_TSv == "100 TSv"));
		CHECK(bool(100.0_GSv == "100 GSv"));
		CHECK(bool(100.0_MSv == "100 MSv"));
		CHECK(bool(100.0_kSv == "100 kSv"));
		CHECK(bool(100.0_hSv == "100 hSv"));
		CHECK(bool(100.0_daSv == "100 daSv"));
		CHECK(bool(100.0_Sv == "100 Sv"));
		CHECK(bool(100.0_dSv == "100 dSv"));
		CHECK(bool(100.0_cSv == "100 cSv"));
		CHECK(bool(100.0_mSv == "100 mSv"));
		CHECK(bool(100.0_µSv == "100 uSv"));
		CHECK(bool(100.0_nSv == "100 nSv"));
		CHECK(bool(100.0_pSv == "100 pSv"));
		CHECK(bool(100.0_fSv == "100 fSv"));
		CHECK(bool(100.0_aSv == "100 aSv"));
		CHECK(bool(100.0_zSv == "100 zSv"));
		CHECK(bool(100.0_ySv == "100 ySv"));
		CHECK(bool(100.0_rSv == "100 rSv"));
		CHECK(bool(100.0_qSv == "100 qSv"));

		CHECK(bool(100.0_Qkat == "100 Qkat"));
		CHECK(bool(100.0_Rkat == "100 Rkat"));
		CHECK(bool(100.0_Ykat == "100 Ykat"));
		CHECK(bool(100.0_Zkat == "100 Zkat"));
		CHECK(bool(100.0_Ekat == "100 Ekat"));
		CHECK(bool(100.0_Pkat == "100 Pkat"));
		CHECK(bool(100.0_Tkat == "100 Tkat"));
		CHECK(bool(100.0_Gkat == "100 Gkat"));
		CHECK(bool(100.0_Mkat == "100 Mkat"));
		CHECK(bool(100.0_kkat == "100 kkat"));
		CHECK(bool(100.0_hkat == "100 hkat"));
		CHECK(bool(100.0_dakat == "100 dakat"));
		CHECK(bool(100.0_kat == "100 kat"));
		CHECK(bool(100.0_dkat == "100 dkat"));
		CHECK(bool(100.0_ckat == "100 ckat"));
		CHECK(bool(100.0_mkat == "100 mkat"));
		CHECK(bool(100.0_µkat == "100 ukat"));
		CHECK(bool(100.0_nkat == "100 nkat"));
		CHECK(bool(100.0_pkat == "100 pkat"));
		CHECK(bool(100.0_fkat == "100 fkat"));
		CHECK(bool(100.0_akat == "100 akat"));
		CHECK(bool(100.0_zkat == "100 zkat"));
		CHECK(bool(100.0_ykat == "100 ykat"));
		CHECK(bool(100.0_rkat == "100 rkat"));
		CHECK(bool(100.0_qkat == "100 qkat"));
	}
}