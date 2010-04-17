/////////////////////////////////////////////////////////////////////////////
// Name:        src/qt/uiaction.cpp
// Author:      Peter Most
// Id:          $Id$
// Copyright:   (c) Peter Most
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#include "wx/qt/defs.h"
#include "wx/uiaction.h"

#if wxUSE_UIACTIONSIMULATOR

bool wxUIActionSimulator::MouseDown(int button)
{
    wxMISSING_IMPLEMENTATION( __FUNCTION__ );

    return false;
}

bool wxUIActionSimulator::MouseMove(long x, long y)
{   
    wxMISSING_IMPLEMENTATION( __FUNCTION__ );

    return false;
}

bool wxUIActionSimulator::MouseUp(int button)
{
    wxMISSING_IMPLEMENTATION( __FUNCTION__ );

    return false;
}

bool wxUIActionSimulator::Key(int keycode, bool isDown, bool shiftDown, bool cmdDown, bool altDown)
{
    wxMISSING_IMPLEMENTATION( __FUNCTION__ );

    return false;
}

#endif // wxUSE_UIACTIONSIMULATOR

