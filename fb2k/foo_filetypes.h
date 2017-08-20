#ifndef _FOO_FILETYPES_H_
#define _FOO_FILETYPES_H_


#define VGMSTREAM_DECLARE_FILE_TYPE(NAME,EXTENSION) \
    namespace { \
        static input_file_type_impl g_filetype_instance_##EXTENSION(NAME" Audio File (*."NAME")","*." #EXTENSION ,true); \
        static service_factory_single_ref_t<input_file_type_impl> g_filetype_service##EXTENSION(g_filetype_instance_##EXTENSION); \
    }

// Registered file types, to associate an extension with foobar2000 in Windows.
// Accepted file types go in formats.c and are checked in input_vgmstream::g_is_our_path.
// Both lists don't need to match, formats.c is what really matters
// (ie. we won't need to associate every single vgmstream format).

// these are declared statically, and if anyone has a better idea i'd like to hear it - josh.

VGMSTREAM_DECLARE_FILE_TYPE("04SW", 04sw);
VGMSTREAM_DECLARE_FILE_TYPE("2DX9", 2dx9);
VGMSTREAM_DECLARE_FILE_TYPE("2PFS", 2pfs);

//"aac", //common, also tri-Ace's
VGMSTREAM_DECLARE_FILE_TYPE("AA3", aa3);
VGMSTREAM_DECLARE_FILE_TYPE("AAAP", aaap);
VGMSTREAM_DECLARE_FILE_TYPE("AAX", aax);
//"ac3", //FFmpeg, not parsed //common?
VGMSTREAM_DECLARE_FILE_TYPE("ACE", ace);
VGMSTREAM_DECLARE_FILE_TYPE("ACM", acm);
VGMSTREAM_DECLARE_FILE_TYPE("ADM", adm);
VGMSTREAM_DECLARE_FILE_TYPE("ADP", adp);
VGMSTREAM_DECLARE_FILE_TYPE("ADPCM", adpcm);
VGMSTREAM_DECLARE_FILE_TYPE("ADS", ads);
VGMSTREAM_DECLARE_FILE_TYPE("ADX", adx);
VGMSTREAM_DECLARE_FILE_TYPE("AFC", afc);
VGMSTREAM_DECLARE_FILE_TYPE("AGSC", agsc);
VGMSTREAM_DECLARE_FILE_TYPE("AHX", ahx);
VGMSTREAM_DECLARE_FILE_TYPE("AIFC", aifc);
VGMSTREAM_DECLARE_FILE_TYPE("AIFCL", aifcl);
//"aiff", //common
VGMSTREAM_DECLARE_FILE_TYPE("AIX", aix);
VGMSTREAM_DECLARE_FILE_TYPE("AKB", akb);
VGMSTREAM_DECLARE_FILE_TYPE("AMTS", amts);
VGMSTREAM_DECLARE_FILE_TYPE("AS4", as4);
VGMSTREAM_DECLARE_FILE_TYPE("ASD", asd);
VGMSTREAM_DECLARE_FILE_TYPE("ASF", asf);
VGMSTREAM_DECLARE_FILE_TYPE("ASR", asr);
VGMSTREAM_DECLARE_FILE_TYPE("ASS", ass);
VGMSTREAM_DECLARE_FILE_TYPE("AST", ast);
VGMSTREAM_DECLARE_FILE_TYPE("ATRAC3plus", at3);
VGMSTREAM_DECLARE_FILE_TYPE("AUD", aud);
VGMSTREAM_DECLARE_FILE_TYPE("AUS", aus);

