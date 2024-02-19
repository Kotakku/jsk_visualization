// ROS 2 Port:
// Ander González Tomé <ander.gonzalez@ikerlan.es> @ IKERLAN S. COOP.

#include "image_transport_hints_property.hpp"

namespace jsk_rviz_plugins
{

ImageTransportHintsProperty::ImageTransportHintsProperty(
  const char * name, const char * description, rviz_common::properties::Property * parent,
  const char * changed_slot)
: rviz_common::properties::EditableEnumProperty(name, "raw", description, parent, changed_slot)
{
  addOptionStd("raw");
  addOptionStd("compressed");
  addOptionStd("theora");
  setStdString("raw");
}

ImageTransportHintsProperty::~ImageTransportHintsProperty() {}

image_transport::TransportHints ImageTransportHintsProperty::getTransportHints(
  const rclcpp::Node * node)
{
  return image_transport::TransportHints(node, getStdString());
}

}  // namespace jsk_rviz_plugins
