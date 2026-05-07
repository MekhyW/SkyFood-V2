#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rm_interfaces__srv__SaveMap_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub save_path: std::string::String,

}



impl Default for SaveMap_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveMap_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SaveMap_Request {
  type RmwMsg = super::srv::rmw::SaveMap_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_name: msg.map_name.as_str().into(),
        save_path: msg.save_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_name: msg.map_name.as_str().into(),
        save_path: msg.save_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map_name: msg.map_name.to_string(),
      save_path: msg.save_path.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__SaveMap_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SaveMap_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveMap_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SaveMap_Response {
  type RmwMsg = super::srv::rmw::SaveMap_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__LoadMap_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_path: std::string::String,

}



impl Default for LoadMap_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadMap_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LoadMap_Request {
  type RmwMsg = super::srv::rmw::LoadMap_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_path: msg.map_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_path: msg.map_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map_path: msg.map_path.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__LoadMap_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for LoadMap_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadMap_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LoadMap_Response {
  type RmwMsg = super::srv::rmw::LoadMap_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__SavePOI_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SavePOI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::PoseStamped,

}



impl Default for SavePOI_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SavePOI_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SavePOI_Request {
  type RmwMsg = super::srv::rmw::SavePOI_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to rm_interfaces__srv__SavePOI_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SavePOI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SavePOI_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SavePOI_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SavePOI_Response {
  type RmwMsg = super::srv::rmw::SavePOI_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__DeletePOI_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeletePOI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

}



impl Default for DeletePOI_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DeletePOI_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DeletePOI_Request {
  type RmwMsg = super::srv::rmw::DeletePOI_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__DeletePOI_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeletePOI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for DeletePOI_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DeletePOI_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DeletePOI_Response {
  type RmwMsg = super::srv::rmw::DeletePOI_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__ListPOIs_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListPOIs_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListPOIs_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListPOIs_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListPOIs_Request {
  type RmwMsg = super::srv::rmw::ListPOIs_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to rm_interfaces__srv__ListPOIs_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListPOIs_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: Vec<geometry_msgs::msg::PoseStamped>,

}



impl Default for ListPOIs_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListPOIs_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListPOIs_Response {
  type RmwMsg = super::srv::rmw::ListPOIs_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        poses: msg.poses
          .into_iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        poses: msg.poses
          .iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      poses: msg.poses
          .into_iter()
          .map(geometry_msgs::msg::PoseStamped::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rm_interfaces__srv__PlaySound_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlaySound_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blocking: bool,

}



impl Default for PlaySound_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlaySound_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlaySound_Request {
  type RmwMsg = super::srv::rmw::PlaySound_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_path: msg.file_path.as_str().into(),
        blocking: msg.blocking,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_path: msg.file_path.as_str().into(),
      blocking: msg.blocking,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      file_path: msg.file_path.to_string(),
      blocking: msg.blocking,
    }
  }
}


// Corresponds to rm_interfaces__srv__PlaySound_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlaySound_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for PlaySound_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlaySound_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlaySound_Response {
  type RmwMsg = super::srv::rmw::PlaySound_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rm_interfaces__srv__ControlCompartment_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCompartment_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub door_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub open: bool,

}



impl Default for ControlCompartment_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlCompartment_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ControlCompartment_Request {
  type RmwMsg = super::srv::rmw::ControlCompartment_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        door_id: msg.door_id.as_str().into(),
        open: msg.open,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        door_id: msg.door_id.as_str().into(),
      open: msg.open,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      door_id: msg.door_id.to_string(),
      open: msg.open,
    }
  }
}


// Corresponds to rm_interfaces__srv__ControlCompartment_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCompartment_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ControlCompartment_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlCompartment_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ControlCompartment_Response {
  type RmwMsg = super::srv::rmw::ControlCompartment_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


