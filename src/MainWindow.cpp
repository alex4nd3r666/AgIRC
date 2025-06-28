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
#include <AUI/ASS/ASS.h>
#include <AUI/ASS/Property/TextAlign.h>
#include <AUI/ASS/Property/Font.h>
#include <AUI/ASS/Property/BackgroundImage.h>

using namespace ass;
using namespace declarative;

MainWindow::MainWindow(_<MyUpdater> updater)
  : AWindow("Project template app", 640_dp, 480_dp), mUpdater(std::move(updater)) {
    AStylesheet::global().addRules({ {
      t<AView>(), FontFamily { "AcPlus_IBM_VGA_8x16-2x" }
      // BackgroundSolid { 0x000_rgb },

    } }),
        setContents(Vertical {
          Horizontal {} with_style { BackgroundSolid { 0x000_rgb }, FixedSize({}, 20_dp) }, 
          Horizontal { 
                Vertical {} with_style { BackgroundSolid { 0xff0000_rgb }, MinSize(32_dp,320_dp) }, 
                Vertical {},
            }
        });
}
