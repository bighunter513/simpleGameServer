// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game_client.proto

#ifndef PROTOBUF_game_5fclient_2eproto__INCLUDED
#define PROTOBUF_game_5fclient_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocols {
namespace common {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_game_5fclient_2eproto();
void protobuf_AssignDesc_game_5fclient_2eproto();
void protobuf_ShutdownFile_game_5fclient_2eproto();

class HeartBeatRequest;
class HeartBeatResponse;
class InitConnectionRequest;
class InitConnectionResponse;

// ===================================================================

class HeartBeatRequest : public ::google::protobuf::Message {
 public:
  HeartBeatRequest();
  virtual ~HeartBeatRequest();

  HeartBeatRequest(const HeartBeatRequest& from);

  inline HeartBeatRequest& operator=(const HeartBeatRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HeartBeatRequest& default_instance();

  void Swap(HeartBeatRequest* other);

  // implements Message ----------------------------------------------

  HeartBeatRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeartBeatRequest& from);
  void MergeFrom(const HeartBeatRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protocols.common.HeartBeatRequest)
 private:
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_game_5fclient_2eproto();
  friend void protobuf_AssignDesc_game_5fclient_2eproto();
  friend void protobuf_ShutdownFile_game_5fclient_2eproto();

  void InitAsDefaultInstance();
  static HeartBeatRequest* default_instance_;
};
// -------------------------------------------------------------------

class HeartBeatResponse : public ::google::protobuf::Message {
 public:
  HeartBeatResponse();
  virtual ~HeartBeatResponse();

  HeartBeatResponse(const HeartBeatResponse& from);

  inline HeartBeatResponse& operator=(const HeartBeatResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HeartBeatResponse& default_instance();

  void Swap(HeartBeatResponse* other);

  // implements Message ----------------------------------------------

  HeartBeatResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeartBeatResponse& from);
  void MergeFrom(const HeartBeatResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // optional int64 server_time = 2;
  inline bool has_server_time() const;
  inline void clear_server_time();
  static const int kServerTimeFieldNumber = 2;
  inline ::google::protobuf::int64 server_time() const;
  inline void set_server_time(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:protocols.common.HeartBeatResponse)
 private:
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_server_time();
  inline void clear_has_server_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 server_time_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_game_5fclient_2eproto();
  friend void protobuf_AssignDesc_game_5fclient_2eproto();
  friend void protobuf_ShutdownFile_game_5fclient_2eproto();

  void InitAsDefaultInstance();
  static HeartBeatResponse* default_instance_;
};
// -------------------------------------------------------------------

class InitConnectionRequest : public ::google::protobuf::Message {
 public:
  InitConnectionRequest();
  virtual ~InitConnectionRequest();

  InitConnectionRequest(const InitConnectionRequest& from);

  inline InitConnectionRequest& operator=(const InitConnectionRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InitConnectionRequest& default_instance();

  void Swap(InitConnectionRequest* other);

  // implements Message ----------------------------------------------

  InitConnectionRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InitConnectionRequest& from);
  void MergeFrom(const InitConnectionRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 ver = 1;
  inline bool has_ver() const;
  inline void clear_ver();
  static const int kVerFieldNumber = 1;
  inline ::google::protobuf::int32 ver() const;
  inline void set_ver(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protocols.common.InitConnectionRequest)
 private:
  inline void set_has_ver();
  inline void clear_has_ver();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 ver_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_game_5fclient_2eproto();
  friend void protobuf_AssignDesc_game_5fclient_2eproto();
  friend void protobuf_ShutdownFile_game_5fclient_2eproto();

  void InitAsDefaultInstance();
  static InitConnectionRequest* default_instance_;
};
// -------------------------------------------------------------------

class InitConnectionResponse : public ::google::protobuf::Message {
 public:
  InitConnectionResponse();
  virtual ~InitConnectionResponse();

  InitConnectionResponse(const InitConnectionResponse& from);

  inline InitConnectionResponse& operator=(const InitConnectionResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InitConnectionResponse& default_instance();

  void Swap(InitConnectionResponse* other);

  // implements Message ----------------------------------------------

  InitConnectionResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InitConnectionResponse& from);
  void MergeFrom(const InitConnectionResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 error_code = 1;
  inline bool has_error_code() const;
  inline void clear_error_code();
  static const int kErrorCodeFieldNumber = 1;
  inline ::google::protobuf::int32 error_code() const;
  inline void set_error_code(::google::protobuf::int32 value);

  // optional int32 begin_seq = 2;
  inline bool has_begin_seq() const;
  inline void clear_begin_seq();
  static const int kBeginSeqFieldNumber = 2;
  inline ::google::protobuf::int32 begin_seq() const;
  inline void set_begin_seq(::google::protobuf::int32 value);

  // optional int64 server_time = 3;
  inline bool has_server_time() const;
  inline void clear_server_time();
  static const int kServerTimeFieldNumber = 3;
  inline ::google::protobuf::int64 server_time() const;
  inline void set_server_time(::google::protobuf::int64 value);

  // optional int32 server_id = 4;
  inline bool has_server_id() const;
  inline void clear_server_id();
  static const int kServerIdFieldNumber = 4;
  inline ::google::protobuf::int32 server_id() const;
  inline void set_server_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protocols.common.InitConnectionResponse)
 private:
  inline void set_has_error_code();
  inline void clear_has_error_code();
  inline void set_has_begin_seq();
  inline void clear_has_begin_seq();
  inline void set_has_server_time();
  inline void clear_has_server_time();
  inline void set_has_server_id();
  inline void clear_has_server_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 error_code_;
  ::google::protobuf::int32 begin_seq_;
  ::google::protobuf::int64 server_time_;
  ::google::protobuf::int32 server_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_game_5fclient_2eproto();
  friend void protobuf_AssignDesc_game_5fclient_2eproto();
  friend void protobuf_ShutdownFile_game_5fclient_2eproto();

