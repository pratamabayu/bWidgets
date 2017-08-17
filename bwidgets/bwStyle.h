#pragma once

#include <string>

#include "bwColor.h"

namespace bWidgets {

struct bwStyle
{
	enum StyleTypeID {
		STYLE_BLENDER_CLASSIC,
		STYLE_BLENDER_FLAT,

		STYLE_BUILTIN_TOT,

//		STYLE_CUSTOM, // For the future
	} type_id;

	struct WidgetStyle {
		bwColor fill_color;
		bwColor text_color;
		bwColor outline_color;

		float roundbox_radius;
		unsigned int roundbox_corners;

		signed char shade_top, shade_bottom;
	} widget_style;

	struct StyleType
	{
		StyleTypeID type_id;
		std::string name;
	};

	bwStyle(StyleTypeID type_id);
	virtual void setWidgetStyle(const class bwWidget& widget) = 0;
};

} // namespace bWidgets