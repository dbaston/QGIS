/***************************************************************************
                         qgsprocessing.h
                         ---------------
    begin                : July 2017
    copyright            : (C) 2017 by Nyall Dawson
    email                : nyall dot dawson at gmail dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSPROCESSING_H
#define QGSPROCESSING_H

#include "qgis_core.h"
#include "qgis.h"
#include "qgsprocessingparameters.h"

//
// Output definitions
//

/**
 * \class QgsProcessing
 * \ingroup core
 *
 * Contains enumerations and other constants for use in processing algorithms
 * and parameters.
 *
 * \since QGIS 3.0
 */

class CORE_EXPORT QgsProcessing
{

  public:

    //! Data source types enum
    enum SourceType
    {
      TypeMapLayer = -2, //!< Any map layer type (raster or vector)
      TypeVectorAnyGeometry = -1, //!< Any vector layer with geometry
      TypeVectorPoint = 0, //!< Vector point layers
      TypeVectorLine = 1, //!< Vector line layers
      TypeVectorPolygon = 2, //!< Vector polygon layers
      TypeRaster = 3, //!< Raster layers
      TypeFile = 4, //!< Files (i.e. non map layer sources, such as text files)
      TypeVector = 5, //!< Tables (i.e. vector layers with or without geometry). When used for a sink this indicates the sink has no geometry.
    };



};

#endif // QGSPROCESSING_H
