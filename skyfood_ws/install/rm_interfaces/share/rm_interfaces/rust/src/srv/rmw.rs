#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SaveMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__SaveMap_Request__init(msg: *mut SaveMap_Request) -> bool;
    fn rm_interfaces__srv__SaveMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__SaveMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Request>);
    fn rm_interfaces__srv__SaveMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__SaveMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub save_path: rosidl_runtime_rs::String,

}



impl Default for SaveMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__SaveMap_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__SaveMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SaveMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SaveMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SaveMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/SaveMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SaveMap_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SaveMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__SaveMap_Response__init(msg: *mut SaveMap_Response) -> bool;
    fn rm_interfaces__srv__SaveMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__SaveMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Response>);
    fn rm_interfaces__srv__SaveMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveMap_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__SaveMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SaveMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__SaveMap_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__SaveMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SaveMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SaveMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SaveMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/SaveMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SaveMap_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__LoadMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__LoadMap_Request__init(msg: *mut LoadMap_Request) -> bool;
    fn rm_interfaces__srv__LoadMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__LoadMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Request>);
    fn rm_interfaces__srv__LoadMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__LoadMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_path: rosidl_runtime_rs::String,

}



impl Default for LoadMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__LoadMap_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__LoadMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__LoadMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__LoadMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__LoadMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/LoadMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__LoadMap_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__LoadMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__LoadMap_Response__init(msg: *mut LoadMap_Response) -> bool;
    fn rm_interfaces__srv__LoadMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__LoadMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Response>);
    fn rm_interfaces__srv__LoadMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadMap_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__LoadMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for LoadMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__LoadMap_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__LoadMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__LoadMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__LoadMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__LoadMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/LoadMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__LoadMap_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SavePOI_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__SavePOI_Request__init(msg: *mut SavePOI_Request) -> bool;
    fn rm_interfaces__srv__SavePOI_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SavePOI_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__SavePOI_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SavePOI_Request>);
    fn rm_interfaces__srv__SavePOI_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SavePOI_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SavePOI_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__SavePOI_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SavePOI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for SavePOI_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__SavePOI_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__SavePOI_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SavePOI_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SavePOI_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SavePOI_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SavePOI_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SavePOI_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SavePOI_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/SavePOI_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SavePOI_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SavePOI_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__SavePOI_Response__init(msg: *mut SavePOI_Response) -> bool;
    fn rm_interfaces__srv__SavePOI_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SavePOI_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__SavePOI_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SavePOI_Response>);
    fn rm_interfaces__srv__SavePOI_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SavePOI_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SavePOI_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__SavePOI_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SavePOI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SavePOI_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__SavePOI_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__SavePOI_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SavePOI_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SavePOI_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SavePOI_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__SavePOI_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SavePOI_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SavePOI_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/SavePOI_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__SavePOI_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__DeletePOI_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__DeletePOI_Request__init(msg: *mut DeletePOI_Request) -> bool;
    fn rm_interfaces__srv__DeletePOI_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeletePOI_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__DeletePOI_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeletePOI_Request>);
    fn rm_interfaces__srv__DeletePOI_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeletePOI_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DeletePOI_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__DeletePOI_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeletePOI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for DeletePOI_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__DeletePOI_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__DeletePOI_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeletePOI_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__DeletePOI_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__DeletePOI_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__DeletePOI_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeletePOI_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeletePOI_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/DeletePOI_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__DeletePOI_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__DeletePOI_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__DeletePOI_Response__init(msg: *mut DeletePOI_Response) -> bool;
    fn rm_interfaces__srv__DeletePOI_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeletePOI_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__DeletePOI_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeletePOI_Response>);
    fn rm_interfaces__srv__DeletePOI_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeletePOI_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DeletePOI_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__DeletePOI_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeletePOI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for DeletePOI_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__DeletePOI_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__DeletePOI_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeletePOI_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__DeletePOI_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__DeletePOI_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__DeletePOI_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeletePOI_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeletePOI_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/DeletePOI_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__DeletePOI_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ListPOIs_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__ListPOIs_Request__init(msg: *mut ListPOIs_Request) -> bool;
    fn rm_interfaces__srv__ListPOIs_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListPOIs_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__ListPOIs_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListPOIs_Request>);
    fn rm_interfaces__srv__ListPOIs_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListPOIs_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListPOIs_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__ListPOIs_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListPOIs_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListPOIs_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__ListPOIs_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__ListPOIs_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListPOIs_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ListPOIs_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ListPOIs_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ListPOIs_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListPOIs_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListPOIs_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/ListPOIs_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ListPOIs_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ListPOIs_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__ListPOIs_Response__init(msg: *mut ListPOIs_Response) -> bool;
    fn rm_interfaces__srv__ListPOIs_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListPOIs_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__ListPOIs_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListPOIs_Response>);
    fn rm_interfaces__srv__ListPOIs_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListPOIs_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListPOIs_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__ListPOIs_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListPOIs_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::PoseStamped>,

}