VGMSTREAM_DECLARE_FILE_TYPE("B1S", b1s);
VGMSTREAM_DECLARE_FILE_TYPE("BAF", baf);
VGMSTREAM_DECLARE_FILE_TYPE("BAKA", baka);
VGMSTREAM_DECLARE_FILE_TYPE("BAR", bar);
VGMSTREAM_DECLARE_FILE_TYPE("BCSTM", bcstm);
VGMSTREAM_DECLARE_FILE_TYPE("BCWAV", bcwav);
VGMSTREAM_DECLARE_FILE_TYPE("BDSP", bdsp);
VGMSTREAM_DECLARE_FILE_TYPE("BFSTM", bfstm);
VGMSTREAM_DECLARE_FILE_TYPE("BFWAV", bfwav);
VGMSTREAM_DECLARE_FILE_TYPE("BFWAVNSMBU", bfwavnsmbu);
VGMSTREAM_DECLARE_FILE_TYPE("BG00", bg00);
VGMSTREAM_DECLARE_FILE_TYPE("BGM", bgm);
VGMSTREAM_DECLARE_FILE_TYPE("BGW", bgw);
VGMSTREAM_DECLARE_FILE_TYPE("BH2PCM", bh2pcm);
VGMSTREAM_DECLARE_FILE_TYPE("BIK", bik);
VGMSTREAM_DECLARE_FILE_TYPE("BIKA", bika);
VGMSTREAM_DECLARE_FILE_TYPE("BIK2", bik2);
VGMSTREAM_DECLARE_FILE_TYPE("BIK2A", bik2a);
VGMSTREAM_DECLARE_FILE_TYPE("BK2", bk2);
VGMSTREAM_DECLARE_FILE_TYPE("BK2A", bk2a);
VGMSTREAM_DECLARE_FILE_TYPE("BMDX", bmdx);
VGMSTREAM_DECLARE_FILE_TYPE("BMS", bms);
VGMSTREAM_DECLARE_FILE_TYPE("KLBS", bnk);
VGMSTREAM_DECLARE_FILE_TYPE("BNS", bns);
VGMSTREAM_DECLARE_FILE_TYPE("BNSF", bnsf);
VGMSTREAM_DECLARE_FILE_TYPE("BO2", bo2);
VGMSTREAM_DECLARE_FILE_TYPE("BRSTM", brstm);
VGMSTREAM_DECLARE_FILE_TYPE("BRSTMSPM", brstmspm);
VGMSTREAM_DECLARE_FILE_TYPE("BTSND", btsnd);
VGMSTREAM_DECLARE_FILE_TYPE("BVG", bvg);

VGMSTREAM_DECLARE_FILE_TYPE("CAF", caf);
VGMSTREAM_DECLARE_FILE_TYPE("CAPDSP", capdsp);
VGMSTREAM_DECLARE_FILE_TYPE("CBD2", cbd2);
VGMSTREAM_DECLARE_FILE_TYPE("CCC", ccc);
VGMSTREAM_DECLARE_FILE_TYPE("CFN", cfn);
VGMSTREAM_DECLARE_FILE_TYPE("CKD", ckd);
VGMSTREAM_DECLARE_FILE_TYPE("CNK", cnk);
VGMSTREAM_DECLARE_FILE_TYPE("CPS", cps);
VGMSTREAM_DECLARE_FILE_TYPE("CXS", cxs);

VGMSTREAM_DECLARE_FILE_TYPE("DBM", dbm);
VGMSTREAM_DECLARE_FILE_TYPE("DCS", dcs);
VGMSTREAM_DECLARE_FILE_TYPE("DDSP", ddsp);
VGMSTREAM_DECLARE_FILE_TYPE("DE2", de2);
VGMSTREAM_DECLARE_FILE_TYPE("DMSG", dmsg);
VGMSTREAM_DECLARE_FILE_TYPE("DSP", dsp);
VGMSTREAM_DECLARE_FILE_TYPE("DSPW", dspw);
VGMSTREAM_DECLARE_FILE_TYPE("DTK", dtk);
VGMSTREAM_DECLARE_FILE_TYPE("DVI", dvi);
VGMSTREAM_DECLARE_FILE_TYPE("DXH", dxh);

VGMSTREAM_DECLARE_FILE_TYPE("EAM", eam);
VGMSTREAM_DECLARE_FILE_TYPE("EMFF", emff);
VGMSTREAM_DECLARE_FILE_TYPE("ENTH", enth);
VGMSTREAM_DECLARE_FILE_TYPE("EXA", exa);

VGMSTREAM_DECLARE_FILE_TYPE("FAG", fag);
VGMSTREAM_DECLARE_FILE_TYPE("FFW", ffw);
VGMSTREAM_DECLARE_FILE_TYPE("FILP", filp);
VGMSTREAM_DECLARE_FILE_TYPE("FSB", fsb);
VGMSTREAM_DECLARE_FILE_TYPE("FWAV", fwav);

VGMSTREAM_DECLARE_FILE_TYPE("G1L", g1l);
VGMSTREAM_DECLARE_FILE_TYPE("GBTS", gbts);
VGMSTREAM_DECLARE_FILE_TYPE("GCA", gca);
VGMSTREAM_DECLARE_FILE_TYPE("GCM", gcm);
VGMSTREAM_DECLARE_FILE_TYPE("GCUB", gcub);
VGMSTREAM_DECLARE_FILE_TYPE("GCW", gcw);
VGMSTREAM_DECLARE_FILE_TYPE("GENH", genh);
VGMSTREAM_DECLARE_FILE_TYPE("GMS", gms);
VGMSTREAM_DECLARE_FILE_TYPE("GSB", gsb);
VGMSTREAM_DECLARE_FILE_TYPE("GSB", gtd);

