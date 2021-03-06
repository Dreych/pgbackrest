/***********************************************************************************************************************************
PostgreSQL 9.1 Interface
***********************************************************************************************************************************/
#ifndef POSTGRES_INTERFACE_INTERFACE091_H
#define POSTGRES_INTERFACE_INTERFACE091_H

#include "postgres/interface.h"

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
bool pgInterfaceIs091(const Buffer *controlFile);
PgControl pgInterfaceControl091(const Buffer *controlFile);

/***********************************************************************************************************************************
Test Functions
***********************************************************************************************************************************/
#ifdef DEBUG
    void pgInterfaceControlTest091(PgControl pgControl, Buffer *buffer);
#endif

#endif
