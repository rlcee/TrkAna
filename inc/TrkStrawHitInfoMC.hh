//
// Struct describing MC truth of single straw hit assigned to a track, for use in TTree diagnostics
//
#ifndef TrkStrawHitInfoMC_HH
#define TrkStrawHitInfoMC_HH
#include "Rtypes.h"
#include "DataProducts/inc/GenVector.hh"
#include "MCDataProducts/inc/MCRelationship.hh"
namespace mu2e 
{
   struct TrkStrawHitInfoMC {
    Int_t _pdg, _gen, _proc; // PDG particle code, generator code and process code of the particle which caused the electronics to cross threshold in simulation
    MCRelationship _rel; // relationship (same, mother, daughter, sibling, unrelated) of this particle to the particle generating most of the hits on this track
    Float_t _t0;  // true time this particle passed closest to this wire
    Float_t _dist;  // true transverse distance between the cluster and the wire
    Float_t _doca;  // true transverse distance at POCA of the particle to the wire
    Float_t _len;   // true distance from the cluster to the straw center
    Float_t _edep;  // true energy deposit sum by trigger particles in the straw gas
    Float_t _mom;   // true particle momentum at the POCA
    Float_t _twdot; // dot product between track and wire directions
    XYZVectorF _cpos; // threshold cluster position 
    Int_t _ambig;   // true left-right ambiguity = true angular momentum sign of the particle WRT the wire
    TrkStrawHitInfoMC() : _pdg(-1), _gen(-1), _proc(-1),
    _t0(-1000.0),  _dist(-1000.0), _doca(-1000.0), _len(-1000.0),
    _edep(-1000.0), _mom(-1000.0), _twdot(-1000.0), _ambig(-100) {}
  };
}
#endif
