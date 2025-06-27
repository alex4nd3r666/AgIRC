#include "MainWindow.h"
#include <AUI/Util/UIBuildingHelpers.h>
#include <AUI/View/ALabel.h>
#include <AUI/View/AButton.h>
#include <AUI/Platform/APlatform.h>
#include <AUI/View/ADrawableView.h>
#include <AUI/View/AProgressBar.h>
#include <AUI/View/ASpacerFixed.h>

using namespace declarative;

MainWindow::MainWindow(_<MyUpdater> updater)
  : AWindow("Project template app", 300_dp, 200_dp), mUpdater(std::move(updater)) {
    setContents(Vertical {
      Horizontal {

      } with_style { BackgroundSolid {0x000_rgb} },
      Horizontal {
        Vertical { Label { "PRAISE THE CODE" }, SpacerFixed(32_dp, ) } with_style {
          BackgroundSolid { 0xff0000_rgb } },
        Vertical {} with_style { BackgroundSolid { 0xff00_rgb } },
      } with_style { BackgroundSolid { 0xff_rgb } } }
    );
}

int MainWindow::sum(int a, int b) { return a + b; }
