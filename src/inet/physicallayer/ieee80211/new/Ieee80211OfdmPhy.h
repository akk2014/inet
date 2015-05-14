//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_IEEE80211OFDMPHY_H
#define __INET_IEEE80211OFDMPHY_H

#include "inet/physicallayer/ieee80211/new/Ieee80211OfdmPlcp.h"
#include "inet/physicallayer/ieee80211/new/Ieee80211OfdmPmd.h"
#include "inet/physicallayer/ieee80211/new/Ieee80211OfdmPlme.h"

namespace inet {

namespace physicallayer {

class INET_API Ieee80211OfdmPhy
{
    protected:
        Ieee80211OfdmPlcp *plcp;
        Ieee80211OfdmPmd *pmd;
        Ieee80211OfdmPlme *plme;
};

} // namespace physicallayer

} // namespace inet

#endif // ifndef __INET_IEEE80211OFDMPHY_H