VGMSTREAM_DECLARE_FILE_TYPE("HCA", hca);
VGMSTREAM_DECLARE_FILE_TYPE("HGC1", hgc1);
VGMSTREAM_DECLARE_FILE_TYPE("HIS", his);
VGMSTREAM_DECLARE_FILE_TYPE("HLWAV", hlwav);
VGMSTREAM_DECLARE_FILE_TYPE("HALPST", hps);
VGMSTREAM_DECLARE_FILE_TYPE("HSF", hsf);
VGMSTREAM_DECLARE_FILE_TYPE("HWAS", hwas);

VGMSTREAM_DECLARE_FILE_TYPE("IAB", iab);
VGMSTREAM_DECLARE_FILE_TYPE("IADP", iadp);
VGMSTREAM_DECLARE_FILE_TYPE("IDSP", idsp);
VGMSTREAM_DECLARE_FILE_TYPE("IDVI", idvi);
VGMSTREAM_DECLARE_FILE_TYPE("IKM", ikm);
VGMSTREAM_DECLARE_FILE_TYPE("ILD", ild);
VGMSTREAM_DECLARE_FILE_TYPE("INT", int);
VGMSTREAM_DECLARE_FILE_TYPE("ISD", isd);
VGMSTREAM_DECLARE_FILE_TYPE("ISWS", isws);
VGMSTREAM_DECLARE_FILE_TYPE("IVAUD", ivaud);
VGMSTREAM_DECLARE_FILE_TYPE("IVAG", ivag);
VGMSTREAM_DECLARE_FILE_TYPE("IVB", ivb);

VGMSTREAM_DECLARE_FILE_TYPE("JOE", joe);
VGMSTREAM_DECLARE_FILE_TYPE("JSTM", jstm);

VGMSTREAM_DECLARE_FILE_TYPE("KCES", kces);
VGMSTREAM_DECLARE_FILE_TYPE("KCEY", kcey);
VGMSTREAM_DECLARE_FILE_TYPE("KHV", khv);
VGMSTREAM_DECLARE_FILE_TYPE("KOVS", kovs);
VGMSTREAM_DECLARE_FILE_TYPE("KRAW", kraw);

VGMSTREAM_DECLARE_FILE_TYPE("LAAC", laac);
VGMSTREAM_DECLARE_FILE_TYPE("LEG", leg);
VGMSTREAM_DECLARE_FILE_TYPE("LMP4", lmp4);
VGMSTREAM_DECLARE_FILE_TYPE("LOGG", logg);
VGMSTREAM_DECLARE_FILE_TYPE("LPCM", lpcm);
VGMSTREAM_DECLARE_FILE_TYPE("LPS", lps);
VGMSTREAM_DECLARE_FILE_TYPE("LSF", lsf);
VGMSTREAM_DECLARE_FILE_TYPE("LSTM", lstm);
VGMSTREAM_DECLARE_FILE_TYPE("LWAV", lwav);

VGMSTREAM_DECLARE_FILE_TYPE("MATX", matx);
VGMSTREAM_DECLARE_FILE_TYPE("MC3", mc3);
VGMSTREAM_DECLARE_FILE_TYPE("MCA", mca);
VGMSTREAM_DECLARE_FILE_TYPE("MCG", mcg);
VGMSTREAM_DECLARE_FILE_TYPE("MDS", mds);
VGMSTREAM_DECLARE_FILE_TYPE("MDSP", mdsp);
VGMSTREAM_DECLARE_FILE_TYPE("MED", med);
VGMSTREAM_DECLARE_FILE_TYPE("MI4", mi4);
VGMSTREAM_DECLARE_FILE_TYPE("MIB", mib);
VGMSTREAM_DECLARE_FILE_TYPE("MIC", mic);
VGMSTREAM_DECLARE_FILE_TYPE("MIHB", mihb);
VGMSTREAM_DECLARE_FILE_TYPE("MNSTR", mnstr);
//"mp4", //common
VGMSTREAM_DECLARE_FILE_TYPE("MPDSP", mpdsp);
VGMSTREAM_DECLARE_FILE_TYPE("MPDS", mpds);
VGMSTREAM_DECLARE_FILE_TYPE("MSA", msa);
VGMSTREAM_DECLARE_FILE_TYPE("MSF", msf);
VGMSTREAM_DECLARE_FILE_TYPE("MSS", mss);
VGMSTREAM_DECLARE_FILE_TYPE("MSVP", msvp);
VGMSTREAM_DECLARE_FILE_TYPE("MTA2", mta2);
VGMSTREAM_DECLARE_FILE_TYPE("MTAF", mtaf);
VGMSTREAM_DECLARE_FILE_TYPE("MUS", mus);
VGMSTREAM_DECLARE_FILE_TYPE("MUSC", musc);
VGMSTREAM_DECLARE_FILE_TYPE("MUSX", musx);
VGMSTREAM_DECLARE_FILE_TYPE("MWV", mwv);
VGMSTREAM_DECLARE_FILE_TYPE("MxSt", mxst);
VGMSTREAM_DECLARE_FILE_TYPE("MYSPD", myspd);

