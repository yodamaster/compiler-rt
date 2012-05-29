//===-- mini_libc.h ---------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is shared between AddressSanitizer and ThreadSanitizer
// run-time libraries.
// These tools can not use some of the libc functions directly because those
// functions are intercepted. Instead, we implement a tiny subset of libc here.
//
// We also define several basic types here to avoid using system headers
// as the latter complicate portability of this low-level code.
//===----------------------------------------------------------------------===//
#ifndef MINILIBC_H
#define MINILIBC_H

// No code hete yet. Will move more code in the next changes.
namespace __sanitizer {

void MiniLibcStub();

}  // namespace __sanitizer

#endif  // MINILIBC_H