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
      t<AView>(),
      Font { ":fonts/AcPlus_IBM_VGA_8x16-2x.ttf" },
      // BackgroundSolid { 0x000_rgb },
      Margin(0), Expanding()

    }
  }),
  setContents(Vertical {
          Horizontal { Label { "ARGENTUM INTERNET RELAY CHAT" } with_style { TextColor { 0xff0000_rgb } } } with_style {
            BackgroundSolid { 0x000_rgb }, FixedSize({}, 20_dp) },
    Horizontal {
      Horizontal { Vertical::Expanding {
          Horizontal {
            Vertical::Expanding { SpacerExpanding() } with_style {
              BackgroundSolid { 0xff0000_rgb },
              MaxSize(48_dp, {}),
              MinSize(48_dp, 320_dp),
              Expanding()
            },
                Vertical::Expanding { SpacerExpanding() } with_style {
              BackgroundSolid { 0xff00_rgb },
              MaxSize(96_dp, {}),
              MinSize(96_dp, 320_dp),
              Expanding() },
          },
          Vertical {
            Label { "PRAISE THE CODE" } 
          } with_style {
                BackgroundSolid { 0xffff_rgb }, FixedSize(144_dp, 64_dp) },
        }
      },
      Horizontal {
        Vertical {
          Horizontal {
                  Vertical::Expanding { SpacerExpanding() } with_style {
              BackgroundSolid { 0xff_rgb },
              MinSize(320_dp, 320_dp),
              Expanding() },

          },
          Vertical {
            Label { "NEL NOME DEL CODICE" } 
          } with_style {
                  BackgroundSolid { 0xff00ff_rgb }, FixedSize({}, 32_dp), Expanding() },
        },

      },
      
      Horizontal {
        Vertical {
          Horizontal {
                  Vertical::Expanding { SpacerExpanding() } with_style {
              BackgroundSolid { 0xff0000_rgb }, 
              MinSize({} ,320_dp),
              FixedSize(144_dp, {}),
              Expanding() 
      },

          },
          Vertical {
            Label { "LODE AL DISCO SACRO" } ,
                } with_style { BackgroundSolid { 0xffff00_rgb },

                               FixedSize(144_dp, 64_dp), Expanding() }
      },

            } } with_style { Expanding() },
          Horizontal {} with_style { BackgroundSolid { 0x000_rgb }, FixedSize({}, 20_dp) },
  }
             );
}
