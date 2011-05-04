// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_PROFILE_MENU_BUTTON_H_
#define CHROME_BROWSER_UI_VIEWS_PROFILE_MENU_BUTTON_H_
#pragma once

#include <string>

#include "views/controls/button/menu_button.h"

class Profile;

namespace gfx {
class Canvas;
}

// ProfileMenuButton
//
// Shows the button for the multiprofile menu with an image layered
// underneath that displays the profile tag.

class ProfileMenuButton : public views::MenuButton {
 public:
  // Space between window controls and end of profile tag.
  static const int kProfileTagHorizontalSpacing = 5;

  ProfileMenuButton(views::ButtonListener* listener,
                    const std::wstring& text,
                    views::ViewMenuDelegate* menu_delegate,
                    Profile* profile);

  virtual ~ProfileMenuButton();

  // Override MenuButton to clamp text at kMaxTextWidth.
  virtual void SetText(const std::wstring& text) OVERRIDE;

 private:
  DISALLOW_COPY_AND_ASSIGN(ProfileMenuButton);
};

#endif  // CHROME_BROWSER_UI_VIEWS_PROFILE_MENU_BUTTON_H_

