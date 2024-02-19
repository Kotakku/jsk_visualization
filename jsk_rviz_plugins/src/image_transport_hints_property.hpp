// // -*- mode: c++ -*-
// Copyright (c) 2014, JSK Lab
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following
//    disclaimer in the documentation and/or other materials provided
//    with the distribution.
//  * Neither the name of the JSK Lab nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

// ROS 2 Port:
// Ander González Tomé <ander.gonzalez@ikerlan.es> @ IKERLAN S. COOP.

#ifndef JSK_RVIZ_PLUGINS_IMAGE_TRANSPORT_HINTS_PROPERTY_HPP_
#define JSK_RVIZ_PLUGINS_IMAGE_TRANSPORT_HINTS_PROPERTY_HPP_

#include <image_transport/transport_hints.hpp>
#include <rviz_common/properties/editable_enum_property.hpp>
#include <rviz_common/properties/property.hpp>

namespace jsk_rviz_plugins
{
class ImageTransportHintsProperty : public rviz_common::properties::EditableEnumProperty
{
  Q_OBJECT
public:
  ImageTransportHintsProperty(
    const char * name, const char * description, rviz_common::properties::Property * parent,
    const char * changed_slot);
  ~ImageTransportHintsProperty();

  image_transport::TransportHints getTransportHints(const rclcpp::Node * node);
};
}  // namespace jsk_rviz_plugins
#endif  // JSK_RVIZ_PLUGINS_IMAGE_TRANSPORT_HINTS_PROPERTY_HPP_
