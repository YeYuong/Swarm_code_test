    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 191;
            section.data(191)  = dumData; %prealloc

                    ;% rtP.PIDController2_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PIDController_D
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.PIDController1_D
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController2_D_dfmo4lhky4
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController_D_bnpdwpgf2r
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController1_D_ipmgxlwt3s
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController2_D_g4w5zspqgm
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController_D_jkhgbbl1en
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController1_D_ak3x55jqvu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController2_D_jd4dbxg05c
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController_D_n0ajifbrzl
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController1_D_lllqr1ay3g
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PIDController_I
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PIDController1_I
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.PIDController2_I
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PIDController_I_ctexg1ydk0
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PIDController1_I_g3r3n5sujh
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.PIDController2_I_k3epcgcoj0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.PIDController_I_dlmuknchuh
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.PIDController1_I_hetisvzriu
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.PIDController2_I_ndlknojsy1
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.PIDController_I_l4hu2imemx
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.PIDController1_I_npnz5gp3zv
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.PIDController2_I_edyryjr1ey
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.PIDController2_InitialConditionForFilter
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.PIDController1_InitialConditionForFilter
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.PIDController2_InitialConditionForFilter_g0oftxmj3a
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.PIDController_InitialConditionForFilter_jdtq01u0hx
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.PIDController1_InitialConditionForFilter_e5pnbc3vtr
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.PIDController2_InitialConditionForFilter_dlk0zcvwml
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.PIDController_InitialConditionForFilter_cnipdysl5i
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.PIDController1_InitialConditionForFilter_psmuwl2ggt
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.PIDController2_InitialConditionForFilter_p4g1s3metf
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.PIDController_InitialConditionForFilter_o14mxov0mo
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.PIDController1_InitialConditionForFilter_fwycow5gb3
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.PIDController2_InitialConditionForIntegrator
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.PIDController1_InitialConditionForIntegrator
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.PIDController2_InitialConditionForIntegrator_pbsngr4knz
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.PIDController_InitialConditionForIntegrator_ahqtbrbvjw
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_o5oicxyhtt
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.PIDController2_InitialConditionForIntegrator_azyc2l4qmp
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.PIDController_InitialConditionForIntegrator_i0pcwuwujv
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_pn3q4lemuu
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.PIDController2_InitialConditionForIntegrator_osgdcreqgv
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.PIDController_InitialConditionForIntegrator_dochlmuieg
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_mfds2g0sdm
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP._Ixx
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.u_Ixx
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.Quadrotor1_Ixx
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.Quadrotor_Ixx
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP._Iyy
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.u_Iyy
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.Quadrotor1_Iyy
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.Quadrotor_Iyy
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP._Izz
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.u_Izz
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.Quadrotor1_Izz
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Quadrotor_Izz
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.PIDController2_N
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.PIDController_N
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.PIDController1_N
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.PIDController2_N_mpslhyucvp
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.PIDController_N_nq5smeuvru
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.PIDController1_N_ju5pdg3n40
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.PIDController2_N_gwanukygue
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.PIDController_N_bgper011ra
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.PIDController1_N_gfjurlmhit
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.PIDController2_N_lijdwwumlg
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.PIDController_N_j1rqxncrvn
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.PIDController1_N_kwhnf3hzry
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.PIDController2_P
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.PIDController_P
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.PIDController1_P
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.PIDController2_P_dlj4ikvxns
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.PIDController_P_l3dvp4gzhj
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.PIDController1_P_oaxjkkp4ew
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.PIDController2_P_kp1lf3scwu
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.PIDController_P_bdo03lnhov
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtP.PIDController1_P_m1rpi1feq5
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtP.PIDController2_P_evzc3v5wmi
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtP.PIDController_P_gglswmusll
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtP._g
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtP.Quadrotor1_g
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 84;

                    ;% rtP._g_itsbn0zy4d
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 85;

                    ;% rtP.Quadrotor_g
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 86;

                    ;% rtP.fantheta1_m
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 87;

                    ;% rtP._m
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 88;

                    ;% rtP.fantheta_m
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 89;

                    ;% rtP._m_acbzxt22m1
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 90;

                    ;% rtP.Switch3_Threshold
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 91;

                    ;% rtP.Integrator1_IC
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 92;

                    ;% rtP.Saturation_UpperSat
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 93;

                    ;% rtP.Saturation_LowerSat
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 94;

                    ;% rtP.Integrator1_IC_njked3y5ka
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 95;

                    ;% rtP.Saturation1_UpperSat
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 96;

                    ;% rtP.Saturation1_LowerSat
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 97;

                    ;% rtP.Integrator5_IC
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 98;

                    ;% rtP.Integrator5_IC_f1f5dsuuw2
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 99;

                    ;% rtP.Integrator1_IC_heq4ih3sop
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 100;

                    ;% rtP.Integrator1_IC_ggm3f24kg1
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 101;

                    ;% rtP.Gain4_Gain
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 102;

                    ;% rtP.Integrator_IC
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 103;

                    ;% rtP.Integrator_IC_lqzn20lau3
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 104;

                    ;% rtP.Gain1_Gain
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 105;

                    ;% rtP._Gain
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 106;

                    ;% rtP.u_Gain
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 107;

                    ;% rtP.Integrator1_IC_mm1y0ejde0
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 108;

                    ;% rtP.Saturation2_UpperSat
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 109;

                    ;% rtP.Saturation2_LowerSat
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 110;

                    ;% rtP.Integrator1_IC_fvi5gvi3z2
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 111;

                    ;% rtP.Integrator3_IC
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 112;

                    ;% rtP.Integrator3_IC_nnhhmqfjhs
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 113;

                    ;% rtP.Gain5_Gain
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 114;

                    ;% rtP.Integrator2_IC
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 115;

                    ;% rtP.Integrator2_IC_onz01dod3h
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 116;

                    ;% rtP.Gain2_Gain
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 117;

                    ;% rtP.u_Gain_p1u4qwnswq
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 118;

                    ;% rtP.u_Gain_oeh5i53seq
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 119;

                    ;% rtP.Integrator4_IC
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 120;

                    ;% rtP.Integrator1_IC_hluxpggxgx
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 121;

                    ;% rtP.Saturation_UpperSat_ha4sihnonx
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 122;

                    ;% rtP.Saturation_LowerSat_hvr4bzptww
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 123;

                    ;% rtP.Integrator1_IC_lmb1knnxne
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 124;

                    ;% rtP.Saturation1_UpperSat_hb4te1hlrm
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 125;

                    ;% rtP.Saturation1_LowerSat_bckpxbzwol
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 126;

                    ;% rtP.Saturation_UpperSat_hwp4xnffla
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 127;

                    ;% rtP.Saturation_LowerSat_psalob5khl
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 128;

                    ;% rtP.Saturation1_UpperSat_pb2v3x1tuf
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 129;

                    ;% rtP.Saturation1_LowerSat_egd2dbjq3l
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 130;

                    ;% rtP.Integrator5_IC_if0dkkc4sn
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 131;

                    ;% rtP.Integrator1_IC_oayqv41ri2
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 132;

                    ;% rtP.Saturation2_UpperSat_eydgfhthvi
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 133;

                    ;% rtP.Saturation2_LowerSat_pvud2psr4g
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 134;

                    ;% rtP.SineWave_Amp
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 135;

                    ;% rtP.SineWave_Bias
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 136;

                    ;% rtP.SineWave_Freq
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 137;

                    ;% rtP.SineWave_Phase
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 138;

                    ;% rtP.SineWave1_Amp
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 139;

                    ;% rtP.SineWave1_Bias
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 140;

                    ;% rtP.SineWave1_Freq
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 141;

                    ;% rtP.SineWave1_Phase
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 142;

                    ;% rtP.Gain1_Gain_an1pdnuefr
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 143;

                    ;% rtP.SineWave2_Amp
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 144;

                    ;% rtP.SineWave2_Bias
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 145;

                    ;% rtP.SineWave2_Freq
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 146;

                    ;% rtP.SineWave2_Phase
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 147;

                    ;% rtP.Gain_Gain
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 148;

                    ;% rtP.Saturation_UpperSat_ip5m4fy0ed
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 149;

                    ;% rtP.Saturation_LowerSat_j5wcuf0dgd
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 150;

                    ;% rtP.Saturation1_UpperSat_ilexu3zjfy
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 151;

                    ;% rtP.Saturation1_LowerSat_bg51c0dlft
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 152;

                    ;% rtP.u_Gain_du2kb2gtqg
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 153;

                    ;% rtP.u_Gain_ofer0skcuw
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 154;

                    ;% rtP.Gain_Gain_ebhlmk5t4x
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 155;

                    ;% rtP.SineWave6_Amp
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 156;

                    ;% rtP.SineWave6_Bias
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 157;

                    ;% rtP.SineWave6_Freq
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 158;

                    ;% rtP.SineWave6_Phase
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 159;

                    ;% rtP.Switch4_Threshold
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 160;

                    ;% rtP.Gain4_Gain_imrt3sps2q
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 161;

                    ;% rtP.Integrator_IC_dkmzwnjlda
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 162;

                    ;% rtP.Integrator_IC_kuhmbxgxyr
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 163;

                    ;% rtP.Integrator_IC_pea4zoukn2
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 164;

                    ;% rtP.Gain_Gain_awestftebg
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 165;

                    ;% rtP.Integrator4_IC_mfxj3ieh1q
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 166;

                    ;% rtP.Integrator_IC_gxj5snzs0v
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 167;

                    ;% rtP.Integrator_IC_mwbhsimjtn
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 168;

                    ;% rtP.Integrator_IC_mctvldpkh3
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 169;

                    ;% rtP.Constant5_Value
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 170;

                    ;% rtP.Constant6_Value
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 171;

                    ;% rtP.Constant7_Value
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 172;

                    ;% rtP.psi_Value
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 173;

                    ;% rtP.psi1_Value
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 174;

                    ;% rtP.Constant1_Value
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 175;

                    ;% rtP.Constant2_Value
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 176;

                    ;% rtP.Gain17_Gain
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 177;

                    ;% rtP.Constant37_Value
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 178;

                    ;% rtP.Constant38_Value
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 179;

                    ;% rtP.Constant3_Value
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 180;

                    ;% rtP.Constant4_Value
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 181;

                    ;% rtP.Gain3_Gain
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 182;

                    ;% rtP.Constant5_Value_i2io2i2gcf
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 183;

                    ;% rtP.Constant6_Value_gooirbdlmo
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 184;

                    ;% rtP.Constant1_Value_anleszyjns
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 185;

                    ;% rtP.Constant6_Value_ji4ih5grvx
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 186;

                    ;% rtP.Constant18_Value
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 187;

                    ;% rtP.Constant19_Value
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 188;

                    ;% rtP.Constant20_Value
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 189;

                    ;% rtP.Constant1_Value_fgyxvvitry
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 190;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 88;
            section.data(88)  = dumData; %prealloc

                    ;% rtB.ab333bgofo
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.bs10qga5ab
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.cbu4idg12y
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.gm0ddic0uf
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.heojtynpgt
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.mvczrpqvic
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.pgdoe5qbhl
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.kjuszjdzc2
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.oxlz1roha4
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.mfqo0htbck
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.ippmfqft3q
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.fgciqbj50i
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.nltftrz3zp
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.izkdj25k1b
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.lelvvdhupm
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.hhmzrxqssa
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.nx2psp0vkj
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.g14kw4hn4a
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.mswtfd202w
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.exg5ewvko2
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.h3v4lxfb1f
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.lmz1fmsj4f
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.nb24wswwab
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtB.kzyydvk4dh
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtB.ke542j0nyz
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtB.oqvwq5cqni
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtB.ki202l2lqj
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtB.ghafckseb5
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtB.bvrzs0ko4p
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtB.llfvbzt5kv
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtB.mi0axd3vzm
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtB.iqp5s5jqdj
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtB.irjdylgfyd
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtB.js4lycsxtc
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtB.auavdeei20
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtB.i00equ0whj
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtB.mqzgyob3ww
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtB.bh4c0b1515
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtB.ofkzgj4m1k
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtB.lrgxtstads
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtB.cabobmzza1
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtB.akucc0fmnu
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtB.djtzd3nqfr
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtB.g3ygqokvad
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtB.pm1k1vpao3
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtB.lizpqhkdqd
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtB.dhpx0i0zqw
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtB.gi0ydjsvag
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtB.kup05il15v
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtB.arl0w053wq
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtB.gnbrkrjeaf
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtB.gmgeuu4aud
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtB.ptj4jqtbiw
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtB.denh3c14d3
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtB.koeitfs3qs
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtB.erbxmtixnn
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtB.ifqdq0dvlo
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtB.o4g1hs3prq
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtB.nr0h333x3t
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtB.k4tdeqes5w
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtB.eg1tsljdkk
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtB.ozeuxnz4s2
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtB.faptzmeebh
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtB.d0v0un3w2w
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtB.dg2dcyrat3
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtB.orfwokhk5z
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtB.lpczuv1wwn
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtB.psclu1x4sp
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtB.dft5tbo5wq
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtB.esazz0r5z5
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtB.l5ym1yzrio
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtB.c3szn2agjq
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtB.j0aq0ulk0a
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtB.kjeq2e1wm5
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtB.hxhxj2shl2
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtB.pqwabbxcij
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtB.pjr4p5hmjj
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtB.eno2o5z3yp
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtB.n0kfsoom34
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtB.djg2kt1x1r
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtB.pvhd4r3d4o
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtB.noelpg3bo3
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtB.nbqizlyjkn
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtB.hxdpyc4vbu
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtB.mhn1a21rba
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 84;

                    ;% rtB.luqcnzg44g
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 85;

                    ;% rtB.ifmju2saai
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 86;

                    ;% rtB.lnkfljj42y
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 87;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 28;
            section.data(28)  = dumData; %prealloc

                    ;% rtDW.oqhzpe3pwd
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pjb5x2p5pz
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ilfrz5gyiz
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.bpqrflndws
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ahssk0tttr
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.potcnercix
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.gyhz20plud
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.dn5sswd0jp
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.itrolvxcy2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.lkhjrmdr25
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.oo555w2jgf
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.jlnf1hhwet
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.jpcgn345yv
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hs2y5swgfz
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.ibvwech01e
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.aeudxaauhc
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.ipewzgngqr
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.cwwo4khs0i
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.mbmzp2aurk
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.e1kblvoky1
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.jabfec0wwp
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.l1cu0hzuu3
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.bv2hzsnytg
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.e2wis3wb3i
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.orpsvqiaoa
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.o4ckmxfkac
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.lutbqduf2r
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.norshvxqtw
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 43;
            section.data(43)  = dumData; %prealloc

                    ;% rtDW.niiptouwo3.LoggedData
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.knpxbubaie.LoggedData
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ia3kpf3kqc.LoggedData
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.db4n0mtkbp.LoggedData
                    section.data(4).logicalSrcIdx = 31;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bkgo4vdl1w.LoggedData
                    section.data(5).logicalSrcIdx = 32;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.eqs31izxzn.LoggedData
                    section.data(6).logicalSrcIdx = 33;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ihyfdy2alx.LoggedData
                    section.data(7).logicalSrcIdx = 34;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.kbj0bllezk.LoggedData
                    section.data(8).logicalSrcIdx = 35;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.iyq0pnj4vf.LoggedData
                    section.data(9).logicalSrcIdx = 36;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.mx1lu4exsa.LoggedData
                    section.data(10).logicalSrcIdx = 37;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.p1uft5x04w.LoggedData
                    section.data(11).logicalSrcIdx = 38;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.h3u1cbvbdk.LoggedData
                    section.data(12).logicalSrcIdx = 39;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.gl4mo0frnf.LoggedData
                    section.data(13).logicalSrcIdx = 40;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.gbrx4uohiy.LoggedData
                    section.data(14).logicalSrcIdx = 41;
                    section.data(14).dtTransOffset = 14;

                    ;% rtDW.bedtuvztcl.LoggedData
                    section.data(15).logicalSrcIdx = 42;
                    section.data(15).dtTransOffset = 15;

                    ;% rtDW.l5pk5ikrvk.LoggedData
                    section.data(16).logicalSrcIdx = 43;
                    section.data(16).dtTransOffset = 16;

                    ;% rtDW.ajbe0gsi4b.LoggedData
                    section.data(17).logicalSrcIdx = 44;
                    section.data(17).dtTransOffset = 17;

                    ;% rtDW.e5zts3jep4.LoggedData
                    section.data(18).logicalSrcIdx = 45;
                    section.data(18).dtTransOffset = 18;

                    ;% rtDW.nubaljw22h.LoggedData
                    section.data(19).logicalSrcIdx = 46;
                    section.data(19).dtTransOffset = 20;

                    ;% rtDW.ebppbptkhv.LoggedData
                    section.data(20).logicalSrcIdx = 47;
                    section.data(20).dtTransOffset = 22;

                    ;% rtDW.ijokzal450.LoggedData
                    section.data(21).logicalSrcIdx = 48;
                    section.data(21).dtTransOffset = 23;

                    ;% rtDW.px5syrk2dq.LoggedData
                    section.data(22).logicalSrcIdx = 49;
                    section.data(22).dtTransOffset = 25;

                    ;% rtDW.nkoa5eyqtd.LoggedData
                    section.data(23).logicalSrcIdx = 50;
                    section.data(23).dtTransOffset = 26;

                    ;% rtDW.mnbhwejufk.LoggedData
                    section.data(24).logicalSrcIdx = 51;
                    section.data(24).dtTransOffset = 28;

                    ;% rtDW.g2r3wpsuge.LoggedData
                    section.data(25).logicalSrcIdx = 52;
                    section.data(25).dtTransOffset = 30;

                    ;% rtDW.beijyooecy.LoggedData
                    section.data(26).logicalSrcIdx = 53;
                    section.data(26).dtTransOffset = 31;

                    ;% rtDW.fogljshk5h.LoggedData
                    section.data(27).logicalSrcIdx = 54;
                    section.data(27).dtTransOffset = 32;

                    ;% rtDW.jx4uuxl3la.LoggedData
                    section.data(28).logicalSrcIdx = 55;
                    section.data(28).dtTransOffset = 33;

                    ;% rtDW.jdekw1bnrj.AQHandles
                    section.data(29).logicalSrcIdx = 56;
                    section.data(29).dtTransOffset = 34;

                    ;% rtDW.k15z1rwbvt.AQHandles
                    section.data(30).logicalSrcIdx = 57;
                    section.data(30).dtTransOffset = 35;

                    ;% rtDW.j0ibqsazqx.AQHandles
                    section.data(31).logicalSrcIdx = 58;
                    section.data(31).dtTransOffset = 36;

                    ;% rtDW.dnt4uaun3e.AQHandles
                    section.data(32).logicalSrcIdx = 59;
                    section.data(32).dtTransOffset = 37;

                    ;% rtDW.mxgow43j1c.AQHandles
                    section.data(33).logicalSrcIdx = 60;
                    section.data(33).dtTransOffset = 38;

                    ;% rtDW.eq1ypafliz.AQHandles
                    section.data(34).logicalSrcIdx = 61;
                    section.data(34).dtTransOffset = 39;

                    ;% rtDW.fftaqiamf1.LoggedData
                    section.data(35).logicalSrcIdx = 62;
                    section.data(35).dtTransOffset = 40;

                    ;% rtDW.pnze0ldxru.LoggedData
                    section.data(36).logicalSrcIdx = 63;
                    section.data(36).dtTransOffset = 41;

                    ;% rtDW.jfk2zjypg4.LoggedData
                    section.data(37).logicalSrcIdx = 64;
                    section.data(37).dtTransOffset = 42;

                    ;% rtDW.khuw0dibev.LoggedData
                    section.data(38).logicalSrcIdx = 65;
                    section.data(38).dtTransOffset = 43;

                    ;% rtDW.ngb2nc0adz.LoggedData
                    section.data(39).logicalSrcIdx = 66;
                    section.data(39).dtTransOffset = 44;

                    ;% rtDW.oesmqweh0r.LoggedData
                    section.data(40).logicalSrcIdx = 67;
                    section.data(40).dtTransOffset = 45;

                    ;% rtDW.pksgawvkdt.AQHandles
                    section.data(41).logicalSrcIdx = 68;
                    section.data(41).dtTransOffset = 46;

                    ;% rtDW.odowp0fz3e.LoggedData
                    section.data(42).logicalSrcIdx = 69;
                    section.data(42).dtTransOffset = 47;

                    ;% rtDW.aflbs5ltsb.LoggedData
                    section.data(43).logicalSrcIdx = 70;
                    section.data(43).dtTransOffset = 48;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3311069831;
    targMap.checksum1 = 429242585;
    targMap.checksum2 = 1931278995;
    targMap.checksum3 = 2222183107;

