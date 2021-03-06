#ifndef COMMON_H
#define COMMON_H

#include "spherecube.hpp"
using namespace Projection;


typedef struct {
    const char* name;
    enum Projection proj;
    const char* params;
    Center center;
} projection_t;

projection_t projections[] = {
#if 1
    { "gnom-top",        ProjGnomonic,    "", CenterNorthPole    },
    //{ "gnom-bottom",     ProjGnomonic,    "", CenterSouthPole    },
    { "gnom-front",      ProjGnomonic,    "", CenterEquatorFront },
    //{ "gnom-right",      ProjGnomonic,    "", CenterEquatorRight },
    //{ "gnom-back",       ProjGnomonic,    "", CenterEquatorBack  },
    //{ "gnom-left",       ProjGnomonic,    "", CenterEquatorLeft  },
#endif
#if 1
    { "adjgnom-top",     ProjAdjGnomonic, "", CenterNorthPole    },
    //{ "adjgnom-bottom",  ProjAdjGnomonic, "", CenterSouthPole    },
    { "adjgnom-front",   ProjAdjGnomonic, "", CenterEquatorFront },
    //{ "adjgnom-right",   ProjAdjGnomonic, "", CenterEquatorRight },
    //{ "adjgnom-back",    ProjAdjGnomonic, "", CenterEquatorBack  },
    //{ "adjgnom-left",    ProjAdjGnomonic, "", CenterEquatorLeft  },
#endif
#if 1
    { "qsc-top",         ProjQSC,         "", CenterNorthPole    },
    //{ "qsc-bottom",      ProjQSC,         "", CenterSouthPole    },
    { "qsc-front",       ProjQSC,         "", CenterEquatorFront },
    //{ "qsc-right",       ProjQSC,         "", CenterEquatorRight },
    //{ "qsc-back",        ProjQSC,         "", CenterEquatorBack  },
    //{ "qsc-left",        ProjQSC,         "", CenterEquatorLeft  },
#endif
#if 1
    { "nowell-top",      ProjNowell,      "", CenterNorthPole    },
    //{ "nowell-bottom",   ProjNowell,      "", CenterSouthPole    },
    { "nowell-front",    ProjNowell,      "", CenterEquatorFront },
    //{ "nowell-right",    ProjNowell,      "", CenterEquatorRight },
    //{ "nowell-back",     ProjNowell,      "", CenterEquatorBack  },
    //{ "nowell-left",     ProjNowell,      "", CenterEquatorLeft  },
#endif
#if 1
    { "outerra-top",     ProjOuterra,     "", CenterNorthPole    },
    //{ "outerra-bottom",  ProjOuterra,     "", CenterSouthPole    },
    { "outerra-front",   ProjOuterra,     "", CenterEquatorFront },
    //{ "outerra-right",   ProjOuterra,     "", CenterEquatorRight },
    //{ "outerra-back",    ProjOuterra,     "", CenterEquatorBack  },
    //{ "outerra-left",    ProjOuterra,     "", CenterEquatorLeft  },
#endif
#if 1
    { "healpix-top",     ProjHEALPix,     "", CenterNorthPole    },
    //{ "healpix-bottom",  ProjHEALPix,     "", CenterSouthPole    },
    { "healpix-front",   ProjHEALPix,     "", CenterEquatorFront },
    //{ "healpix-right",   ProjHEALPix,     "", CenterEquatorRight },
    //{ "healpix-back",    ProjHEALPix,     "", CenterEquatorBack  },
    //{ "healpix-left",    ProjHEALPix,     "", CenterEquatorLeft  },
#endif
#if 1
    { "contcube-top",    ProjContCube,    "", CenterNorthPole    },
    //{ "contcube-bottom", ProjContCube,    "", CenterSouthPole    },
    { "contcube-front",  ProjContCube,    "", CenterEquatorFront },
    //{ "contcube-right",  ProjContCube,    "", CenterEquatorRight },
    //{ "contcube-back",   ProjContCube,    "", CenterEquatorBack  },
    //{ "contcube-left",   ProjContCube,    "", CenterEquatorLeft  },
#endif
#if 1
    { "unicube-top",     ProjUniCube,     "", CenterNorthPole    },
    //{ "unicube-bottom",  ProjUniCube,     "", CenterSouthPole    },
    { "unicube-front",   ProjUniCube,     "", CenterEquatorFront },
    //{ "unicube-right",   ProjUniCube,     "", CenterEquatorRight },
    //{ "unicube-back",    ProjUniCube,     "", CenterEquatorBack  },
    //{ "unicube-left",    ProjUniCube,     "", CenterEquatorLeft  },
#endif
#if 1
    { "atanZucker-top",   ProjGnomTangens, "c=1.18228668555", CenterNorthPole }, // from the JCGT paper
    { "atanZucker-front",   ProjGnomTangens, "c=1.18228668555", CenterEquatorFront }, // from the JCGT paper
    { "atan11968-top",   ProjGnomTangens, "c=1.1968", CenterEquatorFront },
    //{ "atan115-front",   ProjGnomTangens, "c=1.15", CenterEquatorFront },
    //{ "atan116-front",   ProjGnomTangens, "c=1.16", CenterEquatorFront },
    //{ "atan117-front",   ProjGnomTangens, "c=1.17", CenterEquatorFront },
    //{ "atan1180-front",   ProjGnomTangens, "c=1.180", CenterEquatorFront },
    //{ "atan1181-front",   ProjGnomTangens, "c=1.181", CenterEquatorFront },
    //{ "atan1182-front",   ProjGnomTangens, "c=1.182", CenterEquatorFront },
    //{ "atan1183-front",   ProjGnomTangens, "c=1.183", CenterEquatorFront },
    //{ "atan1184-front",   ProjGnomTangens, "c=1.184", CenterEquatorFront },
    //{ "atan1185-front",   ProjGnomTangens, "c=1.185", CenterEquatorFront },
    //{ "atan1186-front",   ProjGnomTangens, "c=1.186", CenterEquatorFront },
    //{ "atan1187-front",   ProjGnomTangens, "c=1.187", CenterEquatorFront },
    //{ "atan1188-front",   ProjGnomTangens, "c=1.188", CenterEquatorFront },
    //{ "atan1189-front",   ProjGnomTangens, "c=1.189", CenterEquatorFront },
    //{ "atan1190-front",   ProjGnomTangens, "c=1.190", CenterEquatorFront },
    //{ "atan1191-front",   ProjGnomTangens, "c=1.191", CenterEquatorFront },
    //{ "atan1192-front",   ProjGnomTangens, "c=1.192", CenterEquatorFront },
    //{ "atan1193-front",   ProjGnomTangens, "c=1.193", CenterEquatorFront },
    //{ "atan1194-front",   ProjGnomTangens, "c=1.194", CenterEquatorFront },
    //{ "atan1195-front",   ProjGnomTangens, "c=1.195", CenterEquatorFront },
    //{ "atan11960-front",   ProjGnomTangens, "c=1.1960", CenterEquatorFront },
    //{ "atan11961-front",   ProjGnomTangens, "c=1.1961", CenterEquatorFront },
    //{ "atan11962-front",   ProjGnomTangens, "c=1.1962", CenterEquatorFront },
    //{ "atan11963-front",   ProjGnomTangens, "c=1.1963", CenterEquatorFront },
    //{ "atan11964-front",   ProjGnomTangens, "c=1.1964", CenterEquatorFront },
    //{ "atan11965-front",   ProjGnomTangens, "c=1.1965", CenterEquatorFront },
    //{ "atan11966-front",   ProjGnomTangens, "c=1.1966", CenterEquatorFront },
    //{ "atan11967-front",   ProjGnomTangens, "c=1.1967", CenterEquatorFront },
    { "atan11968-front",   ProjGnomTangens, "c=1.1968", CenterEquatorFront },
    //{ "atan11969-front",   ProjGnomTangens, "c=1.1969", CenterEquatorFront },
    //{ "atan11970-front",   ProjGnomTangens, "c=1.1970", CenterEquatorFront },
    //{ "atan11971-front",   ProjGnomTangens, "c=1.1971", CenterEquatorFront },
    //{ "atan11972-front",   ProjGnomTangens, "c=1.1972", CenterEquatorFront },
    //{ "atan11973-front",   ProjGnomTangens, "c=1.1973", CenterEquatorFront },
    //{ "atan11974-front",   ProjGnomTangens, "c=1.1974", CenterEquatorFront },
    //{ "atan11975-front",   ProjGnomTangens, "c=1.1975", CenterEquatorFront },
    //{ "atan11976-front",   ProjGnomTangens, "c=1.1976", CenterEquatorFront },
    //{ "atan11977-front",   ProjGnomTangens, "c=1.1977", CenterEquatorFront },
    //{ "atan11978-front",   ProjGnomTangens, "c=1.1978", CenterEquatorFront },
    //{ "atan11979-front",   ProjGnomTangens, "c=1.1979", CenterEquatorFront },
    //{ "atan11980-front",   ProjGnomTangens, "c=1.1980", CenterEquatorFront },
    //{ "atan1199-front",   ProjGnomTangens, "c=1.199", CenterEquatorFront },
    //{ "atan1200-front",   ProjGnomTangens, "c=1.200", CenterEquatorFront },
    //{ "atan121-front",   ProjGnomTangens, "c=1.21", CenterEquatorFront },
    //{ "atan122-front",   ProjGnomTangens, "c=1.22", CenterEquatorFront },
    //{ "atan123-front",   ProjGnomTangens, "c=1.23", CenterEquatorFront },
    //{ "atan124-front",   ProjGnomTangens, "c=1.24", CenterEquatorFront },
    //{ "atan125-front",   ProjGnomTangens, "c=1.25", CenterEquatorFront },
#endif
#if 1
    { "tanh09721-top",   ProjGnomTanh, "c=0.9721", CenterNorthPole },
    //{ "tanh05-front",   ProjGnomTanh, "c=0.5", CenterEquatorFront },
    //{ "tanh06-front",   ProjGnomTanh, "c=0.6", CenterEquatorFront },
    //{ "tanh07-front",   ProjGnomTanh, "c=0.7", CenterEquatorFront },
    //{ "tanh08-front",   ProjGnomTanh, "c=0.8", CenterEquatorFront },
    //{ "tanh090-front",   ProjGnomTanh, "c=0.90", CenterEquatorFront },
    //{ "tanh091-front",   ProjGnomTanh, "c=0.91", CenterEquatorFront },
    //{ "tanh092-front",   ProjGnomTanh, "c=0.92", CenterEquatorFront },
    //{ "tanh093-front",   ProjGnomTanh, "c=0.93", CenterEquatorFront },
    //{ "tanh094-front",   ProjGnomTanh, "c=0.94", CenterEquatorFront },
    //{ "tanh095-front",   ProjGnomTanh, "c=0.95", CenterEquatorFront },
    //{ "tanh0960-front",   ProjGnomTanh, "c=0.960", CenterEquatorFront },
    //{ "tanh0961-front",   ProjGnomTanh, "c=0.961", CenterEquatorFront },
    //{ "tanh0962-front",   ProjGnomTanh, "c=0.962", CenterEquatorFront },
    //{ "tanh0963-front",   ProjGnomTanh, "c=0.963", CenterEquatorFront },
    //{ "tanh0964-front",   ProjGnomTanh, "c=0.964", CenterEquatorFront },
    //{ "tanh0965-front",   ProjGnomTanh, "c=0.965", CenterEquatorFront },
    //{ "tanh0966-front",   ProjGnomTanh, "c=0.966", CenterEquatorFront },
    //{ "tanh0967-front",   ProjGnomTanh, "c=0.967", CenterEquatorFront },
    //{ "tanh0968-front",   ProjGnomTanh, "c=0.968", CenterEquatorFront },
    //{ "tanh0969-front",   ProjGnomTanh, "c=0.969", CenterEquatorFront },
    //{ "tanh0970-front",   ProjGnomTanh, "c=0.970", CenterEquatorFront },
    //{ "tanh09710-front",   ProjGnomTanh, "c=0.9710", CenterEquatorFront },
    //{ "tanh09711-front",   ProjGnomTanh, "c=0.9711", CenterEquatorFront },
    //{ "tanh09712-front",   ProjGnomTanh, "c=0.9712", CenterEquatorFront },
    //{ "tanh09713-front",   ProjGnomTanh, "c=0.9713", CenterEquatorFront },
    //{ "tanh09714-front",   ProjGnomTanh, "c=0.9714", CenterEquatorFront },
    //{ "tanh09715-front",   ProjGnomTanh, "c=0.9715", CenterEquatorFront },
    //{ "tanh09716-front",   ProjGnomTanh, "c=0.9716", CenterEquatorFront },
    //{ "tanh09717-front",   ProjGnomTanh, "c=0.9717", CenterEquatorFront },
    //{ "tanh09718-front",   ProjGnomTanh, "c=0.9718", CenterEquatorFront },
    //{ "tanh09719-front",   ProjGnomTanh, "c=0.9719", CenterEquatorFront },
    //{ "tanh09720-front",   ProjGnomTanh, "c=0.9720", CenterEquatorFront },
    { "tanh09721-front",   ProjGnomTanh, "c=0.9721", CenterEquatorFront },
    //{ "tanh09722-front",   ProjGnomTanh, "c=0.9722", CenterEquatorFront },
    //{ "tanh09723-front",   ProjGnomTanh, "c=0.9723", CenterEquatorFront },
    //{ "tanh09724-front",   ProjGnomTanh, "c=0.9724", CenterEquatorFront },
    //{ "tanh09725-front",   ProjGnomTanh, "c=0.9725", CenterEquatorFront },
    //{ "tanh09726-front",   ProjGnomTanh, "c=0.9726", CenterEquatorFront },
    //{ "tanh09727-front",   ProjGnomTanh, "c=0.9727", CenterEquatorFront },
    //{ "tanh09728-front",   ProjGnomTanh, "c=0.9728", CenterEquatorFront },
    //{ "tanh09729-front",   ProjGnomTanh, "c=0.9729", CenterEquatorFront },
    //{ "tanh0973-front",   ProjGnomTanh, "c=0.973", CenterEquatorFront },
    //{ "tanh0974-front",   ProjGnomTanh, "c=0.974", CenterEquatorFront },
    //{ "tanh0975-front",   ProjGnomTanh, "c=0.975", CenterEquatorFront },
    //{ "tanh0976-front",   ProjGnomTanh, "c=0.976", CenterEquatorFront },
    //{ "tanh0977-front",   ProjGnomTanh, "c=0.977", CenterEquatorFront },
    //{ "tanh0978-front",   ProjGnomTanh, "c=0.978", CenterEquatorFront },
    //{ "tanh0979-front",   ProjGnomTanh, "c=0.979", CenterEquatorFront },
    //{ "tanh0980-front",   ProjGnomTanh, "c=0.980", CenterEquatorFront },
    //{ "tanh099-front",   ProjGnomTanh, "c=0.99", CenterEquatorFront },
    //{ "tanh100-front",   ProjGnomTanh, "c=1.00", CenterEquatorFront },
    //{ "tanh101-front",   ProjGnomTanh, "c=1.01", CenterEquatorFront },
    //{ "tanh102-front",   ProjGnomTanh, "c=1.02", CenterEquatorFront },
    //{ "tanh103-front",   ProjGnomTanh, "c=1.03", CenterEquatorFront },
    //{ "tanh104-front",   ProjGnomTanh, "c=1.04", CenterEquatorFront },
    //{ "tanh105-front",   ProjGnomTanh, "c=1.05", CenterEquatorFront },
    //{ "tanh106-front",   ProjGnomTanh, "c=1.06", CenterEquatorFront },
    //{ "tanh107-front",   ProjGnomTanh, "c=1.07", CenterEquatorFront },
    //{ "tanh108-front",   ProjGnomTanh, "c=1.08", CenterEquatorFront },
    //{ "tanh109-front",   ProjGnomTanh, "c=1.09", CenterEquatorFront },
    //{ "tanh110-front",   ProjGnomTanh, "c=1.10", CenterEquatorFront },
    //{ "tanh12-front",   ProjGnomTanh, "c=1.2", CenterEquatorFront },
    //{ "tanh13-front",   ProjGnomTanh, "c=1.3", CenterEquatorFront },
    //{ "tanh14-front",   ProjGnomTanh, "c=1.4", CenterEquatorFront },
    //{ "tanh15-front",   ProjGnomTanh, "c=1.5", CenterEquatorFront },
#endif
#if 1
    { "logistic19443-top",   ProjGnomLogistic, "c=1.9443", CenterNorthPole },
    //{ "logistic15-front",   ProjGnomLogistic, "c=1.5", CenterEquatorFront },
    //{ "logistic16-front",   ProjGnomLogistic, "c=1.6", CenterEquatorFront },
    //{ "logistic17-front",   ProjGnomLogistic, "c=1.7", CenterEquatorFront },
    //{ "logistic18-front",   ProjGnomLogistic, "c=1.8", CenterEquatorFront },
    //{ "logistic190-front",   ProjGnomLogistic, "c=1.90", CenterEquatorFront },
    //{ "logistic191-front",   ProjGnomLogistic, "c=1.91", CenterEquatorFront },
    //{ "logistic192-front",   ProjGnomLogistic, "c=1.92", CenterEquatorFront },
    //{ "logistic1930-front",   ProjGnomLogistic, "c=1.930", CenterEquatorFront },
    //{ "logistic1931-front",   ProjGnomLogistic, "c=1.931", CenterEquatorFront },
    //{ "logistic1932-front",   ProjGnomLogistic, "c=1.932", CenterEquatorFront },
    //{ "logistic1933-front",   ProjGnomLogistic, "c=1.933", CenterEquatorFront },
    //{ "logistic1934-front",   ProjGnomLogistic, "c=1.934", CenterEquatorFront },
    //{ "logistic1935-front",   ProjGnomLogistic, "c=1.935", CenterEquatorFront },
    //{ "logistic1936-front",   ProjGnomLogistic, "c=1.936", CenterEquatorFront },
    //{ "logistic1937-front",   ProjGnomLogistic, "c=1.937", CenterEquatorFront },
    //{ "logistic1938-front",   ProjGnomLogistic, "c=1.938", CenterEquatorFront },
    //{ "logistic1939-front",   ProjGnomLogistic, "c=1.939", CenterEquatorFront },
    //{ "logistic1940-front",   ProjGnomLogistic, "c=1.940", CenterEquatorFront },
    //{ "logistic1941-front",   ProjGnomLogistic, "c=1.941", CenterEquatorFront },
    //{ "logistic1942-front",   ProjGnomLogistic, "c=1.942", CenterEquatorFront },
    //{ "logistic1943-front",   ProjGnomLogistic, "c=1.943", CenterEquatorFront },
    //{ "logistic19440-front",   ProjGnomLogistic, "c=1.9440", CenterEquatorFront },
    //{ "logistic19441-front",   ProjGnomLogistic, "c=1.9441", CenterEquatorFront },
    //{ "logistic19442-front",   ProjGnomLogistic, "c=1.9442", CenterEquatorFront },
    { "logistic19443-front",   ProjGnomLogistic, "c=1.9443", CenterEquatorFront },
    //{ "logistic19444-front",   ProjGnomLogistic, "c=1.9444", CenterEquatorFront },
    //{ "logistic19445-front",   ProjGnomLogistic, "c=1.9445", CenterEquatorFront },
    //{ "logistic19446-front",   ProjGnomLogistic, "c=1.9446", CenterEquatorFront },
    //{ "logistic19447-front",   ProjGnomLogistic, "c=1.9447", CenterEquatorFront },
    //{ "logistic19448-front",   ProjGnomLogistic, "c=1.9448", CenterEquatorFront },
    //{ "logistic19449-front",   ProjGnomLogistic, "c=1.9449", CenterEquatorFront },
    //{ "logistic19450-front",   ProjGnomLogistic, "c=1.9450", CenterEquatorFront },
    //{ "logistic19451-front",   ProjGnomLogistic, "c=1.9451", CenterEquatorFront },
    //{ "logistic19452-front",   ProjGnomLogistic, "c=1.9452", CenterEquatorFront },
    //{ "logistic19453-front",   ProjGnomLogistic, "c=1.9453", CenterEquatorFront },
    //{ "logistic19454-front",   ProjGnomLogistic, "c=1.9454", CenterEquatorFront },
    //{ "logistic19455-front",   ProjGnomLogistic, "c=1.9455", CenterEquatorFront },
    //{ "logistic19456-front",   ProjGnomLogistic, "c=1.9456", CenterEquatorFront },
    //{ "logistic19457-front",   ProjGnomLogistic, "c=1.9457", CenterEquatorFront },
    //{ "logistic19458-front",   ProjGnomLogistic, "c=1.9458", CenterEquatorFront },
    //{ "logistic19459-front",   ProjGnomLogistic, "c=1.9459", CenterEquatorFront },
    //{ "logistic19460-front",   ProjGnomLogistic, "c=1.9460", CenterEquatorFront },
    //{ "logistic1947-front",   ProjGnomLogistic, "c=1.947", CenterEquatorFront },
    //{ "logistic1948-front",   ProjGnomLogistic, "c=1.948", CenterEquatorFront },
    //{ "logistic1949-front",   ProjGnomLogistic, "c=1.949", CenterEquatorFront },
    //{ "logistic1950-front",   ProjGnomLogistic, "c=1.950", CenterEquatorFront },
    //{ "logistic196-front",   ProjGnomLogistic, "c=1.96", CenterEquatorFront },
    //{ "logistic197-front",   ProjGnomLogistic, "c=1.97", CenterEquatorFront },
    //{ "logistic198-front",   ProjGnomLogistic, "c=1.98", CenterEquatorFront },
    //{ "logistic199-front",   ProjGnomLogistic, "c=1.99", CenterEquatorFront },
    //{ "logistic200-front",   ProjGnomLogistic, "c=2.00", CenterEquatorFront },
    //{ "logistic201-front",   ProjGnomLogistic, "c=2.01", CenterEquatorFront },
    //{ "logistic202-front",   ProjGnomLogistic, "c=2.02", CenterEquatorFront },
    //{ "logistic203-front",   ProjGnomLogistic, "c=2.03", CenterEquatorFront },
    //{ "logistic204-front",   ProjGnomLogistic, "c=2.04", CenterEquatorFront },
    //{ "logistic205-front",   ProjGnomLogistic, "c=2.05", CenterEquatorFront },
    //{ "logistic206-front",   ProjGnomLogistic, "c=2.06", CenterEquatorFront },
    //{ "logistic207-front",   ProjGnomLogistic, "c=2.07", CenterEquatorFront },
    //{ "logistic208-front",   ProjGnomLogistic, "c=2.08", CenterEquatorFront },
    //{ "logistic209-front",   ProjGnomLogistic, "c=2.09", CenterEquatorFront },
    //{ "logistic210-front",   ProjGnomLogistic, "c=2.10", CenterEquatorFront },
    //{ "logistic22-front",   ProjGnomLogistic, "c=2.2", CenterEquatorFront },
    //{ "logistic23-front",   ProjGnomLogistic, "c=2.3", CenterEquatorFront },
    //{ "logistic24-front",   ProjGnomLogistic, "c=2.4", CenterEquatorFront },
    //{ "logistic25-front",   ProjGnomLogistic, "c=2.5", CenterEquatorFront },
#endif
#if 1
    { "algebraic08700-top",   ProjGnomAlgebraic, "c=0.8700", CenterNorthPole },
    //{ "algebraic05-front",   ProjGnomAlgebraic, "c=0.5", CenterEquatorFront },
    //{ "algebraic06-front",   ProjGnomAlgebraic, "c=0.6", CenterEquatorFront },
    //{ "algebraic07-front",   ProjGnomAlgebraic, "c=0.7", CenterEquatorFront },
    //{ "algebraic080-front",   ProjGnomAlgebraic, "c=0.80", CenterEquatorFront },
    //{ "algebraic081-front",   ProjGnomAlgebraic, "c=0.81", CenterEquatorFront },
    //{ "algebraic082-front",   ProjGnomAlgebraic, "c=0.82", CenterEquatorFront },
    //{ "algebraic083-front",   ProjGnomAlgebraic, "c=0.83", CenterEquatorFront },
    //{ "algebraic084-front",   ProjGnomAlgebraic, "c=0.84", CenterEquatorFront },
    //{ "algebraic085-front",   ProjGnomAlgebraic, "c=0.85", CenterEquatorFront },
    //{ "algebraic0860-front",   ProjGnomAlgebraic, "c=0.860", CenterEquatorFront },
    //{ "algebraic0861-front",   ProjGnomAlgebraic, "c=0.861", CenterEquatorFront },
    //{ "algebraic0862-front",   ProjGnomAlgebraic, "c=0.862", CenterEquatorFront },
    //{ "algebraic0863-front",   ProjGnomAlgebraic, "c=0.863", CenterEquatorFront },
    //{ "algebraic0864-front",   ProjGnomAlgebraic, "c=0.864", CenterEquatorFront },
    //{ "algebraic0865-front",   ProjGnomAlgebraic, "c=0.865", CenterEquatorFront },
    //{ "algebraic0866-front",   ProjGnomAlgebraic, "c=0.866", CenterEquatorFront },
    //{ "algebraic0867-front",   ProjGnomAlgebraic, "c=0.867", CenterEquatorFront },
    //{ "algebraic0868-front",   ProjGnomAlgebraic, "c=0.868", CenterEquatorFront },
    //{ "algebraic08690-front",   ProjGnomAlgebraic, "c=0.8690", CenterEquatorFront },
    //{ "algebraic08691-front",   ProjGnomAlgebraic, "c=0.8691", CenterEquatorFront },
    //{ "algebraic08692-front",   ProjGnomAlgebraic, "c=0.8692", CenterEquatorFront },
    //{ "algebraic08693-front",   ProjGnomAlgebraic, "c=0.8693", CenterEquatorFront },
    //{ "algebraic08694-front",   ProjGnomAlgebraic, "c=0.8694", CenterEquatorFront },
    //{ "algebraic08695-front",   ProjGnomAlgebraic, "c=0.8695", CenterEquatorFront },
    //{ "algebraic08696-front",   ProjGnomAlgebraic, "c=0.8696", CenterEquatorFront },
    //{ "algebraic08697-front",   ProjGnomAlgebraic, "c=0.8697", CenterEquatorFront },
    //{ "algebraic08698-front",   ProjGnomAlgebraic, "c=0.8698", CenterEquatorFront },
    //{ "algebraic08699-front",   ProjGnomAlgebraic, "c=0.8699", CenterEquatorFront },
    { "algebraic08700-front",   ProjGnomAlgebraic, "c=0.8700", CenterEquatorFront },
    //{ "algebraic08701-front",   ProjGnomAlgebraic, "c=0.8701", CenterEquatorFront },
    //{ "algebraic08702-front",   ProjGnomAlgebraic, "c=0.8702", CenterEquatorFront },
    //{ "algebraic08703-front",   ProjGnomAlgebraic, "c=0.8703", CenterEquatorFront },
    //{ "algebraic08704-front",   ProjGnomAlgebraic, "c=0.8704", CenterEquatorFront },
    //{ "algebraic08705-front",   ProjGnomAlgebraic, "c=0.8705", CenterEquatorFront },
    //{ "algebraic08706-front",   ProjGnomAlgebraic, "c=0.8706", CenterEquatorFront },
    //{ "algebraic08707-front",   ProjGnomAlgebraic, "c=0.8707", CenterEquatorFront },
    //{ "algebraic08708-front",   ProjGnomAlgebraic, "c=0.8708", CenterEquatorFront },
    //{ "algebraic08709-front",   ProjGnomAlgebraic, "c=0.8709", CenterEquatorFront },
    //{ "algebraic08710-front",   ProjGnomAlgebraic, "c=0.8710", CenterEquatorFront },
    //{ "algebraic0872-front",   ProjGnomAlgebraic, "c=0.872", CenterEquatorFront },
    //{ "algebraic0873-front",   ProjGnomAlgebraic, "c=0.873", CenterEquatorFront },
    //{ "algebraic0874-front",   ProjGnomAlgebraic, "c=0.874", CenterEquatorFront },
    //{ "algebraic0875-front",   ProjGnomAlgebraic, "c=0.875", CenterEquatorFront },
    //{ "algebraic0876-front",   ProjGnomAlgebraic, "c=0.876", CenterEquatorFront },
    //{ "algebraic0877-front",   ProjGnomAlgebraic, "c=0.877", CenterEquatorFront },
    //{ "algebraic0878-front",   ProjGnomAlgebraic, "c=0.878", CenterEquatorFront },
    //{ "algebraic0879-front",   ProjGnomAlgebraic, "c=0.879", CenterEquatorFront },
    //{ "algebraic0880-front",   ProjGnomAlgebraic, "c=0.880", CenterEquatorFront },
    //{ "algebraic089-front",   ProjGnomAlgebraic, "c=0.89", CenterEquatorFront },
    //{ "algebraic090-front",   ProjGnomAlgebraic, "c=0.90", CenterEquatorFront },
    //{ "algebraic091-front",   ProjGnomAlgebraic, "c=0.91", CenterEquatorFront },
    //{ "algebraic092-front",   ProjGnomAlgebraic, "c=0.92", CenterEquatorFront },
    //{ "algebraic093-front",   ProjGnomAlgebraic, "c=0.93", CenterEquatorFront },
    //{ "algebraic094-front",   ProjGnomAlgebraic, "c=0.94", CenterEquatorFront },
    //{ "algebraic095-front",   ProjGnomAlgebraic, "c=0.95", CenterEquatorFront },
    //{ "algebraic096-front",   ProjGnomAlgebraic, "c=0.96", CenterEquatorFront },
    //{ "algebraic097-front",   ProjGnomAlgebraic, "c=0.97", CenterEquatorFront },
    //{ "algebraic098-front",   ProjGnomAlgebraic, "c=0.98", CenterEquatorFront },
    //{ "algebraic099-front",   ProjGnomAlgebraic, "c=0.99", CenterEquatorFront },
    //{ "algebraic100-front",   ProjGnomAlgebraic, "c=1.00", CenterEquatorFront },
    //{ "algebraic11-front",   ProjGnomAlgebraic, "c=1.1", CenterEquatorFront },
    //{ "algebraic12-front",   ProjGnomAlgebraic, "c=1.2", CenterEquatorFront },
    //{ "algebraic13-front",   ProjGnomAlgebraic, "c=1.3", CenterEquatorFront },
    //{ "algebraic14-front",   ProjGnomAlgebraic, "c=1.4", CenterEquatorFront },
    //{ "algebraic15-front",   ProjGnomAlgebraic, "c=1.5", CenterEquatorFront },
#endif
#if 1
    { "poly5-top",         ProjGnomPoly5, "ii=0", CenterNorthPole },
    { "poly5-front",         ProjGnomPoly5, "ii=0", CenterEquatorFront },
    { "poly5ii",         ProjGnomPoly5, "ii=1", CenterNorthPole },
    { "poly5ii-front",         ProjGnomPoly5, "ii=1", CenterEquatorFront },
#endif
#if 1
    { "smoothstep07507-top",         ProjGnomSmoothstep, "c=0.7507", CenterNorthPole },
    //{ "smoothstep0745-front",         ProjGnomSmoothstep, "c=0.745", CenterEquatorFront },
    //{ "smoothstep0746-front",         ProjGnomSmoothstep, "c=0.746", CenterEquatorFront },
    //{ "smoothstep0747-front",         ProjGnomSmoothstep, "c=0.747", CenterEquatorFront },
    //{ "smoothstep0748-front",         ProjGnomSmoothstep, "c=0.748", CenterEquatorFront },
    //{ "smoothstep07490-front",         ProjGnomSmoothstep, "c=0.7490", CenterEquatorFront },
    //{ "smoothstep07491-front",         ProjGnomSmoothstep, "c=0.7491", CenterEquatorFront },
    //{ "smoothstep07492-front",         ProjGnomSmoothstep, "c=0.7492", CenterEquatorFront },
    //{ "smoothstep07493-front",         ProjGnomSmoothstep, "c=0.7493", CenterEquatorFront },
    //{ "smoothstep07494-front",         ProjGnomSmoothstep, "c=0.7494", CenterEquatorFront },
    //{ "smoothstep07495-front",         ProjGnomSmoothstep, "c=0.7495", CenterEquatorFront },
    //{ "smoothstep07496-front",         ProjGnomSmoothstep, "c=0.7496", CenterEquatorFront },
    //{ "smoothstep07497-front",         ProjGnomSmoothstep, "c=0.7497", CenterEquatorFront },
    //{ "smoothstep07498-front",         ProjGnomSmoothstep, "c=0.7498", CenterEquatorFront },
    //{ "smoothstep07499-front",         ProjGnomSmoothstep, "c=0.7499", CenterEquatorFront },
    //{ "smoothstep07500-front",         ProjGnomSmoothstep, "c=0.7500", CenterEquatorFront },
    //{ "smoothstep07501-front",         ProjGnomSmoothstep, "c=0.7501", CenterEquatorFront },
    //{ "smoothstep07502-front",         ProjGnomSmoothstep, "c=0.7502", CenterEquatorFront },
    //{ "smoothstep07503-front",         ProjGnomSmoothstep, "c=0.7503", CenterEquatorFront },
    //{ "smoothstep07504-front",         ProjGnomSmoothstep, "c=0.7504", CenterEquatorFront },
    //{ "smoothstep07505-front",         ProjGnomSmoothstep, "c=0.7505", CenterEquatorFront },
    //{ "smoothstep07506-front",         ProjGnomSmoothstep, "c=0.7506", CenterEquatorFront },
    { "smoothstep07507-front",         ProjGnomSmoothstep, "c=0.7507", CenterEquatorFront },
    //{ "smoothstep07508-front",         ProjGnomSmoothstep, "c=0.7508", CenterEquatorFront },
    //{ "smoothstep07509-front",         ProjGnomSmoothstep, "c=0.7509", CenterEquatorFront },
    //{ "smoothstep07510-front",         ProjGnomSmoothstep, "c=0.7510", CenterEquatorFront },
    //{ "smoothstep0752-front",         ProjGnomSmoothstep, "c=0.752", CenterEquatorFront },
    //{ "smoothstep0753-front",         ProjGnomSmoothstep, "c=0.753", CenterEquatorFront },
    //{ "smoothstep0754-front",         ProjGnomSmoothstep, "c=0.754", CenterEquatorFront },
    //{ "smoothstep0755-front",         ProjGnomSmoothstep, "c=0.755", CenterEquatorFront },
#endif
#if 1
    { "everitt13750-top",   ProjGnomEveritt, "c=1.3750", CenterNorthPole },
    { "everitt13750-front",   ProjGnomEveritt, "c=1.3750", CenterEquatorFront },
    { "everitt15000-top",   ProjGnomEveritt, "c=1.5000", CenterNorthPole },
    { "everitt15000-front",   ProjGnomEveritt, "c=1.5000", CenterEquatorFront },
    { "everitt14511-top",   ProjGnomEveritt, "c=1.4511", CenterNorthPole },
    { "everitt14511-front",   ProjGnomEveritt, "c=1.4511", CenterEquatorFront },
#endif
};

int n_projections = sizeof(projections) / sizeof(projections[0]);

#endif
