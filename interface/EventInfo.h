#ifndef EVENTINFO_H
#define EVENTINFO_H

/**
** class  : EventInfo
** author : L. Cadamuro (UF)
** date   : 10/01/2018
** brief  : Struct that contains all the inforrmation elaborated during the skim
**          (e.g., which jets are selected, whic triggers fire etc...)
**          each object is wrapped in a boost::optional class so that it can be autmatically unitialized
**/

#include <boost/optional.hpp>

#include "CompositeCandidate.h"
#include "Jet.h"
#include "GenPart.h"

struct EventInfo{

    boost::optional<unsigned int>           Run;
    boost::optional<unsigned int>           LumiSec;
    boost::optional<unsigned long long int> Event;

    boost::optional<GenPart> gen_H1;
    boost::optional<GenPart> gen_H2;
    boost::optional<GenPart> gen_H1_last;
    boost::optional<GenPart> gen_H2_last;

    boost::optional<GenPart> gen_H1_b1;
    boost::optional<int>     gen_H1_b1_matchedflag;
    boost::optional<GenPart> gen_H1_b2;
    boost::optional<int>     gen_H1_b2_matchedflag;
    boost::optional<GenPart> gen_H2_b1;
    boost::optional<int>     gen_H2_b1_matchedflag;
    boost::optional<GenPart> gen_H2_b2;
    boost::optional<int>     gen_H2_b2_matchedflag;


    // VBF incoming and outcoming partons
    // hard scatter gen particles
    boost::optional<GenPart> gen_q1_in;
    boost::optional<GenPart> gen_q2_in;
    boost::optional<GenPart> gen_q1_out;
    boost::optional<GenPart> gen_q2_out;
    // last copies after hadronisation
    // boost::optional<GenPart> gen_q1_out_lastcopy;
    // boost::optional<GenPart> gen_q2_out_lastcopy;

    boost::optional<CompositeCandidate> H1;
    boost::optional<float> H1_bb_DeltaR;
    boost::optional<CompositeCandidate> H2;
    boost::optional<float> H2_bb_DeltaR;
    boost::optional<CompositeCandidate> HH;
    boost::optional<float> HH_2DdeltaM;
    boost::optional<float> HH_m_kinFit;

    boost::optional<Jet> H1_b1;
    boost::optional<Jet> H1_b2;
    boost::optional<Jet> H2_b1;
    boost::optional<Jet> H2_b2;

