#ifndef MACRO_DEFINED_IN_COMPILER_FLAG
#define MACRO_DEFINED_IN_COMPILER_FLAG 123
#endif

int sillyfunction2() {
  return MACRO_DEFINED_IN_COMPILER_FLAG;
}
