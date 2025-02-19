//-----------------------------------------------------------------------------
//           Name: scriptlogging.h
//      Developer: Wolfire Games LLC
//    Description:
//        License: Read below
//-----------------------------------------------------------------------------
//
//   Copyright 2022 Wolfire Games LLC
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//
//-----------------------------------------------------------------------------
#pragma once

#include <Logging/logdata.h>

#if LOG_LEVEL > 0
#undef LOGF
#define LOGF LogSystem::LogData( LogSystem::fatal,	    "as",__FILE__,__LINE__)
#endif

#if LOG_LEVEL > 1
#undef LOGE
#define LOGE LogSystem::LogData( LogSystem::error,	    "as",__FILE__,__LINE__)
#endif

#if LOG_LEVEL > 2
#undef LOGW
#define LOGW LogSystem::LogData( LogSystem::warning,	"as",__FILE__,__LINE__)
#endif

#if LOG_LEVEL > 3
#undef LOGI
#define LOGI LogSystem::LogData( LogSystem::info,	    "as",__FILE__,__LINE__)
#endif

#if LOG_LEVEL > 4
#undef LOGD
#define LOGD LogSystem::LogData( LogSystem::debug,	    "as",__FILE__,__LINE__)
#endif

#if LOG_LEVEL > 5
#undef LOGS
#define LOGS LogSystem::LogData( LogSystem::spam,	    "as",__FILE__,__LINE__)
#endif
