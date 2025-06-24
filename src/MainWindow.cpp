#include "MainWindow.h"
#include <AUI/Platform/APlatform.h>
#include <AUI/Util/ALayoutInflater.h>
#include <AUI/Util/UIBuildingHelpers.h>
#include <AUI/View/AButton.h>
#include <AUI/View/ADrawableView.h>
#include <AUI/View/ALabel.h>
#include <AUI/View/AScrollbar.h>
#include <AUI/Util/ANoiseDrawable.h>
#include <AUI/View/AText.h>
#include <AUI/View/ATextField.h>
#include <AUI/View/ASpinner.h>
#include <AUI/View/ASpacerFixed.h>
#include <AUI/ASS/Property/TextAlign.h>
using namespace ass;
using namespace declarative;

MainWindow::MainWindow() : AWindow("Alexnλd3r's Delirium", 200_dp, 300_dp) {
	AStylesheet::global().addRules({
		{
	t<AView>(),
	BackgroundSolid { 0x000000_rgb },
	TextColor{0xff0000_rgb},
	//TextAlign::CENTER,
  },
  {
	t<ALabel>(),

	//TextAlign::CENTER,
  },
  {
	t<ATextField>(),
	//BackgroundSolid { AColor::RED },
	//TextAlign::RIGHT,
  },
  {
	t<AButton>(),
	BackgroundSolid { 0x000000_rgb },
	TextColor{0xff0000_rgb},
	FixedSize{32_dp}
	//TextAlign::CENTER,
  },
		});
	setContents(
		Centered{
		Vertical{
			_new<ATextField>(),
			SpacerFixed(8_dp),
			//AText("PRAISE THE CODE"),
			Horizontal{
			_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),
		},

		Horizontal{
			_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),
		},
		Horizontal{
			_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),
		},
		Horizontal{
			_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),_new<AButton>("1"),
		},

		SpacerFixed(32_dp),
		Centered{
		_new<AButton>("PRAISE THE CODE")
		  .connect(&AView::clicked, this, [] { APlatform::openUrl("https://www.youtube.com/watch?v=iJtVDEx2HSk"); })
			with_style {
			FixedSize{128_dp, 16_dp},
			
				},
				},
//_new<ALabel>("PRAISE THE CODE"),
},



}
);
	}
		/*
		PRAISE THE CODE
		░░░█░░█░░█░░░
		░░░▓░░▓░░▓░░░
		█░░▒▒▒▓▒▒▒░░█
		▓░░░░░▓░░░░░▓
		▒▒▒▒▓▓▓▓▓▒▒▒▒
		░░░░░░▓░░░░░░
		░░█▓▒▒▓▒▒▓█░░
		░░░░░▓░▓░░░░░
		░░░░▓░░░▓░░░░
		░░░░░▓▓▓░░░░░*/