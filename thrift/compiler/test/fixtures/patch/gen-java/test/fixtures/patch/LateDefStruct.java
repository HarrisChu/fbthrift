/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="LateDefStruct", builder=LateDefStruct.Builder.class)
public final class LateDefStruct implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public LateDefStruct(
    ) {
    }
    
    
    
    public static class Builder {
    
    
    public Builder() { }
        public Builder(LateDefStruct other) {
        }
    
        @ThriftConstructor
        public LateDefStruct build() {
            LateDefStruct result = new LateDefStruct (
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("LateDefStruct");
static {
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/LateDefStruct"), 
        LateDefStruct.class, LateDefStruct::read0));
    }
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        LateDefStruct other = (LateDefStruct)o;
    
        return
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<LateDefStruct> asReader() {
      return LateDefStruct::read0;
    }
    
    public static LateDefStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(LateDefStruct.NAMES_TO_IDS, LateDefStruct.THRIFT_NAMES_TO_IDS, LateDefStruct.FIELD_METADATA);
      LateDefStruct.Builder builder = new LateDefStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _LateDefStructLazy {
        private static final LateDefStruct _DEFAULT = new LateDefStruct.Builder().build();
    }
    
    public static LateDefStruct defaultInstance() {
        return  _LateDefStructLazy._DEFAULT;
    }
}
