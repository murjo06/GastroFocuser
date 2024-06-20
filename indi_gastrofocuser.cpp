#include "config.h"
#include "indi_gastrofocuser.h"

static std::unique_ptr<GastroFocuser> focuser(new GastroFocuser());

GastroFocuser::GastroFocuser() {
    setVersion(CDRIVER_VERSION_MAJOR, CDRIVER_VERSION_MINOR);
}

const char *GastroFocuser::getDefaultName() {
    return "GastroFocuser";
}