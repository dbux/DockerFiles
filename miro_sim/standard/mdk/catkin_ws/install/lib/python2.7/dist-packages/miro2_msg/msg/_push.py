# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from miro2_msg/push.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class push(genpy.Message):
  _md5sum = "6271e5b7c8f54208b938d70e5eaafbe6"
  _type = "miro2_msg/push"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#	@section COPYRIGHT
#	Copyright (C) 2019 Consequential Robotics Ltd
#	
#	@section AUTHOR
#	Consequential Robotics http://consequentialrobotics.com
#	
#	@section LICENSE
#	For a full copy of the license agreement, and a complete
#	definition of "The Software", see LICENSE in the MDK root
#	directory.
#	
#	Subject to the terms of this Agreement, Consequential
#	Robotics grants to you a limited, non-exclusive, non-
#	transferable license, without right to sub-license, to use
#	"The Software" in accordance with this Agreement and any
#	other written agreement with Consequential Robotics.
#	Consequential Robotics does not transfer the title of "The
#	Software" to you; the license granted to you is not a sale.
#	This agreement is a binding legal agreement between
#	Consequential Robotics and the purchasers or users of "The
#	Software".
#	
#	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
#	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
#	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
#	PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
#	OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
#	OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
#	OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#	SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#	
#
#	Description... TODO.

#	The identifier of the pushed link
int32 link

#	DOCLINK PUSH FLAGS
#
#	The values of these flags are defined in miro2.constants
#
#	PUSH_FLAG_IMPULSE
#		Treat push as an impulse (in mm).
#
#	PUSH_FLAG_VELOCITY
#		Treat push as a velocity (in mm/sec).
#
#	NB: If neither of the above flags is set, the push should
#	not be actioned at all (this condition is used in server
#	to indicate "not pending").
#
#	PUSH_FLAG_NO_TRANSLATION
#		Zero out any resultant change in pose.dr (i.e. only
#		turn on the spot).
#
#	PUSH_FLAG_NO_ROTATION
#		Zero out any resultant change in pose.dtheta /and/
#		in pose.dr (i.e. do not move wheels at all).
#
#	PUSH_FLAG_NO_NECK_MOVEMENT
#		Zero out any resultant change in neck configuration;
#		This flag is independent of NO_TRANSLATION/ROTATION.
#
#	PUSH_FLAG_WAIT
#		Cause the push processor to wait for further pushes
#		before publishing a velocity at its output. This is
#		required if you want to pass multiple push streams.
uint32 flags

#	The pushed point, in the reference frame of the pushed link
geometry_msgs/Point pushpos

#	The push vector, in the reference frame of the pushed link
geometry_msgs/Vector3 pushvec





================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['link','flags','pushpos','pushvec']
  _slot_types = ['int32','uint32','geometry_msgs/Point','geometry_msgs/Vector3']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       link,flags,pushpos,pushvec

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(push, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.link is None:
        self.link = 0
      if self.flags is None:
        self.flags = 0
      if self.pushpos is None:
        self.pushpos = geometry_msgs.msg.Point()
      if self.pushvec is None:
        self.pushvec = geometry_msgs.msg.Vector3()
    else:
      self.link = 0
      self.flags = 0
      self.pushpos = geometry_msgs.msg.Point()
      self.pushvec = geometry_msgs.msg.Vector3()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_iI6d().pack(_x.link, _x.flags, _x.pushpos.x, _x.pushpos.y, _x.pushpos.z, _x.pushvec.x, _x.pushvec.y, _x.pushvec.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pushpos is None:
        self.pushpos = geometry_msgs.msg.Point()
      if self.pushvec is None:
        self.pushvec = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.link, _x.flags, _x.pushpos.x, _x.pushpos.y, _x.pushpos.z, _x.pushvec.x, _x.pushvec.y, _x.pushvec.z,) = _get_struct_iI6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_iI6d().pack(_x.link, _x.flags, _x.pushpos.x, _x.pushpos.y, _x.pushpos.z, _x.pushvec.x, _x.pushvec.y, _x.pushvec.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pushpos is None:
        self.pushpos = geometry_msgs.msg.Point()
      if self.pushvec is None:
        self.pushvec = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.link, _x.flags, _x.pushpos.x, _x.pushpos.y, _x.pushpos.z, _x.pushvec.x, _x.pushvec.y, _x.pushvec.z,) = _get_struct_iI6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_iI6d = None
def _get_struct_iI6d():
    global _struct_iI6d
    if _struct_iI6d is None:
        _struct_iI6d = struct.Struct("<iI6d")
    return _struct_iI6d
