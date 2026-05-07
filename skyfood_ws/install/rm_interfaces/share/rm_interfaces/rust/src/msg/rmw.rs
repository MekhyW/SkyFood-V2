#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__CompartmentStatus() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__CompartmentStatus__init(msg: *mut CompartmentStatus) -> bool;
    fn rm_interfaces__msg__CompartmentStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CompartmentStatus>, size: usize) -> bool;
    fn rm_interfaces__msg__CompartmentStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CompartmentStatus>);
    fn rm_interfaces__msg__CompartmentStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CompartmentStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<CompartmentStatus>) -> bool;
}

// Corresponds to rm_interfaces__msg__CompartmentStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Current state of the robot's compartment doors.
/// true = open, false = closed

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__CompartmentStatus__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__CompartmentStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CompartmentStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__CompartmentStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__CompartmentStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__CompartmentStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CompartmentStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CompartmentStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/CompartmentStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__CompartmentStatus() }
  }
}


