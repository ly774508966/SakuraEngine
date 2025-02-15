// Copyright 2020 The Marl Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef marl_export_h
#define marl_export_h

#ifdef MARL_DLL

    #ifdef _MSC_VER
        #if MARL_BUILDING_DLL
        #define MARL_EXPORT __declspec(dllexport)
        #else
        #define MARL_EXPORT __declspec(dllimport)
        #endif
    #else // #ifdef _MSC_VER
        #define MARL_EXPORT __attribute__((visibility("default")))
        #define MARL_NO_EXPORT __attribute__((visibility("hidden")))
    #endif

#else  // #ifdef MARL_DLL

    #if __GNUC__ >= 4
        #define MARL_EXPORT __attribute__((visibility("default")))
        #define MARL_NO_EXPORT __attribute__((visibility("hidden")))
    #endif

#endif

#ifndef MARL_EXPORT
#define MARL_EXPORT
#endif

#ifndef MARL_NO_EXPORT
#define MARL_NO_EXPORT
#endif

#include "SkrRT/config.h"

#endif  // marl_export_h
