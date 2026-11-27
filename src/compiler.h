#ifndef FODD_COMPILER_H
#define FODD_COMPILER_H

#include "vm.h"
#include "object.h"

ObjFunction *compile(const char *source);
void markCompilerRoots();

#endif