VGMSTREAM_DECLARE_FILE_TYPE("NDP", ndp);
VGMSTREAM_DECLARE_FILE_TYPE("NGCA", ngca);
VGMSTREAM_DECLARE_FILE_TYPE("NPS", nps);
VGMSTREAM_DECLARE_FILE_TYPE("NPSF", npsf);
VGMSTREAM_DECLARE_FILE_TYPE("NUS3BANK", nus3bank);
VGMSTREAM_DECLARE_FILE_TYPE("NWA", nwa);

//"ogg", //common
VGMSTREAM_DECLARE_FILE_TYPE("OGL", ogl);
VGMSTREAM_DECLARE_FILE_TYPE("OMA", oma);
VGMSTREAM_DECLARE_FILE_TYPE("OMU", omu);
VGMSTREAM_DECLARE_FILE_TYPE("OTM", otm);

VGMSTREAM_DECLARE_FILE_TYPE("P2BT", p2bt);
VGMSTREAM_DECLARE_FILE_TYPE("P3D", p3d);
VGMSTREAM_DECLARE_FILE_TYPE("PAST", past);
VGMSTREAM_DECLARE_FILE_TYPE("PCM", pcm);
VGMSTREAM_DECLARE_FILE_TYPE("PDT", pdt);
VGMSTREAM_DECLARE_FILE_TYPE("PNB", pnb);
VGMSTREAM_DECLARE_FILE_TYPE("PONA", pona);
VGMSTREAM_DECLARE_FILE_TYPE("POS", pos);
VGMSTREAM_DECLARE_FILE_TYPE("PS2STM", ps2stm);
VGMSTREAM_DECLARE_FILE_TYPE("PSH", psh);
VGMSTREAM_DECLARE_FILE_TYPE("PSND", psnd);
VGMSTREAM_DECLARE_FILE_TYPE("PSW", psw);

VGMSTREAM_DECLARE_FILE_TYPE("RAK", rak);
VGMSTREAM_DECLARE_FILE_TYPE("RAS", ras);
VGMSTREAM_DECLARE_FILE_TYPE("RAW", raw);
VGMSTREAM_DECLARE_FILE_TYPE("RKV", rkv);
VGMSTREAM_DECLARE_FILE_TYPE("RND", rnd);
VGMSTREAM_DECLARE_FILE_TYPE("RRDS", rrds);
VGMSTREAM_DECLARE_FILE_TYPE("RSD", rsd);
VGMSTREAM_DECLARE_FILE_TYPE("RSF", rsf);
VGMSTREAM_DECLARE_FILE_TYPE("RSTM", rstm);
VGMSTREAM_DECLARE_FILE_TYPE("RVWS", rvws);
VGMSTREAM_DECLARE_FILE_TYPE("RWAR", rwar);
VGMSTREAM_DECLARE_FILE_TYPE("RWAV", rwav);
VGMSTREAM_DECLARE_FILE_TYPE("RWS", rws);
VGMSTREAM_DECLARE_FILE_TYPE("RWSD", rwsd);
VGMSTREAM_DECLARE_FILE_TYPE("RWX", rwx);
VGMSTREAM_DECLARE_FILE_TYPE("RXWS", rxw);

