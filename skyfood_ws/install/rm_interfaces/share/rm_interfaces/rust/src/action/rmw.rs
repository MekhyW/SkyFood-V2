
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_Goal() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_Goal__init(msg: *mut NavigateToPOI_Goal) -> bool;
    fn rm_interfaces__action__NavigateToPOI_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Goal>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Goal>);
    fn rm_interfaces__action__NavigateToPOI_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Goal>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub poi_name: rosidl_runtime_rs::String,

}



impl Default for NavigateToPOI_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_Goal__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_Goal() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_Result() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_Result__init(msg: *mut NavigateToPOI_Result) -> bool;
    fn rm_interfaces__action__NavigateToPOI_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Result>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Result>);
    fn rm_interfaces__action__NavigateToPOI_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Result>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for NavigateToPOI_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_Result__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_Result where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_Result() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_Feedback__init(msg: *mut NavigateToPOI_Feedback) -> bool;
    fn rm_interfaces__action__NavigateToPOI_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Feedback>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Feedback>);
    fn rm_interfaces__action__NavigateToPOI_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_Feedback>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for NavigateToPOI_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_Feedback__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_Feedback() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_FeedbackMessage__init(msg: *mut NavigateToPOI_FeedbackMessage) -> bool;
    fn rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_FeedbackMessage>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_FeedbackMessage>);
    fn rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_FeedbackMessage>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateToPOI_Feedback,

}



impl Default for NavigateToPOI_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_FeedbackMessage() }
  }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Request__init(msg: *mut NavigateToPOI_SendGoal_Request) -> bool;
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Request>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Request>);
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Request>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateToPOI_Goal,

}



impl Default for NavigateToPOI_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_SendGoal_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Response__init(msg: *mut NavigateToPOI_SendGoal_Response) -> bool;
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Response>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Response>);
    fn rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_SendGoal_Response>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateToPOI_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_SendGoal_Response() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_GetResult_Request__init(msg: *mut NavigateToPOI_GetResult_Request) -> bool;
    fn rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Request>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Request>);
    fn rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Request>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateToPOI_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_GetResult_Request() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__action__NavigateToPOI_GetResult_Response__init(msg: *mut NavigateToPOI_GetResult_Response) -> bool;
    fn rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Response>, size: usize) -> bool;
    fn rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Response>);
    fn rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToPOI_GetResult_Response>) -> bool;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToPOI_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateToPOI_Result,

}



impl Default for NavigateToPOI_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__action__NavigateToPOI_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__action__NavigateToPOI_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToPOI_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToPOI_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToPOI_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/action/NavigateToPOI_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__action__NavigateToPOI_GetResult_Response() }
  }
}






#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__action__NavigateToPOI_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToPOI_SendGoal;

impl rosidl_runtime_rs::Service for NavigateToPOI_SendGoal {
    type Request = NavigateToPOI_SendGoal_Request;
    type Response = NavigateToPOI_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__action__NavigateToPOI_SendGoal() }
    }
}




#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__action__NavigateToPOI_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to rm_interfaces__action__NavigateToPOI_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToPOI_GetResult;

impl rosidl_runtime_rs::Service for NavigateToPOI_GetResult {
    type Request = NavigateToPOI_GetResult_Request;
    type Response = NavigateToPOI_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_interfaces__action__NavigateToPOI_GetResult() }
    }
}


