import 'package:library/src/BuiltInTypes__conversion.dart';
import 'package:library/src/GenericTypes__conversion.dart';
import 'package:library/src/_type_repository.dart' as __lib;
import 'package:library/src/smoke/CalculationResult.dart';
import 'dart:ffi';
import 'package:ffi/ffi.dart';
import 'package:meta/meta.dart';
import 'package:library/src/_library_init.dart' as __lib;
abstract class CalculatorListener {
  void release();
  onCalculationResult(double calculationResult);
  onCalculationResultConst(double calculationResult);
  onCalculationResultStruct(CalculatorListener_ResultStruct calculationResult);
  onCalculationResultArray(List<double> calculationResult);
  onCalculationResultMap(Map<String, double> calculationResults);
  onCalculationResultInstance(CalculationResult calculationResult);
}
class CalculatorListener_ResultStruct {
  double result;
  CalculatorListener_ResultStruct(this.result);
}
// CalculatorListener_ResultStruct "private" section, not exported.
final _smoke_CalculatorListener_ResultStruct_create_handle = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Double),
    Pointer<Void> Function(double)
  >('smoke_CalculatorListener_ResultStruct_create_handle');
final _smoke_CalculatorListener_ResultStruct_release_handle = __lib.nativeLibrary.lookupFunction<
    Void Function(Pointer<Void>),
    void Function(Pointer<Void>)
  >('smoke_CalculatorListener_ResultStruct_release_handle');
final _smoke_CalculatorListener_ResultStruct_get_field_result = __lib.nativeLibrary.lookupFunction<
    Double Function(Pointer<Void>),
    double Function(Pointer<Void>)
  >('smoke_CalculatorListener_ResultStruct_get_field_result');
Pointer<Void> smoke_CalculatorListener_ResultStruct_toFfi(CalculatorListener_ResultStruct value) {
  final _result_handle = (value.result);
  final _result = _smoke_CalculatorListener_ResultStruct_create_handle(_result_handle);
  (_result_handle);
  return _result;
}
CalculatorListener_ResultStruct smoke_CalculatorListener_ResultStruct_fromFfi(Pointer<Void> handle) {
  final _result_handle = _smoke_CalculatorListener_ResultStruct_get_field_result(handle);
  final _result = CalculatorListener_ResultStruct(
    (_result_handle)
  );
  (_result_handle);
  return _result;
}
void smoke_CalculatorListener_ResultStruct_releaseFfiHandle(Pointer<Void> handle) => _smoke_CalculatorListener_ResultStruct_release_handle(handle);
// Nullable CalculatorListener_ResultStruct
final _smoke_CalculatorListener_ResultStruct_create_handle_nullable = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Pointer<Void>),
    Pointer<Void> Function(Pointer<Void>)
  >('smoke_CalculatorListener_ResultStruct_create_handle_nullable');
final _smoke_CalculatorListener_ResultStruct_release_handle_nullable = __lib.nativeLibrary.lookupFunction<
    Void Function(Pointer<Void>),
    void Function(Pointer<Void>)
  >('smoke_CalculatorListener_ResultStruct_release_handle_nullable');
final _smoke_CalculatorListener_ResultStruct_get_value_nullable = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Pointer<Void>),
    Pointer<Void> Function(Pointer<Void>)
  >('smoke_CalculatorListener_ResultStruct_get_value_nullable');
Pointer<Void> smoke_CalculatorListener_ResultStruct_toFfi_nullable(CalculatorListener_ResultStruct value) {
  if (value == null) return Pointer<Void>.fromAddress(0);
  final _handle = smoke_CalculatorListener_ResultStruct_toFfi(value);
  final result = _smoke_CalculatorListener_ResultStruct_create_handle_nullable(_handle);
  smoke_CalculatorListener_ResultStruct_releaseFfiHandle(_handle);
  return result;
}
CalculatorListener_ResultStruct smoke_CalculatorListener_ResultStruct_fromFfi_nullable(Pointer<Void> handle) {
  if (handle.address == 0) return null;
  final _handle = _smoke_CalculatorListener_ResultStruct_get_value_nullable(handle);
  final result = smoke_CalculatorListener_ResultStruct_fromFfi(_handle);
  smoke_CalculatorListener_ResultStruct_releaseFfiHandle(_handle);
  return result;
}
void smoke_CalculatorListener_ResultStruct_releaseFfiHandle_nullable(Pointer<Void> handle) =>
  _smoke_CalculatorListener_ResultStruct_release_handle_nullable(handle);
// End of CalculatorListener_ResultStruct "private" section.
// CalculatorListener "private" section, not exported.
final _smoke_CalculatorListener_copy_handle = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Pointer<Void>),
    Pointer<Void> Function(Pointer<Void>)
  >('smoke_CalculatorListener_copy_handle');
final _smoke_CalculatorListener_release_handle = __lib.nativeLibrary.lookupFunction<
    Void Function(Pointer<Void>),
    void Function(Pointer<Void>)
  >('smoke_CalculatorListener_release_handle');
