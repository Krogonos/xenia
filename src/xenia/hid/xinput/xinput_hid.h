/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_HID_XINPUT_XINPUT_HID_H_
#define XENIA_HID_XINPUT_XINPUT_HID_H_

#include <memory>

#include <xenia/common.h>

namespace xe {
namespace hid {
class InputDriver;
class InputSystem;
namespace xinput {

std::unique_ptr<InputDriver> Create(InputSystem* input_system);

}  // namespace xinput
}  // namespace hid
}  // namespace xe

#endif  // XENIA_HID_XINPUT_XINPUT_HID_H_
