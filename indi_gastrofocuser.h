#pragma once

#include "libindi/defaultdevice.h"

class GastroFocuser : public INDI::DefaultDevice {
public:
    GastroFocuser();
    virtual ~GastroFocuser() = default;

    virtual const char *getDefaultName() override;
};