final _smoke_CalculatorListener_create_proxy = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Uint64, Pointer, Pointer, Pointer, Pointer, Pointer, Pointer),
    Pointer<Void> Function(int, Pointer, Pointer, Pointer, Pointer, Pointer, Pointer)
  >('smoke_CalculatorListener_create_proxy');
final _smoke_CalculatorListener_get_raw_pointer = __lib.nativeLibrary.lookupFunction<
      Pointer<Void> Function(Pointer<Void>),
      Pointer<Void> Function(Pointer<Void>)
    >('smoke_CalculatorListener_get_raw_pointer');
final _smoke_CalculatorListener_get_type_id = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Pointer<Void>),
    Pointer<Void> Function(Pointer<Void>)
  >('smoke_CalculatorListener_get_type_id');
int _CalculatorListener_instance_counter = 1024;
final Map<int, CalculatorListener> _CalculatorListener_instance_cache = {};
final Map<Pointer<Void>, CalculatorListener> _CalculatorListener_reverse_cache = {};
class CalculatorListener__Impl implements CalculatorListener {
  Pointer<Void> get _handle => handle;
  final Pointer<Void> handle;
  CalculatorListener__Impl(this.handle);
  @override
  void release() => _smoke_CalculatorListener_release_handle(handle);
  @override
  onCalculationResult(double calculationResult) {
    final _onCalculationResult_ffi = __lib.nativeLibrary.lookupFunction<Void Function(Pointer<Void>, Double), void Function(Pointer<Void>, double)>('smoke_CalculatorListener_onCalculationResult__Double');
    final _calculationResult_handle = (calculationResult);
    final __result_handle = _onCalculationResult_ffi(_handle, _calculationResult_handle);
    (_calculationResult_handle);
    final _result = (__result_handle);
    (__result_handle);
    return _result;
  }
  @override
  onCalculationResultConst(double calculationResult) {
    final _onCalculationResultConst_ffi = __lib.nativeLibrary.lookupFunction<Void Function(Pointer<Void>, Double), void Function(Pointer<Void>, double)>('smoke_CalculatorListener_onCalculationResultConst__Double');
    final _calculationResult_handle = (calculationResult);
    final __result_handle = _onCalculationResultConst_ffi(_handle, _calculationResult_handle);
    (_calculationResult_handle);
    final _result = (__result_handle);
    (__result_handle);
    return _result;
  }
  @override
  onCalculationResultStruct(CalculatorListener_ResultStruct calculationResult) {
    final _onCalculationResultStruct_ffi = __lib.nativeLibrary.lookupFunction<Void Function(Pointer<Void>, Pointer<Void>), void Function(Pointer<Void>, Pointer<Void>)>('smoke_CalculatorListener_onCalculationResultStruct__ResultStruct');
    final _calculationResult_handle = smoke_CalculatorListener_ResultStruct_toFfi(calculationResult);
    final __result_handle = _onCalculationResultStruct_ffi(_handle, _calculationResult_handle);
    smoke_CalculatorListener_ResultStruct_releaseFfiHandle(_calculationResult_handle);
    final _result = (__result_handle);
    (__result_handle);
    return _result;
  }
  @override
  onCalculationResultArray(List<double> calculationResult) {
    final _onCalculationResultArray_ffi = __lib.nativeLibrary.lookupFunction<Void Function(Pointer<Void>, Pointer<Void>), void Function(Pointer<Void>, Pointer<Void>)>('smoke_CalculatorListener_onCalculationResultArray__ListOf_1Double');
    final _calculationResult_handle = library_ListOf_Double_toFfi(calculationResult);
    final __result_handle = _onCalculationResultArray_ffi(_handle, _calculationResult_handle);
    library_ListOf_Double_releaseFfiHandle(_calculationResult_handle);
    final _result = (__result_handle);
    (__result_handle);
    return _result;
  }
  @override
  onCalculationResultMap(Map<String, double> calculationResults) {
    final _onCalculationResultMap_ffi = __lib.nativeLibrary.lookupFunction<Void Function(Pointer<Void>, Pointer<Void>), void Function(Pointer<Void>, Pointer<Void>)>('smoke_CalculatorListener_onCalculationResultMap__MapOf_1String_1to_1Double');
    final _calculationResults_handle = library_MapOf_String_to_Double_toFfi(calculationResults);
    final __result_handle = _onCalculationResultMap_ffi(_handle, _calculationResults_handle);
    library_MapOf_String_to_Double_releaseFfiHandle(_calculationResults_handle);
    final _result = (__result_handle);
    (__result_handle);
    return _result;
  }
  @override
  onCalculationResultInstance(CalculationResult calculationResult) {
    final _onCalculationResultInstance_ffi = __lib.nativeLibrary.lookupFunction<Void Function(Pointer<Void>, Pointer<Void>), void Function(Pointer<Void>, Pointer<Void>)>('smoke_CalculatorListener_onCalculationResultInstance__CalculationResult');
    final _calculationResult_handle = smoke_CalculationResult_toFfi(calculationResult);
    final __result_handle = _onCalculationResultInstance_ffi(_handle, _calculationResult_handle);
    smoke_CalculationResult_releaseFfiHandle(_calculationResult_handle);
    final _result = (__result_handle);
    (__result_handle);
    return _result;
  }
}
int _CalculatorListener_onCalculationResult_static(int _token, double calculationResult) {
  _CalculatorListener_instance_cache[_token].onCalculationResult((calculationResult));
  (calculationResult);
  return 0;
}
int _CalculatorListener_onCalculationResultConst_static(int _token, double calculationResult) {
  _CalculatorListener_instance_cache[_token].onCalculationResultConst((calculationResult));
  (calculationResult);
  return 0;
}
int _CalculatorListener_onCalculationResultStruct_static(int _token, Pointer<Void> calculationResult) {
  _CalculatorListener_instance_cache[_token].onCalculationResultStruct(smoke_CalculatorListener_ResultStruct_fromFfi(calculationResult));
  smoke_CalculatorListener_ResultStruct_releaseFfiHandle(calculationResult);
  return 0;
}
int _CalculatorListener_onCalculationResultArray_static(int _token, Pointer<Void> calculationResult) {
  _CalculatorListener_instance_cache[_token].onCalculationResultArray(library_ListOf_Double_fromFfi(calculationResult));
  library_ListOf_Double_releaseFfiHandle(calculationResult);
  return 0;
}
int _CalculatorListener_onCalculationResultMap_static(int _token, Pointer<Void> calculationResults) {
  _CalculatorListener_instance_cache[_token].onCalculationResultMap(library_MapOf_String_to_Double_fromFfi(calculationResults));
  library_MapOf_String_to_Double_releaseFfiHandle(calculationResults);
  return 0;
}
int _CalculatorListener_onCalculationResultInstance_static(int _token, Pointer<Void> calculationResult) {
  _CalculatorListener_instance_cache[_token].onCalculationResultInstance(smoke_CalculationResult_fromFfi(calculationResult));
  smoke_CalculationResult_releaseFfiHandle(calculationResult);
  return 0;
}
Pointer<Void> smoke_CalculatorListener_toFfi(CalculatorListener value) {
  if (value is CalculatorListener__Impl) return _smoke_CalculatorListener_copy_handle(value.handle);
  const UNKNOWN_ERROR = -1;
  final token = _CalculatorListener_instance_counter++;
  _CalculatorListener_instance_cache[token] = value;
  final result = _smoke_CalculatorListener_create_proxy(token, Pointer.fromFunction<Int64 Function(Uint64, Double)>(_CalculatorListener_onCalculationResult_static, UNKNOWN_ERROR), Pointer.fromFunction<Int64 Function(Uint64, Double)>(_CalculatorListener_onCalculationResultConst_static, UNKNOWN_ERROR), Pointer.fromFunction<Int64 Function(Uint64, Pointer<Void>)>(_CalculatorListener_onCalculationResultStruct_static, UNKNOWN_ERROR), Pointer.fromFunction<Int64 Function(Uint64, Pointer<Void>)>(_CalculatorListener_onCalculationResultArray_static, UNKNOWN_ERROR), Pointer.fromFunction<Int64 Function(Uint64, Pointer<Void>)>(_CalculatorListener_onCalculationResultMap_static, UNKNOWN_ERROR), Pointer.fromFunction<Int64 Function(Uint64, Pointer<Void>)>(_CalculatorListener_onCalculationResultInstance_static, UNKNOWN_ERROR));
  _CalculatorListener_reverse_cache[_smoke_CalculatorListener_get_raw_pointer(result)] = value;
  return result;
}
CalculatorListener smoke_CalculatorListener_fromFfi(Pointer<Void> handle) {
  final instance = _CalculatorListener_reverse_cache[_smoke_CalculatorListener_get_raw_pointer(handle)];
  if (instance != null) return instance;
  final _copied_handle = _smoke_CalculatorListener_copy_handle(handle);
  final _type_id_handle = _smoke_CalculatorListener_get_type_id(handle);
  final _type_id = String_fromFfi(_type_id_handle);
  final result = _type_id.isEmpty
    ? CalculatorListener__Impl(_copied_handle)
    : __lib.typeRepository[_type_id](_copied_handle);
  String_releaseFfiHandle(_type_id_handle);
  return result;
}
void smoke_CalculatorListener_releaseFfiHandle(Pointer<Void> handle) =>
  _smoke_CalculatorListener_release_handle(handle);
Pointer<Void> smoke_CalculatorListener_toFfi_nullable(CalculatorListener value) =>
  value != null ? smoke_CalculatorListener_toFfi(value) : Pointer<Void>.fromAddress(0);
CalculatorListener smoke_CalculatorListener_fromFfi_nullable(Pointer<Void> handle) =>
  handle.address != 0 ? smoke_CalculatorListener_fromFfi(handle) : null;
void smoke_CalculatorListener_releaseFfiHandle_nullable(Pointer<Void> handle) =>
  _smoke_CalculatorListener_release_handle(handle);
// End of CalculatorListener "private" section.