VGMSTREAM_DECLARE_FILE_TYPE("S14", s14);
VGMSTREAM_DECLARE_FILE_TYPE("SAB", sab);
VGMSTREAM_DECLARE_FILE_TYPE("SAD", sad);
VGMSTREAM_DECLARE_FILE_TYPE("SAP", sap);
VGMSTREAM_DECLARE_FILE_TYPE("SC", sc);
VGMSTREAM_DECLARE_FILE_TYPE("SCD", scd);
VGMSTREAM_DECLARE_FILE_TYPE("SCK", sck);
VGMSTREAM_DECLARE_FILE_TYPE("SD9", sd9);
VGMSTREAM_DECLARE_FILE_TYPE("SDT", sdt);
VGMSTREAM_DECLARE_FILE_TYPE("SEG", seg);
VGMSTREAM_DECLARE_FILE_TYPE("SF0", sf0);
VGMSTREAM_DECLARE_FILE_TYPE("SFL", sfl);
VGMSTREAM_DECLARE_FILE_TYPE("SFS", sfs);
VGMSTREAM_DECLARE_FILE_TYPE("SFX", sfx);
VGMSTREAM_DECLARE_FILE_TYPE("SGB", sgb);
VGMSTREAM_DECLARE_FILE_TYPE("SGD", sgd);
VGMSTREAM_DECLARE_FILE_TYPE("SGX", sgx);
VGMSTREAM_DECLARE_FILE_TYPE("SL3", sl3);
VGMSTREAM_DECLARE_FILE_TYPE("SLI", sli);
VGMSTREAM_DECLARE_FILE_TYPE("SMP", smp);
VGMSTREAM_DECLARE_FILE_TYPE("SMPL", smpl);
VGMSTREAM_DECLARE_FILE_TYPE("SND", snd);
VGMSTREAM_DECLARE_FILE_TYPE("SNDS", snds);
VGMSTREAM_DECLARE_FILE_TYPE("SNG", sng);
VGMSTREAM_DECLARE_FILE_TYPE("SNS", sns);
VGMSTREAM_DECLARE_FILE_TYPE("SNU", snu);
VGMSTREAM_DECLARE_FILE_TYPE("SPD", spd);
VGMSTREAM_DECLARE_FILE_TYPE("SPM", spm);
VGMSTREAM_DECLARE_FILE_TYPE("SPS", sps);
VGMSTREAM_DECLARE_FILE_TYPE("SPSD", spsd);
VGMSTREAM_DECLARE_FILE_TYPE("SPW", spw);
VGMSTREAM_DECLARE_FILE_TYPE("SS2", ss2);
VGMSTREAM_DECLARE_FILE_TYPE("SS3", ss3);
VGMSTREAM_DECLARE_FILE_TYPE("SS7", ss7);
VGMSTREAM_DECLARE_FILE_TYPE("SSM", ssm);
VGMSTREAM_DECLARE_FILE_TYPE("SSS", sss);
VGMSTREAM_DECLARE_FILE_TYPE("STER", ster);
VGMSTREAM_DECLARE_FILE_TYPE("STH", sth);
//"stm", //common
VGMSTREAM_DECLARE_FILE_TYPE("STMA", stma);
VGMSTREAM_DECLARE_FILE_TYPE("STR", str);
VGMSTREAM_DECLARE_FILE_TYPE("STRM", strm);
VGMSTREAM_DECLARE_FILE_TYPE("STS", sts);
VGMSTREAM_DECLARE_FILE_TYPE("STX", stx);
VGMSTREAM_DECLARE_FILE_TYPE("SVAG", svag);
VGMSTREAM_DECLARE_FILE_TYPE("SVS", svs);
VGMSTREAM_DECLARE_FILE_TYPE("SWAG", swag);
VGMSTREAM_DECLARE_FILE_TYPE("SWAV", swav);
VGMSTREAM_DECLARE_FILE_TYPE("SWD", swd);
VGMSTREAM_DECLARE_FILE_TYPE("SX", sx);
VGMSTREAM_DECLARE_FILE_TYPE("SXD", sxd);
VGMSTREAM_DECLARE_FILE_TYPE("SXD2", sxd2);

VGMSTREAM_DECLARE_FILE_TYPE("TEC", tec);
VGMSTREAM_DECLARE_FILE_TYPE("THP", thp);
VGMSTREAM_DECLARE_FILE_TYPE("TK1", tk1);
VGMSTREAM_DECLARE_FILE_TYPE("TK5", tk5);
VGMSTREAM_DECLARE_FILE_TYPE("TRA", tra);
VGMSTREAM_DECLARE_FILE_TYPE("TUN", tun);
VGMSTREAM_DECLARE_FILE_TYPE("TYDSP", tydsp);