impl Default for ListPOIs_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__ListPOIs_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__ListPOIs_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListPOIs_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ListPOIs_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ListPOIs_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ListPOIs_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListPOIs_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListPOIs_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/ListPOIs_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ListPOIs_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__PlaySound_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__PlaySound_Request__init(msg: *mut PlaySound_Request) -> bool;
    fn rm_interfaces__srv__PlaySound_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlaySound_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__PlaySound_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlaySound_Request>);
    fn rm_interfaces__srv__PlaySound_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlaySound_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlaySound_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__PlaySound_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlaySound_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blocking: bool,

}



impl Default for PlaySound_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__PlaySound_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__PlaySound_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlaySound_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__PlaySound_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__PlaySound_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__PlaySound_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlaySound_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlaySound_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/PlaySound_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__PlaySound_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__PlaySound_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__PlaySound_Response__init(msg: *mut PlaySound_Response) -> bool;
    fn rm_interfaces__srv__PlaySound_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlaySound_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__PlaySound_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlaySound_Response>);
    fn rm_interfaces__srv__PlaySound_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlaySound_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlaySound_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__PlaySound_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlaySound_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for PlaySound_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__PlaySound_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__PlaySound_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlaySound_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__PlaySound_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__PlaySound_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__PlaySound_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlaySound_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlaySound_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/PlaySound_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__PlaySound_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ControlCompartment_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__ControlCompartment_Request__init(msg: *mut ControlCompartment_Request) -> bool;
    fn rm_interfaces__srv__ControlCompartment_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlCompartment_Request>, size: usize) -> bool;
    fn rm_interfaces__srv__ControlCompartment_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlCompartment_Request>);
    fn rm_interfaces__srv__ControlCompartment_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlCompartment_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlCompartment_Request>) -> bool;
}

// Corresponds to rm_interfaces__srv__ControlCompartment_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCompartment_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub door_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub open: bool,

}



impl Default for ControlCompartment_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__ControlCompartment_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__ControlCompartment_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlCompartment_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ControlCompartment_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ControlCompartment_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ControlCompartment_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlCompartment_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlCompartment_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/ControlCompartment_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ControlCompartment_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ControlCompartment_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__srv__ControlCompartment_Response__init(msg: *mut ControlCompartment_Response) -> bool;
    fn rm_interfaces__srv__ControlCompartment_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlCompartment_Response>, size: usize) -> bool;
    fn rm_interfaces__srv__ControlCompartment_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlCompartment_Response>);
    fn rm_interfaces__srv__ControlCompartment_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlCompartment_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlCompartment_Response>) -> bool;
}

// Corresponds to rm_interfaces__srv__ControlCompartment_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCompartment_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ControlCompartment_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__srv__ControlCompartment_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__srv__ControlCompartment_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlCompartment_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ControlCompartment_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ControlCompartment_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__srv__ControlCompartment_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlCompartment_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlCompartment_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/srv/ControlCompartment_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__srv__ControlCompartment_Response() }
  }
}






#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__SaveMap() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__SaveMap
#[allow(missing_docs, non_camel_case_types)]
pub struct SaveMap;

impl rosidl_runtime_rs::Service for SaveMap {
    type Request = SaveMap_Request;
    type Response = SaveMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__SaveMap() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__LoadMap() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__LoadMap
#[allow(missing_docs, non_camel_case_types)]
pub struct LoadMap;

impl rosidl_runtime_rs::Service for LoadMap {
    type Request = LoadMap_Request;
    type Response = LoadMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__LoadMap() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__SavePOI() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__SavePOI
#[allow(missing_docs, non_camel_case_types)]
pub struct SavePOI;

impl rosidl_runtime_rs::Service for SavePOI {
    type Request = SavePOI_Request;
    type Response = SavePOI_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__SavePOI() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__DeletePOI() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__DeletePOI
#[allow(missing_docs, non_camel_case_types)]
pub struct DeletePOI;

impl rosidl_runtime_rs::Service for DeletePOI {
    type Request = DeletePOI_Request;
    type Response = DeletePOI_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__DeletePOI() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__ListPOIs() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__ListPOIs
#[allow(missing_docs, non_camel_case_types)]
pub struct ListPOIs;

impl rosidl_runtime_rs::Service for ListPOIs {
    type Request = ListPOIs_Request;
    type Response = ListPOIs_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__ListPOIs() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__PlaySound() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__PlaySound
#[allow(missing_docs, non_camel_case_types)]
pub struct PlaySound;

impl rosidl_runtime_rs::Service for PlaySound {
    type Request = PlaySound_Request;
    type Response = PlaySound_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__PlaySound() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__ControlCompartment() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__srv__ControlCompartment
#[allow(missing_docs, non_camel_case_types)]
pub struct ControlCompartment;

impl rosidl_runtime_rs::Service for ControlCompartment {
    type Request = ControlCompartment_Request;
    type Response = ControlCompartment_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__srv__ControlCompartment() }
    }
}


