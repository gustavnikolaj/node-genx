/*
Copyright (c) 2011, Wesley Moore http://www.wezm.net/
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

    * Neither the name of the node-genx Project, Wesley Moore, nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written
      permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef GENX_ELEMENT_H
#define GENX_ELEMENT_H

#include <v8.h>
#include <node.h>
extern "C" {
#include "genx.h"
}
#include "node-genx.h"

using namespace v8;
using namespace node;

class Element: ObjectWrap
{
private:
  genxElement element;
public:
  static Persistent<FunctionTemplate> constructor_template;

  static void Initialize(Handle<Object> target);

  Element(genxElement el);

  ~Element();

  genxStatus start();

protected:

  // 
  // Handle<Value> Statement::New(const Arguments& args) {
  //   HandleScope scope;
  //   REQ_EXT_ARG(0, stmt);
  //   int first_rc = args[1]->IntegerValue();
  //   int mode = args[2]->IntegerValue();
  // 
  //   Statement *sto = new Statement((sqlite3_stmt*)stmt->Value(), first_rc, mode);
  //   sto->Wrap(args.This());
  //   sto->Ref();
  // 
  //   return args.This();
  // }


  static Handle<Value> New(const Arguments& args);


};

#endif