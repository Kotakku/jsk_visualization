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
