#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rm_interfaces__msg__CompartmentStatus
/// Current state of the robot's compartment doors.
/// true = open, false = closed

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CompartmentStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ul_open: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ur_open: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dl_open: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dr_open: bool,

}



impl Default for CompartmentStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CompartmentStatus::default())
  }
}

impl rosidl_runtime_rs::Message for CompartmentStatus {
  type RmwMsg = super::msg::rmw::CompartmentStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ul_open: msg.ul_open,
        ur_open: msg.ur_open,
        dl_open: msg.dl_open,
        dr_open: msg.dr_open,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ul_open: msg.ul_open,
      ur_open: msg.ur_open,
      dl_open: msg.dl_open,
      dr_open: msg.dr_open,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ul_open: msg.ul_open,
      ur_open: msg.ur_open,
      dl_open: msg.dl_open,
      dr_open: msg.dr_open,
    }
  }
}


