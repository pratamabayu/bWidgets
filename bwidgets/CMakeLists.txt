set(INC
	.
	generics
	styles
	utils
	widgets
)

set(SRC
	bwPainter.cc
	bwStyle.cc
	bwStyleCSS.cc
	bwStyleManager.cc
	bwStyleProperties.cc
	bwWidgetBaseStyle.cc
	styles/bwStyleClassic.cc
	styles/bwStyleFlatGrey.cc
	styles/bwStyleFlatDark.cc
	styles/bwStyleFlatLight.cc

	bwIconInterface.h
	bwPaintEngine.h
	bwPainter.h
	bwStyle.h
	bwStyleCSS.h
	bwStyleManager.h
	bwStyleProperties.h
	bwWidgetBaseStyle.h
	styles/bwStyleClassic.h
	styles/bwStyleFlatGrey.h
	styles/bwStyleFlatDark.h
	styles/bwStyleFlatLight.h
)

set(LIB
	bw_generics
	bw_widgets
)

add_library(bWidgets ${SRC})
include_directories(${INC})
target_link_libraries(bWidgets ${LIB})

add_subdirectory(generics)
add_subdirectory(utils)
add_subdirectory(widgets)
