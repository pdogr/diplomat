#ifndef Foo_H
#define Foo_H

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "diplomat_runtime.h"
#include "Bar.d.h"
#include "Bar.h"
#include "BorrowedFields.d.h"
#include "BorrowedFields.h"
#include "BorrowedFieldsReturning.d.h"
#include "BorrowedFieldsReturning.h"

#include "Foo.d.h"

#ifdef __cplusplus
namespace capi {
extern "C" {
#endif // __cplusplus


Foo* Foo_new(const char* x_data, size_t x_len);

Bar* Foo_get_bar(const Foo* self);

Foo* Foo_new_static(const char* x_data, size_t x_len);

BorrowedFieldsReturning Foo_as_returning(const Foo* self);

Foo* Foo_extract_from_fields(BorrowedFields fields);

void Foo_destroy(Foo* self);


#ifdef __cplusplus
} // extern "C"
} // namespace capi
#endif // __cplusplus

#endif // Foo_H
