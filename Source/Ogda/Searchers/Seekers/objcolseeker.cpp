//-----------------------------------------------------------------------------
//           Name: objcolseeker.cpp
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
#include "objcolseeker.h"
#include "Internal/filesystem.h"
#include "Logging/logdata.h"

std::vector<Item> ObjColSeeker::Search(const Item& item ) {
    std::vector<Item> items;
    const std::string full_path = item.GetAbsPath();

    std::string col_full_path = full_path.substr(0,full_path.length()-4) + "_COL.obj";
    if( CheckFileAccess(col_full_path.c_str()) ) {
        items.push_back(Item(item.input_folder, item.GetPath().substr(0,item.path.length()-4) + "_COL.obj", "model_collision", item.source ));
    } else {
        col_full_path = full_path.substr(0,full_path.length()-4) + "_col.obj";
        if( CheckFileAccess(col_full_path.c_str()) )
        {
            items.push_back(Item( item.input_folder, item.GetPath().substr(0,item.path.length()-4) + "_col.obj", "model_collision", item.source ));
        }
    }
    
    return items;
}
