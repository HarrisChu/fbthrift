#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
from abc import ABCMeta
import typing as _typing

from thrift.py3lite.serializer import serialize_iobuf, deserialize
from thrift.py3lite.server import ServiceInterface, oneway

import my.namespacing.test.module.module.lite_types as _my_namespacing_test_module_module_lite_types

class TestServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name():
        return b"TestService"

    def getFunctionTable(self):
        functionTable = {
            b"init": self._fbthrift__handler_init,
        }
        return {**super().getFunctionTable(), **functionTable}



    async def init(
            self,
            int1: int
        ) -> int:
        raise NotImplementedError("async def init is not implemented")

    async def _fbthrift__handler_init(self, args, protocol):
        args_struct = deserialize(_my_namespacing_test_module_module_lite_types._fbthrift_TestService_init_args, args, protocol)
        value = await self.init(args_struct.int1,)
        return_struct = _my_namespacing_test_module_module_lite_types._fbthrift_TestService_init_result(success=value)

        return serialize_iobuf(return_struct, protocol)