  void InitAsDefaultInstance();
  static InitConnectionResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// HeartBeatRequest

// optional int32 value = 1;
inline bool HeartBeatRequest::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeartBeatRequest::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeartBeatRequest::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeartBeatRequest::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 HeartBeatRequest::value() const {
  return value_;
}
inline void HeartBeatRequest::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// HeartBeatResponse

// optional int32 value = 1;
inline bool HeartBeatResponse::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeartBeatResponse::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeartBeatResponse::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeartBeatResponse::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 HeartBeatResponse::value() const {
  return value_;
}
inline void HeartBeatResponse::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}

// optional int64 server_time = 2;
inline bool HeartBeatResponse::has_server_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HeartBeatResponse::set_has_server_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HeartBeatResponse::clear_has_server_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HeartBeatResponse::clear_server_time() {
  server_time_ = GOOGLE_LONGLONG(0);
  clear_has_server_time();
}
inline ::google::protobuf::int64 HeartBeatResponse::server_time() const {
  return server_time_;
}
inline void HeartBeatResponse::set_server_time(::google::protobuf::int64 value) {
  set_has_server_time();
  server_time_ = value;
}

// -------------------------------------------------------------------

// InitConnectionRequest

// optional int32 ver = 1;
inline bool InitConnectionRequest::has_ver() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InitConnectionRequest::set_has_ver() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InitConnectionRequest::clear_has_ver() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InitConnectionRequest::clear_ver() {
  ver_ = 0;
  clear_has_ver();
}
inline ::google::protobuf::int32 InitConnectionRequest::ver() const {
  return ver_;
}
inline void InitConnectionRequest::set_ver(::google::protobuf::int32 value) {
  set_has_ver();
  ver_ = value;
}

// -------------------------------------------------------------------

// InitConnectionResponse

// optional int32 error_code = 1;
inline bool InitConnectionResponse::has_error_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InitConnectionResponse::set_has_error_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InitConnectionResponse::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InitConnectionResponse::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
inline ::google::protobuf::int32 InitConnectionResponse::error_code() const {
  return error_code_;
}
inline void InitConnectionResponse::set_error_code(::google::protobuf::int32 value) {
  set_has_error_code();
  error_code_ = value;
}

// optional int32 begin_seq = 2;
inline bool InitConnectionResponse::has_begin_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InitConnectionResponse::set_has_begin_seq() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InitConnectionResponse::clear_has_begin_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InitConnectionResponse::clear_begin_seq() {
  begin_seq_ = 0;
  clear_has_begin_seq();
}
inline ::google::protobuf::int32 InitConnectionResponse::begin_seq() const {
  return begin_seq_;
}
inline void InitConnectionResponse::set_begin_seq(::google::protobuf::int32 value) {
  set_has_begin_seq();
  begin_seq_ = value;
}

// optional int64 server_time = 3;
inline bool InitConnectionResponse::has_server_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InitConnectionResponse::set_has_server_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InitConnectionResponse::clear_has_server_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InitConnectionResponse::clear_server_time() {
  server_time_ = GOOGLE_LONGLONG(0);
  clear_has_server_time();
}
inline ::google::protobuf::int64 InitConnectionResponse::server_time() const {
  return server_time_;
}
inline void InitConnectionResponse::set_server_time(::google::protobuf::int64 value) {
  set_has_server_time();
  server_time_ = value;
}

// optional int32 server_id = 4;
inline bool InitConnectionResponse::has_server_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InitConnectionResponse::set_has_server_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InitConnectionResponse::clear_has_server_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void InitConnectionResponse::clear_server_id() {
  server_id_ = 0;
  clear_has_server_id();
}
inline ::google::protobuf::int32 InitConnectionResponse::server_id() const {
  return server_id_;
}
inline void InitConnectionResponse::set_server_id(::google::protobuf::int32 value) {
  set_has_server_id();
  server_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace protocols

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_game_5fclient_2eproto__INCLUDED
