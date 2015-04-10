#include <node.h>
#ifdef USES_JXCORE_ENGINE
#include <jxcore.h>
#endif

JS_LOCAL_METHOD(sumMethod) {
  if (args.Length() < 2 || !args.IsInteger(0) || 
  	!args.IsInteger(1)) {
  	THROW_EXCEPTION("expected arguments (int, int)");
  }

  int sum = args.GetInteger(0) + args.GetInteger(1);
  JS_LOCAL_VALUE sum_val = STD_TO_INTEGER(sum);
  RETURN_PARAM(sum_val);
}
JS_METHOD_END

void init(JS_HANDLE_OBJECT_REF target) {
  JS_METHOD_SET(target, "sum", sumMethod);
}

NODE_MODULE(binding, init);
