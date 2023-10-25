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
            section.nData     = 172;
            section.data(172)  = dumData; %prealloc

                    ;% rtP.PIDController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PIDController_D_n0ajifbrzl
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.PIDController1_D
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController1_D_lllqr1ay3g
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController2_D
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController_D_os4cpveuwu
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController1_D_gdgmituo3o
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController2_D_dfmo4lhky4
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController_D_bnpdwpgf2r
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController1_D_ipmgxlwt3s
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController2_D_g4w5zspqgm
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController_D_jkhgbbl1en
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PIDController1_D_ak3x55jqvu
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PIDController2_D_jd4dbxg05c
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.PIDController_I
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PIDController1_I
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PIDController2_I
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.PIDController_I_ctexg1ydk0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.PIDController1_I_g3r3n5sujh
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.PIDController2_I_k3epcgcoj0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.PIDController_I_dlmuknchuh
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.PIDController1_I_hetisvzriu
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.PIDController2_I_ndlknojsy1
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.PIDController_I_iun55ks3mq
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.PIDController1_I_oc3wzt3pd1
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.PIDController_I_l4hu2imemx
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.PIDController1_I_npnz5gp3zv
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.PIDController2_I_edyryjr1ey
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.PIDController_InitialConditionForFilter_o14mxov0mo
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.PIDController1_InitialConditionForFilter
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.PIDController1_InitialConditionForFilter_fwycow5gb3
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.PIDController2_InitialConditionForFilter
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.PIDController_InitialConditionForFilter_pi2squh4ih
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.PIDController1_InitialConditionForFilter_kmsdvwdf3m
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.PIDController2_InitialConditionForFilter_g0oftxmj3a
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.PIDController_InitialConditionForFilter_jdtq01u0hx
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.PIDController1_InitialConditionForFilter_e5pnbc3vtr
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.PIDController2_InitialConditionForFilter_dlk0zcvwml
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.PIDController_InitialConditionForFilter_cnipdysl5i
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.PIDController1_InitialConditionForFilter_psmuwl2ggt
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.PIDController2_InitialConditionForFilter_p4g1s3metf
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.PIDController_InitialConditionForIntegrator_dochlmuieg
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.PIDController1_InitialConditionForIntegrator
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_mfds2g0sdm
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.PIDController2_InitialConditionForIntegrator
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.PIDController_InitialConditionForIntegrator_ngy0ewyeg5
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_g32cn1dkfm
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.PIDController2_InitialConditionForIntegrator_pbsngr4knz
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.PIDController_InitialConditionForIntegrator_ahqtbrbvjw
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_o5oicxyhtt
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.PIDController2_InitialConditionForIntegrator_azyc2l4qmp
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.PIDController_InitialConditionForIntegrator_i0pcwuwujv
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.PIDController1_InitialConditionForIntegrator_pn3q4lemuu
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.PIDController2_InitialConditionForIntegrator_osgdcreqgv
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP._Ixx
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.u_Ixx
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.Quadrotor1_Ixx
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Quadrotor_Ixx
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP._Iyy
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.u_Iyy
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.Quadrotor1_Iyy
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.Quadrotor_Iyy
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP._Izz
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.u_Izz
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.Quadrotor1_Izz
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.Quadrotor_Izz
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.PIDController_N
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.PIDController_N_j1rqxncrvn
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.PIDController1_N
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.PIDController1_N_kwhnf3hzry
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.PIDController2_N
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.PIDController_N_gwi2qcwymh
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.PIDController1_N_mhmwfw4hux
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.PIDController2_N_mpslhyucvp
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.PIDController_N_nq5smeuvru
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.PIDController1_N_ju5pdg3n40
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.PIDController2_N_gwanukygue
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.PIDController_N_bgper011ra
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtP.PIDController1_N_gfjurlmhit
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtP.PIDController2_N_lijdwwumlg
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtP.PIDController_P
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtP.PIDController_P_gglswmusll
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtP.PIDController1_P
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 84;

                    ;% rtP.PIDController1_P_hckpmt5anz
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 85;

                    ;% rtP.PIDController2_P
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 86;

                    ;% rtP.PIDController_P_ju5f4j1frg
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 87;

                    ;% rtP.PIDController1_P_c4vjhd1ziq
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 88;

                    ;% rtP.PIDController2_P_dlj4ikvxns
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 89;

                    ;% rtP.PIDController_P_l3dvp4gzhj
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 90;

                    ;% rtP.PIDController1_P_oaxjkkp4ew
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 91;

                    ;% rtP.PIDController2_P_kp1lf3scwu
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 92;

                    ;% rtP.PIDController_P_bdo03lnhov
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 93;

                    ;% rtP.PIDController1_P_m1rpi1feq5
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 94;

                    ;% rtP.PIDController2_P_evzc3v5wmi
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 95;

                    ;% rtP._g
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 96;

                    ;% rtP.Quadrotor1_g
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 97;

                    ;% rtP._g_itsbn0zy4d
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 98;

                    ;% rtP.Quadrotor_g
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 99;

                    ;% rtP.fantheta1_m
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 100;

                    ;% rtP._m
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 101;

                    ;% rtP.fantheta_m
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 102;

                    ;% rtP._m_acbzxt22m1
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 103;

                    ;% rtP.Integrator1_IC
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 104;

                    ;% rtP.Saturation_UpperSat
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 105;

                    ;% rtP.Saturation_LowerSat
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 106;

                    ;% rtP.Integrator1_IC_njked3y5ka
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 107;

                    ;% rtP.Saturation1_UpperSat
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 108;

                    ;% rtP.Saturation1_LowerSat
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 109;

                    ;% rtP.Integrator5_IC
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 110;

                    ;% rtP.Integrator1_IC_heq4ih3sop
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 111;

                    ;% rtP.Integrator1_IC_ggm3f24kg1
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 112;

                    ;% rtP.Integrator_IC
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 113;

                    ;% rtP.Integrator1_IC_mm1y0ejde0
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 114;

                    ;% rtP.Saturation2_UpperSat
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 115;

                    ;% rtP.Saturation2_LowerSat
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 116;

                    ;% rtP.Integrator3_IC
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 117;

                    ;% rtP.Integrator3_IC_nnhhmqfjhs
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 118;

                    ;% rtP.Integrator2_IC
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

                    ;% rtP.Gain1_Gain
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

                    ;% rtP.Gain_Gain_ebhlmk5t4x
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 153;

                    ;% rtP.Integrator_IC_dkmzwnjlda
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 154;

                    ;% rtP.Integrator_IC_kuhmbxgxyr
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 155;

                    ;% rtP.Integrator_IC_pea4zoukn2
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 156;

                    ;% rtP.Gain_Gain_awestftebg
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 157;

                    ;% rtP.Integrator_IC_lqzn20lau3
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 158;

                    ;% rtP.Integrator2_IC_onz01dod3h
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 159;

                    ;% rtP.Integrator4_IC_mfxj3ieh1q
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 160;

                    ;% rtP.Integrator_IC_gxj5snzs0v
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 161;

                    ;% rtP.Integrator_IC_mwbhsimjtn
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 162;

                    ;% rtP.Integrator_IC_mctvldpkh3
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 163;

                    ;% rtP.Constant5_Value
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 164;

                    ;% rtP.Constant6_Value
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 165;

                    ;% rtP.Constant7_Value
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 166;

                    ;% rtP.psi_Value
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 167;

                    ;% rtP.psi1_Value
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 168;

                    ;% rtP.Constant1_Value
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 169;

                    ;% rtP.Constant6_Value_ji4ih5grvx
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 170;

                    ;% rtP.Constant1_Value_fgyxvvitry
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 171;

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
            section.nData     = 84;
            section.data(84)  = dumData; %prealloc

                    ;% rtB.cbhluqcqju
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.crhr35iead
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.iguir2gsge
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.lhfzd3onxp
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.pezzeovqv4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.pi54dzxfx5
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.itarhbwpjr
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.lq2lccsyip
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.erhfmhyu13
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.nveoii5a01
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.eqmo5gtkm1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.psn0xuxziz
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.h0xqiicsxy
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.lgfs4ja5gv
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.bhlvszt131
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.ltuxbetanp
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.mhqccbbvsq
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.hwznfoja4u
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.pempqddxwi
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.anxjju0ubx
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.hz3jsp2lkt
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.fdtuqmbm4w
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.i54utn5heg
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtB.jy0ejo0e4c
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtB.dveit4wdbi
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtB.gqbpenn0hb
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtB.kispuopekk
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtB.nygsupejah
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtB.nab1xoheob
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtB.glazkeq1pu
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtB.owxswyztav
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtB.ck0d30amao
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtB.byxioey3rs
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtB.pvzjspdrrf
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtB.dbk0s1remq
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtB.l4dlxlfpbm
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtB.gtznxiskp5
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtB.dsaefs4z4w
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtB.kr1zpyt2z1
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtB.f01uxdg4ms
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtB.g50donemyn
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtB.otrtthqjbh
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtB.lylfmhz2zp
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtB.ldiaubocbo
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtB.j5e4ia1omf
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtB.l1zs4kn1e0
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtB.iw40baw43c
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtB.p5sji1xs2a
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtB.nie411id2u
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtB.lxsxq5iv4u
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtB.m1okp5sryd
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtB.oa0p335xm3
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtB.mi0m32bumo
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtB.ke4i10axfa
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtB.bf2unyv33p
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtB.pq5encbpeb
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtB.hhcqqqa4ii
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtB.hulatpkfam
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtB.f2alpgpnje
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtB.p44cus5bxp
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtB.obagl5h54t
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtB.lpiniymblm
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtB.a5xcs22qdx
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtB.n0snzmetnp
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtB.lr2p1mvysn
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtB.gnr0hcqobw
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtB.dvj2iaj3nx
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtB.fhw5trdftx
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtB.itq3zulqh3
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtB.ng5qcsey3a
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtB.grjoo4maif
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtB.gk3gsu1f15
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtB.kfzq00qdrd
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtB.k1pf1pogmt
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtB.ebpw4vo0ws
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtB.plwa2ch2yj
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtB.aetfzrmsq5
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtB.iiiwquot2h
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtB.dv0ojjpydp
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtB.djakoepzet
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtB.p5vxkwsrko
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtB.jwq1iwusgs
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtB.pxm3oeljzy
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtB.j34rvgdxt4
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

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
            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtDW.lm2k5vvzww
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cncrmenvlq
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.h0u53urr3o
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ntxpmdsnwm
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ckfus31as1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.h5axjkxc04
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.nhfwyaiex4
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.pkluuz33p4
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.m021dvz455
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.efu2co53jl
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.enbk5dzytw
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.fywx24ym3u
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 40;
            section.data(40)  = dumData; %prealloc

                    ;% rtDW.clt55ntlf4.LoggedData
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ntpe11ncgr.LoggedData
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.k41nuw5mso.LoggedData
                    section.data(3).logicalSrcIdx = 14;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.fc4ce4krqj.LoggedData
                    section.data(4).logicalSrcIdx = 15;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.h3nbp0ntjt.LoggedData
                    section.data(5).logicalSrcIdx = 16;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ijpcrr42zl.LoggedData
                    section.data(6).logicalSrcIdx = 17;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.hhsjai5vxb.LoggedData
                    section.data(7).logicalSrcIdx = 18;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.dd3y00neca.LoggedData
                    section.data(8).logicalSrcIdx = 19;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.klr2i4xhz4.LoggedData
                    section.data(9).logicalSrcIdx = 20;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eeyo4elwza.LoggedData
                    section.data(10).logicalSrcIdx = 21;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.eoolwsxd52.LoggedData
                    section.data(11).logicalSrcIdx = 22;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.kqh2viblfq.LoggedData
                    section.data(12).logicalSrcIdx = 23;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.im32c5khd0.LoggedData
                    section.data(13).logicalSrcIdx = 24;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.jo4b32ylag.LoggedData
                    section.data(14).logicalSrcIdx = 25;
                    section.data(14).dtTransOffset = 14;

                    ;% rtDW.ownb3j5olx.LoggedData
                    section.data(15).logicalSrcIdx = 26;
                    section.data(15).dtTransOffset = 15;

                    ;% rtDW.n3de3qxpf1.LoggedData
                    section.data(16).logicalSrcIdx = 27;
                    section.data(16).dtTransOffset = 16;

                    ;% rtDW.ef40u2t4ta.LoggedData
                    section.data(17).logicalSrcIdx = 28;
                    section.data(17).dtTransOffset = 17;

                    ;% rtDW.pf4erx0flf.LoggedData
                    section.data(18).logicalSrcIdx = 29;
                    section.data(18).dtTransOffset = 18;

                    ;% rtDW.mej1hd0hap.LoggedData
                    section.data(19).logicalSrcIdx = 30;
                    section.data(19).dtTransOffset = 20;

                    ;% rtDW.n24ufct0kc.LoggedData
                    section.data(20).logicalSrcIdx = 31;
                    section.data(20).dtTransOffset = 21;

                    ;% rtDW.dowvytdntk.LoggedData
                    section.data(21).logicalSrcIdx = 32;
                    section.data(21).dtTransOffset = 23;

                    ;% rtDW.axzpl1remi.LoggedData
                    section.data(22).logicalSrcIdx = 33;
                    section.data(22).dtTransOffset = 24;

                    ;% rtDW.pj415aqmly.LoggedData
                    section.data(23).logicalSrcIdx = 34;
                    section.data(23).dtTransOffset = 25;

                    ;% rtDW.k4mr0c1w1d.LoggedData
                    section.data(24).logicalSrcIdx = 35;
                    section.data(24).dtTransOffset = 26;

                    ;% rtDW.l2nhft5zpz.LoggedData
                    section.data(25).logicalSrcIdx = 36;
                    section.data(25).dtTransOffset = 27;

                    ;% rtDW.jc10nuakae.AQHandles
                    section.data(26).logicalSrcIdx = 37;
                    section.data(26).dtTransOffset = 28;

                    ;% rtDW.jnssosikn3.AQHandles
                    section.data(27).logicalSrcIdx = 38;
                    section.data(27).dtTransOffset = 29;

                    ;% rtDW.hfbgxk5sbw.AQHandles
                    section.data(28).logicalSrcIdx = 39;
                    section.data(28).dtTransOffset = 30;

                    ;% rtDW.e5tycvcjhc.AQHandles
                    section.data(29).logicalSrcIdx = 40;
                    section.data(29).dtTransOffset = 31;

                    ;% rtDW.i4o5lei2sq.AQHandles
                    section.data(30).logicalSrcIdx = 41;
                    section.data(30).dtTransOffset = 32;

                    ;% rtDW.iuujkfk0v5.AQHandles
                    section.data(31).logicalSrcIdx = 42;
                    section.data(31).dtTransOffset = 33;

                    ;% rtDW.mny0krzw34.LoggedData
                    section.data(32).logicalSrcIdx = 43;
                    section.data(32).dtTransOffset = 34;

                    ;% rtDW.eah45yxfg2.LoggedData
                    section.data(33).logicalSrcIdx = 44;
                    section.data(33).dtTransOffset = 35;

                    ;% rtDW.a0tdlmzhct.LoggedData
                    section.data(34).logicalSrcIdx = 45;
                    section.data(34).dtTransOffset = 36;

                    ;% rtDW.cyasojitml.LoggedData
                    section.data(35).logicalSrcIdx = 46;
                    section.data(35).dtTransOffset = 37;

                    ;% rtDW.pxugueca3h.LoggedData
                    section.data(36).logicalSrcIdx = 47;
                    section.data(36).dtTransOffset = 38;

                    ;% rtDW.ndcz1aqr3l.LoggedData
                    section.data(37).logicalSrcIdx = 48;
                    section.data(37).dtTransOffset = 39;

                    ;% rtDW.meyhxofdty.LoggedData
                    section.data(38).logicalSrcIdx = 49;
                    section.data(38).dtTransOffset = 40;

                    ;% rtDW.amij4wgp53.LoggedData
                    section.data(39).logicalSrcIdx = 50;
                    section.data(39).dtTransOffset = 41;

                    ;% rtDW.g5sma1hekm.LoggedData
                    section.data(40).logicalSrcIdx = 51;
                    section.data(40).dtTransOffset = 42;

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


    targMap.checksum0 = 3175136837;
    targMap.checksum1 = 1002873553;
    targMap.checksum2 = 2707596838;
    targMap.checksum3 = 1567132528;

