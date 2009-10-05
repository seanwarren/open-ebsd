#ifndef __open-ebsdsegmentDialogUI__
#define __open-ebsdsegmentDialogUI__

/**
@file
Subclass of segmentDialogUI, which is generated by wxFormBuilder.
*/

#include "wx-ebsd.h"

/** Implementing segmentDialogUI */
class open-ebsdsegmentDialogUI : public segmentDialogUI
{
protected:
	// Handlers for segmentDialogUI events.
	void OnOK( wxCommandEvent& event );
	
public:
	/** Constructor */
	open-ebsdsegmentDialogUI( wxWindow* parent );
};

#endif // __open-ebsdsegmentDialogUI__