VGMSTREAM_DECLARE_FILE_TYPE("ULW", ulw);
VGMSTREAM_DECLARE_FILE_TYPE("UM3", um3);

VGMSTREAM_DECLARE_FILE_TYPE("VAG", vag);
VGMSTREAM_DECLARE_FILE_TYPE("VAS", vas);
VGMSTREAM_DECLARE_FILE_TYPE("VAS", vawx);
VGMSTREAM_DECLARE_FILE_TYPE("VB", vb);
VGMSTREAM_DECLARE_FILE_TYPE("VBK", vbk);
VGMSTREAM_DECLARE_FILE_TYPE("VGS", vgs);
VGMSTREAM_DECLARE_FILE_TYPE("VGV", vgv);
VGMSTREAM_DECLARE_FILE_TYPE("VIG", vig);
VGMSTREAM_DECLARE_FILE_TYPE("VMS", vms);
VGMSTREAM_DECLARE_FILE_TYPE("VOI", voi);
VGMSTREAM_DECLARE_FILE_TYPE("VPK", vpk);
VGMSTREAM_DECLARE_FILE_TYPE("VS", vs);
VGMSTREAM_DECLARE_FILE_TYPE("VSF", vsf);

VGMSTREAM_DECLARE_FILE_TYPE("WAA", waa);
VGMSTREAM_DECLARE_FILE_TYPE("WAC", wac);
VGMSTREAM_DECLARE_FILE_TYPE("WAD", wad);
VGMSTREAM_DECLARE_FILE_TYPE("WAM", wam);
VGMSTREAM_DECLARE_FILE_TYPE("WAS", was);
//"wav", //common
VGMSTREAM_DECLARE_FILE_TYPE("WAVM", wavm);
VGMSTREAM_DECLARE_FILE_TYPE("WEM", wem);
VGMSTREAM_DECLARE_FILE_TYPE("WII", wii);
VGMSTREAM_DECLARE_FILE_TYPE("WMUS", wmus);
VGMSTREAM_DECLARE_FILE_TYPE("WP2", wp2);
VGMSTREAM_DECLARE_FILE_TYPE("WPD", wpd);
VGMSTREAM_DECLARE_FILE_TYPE("WSD", wsd);
VGMSTREAM_DECLARE_FILE_TYPE("WSI", wsi);
VGMSTREAM_DECLARE_FILE_TYPE("WVS", wvs);

VGMSTREAM_DECLARE_FILE_TYPE("XA", xa);
VGMSTREAM_DECLARE_FILE_TYPE("XA2", xa2);
VGMSTREAM_DECLARE_FILE_TYPE("XA30", xa30);
VGMSTREAM_DECLARE_FILE_TYPE("XAG", xag);
VGMSTREAM_DECLARE_FILE_TYPE("XAU", xau);
VGMSTREAM_DECLARE_FILE_TYPE("XMA", xma);
VGMSTREAM_DECLARE_FILE_TYPE("XMA2", xma2);
VGMSTREAM_DECLARE_FILE_TYPE("XMU", xmu);
VGMSTREAM_DECLARE_FILE_TYPE("XNB", xnb);
VGMSTREAM_DECLARE_FILE_TYPE("XSF", xsf);
VGMSTREAM_DECLARE_FILE_TYPE("XSS", xss);
VGMSTREAM_DECLARE_FILE_TYPE("XVAG", xvag);
VGMSTREAM_DECLARE_FILE_TYPE("XVAS", xvas);
VGMSTREAM_DECLARE_FILE_TYPE("XWAV", xwav);
VGMSTREAM_DECLARE_FILE_TYPE("XWB", xwb);
VGMSTREAM_DECLARE_FILE_TYPE("XWM", xwm);
VGMSTREAM_DECLARE_FILE_TYPE("XWMA", xwma);
VGMSTREAM_DECLARE_FILE_TYPE("XWS", xws);
VGMSTREAM_DECLARE_FILE_TYPE("XWV", xwv);

VGMSTREAM_DECLARE_FILE_TYPE("YDSP", ydsp);
VGMSTREAM_DECLARE_FILE_TYPE("YMF", ymf);

VGMSTREAM_DECLARE_FILE_TYPE("ZSD", zsd);
VGMSTREAM_DECLARE_FILE_TYPE("ZWDSP", zwdsp);

VGMSTREAM_DECLARE_FILE_TYPE("VGMSTREAM", vgmstream);


#endif /*_FOO_FILETYPES_H_ */