    //Non-resonant analysis and studies
    boost::optional<int>  gen_H1_b1_matched;
    boost::optional<int>  gen_H1_b2_matched;
    boost::optional<int>  gen_H2_b1_matched;
    boost::optional<int>  gen_H2_b2_matched;
    boost::optional<int> gen_q1_out_matched;
    boost::optional<int> gen_q2_out_matched;
    boost::optional<float>  gen_H1_b1_ptratio;
    boost::optional<float>  gen_H1_b2_ptratio;
    boost::optional<float>  gen_H2_b1_ptratio;
    boost::optional<float>  gen_H2_b2_ptratio;
    boost::optional<float> gen_q1_out_ptratio;
    boost::optional<float> gen_q2_out_ptratio;
    boost::optional<float>  gen_H1_b1_pz;
    boost::optional<float>  gen_H1_b2_pz;
    boost::optional<float>  gen_H2_b1_pz;
    boost::optional<float>  gen_H2_b2_pz;
    boost::optional<float> gen_q1_out_pz;
    boost::optional<float> gen_q2_out_pz;
    boost::optional<int>  gen_H1_b1_pdgId;
    boost::optional<int>  gen_H1_b2_pdgId;
    boost::optional<int>  gen_H2_b1_pdgId;
    boost::optional<int>  gen_H2_b2_pdgId;
    boost::optional<int> gen_q1_out_pdgId;
    boost::optional<int> gen_q2_out_pdgId;
    boost::optional<float> gen_H1_b1_mindRgenjet;
    boost::optional<float> gen_H1_b2_mindRgenjet;
    boost::optional<float> gen_H2_b1_mindRgenjet;
    boost::optional<float> gen_H2_b2_mindRgenjet;
    boost::optional<float> gen_q1_out_mindRgenjet;
    boost::optional<float> gen_q2_out_mindRgenjet;
    boost::optional<float> gen_H1_b1_mindRjet;
    boost::optional<float> gen_H1_b2_mindRjet;
    boost::optional<float> gen_H2_b1_mindRjet;
    boost::optional<float> gen_H2_b2_mindRjet;
    boost::optional<float> gen_q1_out_mindRjet;
    boost::optional<float> gen_q2_out_mindRjet;
    boost::optional<int> H1_b1_quarkID;
    boost::optional<int> H1_b2_quarkID;
    boost::optional<int> H2_b1_quarkID;
    boost::optional<int> H2_b2_quarkID;
    boost::optional<int> H1_b1_genJetIdx;
    boost::optional<int> H1_b2_genJetIdx;
    boost::optional<int> H2_b1_genJetIdx;
    boost::optional<int> H2_b2_genJetIdx;   
    boost::optional<int> H1_b1_partonFlavour;
    boost::optional<int> H1_b2_partonFlavour;
    boost::optional<int> H2_b1_partonFlavour;
    boost::optional<int> H2_b2_partonFlavour;
    boost::optional<int> H1_b1_hadronFlavour;
    boost::optional<int> H1_b2_hadronFlavour;
    boost::optional<int> H2_b1_hadronFlavour;
    boost::optional<int> H2_b2_hadronFlavour;
    boost::optional<Jet> JJ_j1;
    boost::optional<int> JJ_j1_quarkID;  
    boost::optional<int> JJ_j1_genJetIdx;
    boost::optional<int> JJ_j1_partonFlavour;
    boost::optional<int> JJ_j1_hadronFlavour;    
    boost::optional<int> JJ_j1_qgl;       
    boost::optional<Jet> JJ_j2;   
    boost::optional<int> JJ_j2_quarkID;
    boost::optional<int> JJ_j2_genJetIdx;
    boost::optional<int> JJ_j2_qgl;
    boost::optional<int> JJ_j2_partonFlavour;
    boost::optional<int> JJ_j2_hadronFlavour;    
    boost::optional<Jet> HH_b1;
    boost::optional<int> HH_b1_quarkID;    
    boost::optional<int> HH_b1_genJetIdx;
    boost::optional<int> HH_b1_partonFlavour; 
    boost::optional<int> HH_b1_hadronFlavour;        
    boost::optional<Jet> HH_b2;   
    boost::optional<int> HH_b2_quarkID;   
    boost::optional<int> HH_b2_genJetIdx;
    boost::optional<int> HH_b2_partonFlavour;
    boost::optional<int> HH_b2_hadronFlavour;    
    boost::optional<Jet> HH_b3;
    boost::optional<int> HH_b3_quarkID;        
    boost::optional<int> HH_b3_genJetIdx;
    boost::optional<int> HH_b3_partonFlavour;
    boost::optional<int> HH_b3_hadronFlavour;        
    boost::optional<Jet> HH_b4;
    boost::optional<int> HH_b4_quarkID;
    boost::optional<int> HH_b4_genJetIdx;      
    boost::optional<int> HH_b4_partonFlavour;
    boost::optional<int> HH_b4_hadronFlavour;
    boost::optional<CompositeCandidate> JJ;
    boost::optional<float> b1b2_deltaR; 
    boost::optional<float> b1b3_deltaR; 
    boost::optional<float> b1b4_deltaR; 
    boost::optional<float> b1j1_deltaR; 
    boost::optional<float> b1j2_deltaR; 
    boost::optional<float> b2b3_deltaR; 
    boost::optional<float> b2b4_deltaR; 
    boost::optional<float> b2j1_deltaR; 
    boost::optional<float> b2j2_deltaR; 
    boost::optional<float> b3b4_deltaR; 
    boost::optional<float> b3j1_deltaR; 
    boost::optional<float> b3j2_deltaR; 
    boost::optional<float> b4j1_deltaR; 
    boost::optional<float> b4j2_deltaR; 
    boost::optional<float> j1j2_deltaR; 
    boost::optional<float> h1h2_deltaR; 
    boost::optional<float> h1j1_deltaR; 
    boost::optional<float> h1j2_deltaR; 
    boost::optional<float> h2j1_deltaR; 
    boost::optional<float> h2j2_deltaR; 
    boost::optional<float> h1jj_deltaR; 
    boost::optional<float> h2jj_deltaR; 
    boost::optional<float> hhj1_deltaR; 
    boost::optional<float> hhj2_deltaR; 
    boost::optional<float> hhjj_deltaR;
    boost::optional<float> b1b2_deltaPhi; 
    boost::optional<float> b1b3_deltaPhi; 
    boost::optional<float> b1b4_deltaPhi; 
    boost::optional<float> b1j1_deltaPhi; 
    boost::optional<float> b1j2_deltaPhi; 
    boost::optional<float> b2b3_deltaPhi; 
    boost::optional<float> b2b4_deltaPhi; 
    boost::optional<float> b2j1_deltaPhi; 
    boost::optional<float> b2j2_deltaPhi; 
    boost::optional<float> b3b4_deltaPhi; 
    boost::optional<float> b3j1_deltaPhi; 
    boost::optional<float> b3j2_deltaPhi; 
    boost::optional<float> b4j1_deltaPhi; 
    boost::optional<float> b4j2_deltaPhi; 
    boost::optional<float> j1j2_deltaPhi; 
    boost::optional<float> b1b2_deltaEta; 
    boost::optional<float> b1b3_deltaEta; 
    boost::optional<float> b1b4_deltaEta; 
    boost::optional<float> b1j1_deltaEta; 
    boost::optional<float> b1j2_deltaEta; 
    boost::optional<float> b2b3_deltaEta; 
    boost::optional<float> b2b4_deltaEta; 
    boost::optional<float> b2j1_deltaEta; 
    boost::optional<float> b2j2_deltaEta; 
    boost::optional<float> b3b4_deltaEta; 
    boost::optional<float> b3j1_deltaEta; 
    boost::optional<float> b3j2_deltaEta; 
    boost::optional<float> b4j1_deltaEta; 
    boost::optional<float> b4j2_deltaEta; 
    boost::optional<float> j1j2_deltaEta;  
    boost::optional<float> h1h2_deltaPhi; 
    boost::optional<float> h1j1_deltaPhi; 
    boost::optional<float> h1j2_deltaPhi; 
    boost::optional<float> h2j1_deltaPhi; 
    boost::optional<float> h2j2_deltaPhi; 
    boost::optional<float> h1jj_deltaPhi; 
    boost::optional<float> h2jj_deltaPhi; 
    boost::optional<float> hhj1_deltaPhi; 
    boost::optional<float> hhj2_deltaPhi; 
    boost::optional<float> hhjj_deltaPhi; 
    boost::optional<float> h1h2_deltaEta; 
    boost::optional<float> h1j1_deltaEta; 
    boost::optional<float> h1j2_deltaEta; 
    boost::optional<float> h2j1_deltaEta; 
    boost::optional<float> h2j2_deltaEta; 
    boost::optional<float> h1jj_deltaEta; 
    boost::optional<float> h2jj_deltaEta; 
    boost::optional<float> hhj1_deltaEta; 
    boost::optional<float> hhj2_deltaEta; 
    boost::optional<float> hhjj_deltaEta; 
    boost::optional<int> NVBFCandidates;
    boost::optional<int> VBFMatchedCandidatesEtaSign;
    boost::optional<float> VBFMatchedCandidatesDeltaEta;
    boost::optional<float> VBFSelectedDeltaEta;
    boost::optional<int> VBFSelectedEtaSign;
    boost::optional<float> VBFGeneratedDeltaEta;
    boost::optional<int> VBFGeneratedEtaSign;
    boost::optional<int> nExtraJet;
    boost::optional<int> nExtraJetbarrel;
    boost::optional<int> nExtraJetendcap;
    boost::optional<float> ptbalance;
    boost::optional<float> ptcentrality;
    boost::optional<float> etacentrality;
    boost::optional<float> j1etaj2eta;
    boost::optional<float> maxj1etaj2eta;    
    boost::optional<int> VBFEvent;
    boost::optional<float> DNN;
    boost::optional<int> ExtraVBFJetDecision;
    boost::optional<float> ExtraVBFJetPt;
    boost::optional<float> ExtraVBFJetEta;   
    boost::optional<CompositeCandidate> H1rand;
    boost::optional<CompositeCandidate> H2rand;
    boost::optional<float> H1_bb_deltaR;
    boost::optional<float> H2_bb_deltaR;   
    boost::optional<float> H1_bb_deltaPhi;
    boost::optional<float> H2_bb_deltaPhi;   
    boost::optional<float> H1_bb_deltaEta;
    boost::optional<float> H2_bb_deltaEta; 
    boost::optional<int> H1_ukflag;
    boost::optional<int> H2_ukflag;
    boost::optional<int> H1_wpflag;
    boost::optional<int> H2_wpflag;
    boost::optional<int> H1_quality;
    boost::optional<int> H2_quality;    
    boost::optional<int> HH_quality;
    boost::optional<int> HH_1wflag;
    boost::optional<int> HH_2wflag;
    boost::optional<int> HH_3wflag;
    boost::optional<int> HH_4wflag;
    boost::optional<int> JJ_quality;    
    boost::optional<int> JJ_1wflag;
    boost::optional<int> JJ_2wflag;
    boost::optional<int> HHJJ_quality;
    boost::optional<int> NPartonsMatchedToJets;
    boost::optional<int> NVBFCandidateswithVBFMatch;
    boost::optional<float> BDT;   
};

#endif