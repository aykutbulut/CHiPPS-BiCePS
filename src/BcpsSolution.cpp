/*===========================================================================*
 * This file is part of the Branch, Constrain and Price Software (BiCePS)    *
 *                                                                           *
 * BiCePS is distributed under the Common Public License as part of the      *
 * COIN-OR repository (http://www.coin-or.org).                              *
 *                                                                           *
 * Authors: Yan Xu, SAS Institute Inc.                                       *
 *          Ted Ralphs, Lehigh University                                    *
 *          Laszlo Ladanyi, IBM T.J. Watson Research Center                  *
 *          Matthew Saltzman, Clemson Unniversity                            *
 *                                                                           *
 * Copyright (C) 2001-2006, Lehigh University, Yan Xu, and Ted Ralphs.       *
 * All Rights Reserved.                                                      *
 *===========================================================================*/

//#############################################################################

#include "BcpsSolution.h"

//#############################################################################

BcpsSolution *
BcpsSolution::selectNonzeros(const double etol) const
{
    BcpsSolution *sol = NULL;
    
    return sol;
}

//#############################################################################

BcpsSolution* 
BcpsSolution::selectFractional(const double etol) const
{
    BcpsSolution *sol = NULL;
    
    return sol;
}

//#############################################################################

/** Pack Bcps part of solution into an encoded objects. */
AlpsReturnCode 
BcpsSolution::encodeBcps(AlpsEncoded *encoded) const
{
    AlpsReturnCode status = ALPS_OK;
    encoded->writeRep(size_);
    encoded->writeRep(values_, size_);
    encoded->writeRep(quality_);

    return status;
}

//#############################################################################

/** Unpack Bcps part of solution from an encoded objects. */
AlpsReturnCode 
BcpsSolution::decodeBcps(AlpsEncoded & encoded)
{
    AlpsReturnCode status = ALPS_OK;
    
    encoded.readRep(size_);
    encoded.readRep(values_, size_);
    encoded.readRep(quality_);

    return status;
}



//#############################################################################


//#############################################################################
