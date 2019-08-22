//                                   _           _    __ _ _        //
//                                  | |         | |  / _(_) |       //
//    __ _  ___ _ __   ___ _ __ __ _| |_ ___  __| | | |_ _| | ___   //
//   / _` |/ _ \ '_ \ / _ \ '__/ _` | __/ _ \/ _` | |  _| | |/ _ \  //
//  | (_| |  __/ | | |  __/ | | (_| | ||  __/ (_| | | | | | |  __/  //
//   \__, |\___|_| |_|\___|_|  \__,_|\__\___|\__,_| |_| |_|_|\___|  //
//    __/ |                                                         //
//   |___/                                                          //
//                                                                  //
// Generated by:  libraries/chain_id/identify_chain.cpp             //
//                                                                  //
// Warning: This is a generated file, any changes made here will be //
// overwritten by the build process.  If you need to change what    //
// is generated here, you should use the CMake variable             //
// GRAPHENE_EGENESIS_JSON to specify an embedded genesis state.     //
//                                                                  //

/*
 * Copyright (c) 2015 Cryptonomex, Inc., and contributors.
 *
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <graphene/chain/protocol/types.hpp>
#include <graphene/egenesis/egenesis.hpp>

namespace graphene { namespace egenesis {

using namespace graphene::chain;

chain_id_type get_egenesis_chain_id()
{
   return chain_id_type( "56f37215a0f68bf8b5ee6e1c5b78b1c6d06bc78e8a69d67a2b1857d1c7a3dde3" );
}

void compute_egenesis_json( std::string& result )
{
   result = "";
}

fc::sha256 get_egenesis_json_hash()
{
   return fc::sha256( "56f37215a0f68bf8b5ee6e1c5b78b1c6d06bc78e8a69d67a2b1857d1c7a3dde3" );
}

} }
