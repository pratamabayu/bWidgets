#pragma once

#include "bwWidget.h"

namespace bWidgets {

/**
 * \brief Base class for button like widgets.
 */
class bwAbstractButton : public bwWidget
{
public:
	enum WidgetState {
		STATE_NORMAL,
		STATE_HIGHLIGHTED,
		STATE_SUNKEN,
	} state;

	virtual void onClick();
	virtual void mouseEnter();
	virtual void mouseLeave();

	void (*apply)(bwWidget& widget);

	unsigned int rounded_corners;

protected:
	// Protected constructor to force calling through inherited class (pseudo abstract).
	bwAbstractButton(const WidgetType type, const bwRectanglePixel& rectangle);
};

} // namespace bWidgets